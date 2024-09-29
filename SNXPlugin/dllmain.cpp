// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "SDK.hpp"
#include "Signature.h"
#include "ModPatch.h"
#include "Util.h"
#include "Config.h"

#include <windows.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <format>

static bool IsLoaded = false;
static HMODULE MainHModule = nullptr;
static bool MergeReady = false;

FORCEINLINE uint64_t GetAddressFromFuncCall(uint64_t a1)
{
    int opd = *(int*)(a1 + 1);
    return (a1 + opd + 5);
}

#pragma region Signatures

void* SIG_UObject_ProcessEvent = sigScan(
    "\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\xF0\x00\x00\x00",
    "xxxxxxxxxxxxxxxxxxx");

void* SIG_UDataTable_AddRow = sigScan(
    "\x48\x89\x5C\x24\x2A\x48\x89\x6C\x24\x2A\x56\x57\x41\x56\x48\x83\xEC\x20\x48\x8B\xDA",
    "xxxx?xxxx?xxxxxxxxxxx");

void* Sig_UUITitleLogo_InitializeThis = sigScan(
    "\x48\x89\x5C\x24\x2A\x48\x89\x74\x24\x2A\x48\x89\x7C\x24\x2A\x4C\x89\x64\x24\x2A\x55\x41\x56\x41\x57\x48\x8B\xEC\x48\x83\xEC\x50\x48\x8B\x45\x2A",
    "xxxx?xxxx?xxxx?xxxx?xxxxxxxxxxxxxxx?");

void* Sig_ARSHUDBase_OpenSystemMessage = sigScan(
    "\x48\x89\x5C\x24\x2A\x48\x89\x6C\x24\x2A\x48\x89\x74\x24\x2A\x57\x48\x83\xEC\x30\x48\x8B\xF9\x41\x0F\xB6\xE9",
    "xxxx?xxxx?xxxx?xxxxxxxxxxxx");

void* Sig_ARSHUDBase_CloseSystemMessage_Call = sigScan(
    "\xE8\x2A\x2A\x2A\x2A\x41\xC6\x86\x2A\x2A\x2A\x2A\x15",
    "x????xxx????x");

void* Sig_StartingLoadup = sigScan(
    "\x40\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\x2A\x48\x81\xEC\xE0\x00\x00\x00",
    "xxxxxxxxxx?xxxxxxx");

void* Sig_UUISaveLoad_Start = sigScan(
    "\x48\x89\x5C\x24\x2A\x48\x89\x6C\x24\x2A\x48\x89\x74\x24\x2A\x57\x48\x83\xEC\x20\x0F\xB6\xEA\x41\x0F\xB6\xD8",
    "xxxx?xxxx?xxxx?xxxxxxxxxxxx");

void* Sig_URSSaveGame_Load = sigScan(
    "\x48\x89\x5C\x24\x2A\x55\x56\x57\x48\x83\xEC\x20\x4C\x8B\x41\x2A\x8B\xEA\x48\x8B\xF1\x4D\x85\xC0\x0F\x84\x2A\x2A\x2A\x2A\x41\x8B\x40\x2A\x33\xDB\x3B\x05\x2A\x2A\x2A\x2A\x7D\x2A\x99\x0F\xB7\xD2\x03\xC2\x8B\xC8\x0F\xB7\xC0\x2B\xC2\x48\x98\xC1\xF9\x10\x48\x63\xC9\x48\x8D\x14\x2A\x48\x8B\x05\x2A\x2A\x2A\x2A\x48\x8B\x0C\x2A\x48\x8D\x04\x2A\xEB\x2A\x48\x8B\xC3\x8B\x40\x2A\xC1\xE8\x1D\xA8\x01\x0F\x85\x2A\x2A\x2A\x2A\x49\x8B\xC8\xE8\x2A\x2A\x2A\x2A\x48\x8B\xF8\x48\x85\xC0\x0F\x84\x2A\x2A\x2A\x2A",
    "xxxx?xxxxxxxxxx?xxxxxxxxxx????xxx?xxxx????x?xxxxxxxxxxxxxxxxxxxxxxxx?xxx????xxx?xxx?x?xxxxx?xxxxxxx????xxxx????xxxxxxxx????");

void* Sig_ProcessInternal = sigScan(
    "\x48\x89\x5C\x24\x2A\x48\x89\x6C\x24\x2A\x48\x89\x74\x24\x2A\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x4C\x8B\x72\x2A",
    "xxxx?xxxx?xxxx?xxxxxxxxxxxx?");

#pragma endregion


#pragma region FunctionPtrs

FUNCTION_PTR(void, __fastcall, UDataTable_AddRow, SIG_UDataTable_AddRow, SDK::UDataTable* _this, SDK::FName RowName, SDK::FTableRowBase* RowData);

#pragma endregion


void WriteToLog(std::string logFile, std::string text)
{
    std::ofstream log_file(logFile, std::ios_base::out | std::ios_base::app);
    log_file << text;// << std::endl;
}

void UnlockConsole() {
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    /* Getting the PlayerController, World, OwningGameInstance, ... should all be checked not to be nullptr! */
    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    /* Print the full-name of an object ("ClassName PackageName.OptionalOuter.ObjectName") */
    //printf("[DebugLog] %s \n", Engine->ConsoleClass->GetFullName().c_str());

    /*
    * Changes the keyboard-key that's used to open the UE console
    *
    * This is a rare case of a DefaultObjects' member-variables being changed.
    * By default you do not want to use the DefaultObject, this is a rare exception.
    */
    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");

    /* Creates a new UObject of class-type specified by Engine->ConsoleClass */
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);

    /* The Object we created is a subclass of UConsole, so this cast is **safe**. */
    Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
}

void DumpGObjects() 
{
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

        WriteToLog("Plugins//GObjectArray.txt", Obj->GetFullName());
        WriteToLog("Plugins//GObjectArray.txt", "\n");
    }
}

void MergeDataTables()
{
    //printf("GObjects: %p\n", GObject);
    if (!SIG_UDataTable_AddRow) {
        printf("[SNXPlugin] [Error] Could not find sig for UDataTable::AddRow");
        return;
    }
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    if (ModPatch::DT_ItemData.size() > 0)
    {
        SDK::UDataTable* DT_ItemData = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_ItemData.DT_ItemData"));
        SDK::URSGameInstance* RSGameInstance = SDK::URSUtilityLibrary::GetRSGameInstance(World);
        SDK::UDatabaseManager* DataBaseManager = RSGameInstance->GetDatabaseManager();
        SDK::UItemData* ItemData = DataBaseManager->GetItemData();

        for (auto& entry : ModPatch::DT_ItemData)
        {
            SDK::FName itemID = FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add);
            UDataTable_AddRow(DT_ItemData, itemID, (SDK::FTableRowBase*)(&entry.second));

            if (!ItemData->ItemIDs.Add(itemID)) {
                //TArray_ResizeTo(&ItemData->ItemIDs, ItemData->ItemIDs.Max() + 50);
                TArrayHelper::ResizeTArray(&ItemData->ItemIDs, ItemData->ItemIDs.Max() + 50);
                ItemData->ItemIDs.Add(itemID);
            }

            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_ItemData->GetName().c_str());
        }

    }

    if (ModPatch::DT_ItemName.size() > 0)
    {
        SDK::UDataTable* DT_ItemName = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_ItemName.DT_ItemName"));
        for (auto& entry : ModPatch::DT_ItemName)
        {
            UDataTable_AddRow(DT_ItemName, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_ItemName->GetName().c_str());
        }
    }

    if (ModPatch::DT_ItemDescription.size() > 0) {
        SDK::UDataTable* DT_ItemDescription = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_ItemDescription.DT_ItemDescription"));
        for (auto& entry : ModPatch::DT_ItemDescription)
        {
            UDataTable_AddRow(DT_ItemDescription, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_ItemDescription->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0100.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0100 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0100.DT_Costume_ch0100"));
        for (auto& entry : ModPatch::DT_Costume_ch0100)
        {
            UDataTable_AddRow(DT_Costume_ch0100, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0100->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0200.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0200 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0200.DT_Costume_ch0200"));
        for (auto& entry : ModPatch::DT_Costume_ch0200)
        {
            UDataTable_AddRow(DT_Costume_ch0200, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0200->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0300.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0300 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0300.DT_Costume_ch0300"));
        for (auto& entry : ModPatch::DT_Costume_ch0300)
        {
            UDataTable_AddRow(DT_Costume_ch0300, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0300->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0400.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0400 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0400.DT_Costume_ch0400"));
        for (auto& entry : ModPatch::DT_Costume_ch0400)
        {
            UDataTable_AddRow(DT_Costume_ch0400, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0400->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0500.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0500 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0500.DT_Costume_ch0500"));
        for (auto& entry : ModPatch::DT_Costume_ch0500)
        {
            UDataTable_AddRow(DT_Costume_ch0500, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0500->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0600.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0600 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0600.DT_Costume_ch0600"));
        for (auto& entry : ModPatch::DT_Costume_ch0600)
        {
            UDataTable_AddRow(DT_Costume_ch0600, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0600->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0700.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0700 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0700.DT_Costume_ch0700"));
        for (auto& entry : ModPatch::DT_Costume_ch0700)
        {
            UDataTable_AddRow(DT_Costume_ch0700, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0700->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0800.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0800 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0800.DT_Costume_ch0800"));
        for (auto& entry : ModPatch::DT_Costume_ch0800)
        {
            UDataTable_AddRow(DT_Costume_ch0800, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0800->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch0900.size() > 0) {
        SDK::UDataTable* DT_Costume_ch0900 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch0900.DT_Costume_ch0900"));
        for (auto& entry : ModPatch::DT_Costume_ch0900)
        {
            UDataTable_AddRow(DT_Costume_ch0900, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch0900->GetName().c_str());
        }
    }

    if (ModPatch::DT_Costume_ch1000.size() > 0) {
        SDK::UDataTable* DT_Costume_ch1000 = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_Costume_ch1000.DT_Costume_ch1000"));
        for (auto& entry : ModPatch::DT_Costume_ch1000)
        {
            UDataTable_AddRow(DT_Costume_ch1000, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_Costume_ch1000->GetName().c_str());
        }
    }
    
    MergeReady = false;
}

void AddToAddonContent() {

    if (ModPatch::AddContentDataTable.size() > 0)
    {
        SDK::UDataTable* AddContentDataTable = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable AddContentDataTable.AddContentDataTable"));
        for (auto& entry : ModPatch::AddContentDataTable)
        {
            UDataTable_AddRow(AddContentDataTable, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), AddContentDataTable->GetName().c_str());
        }
    }

    if (ModPatch::DT_AddContentsPresentList.size() > 0)
    {
        SDK::UDataTable* DT_AddContentsPresentList = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_AddContentsPresentList.DT_AddContentsPresentList"));
        for (auto& entry : ModPatch::DT_AddContentsPresentList)
        {
            UDataTable_AddRow(DT_AddContentsPresentList, FNameHelper::FNameFromString(entry.first, SDK::FNAME_Add), (SDK::FTableRowBase*)(&entry.second));
            printf("[SNXPlugin] [DT Merger] Added entry %s to DataTable \"%s\"\n", entry.first.c_str(), DT_AddContentsPresentList->GetName().c_str());

        }
    }
}

void AddContentBypass(SDK::UUISaveLoad* SaveUI) {
    //printf("SaveLoad: %s\n", SaveUI->M_pSaveLoadScreenParamManager->GetFullName().c_str());
    for (auto& ParamList : SaveUI->M_pSaveLoadScreenParamManager->M_saveLoadScreenParamList)
    {
        ParamList.AppliedAddContentsNameList.Clear();
    }

    for (auto& ParamList : SaveUI->M_pAutoSaveLoadScreenParamManager->M_saveLoadScreenParamList)
    {
        ParamList.AppliedAddContentsNameList.Clear();
    }
}

void AddContentClean(SDK::URSSaveGame* SaveGame) 
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    SDK::URSGameInstance* GameInst = SDK::URSUtilityLibrary::GetRSGameInstance(World);
    SDK::UUserParamManager* ParamManager = GameInst->GetUserParamManager();

    int i = 0;
    for (auto& Name : ParamManager->M_AppliedAddContentsNameList)
    {
        if (Name.ToString().contains("_MOD") && std::find(ModPatch::AddContentsNameList.begin(), ModPatch::AddContentsNameList.end(), Name.ToString()) == ModPatch::AddContentsNameList.end())
        {
            ParamManager->M_AppliedAddContentsNameList.Remove(i);
            printf("[SNXPlugin] [AddContentCleaner] Removed %s from save's applied content list\n", Name.ToString().c_str());
        }
        i++;
    }

}

DWORD MainThread(HMODULE Module)
{
    Config::init();

    /* Code to open a console window */
    if (!GetConsoleWindow() && Config::DebugConsole) {
        AllocConsole();
        AttachConsole(GetCurrentProcessId());
        freopen("CON", "w", stdout);
    }
    //Sleep(10000);

    if (Config::GameConsole) {
        UnlockConsole();
    }

    IsLoaded = ModPatch::init();

    SDK::UDataTable* DT_60_Title = static_cast<SDK::UDataTable*>(SDK::UObject::FindObject("DataTable DT_60_Title.DT_60_Title"));
    UDataTable_AddRow(DT_60_Title, FNameHelper::FNameFromString("chekDLC_txt_Day1", SDK::FNAME_Add), (SDK::FTableRowBase*)(&ModPatch::MergeMessage));
    UDataTable_AddRow(DT_60_Title, FNameHelper::FNameFromString("chekDLC_txt_xb_Day1", SDK::FNAME_Add), (SDK::FTableRowBase*)(&ModPatch::MergeMessage));

    return 0;
}

void SecondaryThread(SDK::UUISaveLoad* SaveUI)
{
    Sleep(1000);
    AddContentBypass(SaveUI);
    return;
}

void ThirdThread(SDK::URSSaveGame* SaveGame)
{
    Sleep(10000);
    AddContentClean(SaveGame);
    return;
}

#pragma region Hooks

HOOK(void, __stdcall, Hook_ARSHUDBase_OpenSystemMessage, Sig_ARSHUDBase_OpenSystemMessage, SDK::ARSHUDBase* _this, SDK::FString* SystemMessage, bool IsWarning, bool IsGuide, bool IsFade)
{
    //printf("SystemMessage%s%s: %s\n", IsWarning ? " [WARNING]" : "", IsGuide ? " [Guide]" : "", SystemMessage->ToString().c_str());
    if (strcmp(SystemMessage->ToString().c_str(), "Checking add-on data.") == 0 || strcmp(SystemMessage->ToString().c_str(), "<AUTO_WRAP>Merging DataTables and<BR>checking add-on data.") == 0) {
        if (IsLoaded)
        {
            MergeReady = true;
        }
    }
    return orig_Hook_ARSHUDBase_OpenSystemMessage(_this, SystemMessage, IsWarning, IsGuide, IsFade);
}

HOOK(void, __stdcall, Hook_ARSHUDBase_CloseSystemMessage, GetAddressFromFuncCall((uint64_t)Sig_ARSHUDBase_CloseSystemMessage_Call), SDK::ARSHUDBase* _this)
{
    //printf("SystemMessage Closed\n");

    if (MergeReady)
    {
        MergeDataTables();
        AddToAddonContent();
    }

    return orig_Hook_ARSHUDBase_CloseSystemMessage(_this);
}

HOOK(void, __stdcall, Hook_UUITitleLogo_InitializeThis, Sig_UUITitleLogo_InitializeThis, SDK::UUITitleLogo* _this, SDK::UWidgetAnimation* AnimIn, SDK::UWidgetAnimation* AnimOut, SDK::UWidgetAnimation* AnimDefault, SDK::UImage* ImageLogo) {

    orig_Hook_UUITitleLogo_InitializeThis(_this, AnimIn, AnimOut, AnimDefault, ImageLogo);
    IsLoaded = true;
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, MainHModule, 0, 0);
    return;
}

HOOK(void, __stdcall, Hook_UUISaveLoad_Start, Sig_UUISaveLoad_Start, SDK::UUISaveLoad* _this,  SDK::ESaveLoad ModeType, SDK::ESaveLoadSubType SubModeType)
{
    //printf("SaveLoad::Start Triggered\n");
    orig_Hook_UUISaveLoad_Start(_this, ModeType, SubModeType);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)SecondaryThread, _this, 0, 0);
    return;
}

HOOK(void, _stdcall, hook_URSSaveGame_Load, Sig_URSSaveGame_Load, SDK::URSSaveGame* _this, int SlotNo)
{
    //printf("URSSaveGame::Load Triggered\n");
    orig_hook_URSSaveGame_Load(_this, SlotNo);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ThirdThread, _this, 0, 0);
    return;
}

HOOK(void, __stdcall, Hook_UObject_ProcessEvent, SIG_UObject_ProcessEvent, SDK::UObject* _this, SDK::UFunction* Function, void* params)
{
    /*
    if (MainHModule) {
        //CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, MainHModule, 0, 0);
        WRITE_MEMORY(SIG_UObject_ProcessEvent, uint8_t, 0x40, 0x55, 0x56, 0x57, 0x41, 0x54);
        printf("MainThread hook uninstalled\n");
    }
    else {
        printf("HModule was null\n");
    }
    */

    //printf("[SNXPlugin] ProcessEvent: %s, %p\n", Function->GetName().c_str(), Function->ExecFunction);

    std::stringstream log = std::stringstream("[SNXPlugin] ProcessEvent: ");
    log << Function->GetFullName() << ", " << Function->ExecFunction << "\n";
    WriteToLog("ProcessEvent.log", log.str());

    return orig_Hook_UObject_ProcessEvent(_this, Function, params);
}

HOOK(void, __stdcall, Hook_UObject_ProcessInternal, Sig_ProcessInternal, SDK::UObject* _this, SDK::FFrame* Frame, void* Result)
{
    std::stringstream log = std::stringstream("[SNXPlugin] ProcessEvent: ");
    log << Frame->Node->GetFullName() << "\n";
    WriteToLog("ProcessInternal.log", log.str());

    return orig_Hook_UObject_ProcessInternal(_this, Frame, Result);
}

#pragma endregion

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        //CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        MainHModule = hModule;
        INSTALL_HOOK(Hook_UUITitleLogo_InitializeThis);
        INSTALL_HOOK(Hook_ARSHUDBase_OpenSystemMessage);
        INSTALL_HOOK(Hook_ARSHUDBase_CloseSystemMessage);
        INSTALL_HOOK(Hook_UUISaveLoad_Start);
        INSTALL_HOOK(hook_URSSaveGame_Load);
        //INSTALL_HOOK(Hook_UObject_ProcessEvent);
        //INSTALL_HOOK(Hook_UObject_ProcessInternal);
        return TRUE;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


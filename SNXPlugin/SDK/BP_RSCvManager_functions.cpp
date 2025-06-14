#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RSCvManager

#include "Basic.hpp"

#include "BP_RSCvManager_classes.hpp"
#include "BP_RSCvManager_parameters.hpp"


namespace SDK
{

// Function BP_RSCvManager.BP_RSCvManager_C.ExecuteUbergraph_BP_RSCvManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RSCvManager_C::ExecuteUbergraph_BP_RSCvManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "ExecuteUbergraph_BP_RSCvManager");

	Params::BP_RSCvManager_C_ExecuteUbergraph_BP_RSCvManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnChangeScenarioFlag
// (BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnChangeScenarioFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnChangeScenarioFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnEndBondsEpisode
// (BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnEndBondsEpisode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnEndBondsEpisode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnStartBondsEpisode
// (BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnStartBondsEpisode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnStartBondsEpisode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.SetMVarPlayingEventType
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::SetMVarPlayingEventType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "SetMVarPlayingEventType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnChangeEventStat
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnChangeEventStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnChangeEventStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnAreaLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EChangeAreaStatus                       Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChangeLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RSCvManager_C::OnAreaLoad(EChangeAreaStatus Status, bool IsChangeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnAreaLoad");

	Params::BP_RSCvManager_C_OnAreaLoad Parms{};

	Parms.Status = Status;
	Parms.IsChangeLocation = IsChangeLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnStartTitle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnStartTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnStartTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnChangerProgress
// (BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnChangerProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnChangerProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.OnChangeVoiceLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::OnChangeVoiceLanguage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "OnChangeVoiceLanguage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.Finalize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::Finalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "Finalize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RSCvManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "ReceiveTick");

	Params::BP_RSCvManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSCvManager.BP_RSCvManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_RSCvManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.GetChapterStringFromProgressId
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ProgressId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_RSCvManager_C::GetChapterStringFromProgressId(int32 ProgressId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "GetChapterStringFromProgressId");

	Params::BP_RSCvManager_C_GetChapterStringFromProgressId Parms{};

	Parms.ProgressId = ProgressId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadCmnCueSheets
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadCmnCueSheets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadCmnCueSheets");

	Params::BP_RSCvManager_C_LoadCmnCueSheets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadSenarioCueSheet
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadSenarioCueSheet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadSenarioCueSheet");

	Params::BP_RSCvManager_C_LoadSenarioCueSheet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadCueSheet
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCueSheet*               CueSheet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadCueSheet(class USoundAtomCueSheet* CueSheet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadCueSheet");

	Params::BP_RSCvManager_C_LoadCueSheet Parms{};

	Parms.CueSheet = CueSheet;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheet
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCueSheet*               CueSheet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::UnLoadCueSheet(class USoundAtomCueSheet* CueSheet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "UnLoadCueSheet");

	Params::BP_RSCvManager_C_UnLoadCueSheet Parms{};

	Parms.CueSheet = CueSheet;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadCueSheetFromDtRef
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadCueSheetFromDtRef(const class FString& RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadCueSheetFromDtRef");

	Params::BP_RSCvManager_C_LoadCueSheetFromDtRef Parms{};

	Parms.RowName = std::move(RowName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheetFromDtRef
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::UnLoadCueSheetFromDtRef(const class FString& RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "UnLoadCueSheetFromDtRef");

	Params::BP_RSCvManager_C_UnLoadCueSheetFromDtRef Parms{};

	Parms.RowName = std::move(RowName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.UnLoadCueSheetAll
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::UnLoadCueSheetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "UnLoadCueSheetAll");

	Params::BP_RSCvManager_C_UnLoadCueSheetAll Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.dbg_print
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::Dbg_print()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "dbg_print");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadDLCCmnCueSheets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadDLCCmnCueSheets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadDLCCmnCueSheets");

	Params::BP_RSCvManager_C_LoadDLCCmnCueSheets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadDLCSenarioCueSheet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadDLCSenarioCueSheet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadDLCSenarioCueSheet");

	Params::BP_RSCvManager_C_LoadDLCSenarioCueSheet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.LoadDLCCUeSuheetFromDtRef
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::LoadDLCCUeSuheetFromDtRef(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "LoadDLCCUeSuheetFromDtRef");

	Params::BP_RSCvManager_C_LoadDLCCUeSuheetFromDtRef Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.UnLoadDLCCUeSuheetFromDtRef
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::UnLoadDLCCUeSuheetFromDtRef(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "UnLoadDLCCUeSuheetFromDtRef");

	Params::BP_RSCvManager_C_UnLoadDLCCUeSuheetFromDtRef Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.Un Load DLCCue Sheet All
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_RSCvManager_C::Un_Load_DLCCue_Sheet_All()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "Un Load DLCCue Sheet All");

	Params::BP_RSCvManager_C_Un_Load_DLCCue_Sheet_All Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RSCvManager.BP_RSCvManager_C.SetUpDLC_CueSheetList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RSCvManager_C::SetUpDLC_CueSheetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSCvManager_C", "SetUpDLC_CueSheetList");

	UObject::ProcessEvent(Func, nullptr);
}

}


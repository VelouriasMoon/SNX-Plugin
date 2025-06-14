#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Present

#include "Basic.hpp"

#include "WB_ui_Present_classes.hpp"
#include "WB_ui_Present_parameters.hpp"


namespace SDK
{

// Function WB_ui_Present.WB_ui_Present_C.ExecuteUbergraph_WB_ui_Present
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::ExecuteUbergraph_WB_ui_Present(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "ExecuteUbergraph_WB_ui_Present");

	Params::WB_ui_Present_C_ExecuteUbergraph_WB_ui_Present Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Present_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_MouseDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Cursor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_MouseDown(int32 Param_Cursor, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_MouseDown");

	Params::WB_ui_Present_C_Event_MouseDown Parms{};

	Parms.Param_Cursor = Param_Cursor;
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_MouseUnFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IsMouseScroll                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Cursor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_MouseUnFocus(int32 IsMouseScroll, int32 Param_Cursor, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_MouseUnFocus");

	Params::WB_ui_Present_C_Event_MouseUnFocus Parms{};

	Parms.IsMouseScroll = IsMouseScroll;
	Parms.Param_Cursor = Param_Cursor;
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_MouseFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IsMouseScroll                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Cursor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_MouseFocus(int32 IsMouseScroll, int32 Param_Cursor, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_MouseFocus");

	Params::WB_ui_Present_C_Event_MouseFocus Parms{};

	Parms.IsMouseScroll = IsMouseScroll;
	Parms.Param_Cursor = Param_Cursor;
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_List_UnFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_List_UnFocus(class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_List_UnFocus");

	Params::WB_ui_Present_C_Event_List_UnFocus Parms{};

	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_List_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_List_Focus(class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_List_Focus");

	Params::WB_ui_Present_C_Event_List_Focus Parms{};

	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Event_List_UpdateElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::Event_List_UpdateElement(int32 Param_Index, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Event_List_UpdateElement");

	Params::WB_ui_Present_C_Event_List_UpdateElement Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "UpdateState");

	Params::WB_ui_Present_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Present_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_Present_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "PreConstruct");

	Params::WB_ui_Present_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.StateNone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::StateNone(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "StateNone");

	Params::WB_ui_Present_C_StateNone Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.StateOpen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::StateOpen(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "StateOpen");

	Params::WB_ui_Present_C_StateOpen Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.StateLoop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::StateLoop(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "StateLoop");

	Params::WB_ui_Present_C_StateLoop Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.StateClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::StateClose(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "StateClose");

	Params::WB_ui_Present_C_StateClose Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.SetTargetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerID                               TargetID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::SetTargetCharacter(EPlayerID TargetID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "SetTargetCharacter");

	Params::WB_ui_Present_C_SetTargetCharacter Parms{};

	Parms.TargetID = TargetID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present.WB_ui_Present_C.UpdateTargetCharacter
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::UpdateTargetCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "UpdateTargetCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.CreateList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::CreateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "CreateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.IsSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    SelectFlag                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_Present_C::IsSelect(bool* SelectFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "IsSelect");

	Params::WB_ui_Present_C_IsSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectFlag != nullptr)
		*SelectFlag = Parms.SelectFlag;
}


// Function WB_ui_Present.WB_ui_Present_C.getResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresentItem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::GetResult(class FName* PresentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "getResult");

	Params::WB_ui_Present_C_GetResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PresentItem != nullptr)
		*PresentItem = Parms.PresentItem;
}


// Function WB_ui_Present.WB_ui_Present_C.UpdateCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::UpdateCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "UpdateCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.UpdateItemInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::UpdateItemInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "UpdateItemInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.SetDefaultInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::SetDefaultInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "SetDefaultInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.SetupInfoWindow
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_C::SetupInfoWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "SetupInfoWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present.WB_ui_Present_C.CheckAccessoryExtend
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_C::CheckAccessoryExtend(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_C", "CheckAccessoryExtend");

	Params::WB_ui_Present_C_CheckAccessoryExtend Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}


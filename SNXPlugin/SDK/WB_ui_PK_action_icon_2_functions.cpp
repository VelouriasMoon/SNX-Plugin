#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_PK_action_icon_2

#include "Basic.hpp"

#include "WB_ui_PK_action_icon_2_classes.hpp"
#include "WB_ui_PK_action_icon_2_parameters.hpp"


namespace SDK
{

// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.ExecuteUbergraph_WB_ui_PK_action_icon_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_PK_action_icon_2_C::ExecuteUbergraph_WB_ui_PK_action_icon_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "ExecuteUbergraph_WB_ui_PK_action_icon_2");

	Params::WB_ui_PK_action_icon_2_C_ExecuteUbergraph_WB_ui_PK_action_icon_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_PK_action_icon_2_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_PK_action_icon_2_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "UpdateState");

	Params::WB_ui_PK_action_icon_2_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_PK_action_icon_2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.StateNone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_PK_action_icon_2_C::StateNone(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "StateNone");

	Params::WB_ui_PK_action_icon_2_C_StateNone Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.StateDecision
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_PK_action_icon_2_C::StateDecision(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "StateDecision");

	Params::WB_ui_PK_action_icon_2_C_StateDecision Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_PK_action_icon_2.WB_ui_PK_action_icon_2_C.StartDecision
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ui_PK_action_icon_2_C::StartDecision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_PK_action_icon_2_C", "StartDecision");

	UObject::ProcessEvent(Func, nullptr);
}

}


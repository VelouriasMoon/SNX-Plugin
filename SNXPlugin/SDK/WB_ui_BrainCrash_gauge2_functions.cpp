#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_BrainCrash_gauge2

#include "Basic.hpp"

#include "WB_ui_BrainCrash_gauge2_classes.hpp"
#include "WB_ui_BrainCrash_gauge2_parameters.hpp"


namespace SDK
{

// Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.ExecuteUbergraph_WB_ui_BrainCrash_gauge2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_BrainCrash_gauge2_C::ExecuteUbergraph_WB_ui_BrainCrash_gauge2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainCrash_gauge2_C", "ExecuteUbergraph_WB_ui_BrainCrash_gauge2");

	Params::WB_ui_BrainCrash_gauge2_C_ExecuteUbergraph_WB_ui_BrainCrash_gauge2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.WidgetAnimationEvt_full_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWB_ui_BrainCrash_gauge2_C::WidgetAnimationEvt_full_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainCrash_gauge2_C", "WidgetAnimationEvt_full_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.WidgetAnimationEvt_decision_2_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWB_ui_BrainCrash_gauge2_C::WidgetAnimationEvt_decision_2_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainCrash_gauge2_C", "WidgetAnimationEvt_decision_2_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_BrainCrash_gauge2_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainCrash_gauge2_C", "UpdateState");

	Params::WB_ui_BrainCrash_gauge2_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_BrainCrash_gauge2.WB_ui_BrainCrash_gauge2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_BrainCrash_gauge2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainCrash_gauge2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


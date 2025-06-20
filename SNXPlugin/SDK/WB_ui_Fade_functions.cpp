#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Fade

#include "Basic.hpp"

#include "WB_ui_Fade_classes.hpp"
#include "WB_ui_Fade_parameters.hpp"


namespace SDK
{

// Function WB_ui_Fade.WB_ui_Fade_C.ExecuteUbergraph_WB_ui_Fade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Fade_C::ExecuteUbergraph_WB_ui_Fade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Fade_C", "ExecuteUbergraph_WB_ui_Fade");

	Params::WB_ui_Fade_C_ExecuteUbergraph_WB_ui_Fade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Fade.WB_ui_Fade_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Fade_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Fade_C", "UpdateState");

	Params::WB_ui_Fade_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Fade.WB_ui_Fade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Fade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Fade_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


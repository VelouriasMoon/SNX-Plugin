#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Present_next

#include "Basic.hpp"

#include "WB_ui_Present_next_classes.hpp"
#include "WB_ui_Present_next_parameters.hpp"


namespace SDK
{

// Function WB_ui_Present_next.WB_ui_Present_next_C.ExecuteUbergraph_WB_ui_Present_next
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::ExecuteUbergraph_WB_ui_Present_next(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "ExecuteUbergraph_WB_ui_Present_next");

	Params::WB_ui_Present_next_C_ExecuteUbergraph_WB_ui_Present_next Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "UpdateState");

	Params::WB_ui_Present_next_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Present_next_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.StateNone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::StateNone(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "StateNone");

	Params::WB_ui_Present_next_C_StateNone Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.StateOpen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::StateOpen(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "StateOpen");

	Params::WB_ui_Present_next_C_StateOpen Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.StateLoop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::StateLoop(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "StateLoop");

	Params::WB_ui_Present_next_C_StateLoop Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.StateClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Present_next_C::StateClose(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "StateClose");

	Params::WB_ui_Present_next_C_StateClose Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Present_next.WB_ui_Present_next_C.LoadTexture
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_Present_next_C::LoadTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Present_next_C", "LoadTexture");

	UObject::ProcessEvent(Func, nullptr);
}

}


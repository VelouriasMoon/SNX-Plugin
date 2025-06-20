#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateAfterEvent

#include "Basic.hpp"

#include "BP_PlayerActionStateAfterEvent_classes.hpp"
#include "BP_PlayerActionStateAfterEvent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Enter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Param                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_PlayerActionStateAfterEvent_C::Enter(int32 Param_Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerActionStateAfterEvent_C", "Enter");

	Params::BP_PlayerActionStateAfterEvent_C_Enter Parms{};

	Parms.Param_Param = Param_Param;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Exit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextStateIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_PlayerActionStateAfterEvent_C::Exit(int32 NextStateIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerActionStateAfterEvent_C", "Exit");

	Params::BP_PlayerActionStateAfterEvent_C_Exit Parms{};

	Parms.NextStateIndex = NextStateIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerActionStateAfterEvent.BP_PlayerActionStateAfterEvent_C.Update
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_PlayerActionStateAfterEvent_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerActionStateAfterEvent_C", "Update");

	Params::BP_PlayerActionStateAfterEvent_C_Update Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_PsychicObjectManagerFunctionLibrary

#include "Basic.hpp"

#include "BPFL_PsychicObjectManagerFunctionLibrary_classes.hpp"
#include "BPFL_PsychicObjectManagerFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BPFL_PsychicObjectManagerFunctionLibrary.BPFL_PsychicObjectManagerFunctionLibrary_C.GetPsychicObjectManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APsychicObjectManager_C*          PsyObjManager                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_PsychicObjectManagerFunctionLibrary_C::GetPsychicObjectManager(class UObject* __WorldContext, class APsychicObjectManager_C** PsyObjManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_PsychicObjectManagerFunctionLibrary_C", "GetPsychicObjectManager");

	Params::BPFL_PsychicObjectManagerFunctionLibrary_C_GetPsychicObjectManager Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PsyObjManager != nullptr)
		*PsyObjManager = Parms.PsyObjManager;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_RadialBlurManagerFunctionLibrary

#include "Basic.hpp"

#include "BPFL_RadialBlurManagerFunctionLibrary_classes.hpp"
#include "BPFL_RadialBlurManagerFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BPFL_RadialBlurManagerFunctionLibrary.BPFL_RadialBlurManagerFunctionLibrary_C.GetRadialBlurManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlurManager_C*          RadialBlurManager                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_RadialBlurManagerFunctionLibrary_C::GetRadialBlurManager(class UObject* __WorldContext, class ABP_RadialBlurManager_C** RadialBlurManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_RadialBlurManagerFunctionLibrary_C", "GetRadialBlurManager");

	Params::BPFL_RadialBlurManagerFunctionLibrary_C_GetRadialBlurManager Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RadialBlurManager != nullptr)
		*RadialBlurManager = Parms.RadialBlurManager;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponBase_ch0300

#include "Basic.hpp"

#include "BP_WeaponBase_ch0300_classes.hpp"
#include "BP_WeaponBase_ch0300_parameters.hpp"


namespace SDK
{

// Function BP_WeaponBase_ch0300.BP_WeaponBase_ch0300_C.GetAttachTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABP_WeaponBase_ch0300_C::GetAttachTransform(struct FTransform* Transform) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponBase_ch0300_C", "GetAttachTransform");

	Params::BP_WeaponBase_ch0300_C_GetAttachTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

}


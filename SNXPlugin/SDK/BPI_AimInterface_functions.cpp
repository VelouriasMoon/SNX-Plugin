#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AimInterface

#include "Basic.hpp"

#include "BPI_AimInterface_classes.hpp"
#include "BPI_AimInterface_parameters.hpp"


namespace SDK
{

// Function BPI_AimInterface.BPI_AimInterface_C.StartAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LimitAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDummy                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AimInterface_C::StartAim(float LimitAngle, bool* bDummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AimInterface_C", "StartAim");

	Params::BPI_AimInterface_C_StartAim Parms{};

	Parms.LimitAngle = LimitAngle;

	UObject::ProcessEvent(Func, &Parms);

	if (bDummy != nullptr)
		*bDummy = Parms.bDummy;
}


// Function BPI_AimInterface.BPI_AimInterface_C.EndAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDummy                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AimInterface_C::EndAim(bool* bDummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AimInterface_C", "EndAim");

	Params::BPI_AimInterface_C_EndAim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDummy != nullptr)
		*bDummy = Parms.bDummy;
}

}


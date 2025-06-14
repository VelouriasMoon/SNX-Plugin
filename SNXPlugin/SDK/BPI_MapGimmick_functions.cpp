#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapGimmick

#include "Basic.hpp"

#include "BPI_MapGimmick_classes.hpp"
#include "BPI_MapGimmick_parameters.hpp"


namespace SDK
{

// Function BPI_MapGimmick.BPI_MapGimmick_C.CanUseMapGimmick
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MapGimmick_C::CanUseMapGimmick(bool* UseOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapGimmick_C", "CanUseMapGimmick");

	Params::BPI_MapGimmick_C_CanUseMapGimmick Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UseOk != nullptr)
		*UseOk = Parms.UseOk;
}


// Function BPI_MapGimmick.BPI_MapGimmick_C.GetMapGimmickType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EMapGimmickType                         Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_MapGimmick_C::GetMapGimmickType(EMapGimmickType* Type) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapGimmick_C", "GetMapGimmickType");

	Params::BPI_MapGimmick_C_GetMapGimmickType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcShopBase

#include "Basic.hpp"

#include "BP_NpcShopBase_classes.hpp"
#include "BP_NpcShopBase_parameters.hpp"


namespace SDK
{

// Function BP_NpcShopBase.BP_NpcShopBase_C.ExecuteUbergraph_BP_NpcShopBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcShopBase_C::ExecuteUbergraph_BP_NpcShopBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcShopBase_C", "ExecuteUbergraph_BP_NpcShopBase");

	Params::BP_NpcShopBase_C_ExecuteUbergraph_BP_NpcShopBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcShopBase.BP_NpcShopBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NpcShopBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcShopBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NpcShopBase.BP_NpcShopBase_C.ActionManagerGetPairActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_NpcShopBase_C::ActionManagerGetPairActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcShopBase_C", "ActionManagerGetPairActor");

	Params::BP_NpcShopBase_C_ActionManagerGetPairActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_NpcShopBase.BP_NpcShopBase_C.ActionManagerGetEditableAngle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_NpcShopBase_C::ActionManagerGetEditableAngle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcShopBase_C", "ActionManagerGetEditableAngle");

	Params::BP_NpcShopBase_C_ActionManagerGetEditableAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


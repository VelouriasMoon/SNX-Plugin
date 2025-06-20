#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Ajito_ch0600

#include "Basic.hpp"

#include "ABP_Ajito_ch0600_classes.hpp"
#include "ABP_Ajito_ch0600_parameters.hpp"


namespace SDK
{

// Function ABP_Ajito_ch0600.ABP_Ajito_ch0600_C.ExecuteUbergraph_ABP_Ajito_ch0600
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Ajito_ch0600_C::ExecuteUbergraph_ABP_Ajito_ch0600(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Ajito_ch0600_C", "ExecuteUbergraph_ABP_Ajito_ch0600");

	Params::ABP_Ajito_ch0600_C_ExecuteUbergraph_ABP_Ajito_ch0600 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Ajito_ch0600.ABP_Ajito_ch0600_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Ajito_ch0600_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Ajito_ch0600_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Ajito_ch0600.ABP_Ajito_ch0600_C.InitializeFromParentActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_Ajito_ch0600_C::InitializeFromParentActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Ajito_ch0600_C", "InitializeFromParentActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Ajito_ch0600.ABP_Ajito_ch0600_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Ajito_ch0600_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Ajito_ch0600_C", "AnimGraph");

	Params::ABP_Ajito_ch0600_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


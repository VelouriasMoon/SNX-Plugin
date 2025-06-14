#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_HologramCh0400

#include "Basic.hpp"

#include "ABP_HologramCh0400_classes.hpp"
#include "ABP_HologramCh0400_parameters.hpp"


namespace SDK
{

// Function ABP_HologramCh0400.ABP_HologramCh0400_C.ExecuteUbergraph_ABP_HologramCh0400
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HologramCh0400_C::ExecuteUbergraph_ABP_HologramCh0400(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HologramCh0400_C", "ExecuteUbergraph_ABP_HologramCh0400");

	Params::ABP_HologramCh0400_C_ExecuteUbergraph_ABP_HologramCh0400 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_HologramCh0400.ABP_HologramCh0400_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_HologramCh0400_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HologramCh0400_C", "AnimGraph");

	Params::ABP_HologramCh0400_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


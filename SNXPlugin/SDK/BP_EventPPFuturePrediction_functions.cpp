#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPPFuturePrediction

#include "Basic.hpp"

#include "BP_EventPPFuturePrediction_classes.hpp"
#include "BP_EventPPFuturePrediction_parameters.hpp"


namespace SDK
{

// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ExecuteUbergraph_BP_EventPPFuturePrediction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPPFuturePrediction_C::ExecuteUbergraph_BP_EventPPFuturePrediction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "ExecuteUbergraph_BP_EventPPFuturePrediction");

	Params::BP_EventPPFuturePrediction_C_ExecuteUbergraph_BP_EventPPFuturePrediction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPPFuturePrediction_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "ReceiveEndPlay");

	Params::BP_EventPPFuturePrediction_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.EndPlayDynamicCutScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::EndPlayDynamicCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "EndPlayDynamicCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.UpdateDynamicCutScene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::UpdateDynamicCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "UpdateDynamicCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.BeginPlayDynamicCutScene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::BeginPlayDynamicCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "BeginPlayDynamicCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.EndPlayStaticCutScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::EndPlayStaticCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "EndPlayStaticCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.UpdateStaticCutScene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::UpdateStaticCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "UpdateStaticCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.BeginPlayStaticCutScene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::BeginPlayStaticCutScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "BeginPlayStaticCutScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventPPFuturePrediction_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPPFuturePrediction_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


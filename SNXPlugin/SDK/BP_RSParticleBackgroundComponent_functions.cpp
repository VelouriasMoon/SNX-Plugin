#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RSParticleBackgroundComponent

#include "Basic.hpp"

#include "BP_RSParticleBackgroundComponent_classes.hpp"
#include "BP_RSParticleBackgroundComponent_parameters.hpp"


namespace SDK
{

// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.ExecuteUbergraph_BP_RSParticleBackgroundComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RSParticleBackgroundComponent_C::ExecuteUbergraph_BP_RSParticleBackgroundComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "ExecuteUbergraph_BP_RSParticleBackgroundComponent");

	Params::BP_RSParticleBackgroundComponent_C_ExecuteUbergraph_BP_RSParticleBackgroundComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.EventOnSystemFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RSParticleBackgroundComponent_C::EventOnSystemFinished(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "EventOnSystemFinished");

	Params::BP_RSParticleBackgroundComponent_C_EventOnSystemFinished Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PlayCheckFlags
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PlayCheckFlags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PlayCheckFlags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.StopAndHideParticle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::StopAndHideParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "StopAndHideParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.StopParticle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::StopParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "StopParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PlayParticle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PlayParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PlayParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetBGEmitterParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEffectBackgroundParameter       Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RSParticleBackgroundComponent_C::SetBGEmitterParameter(struct FEffectBackgroundParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "SetBGEmitterParameter");

	Params::BP_RSParticleBackgroundComponent_C_SetBGEmitterParameter Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);

	Parameter = std::move(Parms.Parameter);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateStartBGEmitterLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PrivateStartBGEmitterLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PrivateStartBGEmitterLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateSpawnBGEmitterLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PrivateSpawnBGEmitterLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PrivateSpawnBGEmitterLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateEndBGEmitterLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PrivateEndBGEmitterLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PrivateEndBGEmitterLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateSetupTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PrivateSetupTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PrivateSetupTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetEventCulling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Culling                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RSParticleBackgroundComponent_C::SetEventCulling(bool Culling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "SetEventCulling");

	Params::BP_RSParticleBackgroundComponent_C_SetEventCulling Parms{};

	Parms.Culling = Culling;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivatePlayCheckFlags
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_RSParticleBackgroundComponent_C::PrivatePlayCheckFlags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "PrivatePlayCheckFlags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetBrainFieldParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BrainField                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RSParticleBackgroundComponent_C::SetBrainFieldParticle(bool BrainField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "SetBrainFieldParticle");

	Params::BP_RSParticleBackgroundComponent_C_SetBrainFieldParticle Parms{};

	Parms.BrainField = BrainField;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.IsBrainFieldParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    BrainField                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RSParticleBackgroundComponent_C::IsBrainFieldParticle(bool* BrainField) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RSParticleBackgroundComponent_C", "IsBrainFieldParticle");

	Params::BP_RSParticleBackgroundComponent_C_IsBrainFieldParticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BrainField != nullptr)
		*BrainField = Parms.BrainField;
}

}


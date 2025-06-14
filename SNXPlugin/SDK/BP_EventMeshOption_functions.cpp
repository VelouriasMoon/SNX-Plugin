#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventMeshOption

#include "Basic.hpp"

#include "BP_EventMeshOption_classes.hpp"
#include "BP_EventMeshOption_parameters.hpp"


namespace SDK
{

// Function BP_EventMeshOption.BP_EventMeshOption_C.ExecuteUbergraph_BP_EventMeshOption
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventMeshOption_C::ExecuteUbergraph_BP_EventMeshOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "ExecuteUbergraph_BP_EventMeshOption");

	Params::BP_EventMeshOption_C_ExecuteUbergraph_BP_EventMeshOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMeshOption.BP_EventMeshOption_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventMeshOption_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "ReceiveEndPlay");

	Params::BP_EventMeshOption_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMeshOption.BP_EventMeshOption_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventMeshOption_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMeshOption.BP_EventMeshOption_C.Setup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Primitive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           SkeletalMeshCom                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARSBattlePlayer_C*                RSBattlePlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventMeshOption_C::Setup(class UPrimitiveComponent* Primitive, class USkeletalMeshComponent* SkeletalMeshCom, class ARSBattlePlayer_C* RSBattlePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "Setup");

	Params::BP_EventMeshOption_C_Setup Parms{};

	Parms.Primitive = Primitive;
	Parms.SkeletalMeshCom = SkeletalMeshCom;
	Parms.RSBattlePlayer = RSBattlePlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMeshOption.BP_EventMeshOption_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventMeshOption_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMeshOption.BP_EventMeshOption_C.Finalize
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventMeshOption_C::Finalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMeshOption_C", "Finalize");

	UObject::ProcessEvent(Func, nullptr);
}

}


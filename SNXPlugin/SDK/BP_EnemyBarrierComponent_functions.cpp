#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyBarrierComponent

#include "Basic.hpp"

#include "BP_EnemyBarrierComponent_classes.hpp"
#include "BP_EnemyBarrierComponent_parameters.hpp"


namespace SDK
{

// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ExecuteUbergraph_BP_EnemyBarrierComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::ExecuteUbergraph_BP_EnemyBarrierComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "ExecuteUbergraph_BP_EnemyBarrierComponent");

	Params::BP_EnemyBarrierComponent_C_ExecuteUbergraph_BP_EnemyBarrierComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "ReceiveEndPlay");

	Params::BP_EnemyBarrierComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "ReceiveTick");

	Params::BP_EnemyBarrierComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Start
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "Update");

	Params::BP_EnemyBarrierComponent_C_Update Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EnemyBarrierComponent_C::Exit(bool IsDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "Exit");

	Params::BP_EnemyBarrierComponent_C_Exit Parms{};

	Parms.IsDamage = IsDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.HitProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PsychicObjectBasic_C*         PsychicObj                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHCHitResult                     Result_in                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_EnemyBarrierComponent_C::HitProcess(class ABP_PsychicObjectBasic_C* PsychicObj, const struct FHCHitResult& Result_in)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "HitProcess");

	Params::BP_EnemyBarrierComponent_C_HitProcess Parms{};

	Parms.PsychicObj = PsychicObj;
	Parms.Result_in = std::move(Result_in);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCapsuleComponent*                BarrierShape                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::Initialize(class UCapsuleComponent* BarrierShape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "Initialize");

	Params::BP_EnemyBarrierComponent_C_Initialize Parms{};

	Parms.BarrierShape = BarrierShape;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.LoadAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::LoadAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "LoadAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.IsBarrier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsBarrier                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EnemyBarrierComponent_C::IsBarrier(bool* Param_IsBarrier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "IsBarrier");

	Params::BP_EnemyBarrierComponent_C_IsBarrier Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsBarrier != nullptr)
		*Param_IsBarrier = Parms.Param_IsBarrier;
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.BarrierCollisionHitNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHCHitResult                     Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_EnemyBarrierComponent_C::BarrierCollisionHitNotify(const struct FHCHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "BarrierCollisionHitNotify");

	Params::BP_EnemyBarrierComponent_C_BarrierCollisionHitNotify Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.CalcBarrierDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHCHitResult                     Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_EnemyBarrierComponent_C::CalcBarrierDamage(const struct FHCHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "CalcBarrierDamage");

	Params::BP_EnemyBarrierComponent_C_CalcBarrierDamage Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.LoadBarrierActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::LoadBarrierActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "LoadBarrierActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.UpdateEmissive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyBarrierComponent_C::UpdateEmissive(float DeltaSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "UpdateEmissive");

	Params::BP_EnemyBarrierComponent_C_UpdateEmissive Parms{};

	Parms.DeltaSec = DeltaSec;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.StartEmissive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::StartEmissive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "StartEmissive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.EndEmissive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EnemyBarrierComponent_C::EndEmissive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyBarrierComponent_C", "EndEmissive");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReactionDilationComponent

#include "Basic.hpp"

#include "BP_ReactionDilationComponent_classes.hpp"
#include "BP_ReactionDilationComponent_parameters.hpp"


namespace SDK
{

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ExecuteUbergraph_BP_ReactionDilationComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ReactionDilationComponent_C::ExecuteUbergraph_BP_ReactionDilationComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "ExecuteUbergraph_BP_ReactionDilationComponent");

	Params::BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ReactionDilationComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "ReceiveTick");

	Params::BP_ReactionDilationComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDE_em_ChangeTimeDilation               Param_ReactionType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_LearpTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEasingFunc                             Param_EaseFunc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_EaseBlendExp                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Steps                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AddDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ReactionDilationComponent_C::Start(EDE_em_ChangeTimeDilation Param_ReactionType, float Param_LearpTime, EEasingFunc Param_EaseFunc, float Param_EaseBlendExp, int32 Param_Steps, bool AddDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "Start");

	Params::BP_ReactionDilationComponent_C_Start Parms{};

	Parms.Param_ReactionType = Param_ReactionType;
	Parms.Param_LearpTime = Param_LearpTime;
	Parms.Param_EaseFunc = Param_EaseFunc;
	Parms.Param_EaseBlendExp = Param_EaseBlendExp;
	Parms.Param_Steps = Param_Steps;
	Parms.AddDamage = AddDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ReactionDilationComponent_C::Update(float DeltaSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "Update");

	Params::BP_ReactionDilationComponent_C_Update Parms{};

	Parms.DeltaSec = DeltaSec;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsPlayerAccelerating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAccelerating                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ReactionDilationComponent_C::IsPlayerAccelerating(bool* bAccelerating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "IsPlayerAccelerating");

	Params::BP_ReactionDilationComponent_C_IsPlayerAccelerating Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAccelerating != nullptr)
		*bAccelerating = Parms.bAccelerating;
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.End
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ReactionDilationComponent_C::End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsChangeTimeDilation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ReactionDilationComponent_C::IsChangeTimeDilation(bool* bChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReactionDilationComponent_C", "IsChangeTimeDilation");

	Params::BP_ReactionDilationComponent_C_IsChangeTimeDilation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bChange != nullptr)
		*bChange = Parms.bChange;
}

}


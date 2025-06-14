#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyChangeTimeDilationComponent

#include "Basic.hpp"

#include "BP_EnemyChangeTimeDilationComponent_classes.hpp"
#include "BP_EnemyChangeTimeDilationComponent_parameters.hpp"


namespace SDK
{

// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyChangeTimeDilationComponent_C::ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent");

	Params::BP_EnemyChangeTimeDilationComponent_C_ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyChangeTimeDilationComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "ReceiveTick");

	Params::BP_EnemyChangeTimeDilationComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_LearpTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEasingFunc                             Param_EaseFunc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_EaseBlendExp                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Steps                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyChangeTimeDilationComponent_C::Start(float Param_LearpTime, EEasingFunc Param_EaseFunc, float Param_EaseBlendExp, int32 Param_Steps, class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "Start");

	Params::BP_EnemyChangeTimeDilationComponent_C_Start Parms{};

	Parms.Param_LearpTime = Param_LearpTime;
	Parms.Param_EaseFunc = Param_EaseFunc;
	Parms.Param_EaseBlendExp = Param_EaseBlendExp;
	Parms.Param_Steps = Param_Steps;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyChangeTimeDilationComponent_C::Update(float DeltaSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "Update");

	Params::BP_EnemyChangeTimeDilationComponent_C_Update Parms{};

	Parms.DeltaSec = DeltaSec;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.IsPlayerAccelerating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAccelerating                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EnemyChangeTimeDilationComponent_C::IsPlayerAccelerating(bool* bAccelerating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "IsPlayerAccelerating");

	Params::BP_EnemyChangeTimeDilationComponent_C_IsPlayerAccelerating Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAccelerating != nullptr)
		*bAccelerating = Parms.bAccelerating;
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.End
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EnemyChangeTimeDilationComponent_C::End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.IsChangeTimeDilation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EnemyChangeTimeDilationComponent_C::IsChangeTimeDilation(bool* bChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyChangeTimeDilationComponent_C", "IsChangeTimeDilation");

	Params::BP_EnemyChangeTimeDilationComponent_C_IsChangeTimeDilation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bChange != nullptr)
		*bChange = Parms.bChange;
}

}


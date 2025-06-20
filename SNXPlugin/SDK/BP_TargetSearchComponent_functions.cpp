#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TargetSearchComponent

#include "Basic.hpp"

#include "BP_TargetSearchComponent_classes.hpp"
#include "BP_TargetSearchComponent_parameters.hpp"


namespace SDK
{

// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ExecuteUbergraph_BP_TargetSearchComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TargetSearchComponent_C::ExecuteUbergraph_BP_TargetSearchComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "ExecuteUbergraph_BP_TargetSearchComponent");

	Params::BP_TargetSearchComponent_C_ExecuteUbergraph_BP_TargetSearchComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.SetLockTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TargetSearchComponent_C::SetLockTarget(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "SetLockTarget");

	Params::BP_TargetSearchComponent_C_SetLockTarget Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TargetSearchComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "ReceiveTick");

	Params::BP_TargetSearchComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_TargetSearchComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.UpdateBossTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           LockBoss                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TargetSearchComponent_C::UpdateBossTarget(class AActor** LockBoss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "UpdateBossTarget");

	Params::BP_TargetSearchComponent_C_UpdateBossTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LockBoss != nullptr)
		*LockBoss = Parms.LockBoss;
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.DebugWidgetTargetParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TargetSearchComponent_C::DebugWidgetTargetParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "DebugWidgetTargetParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ChangeLockTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ARSCharacterBase*>         EnemyList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TargetSearchComponent_C::ChangeLockTarget(float AxisValue, const TArray<class ARSCharacterBase*>& EnemyList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "ChangeLockTarget");

	Params::BP_TargetSearchComponent_C_ChangeLockTarget Parms{};

	Parms.AxisValue = AxisValue;
	Parms.EnemyList = std::move(EnemyList);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.UpdateBossEnemyHp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TargetSearchComponent_C::UpdateBossEnemyHp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "UpdateBossEnemyHp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.TargetUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TargetSearchComponent_C::TargetUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "TargetUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.SetLockBoss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BossActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDummy                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TargetSearchComponent_C::SetLockBoss(class AActor* BossActor, bool* bDummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "SetLockBoss");

	Params::BP_TargetSearchComponent_C_SetLockBoss Parms{};

	Parms.BossActor = BossActor;

	UObject::ProcessEvent(Func, &Parms);

	if (bDummy != nullptr)
		*bDummy = Parms.bDummy;
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ClearLockBoss
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TargetSearchComponent_C::ClearLockBoss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "ClearLockBoss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.AutoNextTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIgnoreRendered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TargetSearchComponent_C::AutoNextTarget(bool bIgnoreRendered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "AutoNextTarget");

	Params::BP_TargetSearchComponent_C_AutoNextTarget Parms{};

	Parms.bIgnoreRendered = bIgnoreRendered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.SetCrashTargetBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CrashActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TargetSearchComponent_C::SetCrashTargetBoss(class AActor* CrashActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "SetCrashTargetBoss");

	Params::BP_TargetSearchComponent_C_SetCrashTargetBoss Parms{};

	Parms.CrashActor = CrashActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.GetLockBoss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           LockBoss                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TargetSearchComponent_C::GetLockBoss(class AActor** LockBoss) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TargetSearchComponent_C", "GetLockBoss");

	Params::BP_TargetSearchComponent_C_GetLockBoss Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LockBoss != nullptr)
		*LockBoss = Parms.LockBoss;
}

}


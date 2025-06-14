#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitManager

#include "Basic.hpp"

#include "HitManager_classes.hpp"
#include "HitManager_parameters.hpp"


namespace SDK
{

// Function HitManager.HitManager_C.ExecuteUbergraph_HitManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHitManager_C::ExecuteUbergraph_HitManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "ExecuteUbergraph_HitManager");

	Params::HitManager_C_ExecuteUbergraph_HitManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitManager.HitManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHitManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitManager.HitManager_C.DelayBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHitManager_C::DelayBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "DelayBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitManager.HitManager_C.InitializeManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EManagerProcTiming                      Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AHitManager_C::InitializeManager(EManagerProcTiming Timing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "InitializeManager");

	Params::HitManager_C_InitializeManager Parms{};

	Parms.Timing = Timing;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HitManager.HitManager_C.FinalizeManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EManagerProcTiming                      Timing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AHitManager_C::FinalizeManager(EManagerProcTiming Timing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "FinalizeManager");

	Params::HitManager_C_FinalizeManager Parms{};

	Parms.Timing = Timing;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HitManager.HitManager_C.IsNeedFrameWait
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AHitManager_C::IsNeedFrameWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitManager_C", "IsNeedFrameWait");

	Params::HitManager_C_IsNeedFrameWait Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


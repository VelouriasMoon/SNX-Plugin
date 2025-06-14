#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SAS_PlayerState

#include "Basic.hpp"

#include "BP_SAS_PlayerState_classes.hpp"
#include "BP_SAS_PlayerState_parameters.hpp"


namespace SDK
{

// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ExecuteUbergraph_BP_SAS_PlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::ExecuteUbergraph_BP_SAS_PlayerState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "ExecuteUbergraph_BP_SAS_PlayerState");

	Params::BP_SAS_PlayerState_C_ExecuteUbergraph_BP_SAS_PlayerState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "ReceiveTick");

	Params::BP_SAS_PlayerState_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SAS_PlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SetActiveFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASButton                             SASButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SAS_PlayerState_C::SetActiveFlag(E_SASButton SASButton, bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "SetActiveFlag");

	Params::BP_SAS_PlayerState_C_SetActiveFlag Parms{};

	Parms.SASButton = SASButton;
	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.IsAnyActiveSAS
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Acitve                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SAS_PlayerState_C::IsAnyActiveSAS(bool* Acitve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "IsAnyActiveSAS");

	Params::BP_SAS_PlayerState_C_IsAnyActiveSAS Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Acitve != nullptr)
		*Acitve = Parms.Acitve;
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.IsActiveSAS
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               SAS_Kind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SAS_PlayerState_C::IsActiveSAS(E_SASKind SAS_Kind, bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "IsActiveSAS");

	Params::BP_SAS_PlayerState_C_IsActiveSAS Parms{};

	Parms.SAS_Kind = SAS_Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "Update");

	Params::BP_SAS_PlayerState_C_Update Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RegistCommandParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASButton                             SASButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFSASCommand                     SAS_CommandParam                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::RegistCommandParam(E_SASButton SASButton, const struct FFSASCommand& SAS_CommandParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "RegistCommandParam");

	Params::BP_SAS_PlayerState_C_RegistCommandParam Parms{};

	Parms.SASButton = SASButton;
	Parms.SAS_CommandParam = std::move(SAS_CommandParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetCommandAccelerator
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAcceleratorParam                Command                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::GetCommandAccelerator(struct FAcceleratorParam* Command, class AActor** Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "GetCommandAccelerator");

	Params::BP_SAS_PlayerState_C_GetCommandAccelerator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (Owner != nullptr)
		*Owner = Parms.Owner;
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SAS_End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASButton                             SASButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::SAS_End(E_SASButton SASButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "SAS_End");

	Params::BP_SAS_PlayerState_C_SAS_End Parms{};

	Parms.SASButton = SASButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SubRemainTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SubTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::SubRemainTime(E_SASKind Kind, float SubTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "SubRemainTime");

	Params::BP_SAS_PlayerState_C_SubRemainTime Parms{};

	Parms.Kind = Kind;
	Parms.SubTime = SubTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.PauseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bPauseTimer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SAS_PlayerState_C::PauseTimer(bool Param_bPauseTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "PauseTimer");

	Params::BP_SAS_PlayerState_C_PauseTimer Parms{};

	Parms.Param_bPauseTimer = Param_bPauseTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SetDelayEndFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SAS_PlayerState_C::SetDelayEndFlag(E_SASKind Kind, bool bDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "SetDelayEndFlag");

	Params::BP_SAS_PlayerState_C_SetDelayEndFlag Parms{};

	Parms.Kind = Kind;
	Parms.bDelay = bDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RecoverRemainTimeByRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RecoverRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::RecoverRemainTimeByRate(E_SASKind Kind, float RecoverRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "RecoverRemainTimeByRate");

	Params::BP_SAS_PlayerState_C_RecoverRemainTimeByRate Parms{};

	Parms.Kind = Kind;
	Parms.RecoverRate = RecoverRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.RecoverRemainTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RecoverTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::RecoverRemainTime(E_SASKind Kind, float RecoverTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "RecoverRemainTime");

	Params::BP_SAS_PlayerState_C_RecoverRemainTime Parms{};

	Parms.Kind = Kind;
	Parms.RecoverTime = RecoverTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.SubRemainTimeMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::SubRemainTimeMax(E_SASKind Kind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "SubRemainTimeMax");

	Params::BP_SAS_PlayerState_C_SubRemainTimeMax Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSecondsFromKind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SASKind                               Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ActiveSeconds                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::GetActiveSecondsFromKind(E_SASKind Kind, float* ActiveSeconds, float* MaxTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "GetActiveSecondsFromKind");

	Params::BP_SAS_PlayerState_C_GetActiveSecondsFromKind Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveSeconds != nullptr)
		*ActiveSeconds = Parms.ActiveSeconds;

	if (MaxTime != nullptr)
		*MaxTime = Parms.MaxTime;
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.ChargeRemainTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ChargeRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::ChargeRemainTime(float ChargeRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "ChargeRemainTime");

	Params::BP_SAS_PlayerState_C_ChargeRemainTime Parms{};

	Parms.ChargeRate = ChargeRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSeconds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// E_SASButton                             SASButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ActiveSeconds                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::GetActiveSeconds(E_SASButton SASButton, float* ActiveSeconds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "GetActiveSeconds");

	Params::BP_SAS_PlayerState_C_GetActiveSeconds Parms{};

	Parms.SASButton = SASButton;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveSeconds != nullptr)
		*ActiveSeconds = Parms.ActiveSeconds;
}


// Function BP_SAS_PlayerState.BP_SAS_PlayerState_C.GetActiveSecondsRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// E_SASButton                             Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SAS_PlayerState_C::GetActiveSecondsRate(E_SASButton Button, float* Rate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SAS_PlayerState_C", "GetActiveSecondsRate");

	Params::BP_SAS_PlayerState_C_GetActiveSecondsRate Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}

}


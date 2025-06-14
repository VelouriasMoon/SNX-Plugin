#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStealthComponent

#include "Basic.hpp"

#include "BP_PlayerStealthComponent_classes.hpp"
#include "BP_PlayerStealthComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ExecuteUbergraph_BP_PlayerStealthComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerStealthComponent_C::ExecuteUbergraph_BP_PlayerStealthComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "ExecuteUbergraph_BP_PlayerStealthComponent");

	Params::BP_PlayerStealthComponent_C_ExecuteUbergraph_BP_PlayerStealthComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerStealthComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "ReceiveTick");

	Params::BP_PlayerStealthComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerStealthComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStealthComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetStealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Stealth_on_in                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Hero_oreder_in                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Stealth_time_in                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Delay_time_in                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    No_sas_cancel_in                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    From_event_in                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetStealth(bool Stealth_on_in, bool Hero_oreder_in, float Stealth_time_in, float Delay_time_in, bool No_sas_cancel_in, bool From_event_in)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetStealth");

	Params::BP_PlayerStealthComponent_C_SetStealth Parms{};

	Parms.Stealth_on_in = Stealth_on_in;
	Parms.Hero_oreder_in = Hero_oreder_in;
	Parms.Stealth_time_in = Stealth_time_in;
	Parms.Delay_time_in = Delay_time_in;
	Parms.No_sas_cancel_in = No_sas_cancel_in;
	Parms.From_event_in = From_event_in;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStealthComponent_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::IsStealth(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "IsStealth");

	Params::BP_PlayerStealthComponent_C_IsStealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthThink
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::IsStealthThink(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "IsStealthThink");

	Params::BP_PlayerStealthComponent_C_IsStealthThink Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthHeroOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::IsStealthHeroOrder(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "IsStealthHeroOrder");

	Params::BP_PlayerStealthComponent_C_IsStealthHeroOrder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetMaterialParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OneFrameSetting                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetMaterialParameter(float Rate, bool OneFrameSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetMaterialParameter");

	Params::BP_PlayerStealthComponent_C_SetMaterialParameter Parms{};

	Parms.Rate = Rate;
	Parms.OneFrameSetting = OneFrameSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetupStealthMaterialOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerStealthComponent_C::SetupStealthMaterialOnly(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetupStealthMaterialOnly");

	Params::BP_PlayerStealthComponent_C_SetupStealthMaterialOnly Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetPrivateTickEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ClaimantName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerStealthComponent_C::SetPrivateTickEnabled(bool bEnable, class FName ClaimantName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetPrivateTickEnabled");

	Params::BP_PlayerStealthComponent_C_SetPrivateTickEnabled Parms{};

	Parms.bEnable = bEnable;
	Parms.ClaimantName = ClaimantName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetSeeThroughCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetSeeThroughCancel(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetSeeThroughCancel");

	Params::BP_PlayerStealthComponent_C_SetSeeThroughCancel Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.UpdateAssasinAttackMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerStealthComponent_C::UpdateAssasinAttackMaterial(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "UpdateAssasinAttackMaterial");

	Params::BP_PlayerStealthComponent_C_UpdateAssasinAttackMaterial Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.BeginAssassinAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStealthComponent_C::BeginAssassinAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "BeginAssassinAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.EndAssassinAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStealthComponent_C::EndAssassinAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "EndAssassinAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.EndAssassinAttackCharge
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStealthComponent_C::EndAssassinAttackCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "EndAssassinAttackCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetAfterStealthTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAfterStealth                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetAfterStealthTimer(bool bAfterStealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetAfterStealthTimer");

	Params::BP_PlayerStealthComponent_C_SetAfterStealthTimer Parms{};

	Parms.bAfterStealth = bAfterStealth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetPauseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPauseTimerIN                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetPauseTimer(bool bPauseTimerIN)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetPauseTimer");

	Params::BP_PlayerStealthComponent_C_SetPauseTimer Parms{};

	Parms.bPauseTimerIN = bPauseTimerIN;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetStealthForceVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Stealth_on_in                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetStealthForceVisible(bool Stealth_on_in)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetStealthForceVisible");

	Params::BP_PlayerStealthComponent_C_SetStealthForceVisible Parms{};

	Parms.Stealth_on_in = Stealth_on_in;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.GetPlayerStealthDelayParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStealthDelayParam         PlayerStealthDelayParam                                (Parm, OutParm)

void UBP_PlayerStealthComponent_C::GetPlayerStealthDelayParam(struct FPlayerStealthDelayParam* PlayerStealthDelayParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "GetPlayerStealthDelayParam");

	Params::BP_PlayerStealthComponent_C_GetPlayerStealthDelayParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerStealthDelayParam != nullptr)
		*PlayerStealthDelayParam = std::move(Parms.PlayerStealthDelayParam);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetPlayerStealthDelayParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStealthDelayParam         PlayerStealthDelayParam                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerStealthComponent_C::SetPlayerStealthDelayParam(const struct FPlayerStealthDelayParam& PlayerStealthDelayParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetPlayerStealthDelayParam");

	Params::BP_PlayerStealthComponent_C_SetPlayerStealthDelayParam Parms{};

	Parms.PlayerStealthDelayParam = std::move(PlayerStealthDelayParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.SetMaterialParameter_SasCable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OneFrameSetting                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::SetMaterialParameter_SasCable(float Rate, bool OneFrameSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "SetMaterialParameter_SasCable");

	Params::BP_PlayerStealthComponent_C_SetMaterialParameter_SasCable Parms{};

	Parms.Rate = Rate;
	Parms.OneFrameSetting = OneFrameSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsAfterStealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bAfterStealth                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::IsAfterStealth(bool* bAfterStealth) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "IsAfterStealth");

	Params::BP_PlayerStealthComponent_C_IsAfterStealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAfterStealth != nullptr)
		*bAfterStealth = Parms.bAfterStealth;
}


// Function BP_PlayerStealthComponent.BP_PlayerStealthComponent_C.IsStealthFromEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bFromEvent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerStealthComponent_C::IsStealthFromEvent(bool* bFromEvent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerStealthComponent_C", "IsStealthFromEvent");

	Params::BP_PlayerStealthComponent_C_IsStealthFromEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFromEvent != nullptr)
		*bFromEvent = Parms.bFromEvent;
}

}


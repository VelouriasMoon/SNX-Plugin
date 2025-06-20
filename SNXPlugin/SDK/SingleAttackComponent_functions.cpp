#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SingleAttackComponent

#include "Basic.hpp"

#include "SingleAttackComponent_classes.hpp"
#include "SingleAttackComponent_parameters.hpp"


namespace SDK
{

// Function SingleAttackComponent.SingleAttackComponent_C.ExecuteUbergraph_SingleAttackComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleAttackComponent_C::ExecuteUbergraph_SingleAttackComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "ExecuteUbergraph_SingleAttackComponent");

	Params::SingleAttackComponent_C_ExecuteUbergraph_SingleAttackComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SingleAttackComponent.SingleAttackComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void USingleAttackComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SingleAttackComponent.SingleAttackComponent_C.InputButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USingleAttackComponent_C::InputButton(bool IsPressed, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "InputButton");

	Params::SingleAttackComponent_C_InputButton Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function SingleAttackComponent.SingleAttackComponent_C.ClearInputForSingleAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USingleAttackComponent_C::ClearInputForSingleAttack(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "ClearInputForSingleAttack");

	Params::SingleAttackComponent_C_ClearInputForSingleAttack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function SingleAttackComponent.SingleAttackComponent_C.OnMontageBlendingOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Param_Montage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleAttackComponent_C::OnMontageBlendingOut(class UAnimMontage* Param_Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "OnMontageBlendingOut");

	Params::SingleAttackComponent_C_OnMontageBlendingOut Parms{};

	Parms.Param_Montage = Param_Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SingleAttackComponent.SingleAttackComponent_C.ClearInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleAttackComponent_C::ClearInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "ClearInput");

	Params::SingleAttackComponent_C_ClearInput Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SingleAttackComponent.SingleAttackComponent_C.CheckStartAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleAttackComponent_C::CheckStartAttack(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "CheckStartAttack");

	Params::SingleAttackComponent_C_CheckStartAttack Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SingleAttackComponent.SingleAttackComponent_C.InputButtonByCombo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bComboFirst                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleAttackComponent_C::InputButtonByCombo(bool bPressed, bool bComboFirst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "InputButtonByCombo");

	Params::SingleAttackComponent_C_InputButtonByCombo Parms{};

	Parms.bPressed = bPressed;
	Parms.bComboFirst = bComboFirst;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SingleAttackComponent.SingleAttackComponent_C.EndAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USingleAttackComponent_C::EndAttack(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "EndAttack");

	Params::SingleAttackComponent_C_EndAttack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function SingleAttackComponent.SingleAttackComponent_C.IsEndCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Param_Montage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USingleAttackComponent_C::IsEndCondition(class UAnimMontage* Param_Montage, bool* bEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "IsEndCondition");

	Params::SingleAttackComponent_C_IsEndCondition Parms{};

	Parms.Param_Montage = Param_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnd != nullptr)
		*bEnd = Parms.bEnd;
}


// Function SingleAttackComponent.SingleAttackComponent_C.GetWeaponAnimStopType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EWeaponAttackAnimStopType               Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleAttackComponent_C::GetWeaponAnimStopType(EWeaponAttackAnimStopType* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "GetWeaponAnimStopType");

	Params::SingleAttackComponent_C_GetWeaponAnimStopType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function SingleAttackComponent.SingleAttackComponent_C.IsStartSingleAttack
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USingleAttackComponent_C::IsStartSingleAttack(bool* IsStart) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "IsStartSingleAttack");

	Params::SingleAttackComponent_C_IsStartSingleAttack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsStart != nullptr)
		*IsStart = Parms.IsStart;
}


// Function SingleAttackComponent.SingleAttackComponent_C.GetCurrentMontage
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                     Param_Montage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleAttackComponent_C::GetCurrentMontage(class UAnimMontage** Param_Montage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SingleAttackComponent_C", "GetCurrentMontage");

	Params::SingleAttackComponent_C_GetCurrentMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Montage != nullptr)
		*Param_Montage = Parms.Param_Montage;
}

}


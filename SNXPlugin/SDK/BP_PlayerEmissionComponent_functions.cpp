#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerEmissionComponent

#include "Basic.hpp"

#include "BP_PlayerEmissionComponent_classes.hpp"
#include "BP_PlayerEmissionComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ExecuteUbergraph_BP_PlayerEmissionComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::ExecuteUbergraph_BP_PlayerEmissionComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ExecuteUbergraph_BP_PlayerEmissionComponent");

	Params::BP_PlayerEmissionComponent_C_ExecuteUbergraph_BP_PlayerEmissionComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ReceiveTick");

	Params::BP_PlayerEmissionComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.Setup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateWakeInterpolate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::UpdateWakeInterpolate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "UpdateWakeInterpolate");

	Params::BP_PlayerEmissionComponent_C_UpdateWakeInterpolate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupMaterialParameter
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::SetupMaterialParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "SetupMaterialParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateCheckSAS
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta_Seconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::UpdateCheckSAS(float Delta_Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "UpdateCheckSAS");

	Params::BP_PlayerEmissionComponent_C_UpdateCheckSAS Parms{};

	Parms.Delta_Seconds = Delta_Seconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupStart
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::SetupStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "SetupStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupEnd
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::SetupEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "SetupEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupColorBlend
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::SetupColorBlend(const struct FVector& NextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "SetupColorBlend");

	Params::BP_PlayerEmissionComponent_C_SetupColorBlend Parms{};

	Parms.NextColor = std::move(NextColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.GetEmissionColor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::GetEmissionColor(struct FVector* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "GetEmissionColor");

	Params::BP_PlayerEmissionComponent_C_GetEmissionColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateColorBlend
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::UpdateColorBlend(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "UpdateColorBlend");

	Params::BP_PlayerEmissionComponent_C_UpdateColorBlend Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::UpdateDamage(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "UpdateDamage");

	Params::BP_PlayerEmissionComponent_C_UpdateDamage Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IncSASActiveCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::IncSASActiveCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "IncSASActiveCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.DecSASActiveCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::DecSASActiveCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "DecSASActiveCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IsContinueEmissionColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OffMaskPsychic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OffMaskAccelerator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OffMaskBrainField                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OffMaskDrive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsContinue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::IsContinueEmissionColor(bool OffMaskPsychic, bool OffMaskAccelerator, bool OffMaskBrainField, bool OffMaskDrive, bool* IsContinue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "IsContinueEmissionColor");

	Params::BP_PlayerEmissionComponent_C_IsContinueEmissionColor Parms{};

	Parms.OffMaskPsychic = OffMaskPsychic;
	Parms.OffMaskAccelerator = OffMaskAccelerator;
	Parms.OffMaskBrainField = OffMaskBrainField;
	Parms.OffMaskDrive = OffMaskDrive;

	UObject::ProcessEvent(Func, &Parms);

	if (IsContinue != nullptr)
		*IsContinue = Parms.IsContinue;
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeBrainField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_BrainField                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::ChangeBrainField(bool Param_BrainField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ChangeBrainField");

	Params::BP_PlayerEmissionComponent_C_ChangeBrainField Parms{};

	Parms.Param_BrainField = Param_BrainField;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeSAS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Accelerator                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::ChangeSAS(bool Param_Accelerator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ChangeSAS");

	Params::BP_PlayerEmissionComponent_C_ChangeSAS Parms{};

	Parms.Param_Accelerator = Param_Accelerator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangePhychicEmission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Phychic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::ChangePhychicEmission(bool Phychic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ChangePhychicEmission");

	Params::BP_PlayerEmissionComponent_C_ChangePhychicEmission Parms{};

	Parms.Phychic = Phychic;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateBrainField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::UpdateBrainField(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "UpdateBrainField");

	Params::BP_PlayerEmissionComponent_C_UpdateBrainField Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.GetBrainFieldEmissionColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_PlayerEmissionComponent_C::GetBrainFieldEmissionColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "GetBrainFieldEmissionColor");

	Params::BP_PlayerEmissionComponent_C_GetBrainFieldEmissionColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetOutlineParamValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEmissionComponent_C::SetOutlineParamValue(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "SetOutlineParamValue");

	Params::BP_PlayerEmissionComponent_C_SetOutlineParamValue Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.HideSAS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::HideSAS(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "HideSAS");

	Params::BP_PlayerEmissionComponent_C_HideSAS Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ClearEmission
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEmissionComponent_C::ClearEmission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ClearEmission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeDrive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Drive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::ChangeDrive(bool Param_Drive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "ChangeDrive");

	Params::BP_PlayerEmissionComponent_C_ChangeDrive Parms{};

	Parms.Param_Drive = Param_Drive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IsActiveSAS
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bActive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerEmissionComponent_C::IsActiveSAS(bool* bActive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEmissionComponent_C", "IsActiveSAS");

	Params::BP_PlayerEmissionComponent_C_IsActiveSAS Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bActive != nullptr)
		*bActive = Parms.bActive;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CalcCustomTImeDilationComponent

#include "Basic.hpp"

#include "BP_CalcCustomTImeDilationComponent_classes.hpp"
#include "BP_CalcCustomTImeDilationComponent_parameters.hpp"


namespace SDK
{

// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.ExecuteUbergraph_BP_CalcCustomTImeDilationComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CalcCustomTImeDilationComponent_C::ExecuteUbergraph_BP_CalcCustomTImeDilationComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "ExecuteUbergraph_BP_CalcCustomTImeDilationComponent");

	Params::BP_CalcCustomTImeDilationComponent_C_ExecuteUbergraph_BP_CalcCustomTImeDilationComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CalcCustomTImeDilationComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.SetGlobalCustomTimeDilation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   CustomTimeDilation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_CurrentCustomTimeDilation                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CalcCustomTImeDilationComponent_C::SetGlobalCustomTimeDilation(const class FString& Param_Name, float CustomTimeDilation, float* Param_CurrentCustomTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "SetGlobalCustomTimeDilation");

	Params::BP_CalcCustomTImeDilationComponent_C_SetGlobalCustomTimeDilation Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.CustomTimeDilation = CustomTimeDilation;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CurrentCustomTimeDilation != nullptr)
		*Param_CurrentCustomTimeDilation = Parms.Param_CurrentCustomTimeDilation;
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.RemoveGlobalCustomTimeDilation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CalcCustomTImeDilationComponent_C::RemoveGlobalCustomTimeDilation(const class FString& Param_Name, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "RemoveGlobalCustomTimeDilation");

	Params::BP_CalcCustomTImeDilationComponent_C_RemoveGlobalCustomTimeDilation Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.CalcCustomTimeDilation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CustomTimeDilation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CalcCustomTImeDilationComponent_C::CalcCustomTimeDilation(float* CustomTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "CalcCustomTimeDilation");

	Params::BP_CalcCustomTImeDilationComponent_C_CalcCustomTimeDilation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CustomTimeDilation != nullptr)
		*CustomTimeDilation = Parms.CustomTimeDilation;
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.IsRegistName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RegistName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Param_CurrentCustomTimeDilation                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CalcCustomTImeDilationComponent_C::IsRegistName(const class FString& RegistName, bool* IsFound, float* Param_CurrentCustomTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "IsRegistName");

	Params::BP_CalcCustomTImeDilationComponent_C_IsRegistName Parms{};

	Parms.RegistName = std::move(RegistName);

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (Param_CurrentCustomTimeDilation != nullptr)
		*Param_CurrentCustomTimeDilation = Parms.Param_CurrentCustomTimeDilation;
}


// Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.GetCurrentCustomTimeDilation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   CustomTimeDilation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CalcCustomTImeDilationComponent_C::GetCurrentCustomTimeDilation(float* CustomTimeDilation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CalcCustomTImeDilationComponent_C", "GetCurrentCustomTimeDilation");

	Params::BP_CalcCustomTImeDilationComponent_C_GetCurrentCustomTimeDilation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CustomTimeDilation != nullptr)
		*CustomTimeDilation = Parms.CustomTimeDilation;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CutinCharacterBase

#include "Basic.hpp"

#include "BP_CutinCharacterBase_classes.hpp"
#include "BP_CutinCharacterBase_parameters.hpp"


namespace SDK
{

// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ExecuteUbergraph_BP_CutinCharacterBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::ExecuteUbergraph_BP_CutinCharacterBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "ExecuteUbergraph_BP_CutinCharacterBase");

	Params::BP_CutinCharacterBase_C_ExecuteUbergraph_BP_CutinCharacterBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "ReceiveTick");

	Params::BP_CutinCharacterBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutinCharacterBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.GetExtraMeshes
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>   SkelMeshComps                                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::GetExtraMeshes(TArray<class USkeletalMeshComponent*>* SkelMeshComps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "GetExtraMeshes");

	Params::BP_CutinCharacterBase_C_GetExtraMeshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkelMeshComps != nullptr)
		*SkelMeshComps = std::move(Parms.SkelMeshComps);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SwitchMaterials
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CutinCharacterBase_C::SwitchMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "SwitchMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SwitchMeshMaterials
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkelMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::SwitchMeshMaterials(class USkeletalMeshComponent* SkelMeshComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "SwitchMeshMaterials");

	Params::BP_CutinCharacterBase_C_SwitchMeshMaterials Parms{};

	Parms.SkelMeshComp = SkelMeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SetScalarParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::SetScalarParameter(class FName ParameterName, float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "SetScalarParameter");

	Params::BP_CutinCharacterBase_C_SetScalarParameter Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ParameterValue = ParameterValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SetVectorParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutinCharacterBase_C::SetVectorParameter(class FName ParameterName, const struct FLinearColor& ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "SetVectorParameter");

	Params::BP_CutinCharacterBase_C_SetVectorParameter Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ParameterValue = std::move(ParameterValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.IsCutinHidden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CutinCharacterBase_C::IsCutinHidden(bool* Hidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutinCharacterBase_C", "IsCutinHidden");

	Params::BP_CutinCharacterBase_C_IsCutinHidden Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hidden != nullptr)
		*Hidden = Parms.Hidden;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_MapModel_Base

#include "Basic.hpp"

#include "SM_MapModel_Base_classes.hpp"
#include "SM_MapModel_Base_parameters.hpp"


namespace SDK
{

// Function SM_MapModel_Base.SM_MapModel_Base_C.ExecuteUbergraph_SM_MapModel_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASM_MapModel_Base_C::ExecuteUbergraph_SM_MapModel_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "ExecuteUbergraph_SM_MapModel_Base");

	Params::SM_MapModel_Base_C_ExecuteUbergraph_SM_MapModel_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASM_MapModel_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "ReceiveTick");

	Params::SM_MapModel_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASM_MapModel_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASM_MapModel_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetChiledComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASM_MapModel_Base_C::GetChiledComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetChiledComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetCollisitonData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCapsuleComponent*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCapsuleComponent* ASM_MapModel_Base_C::GetCollisitonData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetCollisitonData");

	Params::SM_MapModel_Base_C_GetCollisitonData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetDirectionRotate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ASM_MapModel_Base_C::GetDirectionRotate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetDirectionRotate");

	Params::SM_MapModel_Base_C_GetDirectionRotate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.SetFloorIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Floorindex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASM_MapModel_Base_C::SetFloorIndex(int32 Param_Floorindex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "SetFloorIndex");

	Params::SM_MapModel_Base_C_SetFloorIndex Parms{};

	Parms.Param_Floorindex = Param_Floorindex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.MaterialUpdate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASM_MapModel_Base_C::MaterialUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "MaterialUpdate");

	Params::SM_MapModel_Base_C_MaterialUpdate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetFloorData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FUIDetaileMapFloorData>   ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

TArray<struct FUIDetaileMapFloorData> ASM_MapModel_Base_C::GetFloorData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetFloorData");

	Params::SM_MapModel_Base_C_GetFloorData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetZoomMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ASM_MapModel_Base_C::GetZoomMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetZoomMax");

	Params::SM_MapModel_Base_C_GetZoomMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SM_MapModel_Base.SM_MapModel_Base_C.GetZoomMin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ASM_MapModel_Base_C::GetZoomMin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SM_MapModel_Base_C", "GetZoomMin");

	Params::SM_MapModel_Base_C_GetZoomMin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


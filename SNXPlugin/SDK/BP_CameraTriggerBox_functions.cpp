#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraTriggerBox

#include "Basic.hpp"

#include "BP_CameraTriggerBox_classes.hpp"
#include "BP_CameraTriggerBox_parameters.hpp"


namespace SDK
{

// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ExecuteUbergraph_BP_CameraTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraTriggerBox_C::ExecuteUbergraph_BP_CameraTriggerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "ExecuteUbergraph_BP_CameraTriggerBox");

	Params::BP_CameraTriggerBox_C_ExecuteUbergraph_BP_CameraTriggerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraTriggerBox_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "ReceiveActorEndOverlap");

	Params::BP_CameraTriggerBox_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::BP_CameraTriggerBox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraTriggerBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.GetCameraManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RSPlayerCameraManager_C*      Camera_manager                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraTriggerBox_C::GetCameraManager(class ABP_RSPlayerCameraManager_C** Camera_manager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "GetCameraManager");

	Params::BP_CameraTriggerBox_C_GetCameraManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camera_manager != nullptr)
		*Camera_manager = Parms.Camera_manager;
}


// Function BP_CameraTriggerBox.BP_CameraTriggerBox_C.SetEventTriggerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag_in                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Ply_actor_in                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraTriggerInfo               Trg_info_in                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CameraTriggerBox_C::SetEventTriggerInfo(bool Flag_in, class AActor* Ply_actor_in, const struct FCameraTriggerInfo& Trg_info_in)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraTriggerBox_C", "SetEventTriggerInfo");

	Params::BP_CameraTriggerBox_C_SetEventTriggerInfo Parms{};

	Parms.Flag_in = Flag_in;
	Parms.Ply_actor_in = Ply_actor_in;
	Parms.Trg_info_in = std::move(Trg_info_in);

	UObject::ProcessEvent(Func, &Parms);
}

}


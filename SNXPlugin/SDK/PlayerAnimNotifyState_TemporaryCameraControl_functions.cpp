#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimNotifyState_TemporaryCameraControl

#include "Basic.hpp"

#include "PlayerAnimNotifyState_TemporaryCameraControl_classes.hpp"
#include "PlayerAnimNotifyState_TemporaryCameraControl_parameters.hpp"


namespace SDK
{

// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerAnimNotifyState_TemporaryCameraControl_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAnimNotifyState_TemporaryCameraControl_C", "Received_NotifyEnd");

	Params::PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerAnimNotifyState_TemporaryCameraControl_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAnimNotifyState_TemporaryCameraControl_C", "Received_NotifyBegin");

	Params::PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.GetCameraComponent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerCameraComponent_C*      Camera                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAnimNotifyState_TemporaryCameraControl_C::GetCameraComponent(class AActor* OwnerActor, class UBP_PlayerCameraComponent_C** Camera) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAnimNotifyState_TemporaryCameraControl_C", "GetCameraComponent");

	Params::PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LookAtComponent

#include "Basic.hpp"

#include "LookAtComponent_classes.hpp"
#include "LookAtComponent_parameters.hpp"


namespace SDK
{

// Function LookAtComponent.LookAtComponent_C.ExecuteUbergraph_LookAtComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::ExecuteUbergraph_LookAtComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "ExecuteUbergraph_LookAtComponent");

	Params::LookAtComponent_C_ExecuteUbergraph_LookAtComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LookAtComponent.LookAtComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "ReceiveTick");

	Params::LookAtComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LookAtComponent.LookAtComponent_C.getAnim
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URSPlayerAnimInstance*            Anim                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetAnim(class URSPlayerAnimInstance** Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "getAnim");

	Params::LookAtComponent_C_GetAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Anim != nullptr)
		*Anim = Parms.Anim;
}


// Function LookAtComponent.LookAtComponent_C.calcLookAtRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULookAtComponent_C::CalcLookAtRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "calcLookAtRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LookAtComponent.LookAtComponent_C.getMeshComponent
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetMeshComponent(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "getMeshComponent");

	Params::LookAtComponent_C_GetMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function LookAtComponent.LookAtComponent_C.UpdateAnimLookAtRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ULookAtComponent_C::UpdateAnimLookAtRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "UpdateAnimLookAtRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LookAtComponent.LookAtComponent_C.ForceReset
// (Public, BlueprintCallable, BlueprintEvent)

void ULookAtComponent_C::ForceReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "ForceReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LookAtComponent.LookAtComponent_C.calcLookAtRotationLimit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         RawRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         LimitedRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULookAtComponent_C::CalcLookAtRotationLimit(const struct FRotator& RawRotation, struct FRotator* LimitedRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "calcLookAtRotationLimit");

	Params::LookAtComponent_C_CalcLookAtRotationLimit Parms{};

	Parms.RawRotation = std::move(RawRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (LimitedRotation != nullptr)
		*LimitedRotation = std::move(Parms.LimitedRotation);
}


// Function LookAtComponent.LookAtComponent_C.getMesh
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    Mesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetMesh(class USkeletalMesh** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "getMesh");

	Params::LookAtComponent_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function LookAtComponent.LookAtComponent_C.GetNpcMeshComponent
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNpcSkeletalMeshComponent*        NpcMesh                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetNpcMeshComponent(class UNpcSkeletalMeshComponent** NpcMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "GetNpcMeshComponent");

	Params::LookAtComponent_C_GetNpcMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NpcMesh != nullptr)
		*NpcMesh = Parms.NpcMesh;
}


// Function LookAtComponent.LookAtComponent_C.getNpcAnim
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URSNpcAnimInstance*               Anim                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetNpcAnim(class URSNpcAnimInstance** Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "getNpcAnim");

	Params::LookAtComponent_C_GetNpcAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Anim != nullptr)
		*Anim = Parms.Anim;
}


// Function LookAtComponent.LookAtComponent_C.getAjitoCharaAnim
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URSAjitoAnimInstance*             Anim                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::GetAjitoCharaAnim(class URSAjitoAnimInstance** Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "getAjitoCharaAnim");

	Params::LookAtComponent_C_GetAjitoCharaAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Anim != nullptr)
		*Anim = Parms.Anim;
}


// Function LookAtComponent.LookAtComponent_C.Get Look At Rotation Difference Yaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Difference                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtComponent_C::Get_Look_At_Rotation_Difference_Yaw(float* Difference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LookAtComponent_C", "Get Look At Rotation Difference Yaw");

	Params::LookAtComponent_C_Get_Look_At_Rotation_Difference_Yaw Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Difference != nullptr)
		*Difference = Parms.Difference;
}

}


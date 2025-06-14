#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GhostTrailComponent

#include "Basic.hpp"

#include "BP_GhostTrailComponent_classes.hpp"
#include "BP_GhostTrailComponent_parameters.hpp"


namespace SDK
{

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ExecuteUbergraph_BP_GhostTrailComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::ExecuteUbergraph_BP_GhostTrailComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "ExecuteUbergraph_BP_GhostTrailComponent");

	Params::BP_GhostTrailComponent_C_ExecuteUbergraph_BP_GhostTrailComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "ReceiveEndPlay");

	Params::BP_GhostTrailComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GhostTrailComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.InitManager
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::InitManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "InitManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddMeshesToGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::AddMeshesToGhost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "AddMeshesToGhost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.MeshMustCastTrails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*                  Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_GhostTrailComponent_C::MeshMustCastTrails(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "MeshMustCastTrails");

	Params::BP_GhostTrailComponent_C_MeshMustCastTrails Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GhostTrailComponent_C::SetTrailActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetTrailActive");

	Params::BP_GhostTrailComponent_C_SetTrailActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.GetTrailActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GhostTrailComponent_C::GetTrailActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "GetTrailActive");

	Params::BP_GhostTrailComponent_C_GetTrailActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.DestroyGhostAll
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::DestroyGhostAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "DestroyGhostAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetSpawnRandomDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_SpawnRandomDistance                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::SetSpawnRandomDistance(const struct FVector& Param_SpawnRandomDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetSpawnRandomDistance");

	Params::BP_GhostTrailComponent_C_SetSpawnRandomDistance Parms{};

	Parms.Param_SpawnRandomDistance = std::move(Param_SpawnRandomDistance);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ForceSpawnGhost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_GhostLifetime                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::ForceSpawnGhost(float Param_GhostLifetime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "ForceSpawnGhost");

	Params::BP_GhostTrailComponent_C_ForceSpawnGhost Parms{};

	Parms.Param_GhostLifetime = Param_GhostLifetime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SpawnManager
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GhostTrailManager_C*          Param_GhostTrailManager                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::SpawnManager(class ABP_GhostTrailManager_C** Param_GhostTrailManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SpawnManager");

	Params::BP_GhostTrailComponent_C_SpawnManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_GhostTrailManager != nullptr)
		*Param_GhostTrailManager = Parms.Param_GhostTrailManager;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetColor");

	Params::BP_GhostTrailComponent_C_SetColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddTrailMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::AddTrailMesh(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "AddTrailMesh");

	Params::BP_GhostTrailComponent_C_AddTrailMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.RemoveTrailMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::RemoveTrailMesh(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "RemoveTrailMesh");

	Params::BP_GhostTrailComponent_C_RemoveTrailMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPauseSpawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GhostTrailComponent_C::SetTrailPause(bool bPauseSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetTrailPause");

	Params::BP_GhostTrailComponent_C_SetTrailPause Parms{};

	Parms.bPauseSpawn = bPauseSpawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetVelocityDepending
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVelocityDepending                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GhostTrailComponent_C::SetVelocityDepending(bool bVelocityDepending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetVelocityDepending");

	Params::BP_GhostTrailComponent_C_SetVelocityDepending Parms{};

	Parms.bVelocityDepending = bVelocityDepending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetPhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPhotoMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   MeshOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CapsuleHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CapsuleRadius                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GhostTrailComponent_C::SetPhotoMode(bool bPhotoMode, float MeshOffset, float CapsuleHeight, float CapsuleRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "SetPhotoMode");

	Params::BP_GhostTrailComponent_C_SetPhotoMode Parms{};

	Parms.bPhotoMode = bPhotoMode;
	Parms.MeshOffset = MeshOffset;
	Parms.CapsuleHeight = CapsuleHeight;
	Parms.CapsuleRadius = CapsuleRadius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.PhotoModeTick
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::PhotoModeTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GhostTrailComponent_C", "PhotoModeTick");

	UObject::ProcessEvent(Func, nullptr);
}

}


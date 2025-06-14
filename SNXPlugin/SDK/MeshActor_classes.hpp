#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MeshActor.MeshActor_C
// 0x0010 (0x0240 - 0x0230)
class AMeshActor_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MeshActor_C">();
	}
	static class AMeshActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshActor_C>();
	}
};
static_assert(alignof(AMeshActor_C) == 0x000008, "Wrong alignment on AMeshActor_C");
static_assert(sizeof(AMeshActor_C) == 0x000240, "Wrong size on AMeshActor_C");
static_assert(offsetof(AMeshActor_C, StaticMesh) == 0x000230, "Member 'AMeshActor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AMeshActor_C, DefaultSceneRoot) == 0x000238, "Member 'AMeshActor_C::DefaultSceneRoot' has a wrong offset!");

}


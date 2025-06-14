#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FaceCap_sky

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FaceCap_sky.BP_FaceCap_sky_C
// 0x0008 (0x0238 - 0x0230)
class ABP_FaceCap_sky_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetStaticMesh(class UStaticMeshComponent** Param_StaticMesh);
	void GetSkeletalMesh(class USkeletalMeshComponent** SkeletalMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FaceCap_sky_C">();
	}
	static class ABP_FaceCap_sky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FaceCap_sky_C>();
	}
};
static_assert(alignof(ABP_FaceCap_sky_C) == 0x000008, "Wrong alignment on ABP_FaceCap_sky_C");
static_assert(sizeof(ABP_FaceCap_sky_C) == 0x000238, "Wrong size on ABP_FaceCap_sky_C");
static_assert(offsetof(ABP_FaceCap_sky_C, StaticMesh) == 0x000230, "Member 'ABP_FaceCap_sky_C::StaticMesh' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StaticCutSceneMainCamera

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StaticCutSceneMainCamera.BP_StaticCutSceneMainCamera_C
// 0x0000 (0x0A40 - 0x0A40)
class ABP_StaticCutSceneMainCamera_C final : public ACineCameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StaticCutSceneMainCamera_C">();
	}
	static class ABP_StaticCutSceneMainCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StaticCutSceneMainCamera_C>();
	}
};
static_assert(alignof(ABP_StaticCutSceneMainCamera_C) == 0x000010, "Wrong alignment on ABP_StaticCutSceneMainCamera_C");
static_assert(sizeof(ABP_StaticCutSceneMainCamera_C) == 0x000A40, "Wrong size on ABP_StaticCutSceneMainCamera_C");

}


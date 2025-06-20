#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerAiGoalActor

#include "Basic.hpp"

#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerAiGoalActor.BP_PlayerAiGoalActor_C
// 0x0008 (0x0238 - 0x0230)
class ABP_PlayerAiGoalActor_C final : public ARSGoalActorBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerAiGoalActor_C">();
	}
	static class ABP_PlayerAiGoalActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerAiGoalActor_C>();
	}
};
static_assert(alignof(ABP_PlayerAiGoalActor_C) == 0x000008, "Wrong alignment on ABP_PlayerAiGoalActor_C");
static_assert(sizeof(ABP_PlayerAiGoalActor_C) == 0x000238, "Wrong size on ABP_PlayerAiGoalActor_C");
static_assert(offsetof(ABP_PlayerAiGoalActor_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_PlayerAiGoalActor_C::DefaultSceneRoot' has a wrong offset!");

}


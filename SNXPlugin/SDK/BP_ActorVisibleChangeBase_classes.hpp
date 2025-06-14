#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorVisibleChangeBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActorVisibleChangeBase.BP_ActorVisibleChangeBase_C
// 0x0010 (0x0270 - 0x0260)
class ABP_ActorVisibleChangeBase_C final : public AActorVisibleChangeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         VisibleChangeRange;                                // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActorVisibleChangeBase(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActorVisibleChangeBase_C">();
	}
	static class ABP_ActorVisibleChangeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActorVisibleChangeBase_C>();
	}
};
static_assert(alignof(ABP_ActorVisibleChangeBase_C) == 0x000008, "Wrong alignment on ABP_ActorVisibleChangeBase_C");
static_assert(sizeof(ABP_ActorVisibleChangeBase_C) == 0x000270, "Wrong size on ABP_ActorVisibleChangeBase_C");
static_assert(offsetof(ABP_ActorVisibleChangeBase_C, UberGraphFrame) == 0x000260, "Member 'ABP_ActorVisibleChangeBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ActorVisibleChangeBase_C, VisibleChangeRange) == 0x000268, "Member 'ABP_ActorVisibleChangeBase_C::VisibleChangeRange' has a wrong offset!");

}


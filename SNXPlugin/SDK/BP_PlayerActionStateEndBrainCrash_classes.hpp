#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateEndBrainCrash

#include "Basic.hpp"

#include "BP_PlayerActionStateCommonBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerActionStateEndBrainCrash.BP_PlayerActionStateEndBrainCrash_C
// 0x0008 (0x00F0 - 0x00E8)
class UBP_PlayerActionStateEndBrainCrash_C final : public UBP_PlayerActionStateCommonBase_C
{
public:
	class UAnimMontage*                           AnimMontage;                                       // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int32 Enter(int32 Param);
	int32 Exit(int32 NextStateIndex);
	int32 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerActionStateEndBrainCrash_C">();
	}
	static class UBP_PlayerActionStateEndBrainCrash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerActionStateEndBrainCrash_C>();
	}
};
static_assert(alignof(UBP_PlayerActionStateEndBrainCrash_C) == 0x000008, "Wrong alignment on UBP_PlayerActionStateEndBrainCrash_C");
static_assert(sizeof(UBP_PlayerActionStateEndBrainCrash_C) == 0x0000F0, "Wrong size on UBP_PlayerActionStateEndBrainCrash_C");
static_assert(offsetof(UBP_PlayerActionStateEndBrainCrash_C, AnimMontage) == 0x0000E8, "Member 'UBP_PlayerActionStateEndBrainCrash_C::AnimMontage' has a wrong offset!");

}


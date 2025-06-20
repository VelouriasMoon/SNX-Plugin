#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_co2000Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_co2000Base.BP_co2000Base_C
// 0x0040 (0x0270 - 0x0230)
class ABP_co2000Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Anim_Start;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Anim_Loop;                                         // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Anim_End;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayAnim;                                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEndAnimStart;                                    // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A36[0x2];                                     // 0x0262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AnimPhase;                                         // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Anim_Base;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_co2000Base(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetWeakEffectParam(float CommonRate, float AttachRate, bool* Dummy);
	void StartWeakEffect(bool* Success);
	void EndWeakEffect(bool* Dummy);
	void StartAnim();
	void EndAnim();
	void UpdateAnim();
	void IsExistAnim(bool* IsExist);
	void SetBaseAnim();
	void ResetAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_co2000Base_C">();
	}
	static class ABP_co2000Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_co2000Base_C>();
	}
};
static_assert(alignof(ABP_co2000Base_C) == 0x000008, "Wrong alignment on ABP_co2000Base_C");
static_assert(sizeof(ABP_co2000Base_C) == 0x000270, "Wrong size on ABP_co2000Base_C");
static_assert(offsetof(ABP_co2000Base_C, UberGraphFrame) == 0x000230, "Member 'ABP_co2000Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, SkeletalMesh) == 0x000238, "Member 'ABP_co2000Base_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_co2000Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, Anim_Start) == 0x000248, "Member 'ABP_co2000Base_C::Anim_Start' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, Anim_Loop) == 0x000250, "Member 'ABP_co2000Base_C::Anim_Loop' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, Anim_End) == 0x000258, "Member 'ABP_co2000Base_C::Anim_End' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, IsPlayAnim) == 0x000260, "Member 'ABP_co2000Base_C::IsPlayAnim' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, IsEndAnimStart) == 0x000261, "Member 'ABP_co2000Base_C::IsEndAnimStart' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, AnimPhase) == 0x000264, "Member 'ABP_co2000Base_C::AnimPhase' has a wrong offset!");
static_assert(offsetof(ABP_co2000Base_C, Anim_Base) == 0x000268, "Member 'ABP_co2000Base_C::Anim_Base' has a wrong offset!");

}


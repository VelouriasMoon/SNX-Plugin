#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewStaticNodeActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NewStaticNodeActor.BP_NewStaticNodeActor_C
// 0x0078 (0x02A8 - 0x0230)
class ABP_NewStaticNodeActor_C final : public ARSNewStaticNodeActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Reference;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Joint_3;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Joint_2;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Joint_1;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Joint0;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 PhaseMesh;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEventPlAnimationCurveParam>    CurrentPlAnimationCurveDataList;                   // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EWaitPhaseMotionFrameType                     WaitPhaseMotionFrameType;                          // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ABD[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         DestroyActorList;                                  // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          RestoreOptimizeTickSkeletalMesh;                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RestoreOptimizeTickPhaseMesh;                      // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABE[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NewStaticNodeActor_C*               BeforeChildNewStaticNodeActor;                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NewStaticNodeActor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnStaticNodeMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
	void EventAttachAndVisibleNodeActor(class ABP_NewStaticNodeActor_C* ChildNodeActor);
	void OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
	void OnTimerStopAnimmontage(float Time, class UAnimMontage* AnimMontage);
	void PlayBaseNodeAnimation(const class FString& AnimMontagePath, class ABP_NewStaticNodeActor_C* ChildActor, class UAnimMontage* ShaderAnimMontage);
	void PlayPhaseNodeAnimation(const class FString& AnimMontagePath);
	void EventEnd();
	void AttachCapActorForPhaseNodeMesh(class ABPCaptureActor_C* ChildCapActor, class FName SocketName, bool NewVisibility);
	void SetVisibilityToChildCapActor(bool NewVisibility);
	void ClearChildCapActor(EPhaseAlphaCurveType AlphaFadeType);
	void ResetNewStaticNode();
	void IsPlayingCo0300Animation(class USkeletalMeshComponent* Param_SkeletalMesh, bool* IsPlaying);
	void IsPlayingBaseAnimation(bool* IsPlaying);
	void IsPlayingPhaseAnimation(bool* IsPlaying);
	void ClearStoreRTChildCapActor();
	void SetPhaseAnimCurveInfo(TArray<struct FEventPlAnimationCurveParam>& Param_CurrentPlAnimationCurveDataList);
	void GetPhaseAnimCurveValueToCurveName(class FName CurveName, float* CurveValue);
	void SetEndFrame();
	void OnOptimizeTick();
	void OffOptimizeTick();
	void SetPhasePlayRate(float NewPlayRate);
	float GetPhaseActiveMontagePlayLength();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NewStaticNodeActor_C">();
	}
	static class ABP_NewStaticNodeActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NewStaticNodeActor_C>();
	}
};
static_assert(alignof(ABP_NewStaticNodeActor_C) == 0x000008, "Wrong alignment on ABP_NewStaticNodeActor_C");
static_assert(sizeof(ABP_NewStaticNodeActor_C) == 0x0002A8, "Wrong size on ABP_NewStaticNodeActor_C");
static_assert(offsetof(ABP_NewStaticNodeActor_C, UberGraphFrame) == 0x000230, "Member 'ABP_NewStaticNodeActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, Reference) == 0x000238, "Member 'ABP_NewStaticNodeActor_C::Reference' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, Joint_3) == 0x000240, "Member 'ABP_NewStaticNodeActor_C::Joint_3' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, Joint_2) == 0x000248, "Member 'ABP_NewStaticNodeActor_C::Joint_2' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, Joint_1) == 0x000250, "Member 'ABP_NewStaticNodeActor_C::Joint_1' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, Joint0) == 0x000258, "Member 'ABP_NewStaticNodeActor_C::Joint0' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, PhaseMesh) == 0x000260, "Member 'ABP_NewStaticNodeActor_C::PhaseMesh' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, SkeletalMesh) == 0x000268, "Member 'ABP_NewStaticNodeActor_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, CurrentPlAnimationCurveDataList) == 0x000270, "Member 'ABP_NewStaticNodeActor_C::CurrentPlAnimationCurveDataList' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, WaitPhaseMotionFrameType) == 0x000280, "Member 'ABP_NewStaticNodeActor_C::WaitPhaseMotionFrameType' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, DestroyActorList) == 0x000288, "Member 'ABP_NewStaticNodeActor_C::DestroyActorList' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, RestoreOptimizeTickSkeletalMesh) == 0x000298, "Member 'ABP_NewStaticNodeActor_C::RestoreOptimizeTickSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, RestoreOptimizeTickPhaseMesh) == 0x000299, "Member 'ABP_NewStaticNodeActor_C::RestoreOptimizeTickPhaseMesh' has a wrong offset!");
static_assert(offsetof(ABP_NewStaticNodeActor_C, BeforeChildNewStaticNodeActor) == 0x0002A0, "Member 'ABP_NewStaticNodeActor_C::BeforeChildNewStaticNodeActor' has a wrong offset!");

}


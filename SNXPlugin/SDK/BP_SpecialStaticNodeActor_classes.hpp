#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpecialStaticNodeActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C
// 0x0060 (0x0290 - 0x0230)
class ABP_SpecialStaticNodeActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimelineAddAnimWeightCurve_Track_4AA338EB467D2FEDA66F329D4E6F79AE; // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TimelineAddAnimWeightCurve__Direction_4AA338EB467D2FEDA66F329D4E6F79AE; // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D4[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TimelineAddAnimWeightCurve;                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         VecAnimNamePath;                                   // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<bool>                                  VecIsAnimationLoop;                                // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 AnimInstance;                                      // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           StartMontage;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CurrentAddMontage;                                 // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DefaultAddAnimCurve;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SpecialStaticNodeActor(int32 EntryPoint);
	void SetNodeAddAnimWeightCurve(class UCurveFloat* Curve);
	void PlayAddSpecialNodeAnimMontage(const class FString& SpecialNodeAnimPath);
	void StopAddSpecialNodeAnimMontage();
	void _________0(class UAnimMontage* Montage);
	void OnNodeMeshAnimInitialized();
	void OnStaticNodeMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
	void WaitMontageEnd(class UAnimMontage* AnimMontage, float MontageLength);
	void PlaySpecialNodeAnimMontage(const class FString& SpecialNodeAnimPath, bool IsLoop);
	void AddSpecialNodeAnimation(const class FString& SpecialNodeAnimNamePath, bool IsLoop);
	void PlaySpecialNodeAnimation(const class FString& SpecialNodeAnimNamePath, bool IsLoop, bool IsAddMotion);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void TimelineAddAnimWeightCurve__UpdateFunc();
	void TimelineAddAnimWeightCurve__FinishedFunc();
	void PrivateAddSpecialNodeAnimation(const class FString& SpecialNodeAnimNamePath, bool IsLoop);
	void PrivatePlaySpecialNodeAnimation(const class FString& SpecialNodeAnimNamePath, bool IsLoop, bool IsAddMotion);
	void IsEndMotion(bool* Param_IsEndMotion);
	void PrivatePlaySpecialNodeAnimMontage(const class FString& SpecialNodeAnimNamePath, bool IsLoop, bool IsAdd);
	void OnAnimMontageEnded(class UAnimMontage* AnimMontage, bool Interrupted);
	void PrivateStopAddSpecialNodeAnimMontage();
	void GetSkeletalMesh(class USkeletalMeshComponent** Param_SkeletalMesh);
	void GetStaticMesh(class UStaticMeshComponent** StaticMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpecialStaticNodeActor_C">();
	}
	static class ABP_SpecialStaticNodeActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpecialStaticNodeActor_C>();
	}
};
static_assert(alignof(ABP_SpecialStaticNodeActor_C) == 0x000008, "Wrong alignment on ABP_SpecialStaticNodeActor_C");
static_assert(sizeof(ABP_SpecialStaticNodeActor_C) == 0x000290, "Wrong size on ABP_SpecialStaticNodeActor_C");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, UberGraphFrame) == 0x000230, "Member 'ABP_SpecialStaticNodeActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, SkeletalMesh) == 0x000238, "Member 'ABP_SpecialStaticNodeActor_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, TimelineAddAnimWeightCurve_Track_4AA338EB467D2FEDA66F329D4E6F79AE) == 0x000240, "Member 'ABP_SpecialStaticNodeActor_C::TimelineAddAnimWeightCurve_Track_4AA338EB467D2FEDA66F329D4E6F79AE' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, TimelineAddAnimWeightCurve__Direction_4AA338EB467D2FEDA66F329D4E6F79AE) == 0x000244, "Member 'ABP_SpecialStaticNodeActor_C::TimelineAddAnimWeightCurve__Direction_4AA338EB467D2FEDA66F329D4E6F79AE' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, TimelineAddAnimWeightCurve) == 0x000248, "Member 'ABP_SpecialStaticNodeActor_C::TimelineAddAnimWeightCurve' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, VecAnimNamePath) == 0x000250, "Member 'ABP_SpecialStaticNodeActor_C::VecAnimNamePath' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, VecIsAnimationLoop) == 0x000260, "Member 'ABP_SpecialStaticNodeActor_C::VecIsAnimationLoop' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, AnimInstance) == 0x000270, "Member 'ABP_SpecialStaticNodeActor_C::AnimInstance' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, StartMontage) == 0x000278, "Member 'ABP_SpecialStaticNodeActor_C::StartMontage' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, CurrentAddMontage) == 0x000280, "Member 'ABP_SpecialStaticNodeActor_C::CurrentAddMontage' has a wrong offset!");
static_assert(offsetof(ABP_SpecialStaticNodeActor_C, DefaultAddAnimCurve) == 0x000288, "Member 'ABP_SpecialStaticNodeActor_C::DefaultAddAnimCurve' has a wrong offset!");

}


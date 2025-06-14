#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_en_BattleField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_SplineMesh_CharaACT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_en_BattleField.BP_en_BattleField_C
// 0x0030 (0x0350 - 0x0320)
class ABP_en_BattleField_C final : public ABP_SplineMesh_CharaACT_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_en_BattleField_C;                // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         GroupID;                                           // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBattlefieldFenceStat                         Stat;                                              // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AD8[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BrainTalkCheckTime;                                // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitAwayDistance;                                   // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHitChecking;                                     // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD9[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HittingTime;                                       // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastHitPos;                                        // 0x0340(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_en_BattleField(int32 EntryPoint);
	void OnComponentHit______0(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void SetBattlefieldVisibleForce(bool Visible);
	void SetBattlefieldEnable(bool Enable);
	void UserConstructionScript();
	void SetBattlefieldEnableOld(bool Enable);
	void UpdateFence(float DeltaSeconds);
	void SetVisible(bool Visible);
	void UpdateFenceStart(float DeltaSeconds);
	void UpdateFenceEnd(float DeltaSeconds);
	void CheckBrainTalk(float DeltaSec);
	class USplineComponent* GetBattlefieldSpline();
	bool GetBattlefieldEnable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_en_BattleField_C">();
	}
	static class ABP_en_BattleField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_en_BattleField_C>();
	}
};
static_assert(alignof(ABP_en_BattleField_C) == 0x000008, "Wrong alignment on ABP_en_BattleField_C");
static_assert(sizeof(ABP_en_BattleField_C) == 0x000350, "Wrong size on ABP_en_BattleField_C");
static_assert(offsetof(ABP_en_BattleField_C, UberGraphFrame_BP_en_BattleField_C) == 0x000320, "Member 'ABP_en_BattleField_C::UberGraphFrame_BP_en_BattleField_C' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, GroupID) == 0x000328, "Member 'ABP_en_BattleField_C::GroupID' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, Stat) == 0x00032C, "Member 'ABP_en_BattleField_C::Stat' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, BrainTalkCheckTime) == 0x000330, "Member 'ABP_en_BattleField_C::BrainTalkCheckTime' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, HitAwayDistance) == 0x000334, "Member 'ABP_en_BattleField_C::HitAwayDistance' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, IsHitChecking) == 0x000338, "Member 'ABP_en_BattleField_C::IsHitChecking' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, HittingTime) == 0x00033C, "Member 'ABP_en_BattleField_C::HittingTime' has a wrong offset!");
static_assert(offsetof(ABP_en_BattleField_C, LastHitPos) == 0x000340, "Member 'ABP_en_BattleField_C::LastHitPos' has a wrong offset!");

}


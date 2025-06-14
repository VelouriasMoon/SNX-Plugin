#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonHitResultBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "CollisionCommonInfoBP_structs.hpp"
#include "CollisionRumtimeDataBP_structs.hpp"


namespace SDK
{

// UserDefinedStruct CommonHitResultBP.CommonHitResultBP
// 0x0190 (0x0190 - 0x0000)
struct FCommonHitResultBP final
{
public:
	struct FCollisionCommonInfoBP                 CommonInfo_12_E739648F4FA93897DF8353AC692C7A4C;    // 0x0000(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FCollisionRumtimeDataBP                RuntimeData_18_ED44C815415F768E32BC07961EC63247;   // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Primitive_5_508202FF408496C8FAFB22A76FE67F44;      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount_21_24BC553248A3BBD830BD5487184D449C;      // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitPosition_9_CC5E7836419B6626CCA81C9356D80D9D;    // 0x008C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OpponentActor_15_EC2C70FE4D19AD65EBBB958366199C2E; // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHCSkillCommonInfo                     Skill_24_1AF7390B49458BC28FD687B590A05947;         // 0x00A0(0x00F0)(Edit, BlueprintVisible)
};
static_assert(alignof(FCommonHitResultBP) == 0x000008, "Wrong alignment on FCommonHitResultBP");
static_assert(sizeof(FCommonHitResultBP) == 0x000190, "Wrong size on FCommonHitResultBP");
static_assert(offsetof(FCommonHitResultBP, CommonInfo_12_E739648F4FA93897DF8353AC692C7A4C) == 0x000000, "Member 'FCommonHitResultBP::CommonInfo_12_E739648F4FA93897DF8353AC692C7A4C' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, RuntimeData_18_ED44C815415F768E32BC07961EC63247) == 0x000078, "Member 'FCommonHitResultBP::RuntimeData_18_ED44C815415F768E32BC07961EC63247' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, Primitive_5_508202FF408496C8FAFB22A76FE67F44) == 0x000080, "Member 'FCommonHitResultBP::Primitive_5_508202FF408496C8FAFB22A76FE67F44' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, HitCount_21_24BC553248A3BBD830BD5487184D449C) == 0x000088, "Member 'FCommonHitResultBP::HitCount_21_24BC553248A3BBD830BD5487184D449C' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, HitPosition_9_CC5E7836419B6626CCA81C9356D80D9D) == 0x00008C, "Member 'FCommonHitResultBP::HitPosition_9_CC5E7836419B6626CCA81C9356D80D9D' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, OpponentActor_15_EC2C70FE4D19AD65EBBB958366199C2E) == 0x000098, "Member 'FCommonHitResultBP::OpponentActor_15_EC2C70FE4D19AD65EBBB958366199C2E' has a wrong offset!");
static_assert(offsetof(FCommonHitResultBP, Skill_24_1AF7390B49458BC28FD687B590A05947) == 0x0000A0, "Member 'FCommonHitResultBP::Skill_24_1AF7390B49458BC28FD687B590A05947' has a wrong offset!");

}


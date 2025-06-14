#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectFuncLibrary

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnAttachDeadVanishEffect
// 0x0150 (0x0150 - 0x0000)
struct EffectFuncLibrary_C_SpawnAttachDeadVanishEffect final
{
public:
	class ACharacter*                             DeadChara;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         AttachedMesh;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DeadParticle;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         DeadEffectParticle;                                // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C0[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0030(0x0080)(IsPlainOldData, NoDestructor)
	class URSParticleSystemComponentBase*         CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C1[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_1;              // 0x00C0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect) == 0x000010, "Wrong alignment on EffectFuncLibrary_C_SpawnAttachDeadVanishEffect");
static_assert(sizeof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect) == 0x000150, "Wrong size on EffectFuncLibrary_C_SpawnAttachDeadVanishEffect");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, DeadChara) == 0x000000, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::DeadChara' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, AttachedMesh) == 0x000008, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::AttachedMesh' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, DeadParticle) == 0x000010, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::DeadParticle' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, __WorldContext) == 0x000018, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::__WorldContext' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, DeadEffectParticle) == 0x000020, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::DeadEffectParticle' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, K2Node_MakeStruct_ParticleSysParam) == 0x000030, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000B0, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, K2Node_MakeStruct_ParticleSysParam_1) == 0x0000C0, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::K2Node_MakeStruct_ParticleSysParam_1' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnAttachDeadVanishEffect, K2Node_MakeArray_Array) == 0x000140, "Member 'EffectFuncLibrary_C_SpawnAttachDeadVanishEffect::K2Node_MakeArray_Array' has a wrong offset!");

// Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnDamageHitEffect
// 0x0290 (0x0290 - 0x0000)
struct EffectFuncLibrary_C_SpawnDamageHitEffect final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHCHitResult                           HitResult;                                         // 0x0008(0x01C0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Attacker_l;                                        // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDefaultDir_l;                                     // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          _IsFirstWeakAttack;                                // 0x01D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHCSkillExtraType                             SpawnActorLocation_l_;                             // 0x01DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C2[0x5];                                     // 0x01DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   Character_l;                                       // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHCSkillExtraType                             EffectUseHitInverseNormal;                         // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C3[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               EffectRotator;                                     // 0x01EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHCSkillExtraType                             EffectUseHitNormal;                                // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C4[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EffectBit;                                         // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDamageEffectType                            DamageEffectType_l;                                // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C5[0xF];                                     // 0x0201(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitDamageInfo                         HitDamageInfo;                                     // 0x0210(0x0060)(Edit, BlueprintVisible, NoDestructor)
	struct FVector                                EffectSpawnLocation_l;                             // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C6[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BattleManager_C*                    CallFunc_GetBattleManager_BattleManager;           // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EffectFuncLibrary_C_SpawnDamageHitEffect) == 0x000010, "Wrong alignment on EffectFuncLibrary_C_SpawnDamageHitEffect");
static_assert(sizeof(EffectFuncLibrary_C_SpawnDamageHitEffect) == 0x000290, "Wrong size on EffectFuncLibrary_C_SpawnDamageHitEffect");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, Actor) == 0x000000, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::Actor' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, HitResult) == 0x000008, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::HitResult' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, __WorldContext) == 0x0001C8, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::__WorldContext' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, Attacker_l) == 0x0001D0, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::Attacker_l' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, bDefaultDir_l) == 0x0001D8, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::bDefaultDir_l' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, _IsFirstWeakAttack) == 0x0001D9, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::_IsFirstWeakAttack' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, SpawnActorLocation_l_) == 0x0001DA, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::SpawnActorLocation_l_' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, Character_l) == 0x0001E0, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::Character_l' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, EffectUseHitInverseNormal) == 0x0001E8, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::EffectUseHitInverseNormal' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, EffectRotator) == 0x0001EC, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::EffectRotator' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, EffectUseHitNormal) == 0x0001F8, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::EffectUseHitNormal' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, EffectBit) == 0x0001FC, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::EffectBit' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, DamageEffectType_l) == 0x000200, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::DamageEffectType_l' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, HitDamageInfo) == 0x000210, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::HitDamageInfo' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, EffectSpawnLocation_l) == 0x000270, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::EffectSpawnLocation_l' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_SpawnDamageHitEffect, CallFunc_GetBattleManager_BattleManager) == 0x000280, "Member 'EffectFuncLibrary_C_SpawnDamageHitEffect::CallFunc_GetBattleManager_BattleManager' has a wrong offset!");

// Function EffectFuncLibrary.EffectFuncLibrary_C.GetHitResult
// 0x0238 (0x0238 - 0x0000)
struct EffectFuncLibrary_C_GetHitResult final
{
public:
	struct FHCHitResult                           HCHitResult;                                       // 0x0000(0x01C0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x01C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Attacker;                                          // 0x01C8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    WpPrimitive;                                       // 0x01D0(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitPosition;                                       // 0x01D8(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHCSkillAttackType                            Skill_AttackType;                                  // 0x01E4(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHCSkillType                                  Skill_SkillType;                                   // 0x01E5(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C7[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EHCSkillAttribute>                     Skill_Attribute;                                   // 0x01E8(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	class AActor*                                 AttackOwner;                                       // 0x01F8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x0200(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHCSkillEnemyHitEffect                        Skill_EnemyHItEffect;                              // 0x0201(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHCSkillEnemyHitEffect                        Skill_EnemyHitSound;                               // 0x0202(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C8[0x5];                                     // 0x0203(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EHCSkillExtraType>                     SkillExtraType;                                    // 0x0208(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0218(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Attack_Dir;                                        // 0x0224(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHCHitEffectInfo                       EffectInfo;                                        // 0x0230(0x0008)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(EffectFuncLibrary_C_GetHitResult) == 0x000008, "Wrong alignment on EffectFuncLibrary_C_GetHitResult");
static_assert(sizeof(EffectFuncLibrary_C_GetHitResult) == 0x000238, "Wrong size on EffectFuncLibrary_C_GetHitResult");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, HCHitResult) == 0x000000, "Member 'EffectFuncLibrary_C_GetHitResult::HCHitResult' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, __WorldContext) == 0x0001C0, "Member 'EffectFuncLibrary_C_GetHitResult::__WorldContext' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Attacker) == 0x0001C8, "Member 'EffectFuncLibrary_C_GetHitResult::Attacker' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, WpPrimitive) == 0x0001D0, "Member 'EffectFuncLibrary_C_GetHitResult::WpPrimitive' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, HitPosition) == 0x0001D8, "Member 'EffectFuncLibrary_C_GetHitResult::HitPosition' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Skill_AttackType) == 0x0001E4, "Member 'EffectFuncLibrary_C_GetHitResult::Skill_AttackType' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Skill_SkillType) == 0x0001E5, "Member 'EffectFuncLibrary_C_GetHitResult::Skill_SkillType' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Skill_Attribute) == 0x0001E8, "Member 'EffectFuncLibrary_C_GetHitResult::Skill_Attribute' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, AttackOwner) == 0x0001F8, "Member 'EffectFuncLibrary_C_GetHitResult::AttackOwner' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, IsCritical) == 0x000200, "Member 'EffectFuncLibrary_C_GetHitResult::IsCritical' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Skill_EnemyHItEffect) == 0x000201, "Member 'EffectFuncLibrary_C_GetHitResult::Skill_EnemyHItEffect' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Skill_EnemyHitSound) == 0x000202, "Member 'EffectFuncLibrary_C_GetHitResult::Skill_EnemyHitSound' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, SkillExtraType) == 0x000208, "Member 'EffectFuncLibrary_C_GetHitResult::SkillExtraType' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, HitNormal) == 0x000218, "Member 'EffectFuncLibrary_C_GetHitResult::HitNormal' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, Attack_Dir) == 0x000224, "Member 'EffectFuncLibrary_C_GetHitResult::Attack_Dir' has a wrong offset!");
static_assert(offsetof(EffectFuncLibrary_C_GetHitResult, EffectInfo) == 0x000230, "Member 'EffectFuncLibrary_C_GetHitResult::EffectInfo' has a wrong offset!");

}


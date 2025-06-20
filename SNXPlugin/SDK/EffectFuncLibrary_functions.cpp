#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectFuncLibrary

#include "Basic.hpp"

#include "EffectFuncLibrary_classes.hpp"
#include "EffectFuncLibrary_parameters.hpp"


namespace SDK
{

// Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnAttachDeadVanishEffect
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       DeadChara                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   AttachedMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  DeadParticle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URSParticleSystemComponentBase*   DeadEffectParticle                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffectFuncLibrary_C::SpawnAttachDeadVanishEffect(class ACharacter* DeadChara, class UMeshComponent* AttachedMesh, class UParticleSystem* DeadParticle, class UObject* __WorldContext, class URSParticleSystemComponentBase** DeadEffectParticle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EffectFuncLibrary_C", "SpawnAttachDeadVanishEffect");

	Params::EffectFuncLibrary_C_SpawnAttachDeadVanishEffect Parms{};

	Parms.DeadChara = DeadChara;
	Parms.AttachedMesh = AttachedMesh;
	Parms.DeadParticle = DeadParticle;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DeadEffectParticle != nullptr)
		*DeadEffectParticle = Parms.DeadEffectParticle;
}


// Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnDamageHitEffect
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHCHitResult                     HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffectFuncLibrary_C::SpawnDamageHitEffect(class AActor* Actor, struct FHCHitResult& HitResult, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EffectFuncLibrary_C", "SpawnDamageHitEffect");

	Params::EffectFuncLibrary_C_SpawnDamageHitEffect Parms{};

	Parms.Actor = Actor;
	Parms.HitResult = std::move(HitResult);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	HitResult = std::move(Parms.HitResult);
}


// Function EffectFuncLibrary.EffectFuncLibrary_C.GetHitResult
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHCHitResult                     HCHitResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Attacker                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              WpPrimitive                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHCSkillAttackType                      Skill_AttackType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHCSkillType                            Skill_SkillType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EHCSkillAttribute>               Skill_Attribute                                        (Parm, OutParm, HasGetValueTypeHash)
// class AActor*                           AttackOwner                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EHCSkillEnemyHitEffect                  Skill_EnemyHItEffect                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHCSkillEnemyHitEffect                  Skill_EnemyHitSound                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EHCSkillExtraType>               SkillExtraType                                         (Parm, OutParm, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Attack_Dir                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHCHitEffectInfo                 EffectInfo                                             (Parm, OutParm, NoDestructor)

void UEffectFuncLibrary_C::GetHitResult(struct FHCHitResult& HCHitResult, class UObject* __WorldContext, class AActor** Attacker, class UPrimitiveComponent** WpPrimitive, struct FVector* HitPosition, EHCSkillAttackType* Skill_AttackType, EHCSkillType* Skill_SkillType, TArray<EHCSkillAttribute>* Skill_Attribute, class AActor** AttackOwner, bool* IsCritical, EHCSkillEnemyHitEffect* Skill_EnemyHItEffect, EHCSkillEnemyHitEffect* Skill_EnemyHitSound, TArray<EHCSkillExtraType>* SkillExtraType, struct FVector* HitNormal, struct FVector* Attack_Dir, struct FHCHitEffectInfo* EffectInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EffectFuncLibrary_C", "GetHitResult");

	Params::EffectFuncLibrary_C_GetHitResult Parms{};

	Parms.HCHitResult = std::move(HCHitResult);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	HCHitResult = std::move(Parms.HCHitResult);

	if (Attacker != nullptr)
		*Attacker = Parms.Attacker;

	if (WpPrimitive != nullptr)
		*WpPrimitive = Parms.WpPrimitive;

	if (HitPosition != nullptr)
		*HitPosition = std::move(Parms.HitPosition);

	if (Skill_AttackType != nullptr)
		*Skill_AttackType = Parms.Skill_AttackType;

	if (Skill_SkillType != nullptr)
		*Skill_SkillType = Parms.Skill_SkillType;

	if (Skill_Attribute != nullptr)
		*Skill_Attribute = std::move(Parms.Skill_Attribute);

	if (AttackOwner != nullptr)
		*AttackOwner = Parms.AttackOwner;

	if (IsCritical != nullptr)
		*IsCritical = Parms.IsCritical;

	if (Skill_EnemyHItEffect != nullptr)
		*Skill_EnemyHItEffect = Parms.Skill_EnemyHItEffect;

	if (Skill_EnemyHitSound != nullptr)
		*Skill_EnemyHitSound = Parms.Skill_EnemyHitSound;

	if (SkillExtraType != nullptr)
		*SkillExtraType = std::move(Parms.SkillExtraType);

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (Attack_Dir != nullptr)
		*Attack_Dir = std::move(Parms.Attack_Dir);

	if (EffectInfo != nullptr)
		*EffectInfo = std::move(Parms.EffectInfo);
}

}


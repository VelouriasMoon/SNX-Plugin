#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_MaterialUtility

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_MaterialUtility.BPFL_MaterialUtility_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_MaterialUtility_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetEnemyBrainCrashWeakColor(bool HighDamage, class UObject* __WorldContext, struct FLinearColor* Color, float* Intensity);
	static void EnableMaterialPreSkinFacialNormal(class USkeletalMeshComponent* SkeletalMeshComponent, bool Enable, bool IsEvent, class UObject* __WorldContext);
	static void UpdateMaterialPreSkinFacialNormal(class USkeletalMeshComponent* SkeletalMeshComponent, bool IsEvent, class UObject* __WorldContext);
	static void UpdateMaterialPreSkinFacialNormalToSlots(class USkeletalMeshComponent* SkeletalMeshComponent, bool IsEvent, TArray<int32>& MaterialSlots, class UObject* __WorldContext);
	static void SearchMaterialPreSkinFacialNormalSlots(class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, TArray<int32>* MaterialSlots);
	static void EnableMaterialPreSkinFacialNormalNPC(class ANpcSkeletalMeshActor* NpcSkeletalMeshActor, bool Enable, bool IsEvent, class UObject* __WorldContext);
	static void UpdateMaterialPreSkinFacialNormalNPC(class ANpcSkeletalMeshActor* NpcSkeletalMeshActor, bool IsEvent, class UObject* __WorldContext);
	static void GetMaterialStealthParam(float Rate, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat);
	static void GetMaterialStealthParamEnemy(float Rate, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat);
	static void GetMaterialStealthParamEnemyFromTime(float Time, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat);
	static void GetMaterialStealthParamEnemyTimeMax(class UObject* __WorldContext, float* TimeMax);
	static void GetMaterialStealthVelocityRate(TArray<struct FVector>& LocationHistory, class UObject* __WorldContext, float* Opacity);
	static void GetMaterialStealthDataAsset(class UObject* __WorldContext, class UMaterialStealthParam** StealthParam);
	static void GetTranslucecnyNeonWireMaterial(class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext, bool* HasWireMaterial, class UMaterialInterface** WireMaterial, int32* WireMaterialIndex);
	static void ChangeTranslucecnyNeonWireMaterialDofOFF(class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext, bool* HasWireMaterial, int32* WireMaterialIndex, class UMaterialInterface** BeforeMaterial, class UMaterialInstanceDynamic** DofOFFWireMaterial);
	static void SetDitherRateEm1400UpperBody(class USkeletalMeshComponent* SkelMeshComp, float Rate, class UObject* __WorldContext);
	static void SetupMaterialLocationParamFromMat(class FName Key, TArray<class UMaterialInstanceDynamic*>& MIDs, class UObject* __WorldContext);
	static void SetupMaterialLocationParamFromMesh(class FName Key, class UMeshComponent* Mesh, class UObject* __WorldContext);
	static void ResetMeshMaterials(class UMeshComponent* MeshComp, class UObject* __WorldContext);
	static void CopyParticleMaterialFromMesh(class UMeshComponent* BaseMeshComp, int32 BaseMaterialIndex, class UParticleSystemComponent* TargetParticleSysComp, TArray<int32>& TargetMaterialIndexList, class UObject* __WorldContext);
	static void SetEm8310ArmTypeVisible(bool SkeletonArm, class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext);
	static void SetStealthMaterialPlayerIDParameter(class USkinnedMeshComponent* SkinnedMeshComp, EPlayerID PlayerId, class UObject* __WorldContext);
	static void SetStealthMaterialSkinMeshParameter(class USkinnedMeshComponent* SkinnedMeshComp, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_MaterialUtility_C">();
	}
	static class UBPFL_MaterialUtility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_MaterialUtility_C>();
	}
};
static_assert(alignof(UBPFL_MaterialUtility_C) == 0x000008, "Wrong alignment on UBPFL_MaterialUtility_C");
static_assert(sizeof(UBPFL_MaterialUtility_C) == 0x000028, "Wrong size on UBPFL_MaterialUtility_C");

}


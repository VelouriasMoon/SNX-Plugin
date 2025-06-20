#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyAroundWeakEffectComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C
// 0x0040 (0x0170 - 0x0130)
class UBP_EnemyAroundWeakEffectComponent_C final : public UEnemyAroundEffectComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                        AroundWeakEffect;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         EffectHandle;                                      // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   VertSurfaceParameterName;                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUseEffect;                                        // 0x0151(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AFE[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CommonRate;                                        // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttachRate;                                        // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   VertSurfaceParameterCommonRateName;                // 0x015C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   VertSurfaceParameterAttachRateName;                // 0x0164(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent(int32 EntryPoint);
	void UnregisterCameraDitherParticleHandle_FromNative(class AActor* Owner, class URSParticleSystemComponentBase* Param_EffectHandle);
	void RegisterCameraDitherParticleHandle_FromNative(class AActor* Owner, class URSParticleSystemComponentBase* Param_AroundWeakEffect);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void StartAroundWeakEffect(int32 Param_Index, bool* bSuccess);
	void EndAroundWeakEffect(int32 Param_Index);
	void SetVisibleEffect(bool Visible);
	void IsVisibleEffect(bool* Param_bVisible);
	void IsUseEffect(bool* Use);
	void SetEffectParam(float NewCommonRate, float NewAttachRate, bool* Dummy);
	void HiddenEffect(bool NewHidden, bool* Dummy);
	void IsVisible(bool* Param_IsVisible);
	class URSParticleSystemComponentBase* SpawnEmitter_FromNative(class USkeletalMeshComponent* TargetMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyAroundWeakEffectComponent_C">();
	}
	static class UBP_EnemyAroundWeakEffectComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyAroundWeakEffectComponent_C>();
	}
};
static_assert(alignof(UBP_EnemyAroundWeakEffectComponent_C) == 0x000008, "Wrong alignment on UBP_EnemyAroundWeakEffectComponent_C");
static_assert(sizeof(UBP_EnemyAroundWeakEffectComponent_C) == 0x000170, "Wrong size on UBP_EnemyAroundWeakEffectComponent_C");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, UberGraphFrame) == 0x000130, "Member 'UBP_EnemyAroundWeakEffectComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, AroundWeakEffect) == 0x000138, "Member 'UBP_EnemyAroundWeakEffectComponent_C::AroundWeakEffect' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, EffectHandle) == 0x000140, "Member 'UBP_EnemyAroundWeakEffectComponent_C::EffectHandle' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, VertSurfaceParameterName) == 0x000148, "Member 'UBP_EnemyAroundWeakEffectComponent_C::VertSurfaceParameterName' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, bVisible) == 0x000150, "Member 'UBP_EnemyAroundWeakEffectComponent_C::bVisible' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, bUseEffect) == 0x000151, "Member 'UBP_EnemyAroundWeakEffectComponent_C::bUseEffect' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, CommonRate) == 0x000154, "Member 'UBP_EnemyAroundWeakEffectComponent_C::CommonRate' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, AttachRate) == 0x000158, "Member 'UBP_EnemyAroundWeakEffectComponent_C::AttachRate' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, VertSurfaceParameterCommonRateName) == 0x00015C, "Member 'UBP_EnemyAroundWeakEffectComponent_C::VertSurfaceParameterCommonRateName' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAroundWeakEffectComponent_C, VertSurfaceParameterAttachRateName) == 0x000164, "Member 'UBP_EnemyAroundWeakEffectComponent_C::VertSurfaceParameterAttachRateName' has a wrong offset!");

}


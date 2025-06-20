#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyVisionFogComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C
// 0x00E0 (0x01A0 - 0x00C0)
class UBP_EnemyVisionFogComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         StartSeconds;                                      // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoopSeconds;                                       // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndSeconds;                                        // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDeltaSeconds;                                 // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         State;                                             // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92E5[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PostProcessManager_C*               PostProcessMng;                                    // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EffectLocation;                                    // 0x00E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeApplyR;                                       // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVisionFogID                                  VisionFogID;                                       // 0x00FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAllArea;                                         // 0x00FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E6[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckFogStateSeconds;                              // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VisibleLengthRate;                                 // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AppearLengthDiff;                                  // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SubAlpha;                                          // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            VisionFogRateCurveData;                            // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          VisionFogLoopSE;                                   // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSAtomComponentBase*                   AtomComponent;                                     // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForceEnableTime;                                   // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentForceEnableTime;                            // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEndVisionFog;                                     // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E7[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 VisionFogAreaName;                                 // 0x0138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         SmokeApplyH;                                       // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92E8[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndVisionFog;                                    // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EVisionFogID                                  AnotherVisionFogID;                                // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUsingAnother;                                     // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EVisionFogID                                  UseVisionFogID;                                    // 0x0162(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChangingFogParam;                                 // 0x0163(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRestoringBasicParam;                              // 0x0164(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStoringBasicParam;                                // 0x0165(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E9[0x2];                                     // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultFogFar;                                     // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultFogInNear;                                  // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultFogPower;                                   // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeFogFar;                                      // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeFogInNear;                                   // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeFogPower;                                    // 0x017C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTimer                             ChangeBasicParamTimer;                             // 0x0180(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ChangeBasicParamTime;                              // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeAlpha;                                       // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultAlpha;                                      // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UniqueAlpha;                                       // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseUniqueFog;                                     // 0x019C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnEndVisionFog__DelegateSignature();
	void ExecuteUbergraph_BP_EnemyVisionFogComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Start(float FogStartSeconds, float FogLoopSeconds, float FogEndSeconds, const struct FVector& SpawnLocation, bool ArgIsAllArea, float Param_ForceEnableTime);
	void Update(float DeltaSeconds);
	void InitNext(bool bForce, int32 NextState);
	void Exit();
	void StartAnother(float FogStartSeconds, float FogLoopSeconds, float FogEndSeconds, const struct FVector& SpawnLocation, bool ArgIsAllArea, float Param_ForceEnableTime);
	void IsVisionFog(bool* Param_IsVisionFog);
	void CalcAlpha(float DeltaSeconds, bool IsApply, bool IsStart, bool IsEnd);
	void SetAllActorFog(bool IsVisionFog);
	void ClearActorFog();
	void SetVisibleActor(class ARSBattleEnemy_C* Enemy, bool Visible);
	void ForceEndFog();
	void SetFogParam(float InAppearLengthDiff, float InSmokeApplyR, float InSmokeApplyH);
	void GetUseVisionFogID(EVisionFogID* ID);
	void StoreChangeFogParameter(bool InForce);
	void RestoreChangeFogParameter(bool InForce);
	void UpdateChangeFogParameter(float DeltaSec);
	void SetChangeFogParameter(float InDefaultFogFar, float InChangeFogFar, float InDefaultFogInNear, float InChangeFogInNear, float InDefaultAlpha, float InChangeAlpha, float InChangeParamTime);
	void GetAlpha(float* Param_Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyVisionFogComponent_C">();
	}
	static class UBP_EnemyVisionFogComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyVisionFogComponent_C>();
	}
};
static_assert(alignof(UBP_EnemyVisionFogComponent_C) == 0x000008, "Wrong alignment on UBP_EnemyVisionFogComponent_C");
static_assert(sizeof(UBP_EnemyVisionFogComponent_C) == 0x0001A0, "Wrong size on UBP_EnemyVisionFogComponent_C");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_EnemyVisionFogComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, StartSeconds) == 0x0000C8, "Member 'UBP_EnemyVisionFogComponent_C::StartSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, LoopSeconds) == 0x0000CC, "Member 'UBP_EnemyVisionFogComponent_C::LoopSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, EndSeconds) == 0x0000D0, "Member 'UBP_EnemyVisionFogComponent_C::EndSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, TotalDeltaSeconds) == 0x0000D4, "Member 'UBP_EnemyVisionFogComponent_C::TotalDeltaSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, State) == 0x0000D8, "Member 'UBP_EnemyVisionFogComponent_C::State' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, PostProcessMng) == 0x0000E0, "Member 'UBP_EnemyVisionFogComponent_C::PostProcessMng' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, EffectLocation) == 0x0000E8, "Member 'UBP_EnemyVisionFogComponent_C::EffectLocation' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, SmokeApplyR) == 0x0000F4, "Member 'UBP_EnemyVisionFogComponent_C::SmokeApplyR' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, Alpha) == 0x0000F8, "Member 'UBP_EnemyVisionFogComponent_C::Alpha' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, VisionFogID) == 0x0000FC, "Member 'UBP_EnemyVisionFogComponent_C::VisionFogID' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, IsAllArea) == 0x0000FD, "Member 'UBP_EnemyVisionFogComponent_C::IsAllArea' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, CheckFogStateSeconds) == 0x000100, "Member 'UBP_EnemyVisionFogComponent_C::CheckFogStateSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, VisibleLengthRate) == 0x000104, "Member 'UBP_EnemyVisionFogComponent_C::VisibleLengthRate' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, AppearLengthDiff) == 0x000108, "Member 'UBP_EnemyVisionFogComponent_C::AppearLengthDiff' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, SubAlpha) == 0x00010C, "Member 'UBP_EnemyVisionFogComponent_C::SubAlpha' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, VisionFogRateCurveData) == 0x000110, "Member 'UBP_EnemyVisionFogComponent_C::VisionFogRateCurveData' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, VisionFogLoopSE) == 0x000118, "Member 'UBP_EnemyVisionFogComponent_C::VisionFogLoopSE' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, AtomComponent) == 0x000120, "Member 'UBP_EnemyVisionFogComponent_C::AtomComponent' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ForceEnableTime) == 0x000128, "Member 'UBP_EnemyVisionFogComponent_C::ForceEnableTime' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, CurrentForceEnableTime) == 0x00012C, "Member 'UBP_EnemyVisionFogComponent_C::CurrentForceEnableTime' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bEndVisionFog) == 0x000130, "Member 'UBP_EnemyVisionFogComponent_C::bEndVisionFog' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, VisionFogAreaName) == 0x000138, "Member 'UBP_EnemyVisionFogComponent_C::VisionFogAreaName' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, SmokeApplyH) == 0x000148, "Member 'UBP_EnemyVisionFogComponent_C::SmokeApplyH' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, OnEndVisionFog) == 0x000150, "Member 'UBP_EnemyVisionFogComponent_C::OnEndVisionFog' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, AnotherVisionFogID) == 0x000160, "Member 'UBP_EnemyVisionFogComponent_C::AnotherVisionFogID' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bUsingAnother) == 0x000161, "Member 'UBP_EnemyVisionFogComponent_C::bUsingAnother' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, UseVisionFogID) == 0x000162, "Member 'UBP_EnemyVisionFogComponent_C::UseVisionFogID' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bChangingFogParam) == 0x000163, "Member 'UBP_EnemyVisionFogComponent_C::bChangingFogParam' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bRestoringBasicParam) == 0x000164, "Member 'UBP_EnemyVisionFogComponent_C::bRestoringBasicParam' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bStoringBasicParam) == 0x000165, "Member 'UBP_EnemyVisionFogComponent_C::bStoringBasicParam' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, DefaultFogFar) == 0x000168, "Member 'UBP_EnemyVisionFogComponent_C::DefaultFogFar' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, DefaultFogInNear) == 0x00016C, "Member 'UBP_EnemyVisionFogComponent_C::DefaultFogInNear' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, DefaultFogPower) == 0x000170, "Member 'UBP_EnemyVisionFogComponent_C::DefaultFogPower' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeFogFar) == 0x000174, "Member 'UBP_EnemyVisionFogComponent_C::ChangeFogFar' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeFogInNear) == 0x000178, "Member 'UBP_EnemyVisionFogComponent_C::ChangeFogInNear' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeFogPower) == 0x00017C, "Member 'UBP_EnemyVisionFogComponent_C::ChangeFogPower' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeBasicParamTimer) == 0x000180, "Member 'UBP_EnemyVisionFogComponent_C::ChangeBasicParamTimer' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeBasicParamTime) == 0x00018C, "Member 'UBP_EnemyVisionFogComponent_C::ChangeBasicParamTime' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, ChangeAlpha) == 0x000190, "Member 'UBP_EnemyVisionFogComponent_C::ChangeAlpha' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, DefaultAlpha) == 0x000194, "Member 'UBP_EnemyVisionFogComponent_C::DefaultAlpha' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, UniqueAlpha) == 0x000198, "Member 'UBP_EnemyVisionFogComponent_C::UniqueAlpha' has a wrong offset!");
static_assert(offsetof(UBP_EnemyVisionFogComponent_C, bUseUniqueFog) == 0x00019C, "Member 'UBP_EnemyVisionFogComponent_C::bUseUniqueFog' has a wrong offset!");

}


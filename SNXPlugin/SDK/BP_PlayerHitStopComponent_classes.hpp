#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerHitStopComponent

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "EHitSlowDelayType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerHitStopComponent.BP_PlayerHitStopComponent_C
// 0x00B8 (0x0178 - 0x00C0)
class UBP_PlayerHitStopComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 WeakHitName;                                       // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         HitStopReturnSeconds;                              // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F47[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      MainPlayer;                                        // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerFixParamater_C*               FixParam;                                          // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHitStop;                                         // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F48[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority;                                          // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IgnoreHitStopSeconds;                              // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentStartDelayTime;                             // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerHitStopType                            StartDelayHitType;                                 // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F49[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 StartDelayEnemy;                                   // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartDelayHitStopSec;                              // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartDelayHitStopRate;                             // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartDelayAllThrow;                                // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartDelayTarget;                                  // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStartDelay;                                      // 0x011A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4A[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             BeginHitSlow;                                      // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSkipUpdate1Frame;                                 // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             HitSlowDataTable;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             HitSlowDelayTable;                                 // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           HitSlowDataTableRowNames;                          // 0x0148(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           HitSlowDelayDataTableRowNames;                     // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          StartSlowOnce;                                     // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4C[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayOnceTime;                                     // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartDelaySlowOnce;                                // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BeginHitSlow__DelegateSignature();
	void ExecuteUbergraph_BP_PlayerHitStopComponent(int32 EntryPoint);
	void DelayOnceEnd();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Update(float DeltaSeconds);
	void StartWeakHitStop(EPlayerHitStopType HitType, class AActor* Enemy, class AActor* Attacker, float HitStopSeconds, float HitStopRate, bool IsAllThrow, class AActor* Player, bool IsTargetHitStop, bool InStartSlowOnce);
	void IsTargetLockCanHitStop(class AActor* TargetActor, class AActor* Enemy, class AActor* Attacker, bool* IsTargetHitStop);
	void Exit();
	void Clear();
	void ForceEnd();
	void GetPriority(EPlayerHitStopType Type, int32* Param_Priority);
	void GetHitStopParam(EPlayerHitStopType NewType, EPlayerHitStopType CurrentType, EPlayerHitStopType* SuccessType, bool* IsSuccess, float* Seconds, float* Rate, float* DelayTime);
	void GetPlayerDamageType(EPlayerDamageKind DamageType, EPlayerHitStopType* HitStopType);
	void ClearStartDelay();
	void SetStartDelay(EPlayerHitStopType HitType, class AActor* Attacker, class AActor* Enemy, bool IsAllThrow, EHCHitStopCauseType CauseType, bool bTargetIgnore, bool InPlaySlowOnce);
	void GetPsychicObjHitStopType(EHCSkillExtraType ExtraType, EPlayerHitStopType* HitStopType);
	void GetParamByType(EPlayerHitStopType Type, float* Second, float* Rate, float* DelayTime, int32* Num);
	void IsStartCauseType(EPlayerHitStopType HitSlowType, EHCHitStopCauseType CauseType, const struct FHCHitResult& HitResult, bool* bStart);
	void Initialize();
	void GetHitSlowRowName(uint8 Type, bool bDelayTable, class FName* RowName);
	void PhysicsIdling();
	void CheckPlayNexusDriveTelepoAttack(const struct FHCHitResult& HitResult, bool* bEnablePlay, class AActor** Attacker, EPlayerHitStopType* SlowType, EHCHitStopCauseType* CauseType, bool* bIgnoreTarget, struct FHCSkillCommonInfo* Skill);
	void IsStopAble(bool* bResult);

	void IsHitStopPlaying(bool* IsPlaying) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerHitStopComponent_C">();
	}
	static class UBP_PlayerHitStopComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerHitStopComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerHitStopComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerHitStopComponent_C");
static_assert(sizeof(UBP_PlayerHitStopComponent_C) == 0x000178, "Wrong size on UBP_PlayerHitStopComponent_C");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_PlayerHitStopComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, WeakHitName) == 0x0000C8, "Member 'UBP_PlayerHitStopComponent_C::WeakHitName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, HitStopReturnSeconds) == 0x0000D8, "Member 'UBP_PlayerHitStopComponent_C::HitStopReturnSeconds' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, MainPlayer) == 0x0000E0, "Member 'UBP_PlayerHitStopComponent_C::MainPlayer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, FixParam) == 0x0000E8, "Member 'UBP_PlayerHitStopComponent_C::FixParam' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, IsHitStop) == 0x0000F0, "Member 'UBP_PlayerHitStopComponent_C::IsHitStop' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, Priority) == 0x0000F4, "Member 'UBP_PlayerHitStopComponent_C::Priority' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, IgnoreHitStopSeconds) == 0x0000F8, "Member 'UBP_PlayerHitStopComponent_C::IgnoreHitStopSeconds' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, CurrentStartDelayTime) == 0x0000FC, "Member 'UBP_PlayerHitStopComponent_C::CurrentStartDelayTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayHitType) == 0x000100, "Member 'UBP_PlayerHitStopComponent_C::StartDelayHitType' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayEnemy) == 0x000108, "Member 'UBP_PlayerHitStopComponent_C::StartDelayEnemy' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayHitStopSec) == 0x000110, "Member 'UBP_PlayerHitStopComponent_C::StartDelayHitStopSec' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayHitStopRate) == 0x000114, "Member 'UBP_PlayerHitStopComponent_C::StartDelayHitStopRate' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayAllThrow) == 0x000118, "Member 'UBP_PlayerHitStopComponent_C::StartDelayAllThrow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelayTarget) == 0x000119, "Member 'UBP_PlayerHitStopComponent_C::StartDelayTarget' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, IsStartDelay) == 0x00011A, "Member 'UBP_PlayerHitStopComponent_C::IsStartDelay' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, BeginHitSlow) == 0x000120, "Member 'UBP_PlayerHitStopComponent_C::BeginHitSlow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, bSkipUpdate1Frame) == 0x000130, "Member 'UBP_PlayerHitStopComponent_C::bSkipUpdate1Frame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, HitSlowDataTable) == 0x000138, "Member 'UBP_PlayerHitStopComponent_C::HitSlowDataTable' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, HitSlowDelayTable) == 0x000140, "Member 'UBP_PlayerHitStopComponent_C::HitSlowDelayTable' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, HitSlowDataTableRowNames) == 0x000148, "Member 'UBP_PlayerHitStopComponent_C::HitSlowDataTableRowNames' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, HitSlowDelayDataTableRowNames) == 0x000158, "Member 'UBP_PlayerHitStopComponent_C::HitSlowDelayDataTableRowNames' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartSlowOnce) == 0x000168, "Member 'UBP_PlayerHitStopComponent_C::StartSlowOnce' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, DelayOnceTime) == 0x00016C, "Member 'UBP_PlayerHitStopComponent_C::DelayOnceTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerHitStopComponent_C, StartDelaySlowOnce) == 0x000170, "Member 'UBP_PlayerHitStopComponent_C::StartDelaySlowOnce' has a wrong offset!");

}


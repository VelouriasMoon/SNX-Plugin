#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JustDodge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JustDodge.BP_JustDodge_C
// 0x0098 (0x0170 - 0x00D8)
class UBP_JustDodge_C final : public UPlayerJustDodgeComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bEnable;                                           // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5781[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameTimer                             SlowTimer;                                         // 0x00E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FString                                 CustomTimeName;                                    // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   ClaimantName;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTimer                             InvincibleTimer;                                   // 0x0108(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReserve;                                          // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5782[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ARsBattleHero_C*                        ControlOwnerHero;                                  // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PrevPlayerTimeDilationScale;                       // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5783[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            TimeDilationCurve;                                 // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            GlobalTimeDilationCurve;                           // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastGlobalTimeDilation;                            // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CheckLocation;                                     // 0x013C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CheckUpDir;                                        // 0x0148(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckHeight;                                       // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckRadius;                                       // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JUST_DODGE_ACCEPT_TIME;                            // 0x015C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckScale;                                        // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckRangeScale;                                   // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckAcceptTime;                                   // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNexusDriveBestJustDodge;                          // 0x016C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNexusDriveBestJustDodgeDrive;                     // 0x016D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_JustDodge(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Start(float PrevElapsedTime, float CheckElapsedTime);
	void End();
	bool CheckJustDodge();
	void UpdateTimeDilation();
	void RemoveTimeDilation();
	void SettingCheckParameter(bool* bSuccess);
	void DebugDraw();
	void IsNexusDriveBestJustDodge(bool* bBestJustDodge);
	void NexusDriveBestJustDodge();
	void NexusDriveBestJustDodgeAttackBegin();

	void GetCheckAcceptTime(float* Time) const;
	void IsJustDodgeDirection(bool* bJustDodge) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JustDodge_C">();
	}
	static class UBP_JustDodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JustDodge_C>();
	}
};
static_assert(alignof(UBP_JustDodge_C) == 0x000008, "Wrong alignment on UBP_JustDodge_C");
static_assert(sizeof(UBP_JustDodge_C) == 0x000170, "Wrong size on UBP_JustDodge_C");
static_assert(offsetof(UBP_JustDodge_C, UberGraphFrame) == 0x0000D8, "Member 'UBP_JustDodge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, bEnable) == 0x0000E0, "Member 'UBP_JustDodge_C::bEnable' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, SlowTimer) == 0x0000E4, "Member 'UBP_JustDodge_C::SlowTimer' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CustomTimeName) == 0x0000F0, "Member 'UBP_JustDodge_C::CustomTimeName' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, ClaimantName) == 0x000100, "Member 'UBP_JustDodge_C::ClaimantName' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, InvincibleTimer) == 0x000108, "Member 'UBP_JustDodge_C::InvincibleTimer' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, bReserve) == 0x000114, "Member 'UBP_JustDodge_C::bReserve' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, ControlOwnerHero) == 0x000118, "Member 'UBP_JustDodge_C::ControlOwnerHero' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, PrevPlayerTimeDilationScale) == 0x000120, "Member 'UBP_JustDodge_C::PrevPlayerTimeDilationScale' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, TimeDilationCurve) == 0x000128, "Member 'UBP_JustDodge_C::TimeDilationCurve' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, GlobalTimeDilationCurve) == 0x000130, "Member 'UBP_JustDodge_C::GlobalTimeDilationCurve' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, LastGlobalTimeDilation) == 0x000138, "Member 'UBP_JustDodge_C::LastGlobalTimeDilation' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckLocation) == 0x00013C, "Member 'UBP_JustDodge_C::CheckLocation' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckUpDir) == 0x000148, "Member 'UBP_JustDodge_C::CheckUpDir' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckHeight) == 0x000154, "Member 'UBP_JustDodge_C::CheckHeight' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckRadius) == 0x000158, "Member 'UBP_JustDodge_C::CheckRadius' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, JUST_DODGE_ACCEPT_TIME) == 0x00015C, "Member 'UBP_JustDodge_C::JUST_DODGE_ACCEPT_TIME' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckScale) == 0x000160, "Member 'UBP_JustDodge_C::CheckScale' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckRangeScale) == 0x000164, "Member 'UBP_JustDodge_C::CheckRangeScale' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, CheckAcceptTime) == 0x000168, "Member 'UBP_JustDodge_C::CheckAcceptTime' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, bNexusDriveBestJustDodge) == 0x00016C, "Member 'UBP_JustDodge_C::bNexusDriveBestJustDodge' has a wrong offset!");
static_assert(offsetof(UBP_JustDodge_C, bNexusDriveBestJustDodgeDrive) == 0x00016D, "Member 'UBP_JustDodge_C::bNexusDriveBestJustDodgeDrive' has a wrong offset!");

}


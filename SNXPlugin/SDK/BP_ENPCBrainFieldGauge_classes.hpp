#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ENPCBrainFieldGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C
// 0x0050 (0x0110 - 0x00C0)
class UBP_ENPCBrainFieldGauge_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         PARAM_ADD_ATTACK_MAINPLAYER;                       // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PARAM_ADD_ATTACK_SUBPLAYER;                        // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PARAM_ADD_DAMAGE;                                  // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PARAM_ADD_TIME;                                    // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableGauge;                                      // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInBrainFieldMode;                                 // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D32[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GaugeValue;                                        // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PARAM_GAUGE_MAX;                                   // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTimer                             GaugeTimer;                                        // 0x00E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PARAM_BRAINFIELD_TIME;                             // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayableBrainField;                               // 0x00F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D33[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PARAM_ADD_DAMAGE_BRAINFIELD_TIME;                  // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUpdateGauge;                                      // 0x00FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D34[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           IgnoreUpdateName;                                  // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ENPCBrainFieldGauge(int32 EntryPoint);
	void OnChangedBrainFieldEnd(EBrainFieldEndType EndType);
	void OnChangedBrainFieldStart();
	void OnChangedBrainFieldBG(bool IsBrainField);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void AddGaugeByAttack(class AActor* Attacker);
	void Set_Enable_Gauge(bool bEnable, bool bForce, class AActor* BrainFieldUser);
	void SetMode(bool bInBrainField, class AActor* BFUser);
	void TickBrainField();
	void TickNormalField();
	void ResetGauge();
	void AddGaugeByDefense(class AActor* Attacker);
	void SetVisibleGauge(bool bVisible, bool bFromEnpc);
	void SetUpdateGauge(bool bUpdate, class FName ClaimantName);
	void SetFullGauge();

	void GetGaugeRate(float* Rate) const;
	void IsEnableGauge(bool* Param_bEnableGauge) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ENPCBrainFieldGauge_C">();
	}
	static class UBP_ENPCBrainFieldGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ENPCBrainFieldGauge_C>();
	}
};
static_assert(alignof(UBP_ENPCBrainFieldGauge_C) == 0x000008, "Wrong alignment on UBP_ENPCBrainFieldGauge_C");
static_assert(sizeof(UBP_ENPCBrainFieldGauge_C) == 0x000110, "Wrong size on UBP_ENPCBrainFieldGauge_C");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_ENPCBrainFieldGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_ADD_ATTACK_MAINPLAYER) == 0x0000C8, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_ADD_ATTACK_MAINPLAYER' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_ADD_ATTACK_SUBPLAYER) == 0x0000CC, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_ADD_ATTACK_SUBPLAYER' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_ADD_DAMAGE) == 0x0000D0, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_ADD_DAMAGE' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_ADD_TIME) == 0x0000D4, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_ADD_TIME' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, bEnableGauge) == 0x0000D8, "Member 'UBP_ENPCBrainFieldGauge_C::bEnableGauge' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, bInBrainFieldMode) == 0x0000D9, "Member 'UBP_ENPCBrainFieldGauge_C::bInBrainFieldMode' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, GaugeValue) == 0x0000DC, "Member 'UBP_ENPCBrainFieldGauge_C::GaugeValue' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_GAUGE_MAX) == 0x0000E0, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_GAUGE_MAX' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, GaugeTimer) == 0x0000E4, "Member 'UBP_ENPCBrainFieldGauge_C::GaugeTimer' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_BRAINFIELD_TIME) == 0x0000F0, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_BRAINFIELD_TIME' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, bPlayableBrainField) == 0x0000F4, "Member 'UBP_ENPCBrainFieldGauge_C::bPlayableBrainField' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, PARAM_ADD_DAMAGE_BRAINFIELD_TIME) == 0x0000F8, "Member 'UBP_ENPCBrainFieldGauge_C::PARAM_ADD_DAMAGE_BRAINFIELD_TIME' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, bUpdateGauge) == 0x0000FC, "Member 'UBP_ENPCBrainFieldGauge_C::bUpdateGauge' has a wrong offset!");
static_assert(offsetof(UBP_ENPCBrainFieldGauge_C, IgnoreUpdateName) == 0x000100, "Member 'UBP_ENPCBrainFieldGauge_C::IgnoreUpdateName' has a wrong offset!");

}


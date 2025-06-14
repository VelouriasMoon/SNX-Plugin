#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateDown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerActionStateBase_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerActionStateDown.BP_PlayerActionStateDown_C
// 0x0030 (0x0118 - 0x00E8)
class UBP_PlayerActionStateDown_C final : public UBP_PlayerActionStateBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerActionStateDown_C;         // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPlayerDownType                               DownType;                                          // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4742[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameTimer                             Timer;                                             // 0x00F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ECharacterHitPriority                         StoreCharacterHitPriority;                         // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4743[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ClaimantName;                                      // 0x0104(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInvincible;                                       // 0x010C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBrainFieldTimeUp;                                 // 0x010D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBrainCrash;                                       // 0x010E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4744[0x1];                                     // 0x010F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReviveTimer;                                       // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDeadFlag;                                         // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAutoRevive;                                       // 0x0115(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bActivateRessurectIcon;                            // 0x0116(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerActionStateDown(int32 EntryPoint);
	void UnbindResurrectEvent();
	void BindResurrectEvent();
	int32 Enter(int32 Param);
	int32 Update();
	bool Transition();
	int32 Exit(int32 NextStateIndex);
	void OnSuccessResurrect(class AActor* RevivePlayer);
	void UpdateAutoRevive();
	void CheckDeadTips();
	void PluginNpcRevive(bool* bSuccess);

	void IsInvincible(EPlayerDownType Type, bool* Param_bInvincible) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerActionStateDown_C">();
	}
	static class UBP_PlayerActionStateDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerActionStateDown_C>();
	}
};
static_assert(alignof(UBP_PlayerActionStateDown_C) == 0x000008, "Wrong alignment on UBP_PlayerActionStateDown_C");
static_assert(sizeof(UBP_PlayerActionStateDown_C) == 0x000118, "Wrong size on UBP_PlayerActionStateDown_C");
static_assert(offsetof(UBP_PlayerActionStateDown_C, UberGraphFrame_BP_PlayerActionStateDown_C) == 0x0000E8, "Member 'UBP_PlayerActionStateDown_C::UberGraphFrame_BP_PlayerActionStateDown_C' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, DownType) == 0x0000F0, "Member 'UBP_PlayerActionStateDown_C::DownType' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, Timer) == 0x0000F4, "Member 'UBP_PlayerActionStateDown_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, StoreCharacterHitPriority) == 0x000100, "Member 'UBP_PlayerActionStateDown_C::StoreCharacterHitPriority' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, ClaimantName) == 0x000104, "Member 'UBP_PlayerActionStateDown_C::ClaimantName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bInvincible) == 0x00010C, "Member 'UBP_PlayerActionStateDown_C::bInvincible' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bBrainFieldTimeUp) == 0x00010D, "Member 'UBP_PlayerActionStateDown_C::bBrainFieldTimeUp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bBrainCrash) == 0x00010E, "Member 'UBP_PlayerActionStateDown_C::bBrainCrash' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, ReviveTimer) == 0x000110, "Member 'UBP_PlayerActionStateDown_C::ReviveTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bDeadFlag) == 0x000114, "Member 'UBP_PlayerActionStateDown_C::bDeadFlag' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bAutoRevive) == 0x000115, "Member 'UBP_PlayerActionStateDown_C::bAutoRevive' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateDown_C, bActivateRessurectIcon) == 0x000116, "Member 'UBP_PlayerActionStateDown_C::bActivateRessurectIcon' has a wrong offset!");

}


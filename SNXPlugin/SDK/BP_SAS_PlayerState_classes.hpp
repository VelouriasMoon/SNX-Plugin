#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SAS_PlayerState

#include "Basic.hpp"

#include "FSASCommand_structs.hpp"
#include "E_SASKind_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SAS_PlayerState.BP_SAS_PlayerState_C
// 0x0038 (0x00F8 - 0x00C0)
class UBP_SAS_PlayerState_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ActiveFlag;                                        // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8567[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFSASCommand>                   SAS_CommandArray;                                  // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bPauseTimer;                                       // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8568[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  bDelayEndFlag;                                     // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SAS_PlayerState(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetActiveFlag(E_SASButton SASButton, bool On);
	void IsAnyActiveSAS(bool* Acitve);
	void IsActiveSAS(E_SASKind SAS_Kind, bool* Active);
	void Update(float DeltaSeconds);
	void RegistCommandParam(E_SASButton SASButton, const struct FFSASCommand& SAS_CommandParam);
	void GetCommandAccelerator(struct FAcceleratorParam* Command, class AActor** Owner);
	void SAS_End(E_SASButton SASButton);
	void SubRemainTime(E_SASKind Kind, float SubTime);
	void PauseTimer(bool Param_bPauseTimer);
	void SetDelayEndFlag(E_SASKind Kind, bool bDelay);
	void RecoverRemainTimeByRate(E_SASKind Kind, float RecoverRate);
	void RecoverRemainTime(E_SASKind Kind, float RecoverTime);
	void SubRemainTimeMax(E_SASKind Kind);
	void GetActiveSecondsFromKind(E_SASKind Kind, float* ActiveSeconds, float* MaxTime);
	void ChargeRemainTime(float ChargeRate);

	void GetActiveSeconds(E_SASButton SASButton, float* ActiveSeconds) const;
	void GetActiveSecondsRate(E_SASButton Button, float* Rate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SAS_PlayerState_C">();
	}
	static class UBP_SAS_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SAS_PlayerState_C>();
	}
};
static_assert(alignof(UBP_SAS_PlayerState_C) == 0x000008, "Wrong alignment on UBP_SAS_PlayerState_C");
static_assert(sizeof(UBP_SAS_PlayerState_C) == 0x0000F8, "Wrong size on UBP_SAS_PlayerState_C");
static_assert(offsetof(UBP_SAS_PlayerState_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_SAS_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SAS_PlayerState_C, ActiveFlag) == 0x0000C8, "Member 'UBP_SAS_PlayerState_C::ActiveFlag' has a wrong offset!");
static_assert(offsetof(UBP_SAS_PlayerState_C, SAS_CommandArray) == 0x0000D0, "Member 'UBP_SAS_PlayerState_C::SAS_CommandArray' has a wrong offset!");
static_assert(offsetof(UBP_SAS_PlayerState_C, bPauseTimer) == 0x0000E0, "Member 'UBP_SAS_PlayerState_C::bPauseTimer' has a wrong offset!");
static_assert(offsetof(UBP_SAS_PlayerState_C, bDelayEndFlag) == 0x0000E8, "Member 'UBP_SAS_PlayerState_C::bDelayEndFlag' has a wrong offset!");

}


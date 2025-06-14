#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_0000_EventTips_Base

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MakeEventActorChild_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_0000_EventTips_Base.BP_0000_EventTips_Base_C
// 0x00D0 (0x0558 - 0x0488)
class ABP_0000_EventTips_Base_C : public ABP_MakeEventActorChild_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_0000_EventTips_Base_C;           // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsFreeMoveTipswithMovie;                           // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotUseTips;                                        // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8890[0x6];                                     // 0x0492(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EHelpTutorial>                         HelpID_M;                                          // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<EHelpTutorial>                         HelpID_F;                                          // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsNextDialog_M;                                    // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNextDialog_F;                                    // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAutoSave_M;                                      // 0x04BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAutoSave_F;                                      // 0x04BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8891[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventBPPath_M;                                     // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 EventBPPath_F;                                     // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 EventBP_M;                                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 EventBP_F;                                         // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EventPriolity;                                     // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SetProgressID_M;                                   // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SetProgressID_F;                                   // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8892[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           SetScenarioFlag_M;                                 // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           SetScenarioFlag_F;                                 // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         TriggerWaitTime_M;                                 // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerWaitTime_F;                                 // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EContentsOpening>                      SetContentsOpened;                                 // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         DropDataIndex_M;                                   // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DropDataIndex_F;                                   // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DeadEnemyLevel_M;                                  // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DeadEnemyLevel_F;                                  // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseEndDelayBattleLog_M;                            // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseEndDelayBattleLog_F;                            // 0x0549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUseEventBP_MEventPriolity;                       // 0x054A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8893[0x1];                                     // 0x054B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EventBP_MEventPriolity;                            // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseTalkEvent_UIVisible;                          // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_0000_EventTips_Base(int32 EntryPoint);
	void SubEvent(class AMainEventLatentActor* Latenter);
	void StartEvent();
	void BPEventEnd();
	void AfterSettingEvent(class AMainEventLatentActor* Latenter);
	void PlControl_AfterSettings();
	void TriggerWaitTimeSettings();
	void ProgresIDSettings();
	void ScenarioFlagSettings();
	void UseSetEnemyDeadFromEvent();
	void UseDelayBattleLog();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_0000_EventTips_Base_C">();
	}
	static class ABP_0000_EventTips_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_0000_EventTips_Base_C>();
	}
};
static_assert(alignof(ABP_0000_EventTips_Base_C) == 0x000008, "Wrong alignment on ABP_0000_EventTips_Base_C");
static_assert(sizeof(ABP_0000_EventTips_Base_C) == 0x000558, "Wrong size on ABP_0000_EventTips_Base_C");
static_assert(offsetof(ABP_0000_EventTips_Base_C, UberGraphFrame_BP_0000_EventTips_Base_C) == 0x000488, "Member 'ABP_0000_EventTips_Base_C::UberGraphFrame_BP_0000_EventTips_Base_C' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsFreeMoveTipswithMovie) == 0x000490, "Member 'ABP_0000_EventTips_Base_C::IsFreeMoveTipswithMovie' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, NotUseTips) == 0x000491, "Member 'ABP_0000_EventTips_Base_C::NotUseTips' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, HelpID_M) == 0x000498, "Member 'ABP_0000_EventTips_Base_C::HelpID_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, HelpID_F) == 0x0004A8, "Member 'ABP_0000_EventTips_Base_C::HelpID_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsNextDialog_M) == 0x0004B8, "Member 'ABP_0000_EventTips_Base_C::IsNextDialog_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsNextDialog_F) == 0x0004B9, "Member 'ABP_0000_EventTips_Base_C::IsNextDialog_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsAutoSave_M) == 0x0004BA, "Member 'ABP_0000_EventTips_Base_C::IsAutoSave_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsAutoSave_F) == 0x0004BB, "Member 'ABP_0000_EventTips_Base_C::IsAutoSave_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventBPPath_M) == 0x0004C0, "Member 'ABP_0000_EventTips_Base_C::EventBPPath_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventBPPath_F) == 0x0004D0, "Member 'ABP_0000_EventTips_Base_C::EventBPPath_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventBP_M) == 0x0004E0, "Member 'ABP_0000_EventTips_Base_C::EventBP_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventBP_F) == 0x0004E8, "Member 'ABP_0000_EventTips_Base_C::EventBP_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventPriolity) == 0x0004F0, "Member 'ABP_0000_EventTips_Base_C::EventPriolity' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, SetProgressID_M) == 0x0004F4, "Member 'ABP_0000_EventTips_Base_C::SetProgressID_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, SetProgressID_F) == 0x0004F8, "Member 'ABP_0000_EventTips_Base_C::SetProgressID_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, SetScenarioFlag_M) == 0x000500, "Member 'ABP_0000_EventTips_Base_C::SetScenarioFlag_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, SetScenarioFlag_F) == 0x000510, "Member 'ABP_0000_EventTips_Base_C::SetScenarioFlag_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, TriggerWaitTime_M) == 0x000520, "Member 'ABP_0000_EventTips_Base_C::TriggerWaitTime_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, TriggerWaitTime_F) == 0x000524, "Member 'ABP_0000_EventTips_Base_C::TriggerWaitTime_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, SetContentsOpened) == 0x000528, "Member 'ABP_0000_EventTips_Base_C::SetContentsOpened' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, DropDataIndex_M) == 0x000538, "Member 'ABP_0000_EventTips_Base_C::DropDataIndex_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, DropDataIndex_F) == 0x00053C, "Member 'ABP_0000_EventTips_Base_C::DropDataIndex_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, DeadEnemyLevel_M) == 0x000540, "Member 'ABP_0000_EventTips_Base_C::DeadEnemyLevel_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, DeadEnemyLevel_F) == 0x000544, "Member 'ABP_0000_EventTips_Base_C::DeadEnemyLevel_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, UseEndDelayBattleLog_M) == 0x000548, "Member 'ABP_0000_EventTips_Base_C::UseEndDelayBattleLog_M' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, UseEndDelayBattleLog_F) == 0x000549, "Member 'ABP_0000_EventTips_Base_C::UseEndDelayBattleLog_F' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsUseEventBP_MEventPriolity) == 0x00054A, "Member 'ABP_0000_EventTips_Base_C::IsUseEventBP_MEventPriolity' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, EventBP_MEventPriolity) == 0x00054C, "Member 'ABP_0000_EventTips_Base_C::EventBP_MEventPriolity' has a wrong offset!");
static_assert(offsetof(ABP_0000_EventTips_Base_C, IsUseTalkEvent_UIVisible) == 0x000550, "Member 'ABP_0000_EventTips_Base_C::IsUseTalkEvent_UIVisible' has a wrong offset!");

}


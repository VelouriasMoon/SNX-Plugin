#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Notice_Quest_reward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Notice_Quest_reward.WB_ui_Notice_Quest_reward_C
// 0x00E0 (0x0558 - 0x0478)
class UWB_ui_Notice_Quest_reward_C final : public UUINoticeQuestReward
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Choise_list;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_category_1;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_category_2;                                   // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_category_3;                                   // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_base_1;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_base_2;                                  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_base_3;                                  // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_frame_1;                                 // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_frame_2;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_frame_3;                                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_notice_quest_reward_1;                        // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_notice_quest_reward_2;                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_notice_quest_reward_3;                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_notice_quest_reward_mes;                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_notice_quest_reward_title;                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextSet_reward_1;                                  // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextSet_reward_2;                                  // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextSet_reward_3;                                  // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_base;                                        // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Choise_parts_1_C*                WB_ui_Choise_parts_1_1;                            // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Choise_parts_1_C*                WB_ui_Choise_parts_1_2;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   QuestId;                                           // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERSGamepadLayoutType                          OldLayout;                                         // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Notice_Quest_reward(int32 EntryPoint);
	void WidgetAnimationEvt_out_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_in_K2Node_WidgetAnimationEvent_0();
	void SetItemCategoryIcon(class UImage* ImageCategory, EItemIcon Category);
	void SetItemRarity(class UImage* ImageRarity, EItemRarity Rarity);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	void StateNone(int32 SubState);
	bool OpenStartReward(class FName Param_QuestId);
	void StateOpen(int32 SubState);
	void StateLoop(int32 SubState);
	void StateClose(int32 SubState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Notice_Quest_reward_C">();
	}
	static class UWB_ui_Notice_Quest_reward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Notice_Quest_reward_C>();
	}
};
static_assert(alignof(UWB_ui_Notice_Quest_reward_C) == 0x000008, "Wrong alignment on UWB_ui_Notice_Quest_reward_C");
static_assert(sizeof(UWB_ui_Notice_Quest_reward_C) == 0x000558, "Wrong size on UWB_ui_Notice_Quest_reward_C");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, UberGraphFrame) == 0x000478, "Member 'UWB_ui_Notice_Quest_reward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Out) == 0x000480, "Member 'UWB_ui_Notice_Quest_reward_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, In) == 0x000488, "Member 'UWB_ui_Notice_Quest_reward_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Default_none) == 0x000490, "Member 'UWB_ui_Notice_Quest_reward_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Default) == 0x000498, "Member 'UWB_ui_Notice_Quest_reward_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Choise_list) == 0x0004A0, "Member 'UWB_ui_Notice_Quest_reward_C::Choise_list' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Icon_category_1) == 0x0004A8, "Member 'UWB_ui_Notice_Quest_reward_C::Icon_category_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Icon_category_2) == 0x0004B0, "Member 'UWB_ui_Notice_Quest_reward_C::Icon_category_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Icon_category_3) == 0x0004B8, "Member 'UWB_ui_Notice_Quest_reward_C::Icon_category_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_base_1) == 0x0004C0, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_base_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_base_2) == 0x0004C8, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_base_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_base_3) == 0x0004D0, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_base_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_frame_1) == 0x0004D8, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_frame_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_frame_2) == 0x0004E0, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_frame_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Item_icon_frame_3) == 0x0004E8, "Member 'UWB_ui_Notice_Quest_reward_C::Item_icon_frame_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Text_notice_quest_reward_1) == 0x0004F0, "Member 'UWB_ui_Notice_Quest_reward_C::Text_notice_quest_reward_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Text_notice_quest_reward_2) == 0x0004F8, "Member 'UWB_ui_Notice_Quest_reward_C::Text_notice_quest_reward_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Text_notice_quest_reward_3) == 0x000500, "Member 'UWB_ui_Notice_Quest_reward_C::Text_notice_quest_reward_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Text_notice_quest_reward_mes) == 0x000508, "Member 'UWB_ui_Notice_Quest_reward_C::Text_notice_quest_reward_mes' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Text_notice_quest_reward_title) == 0x000510, "Member 'UWB_ui_Notice_Quest_reward_C::Text_notice_quest_reward_title' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, TextSet_reward_1) == 0x000518, "Member 'UWB_ui_Notice_Quest_reward_C::TextSet_reward_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, TextSet_reward_2) == 0x000520, "Member 'UWB_ui_Notice_Quest_reward_C::TextSet_reward_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, TextSet_reward_3) == 0x000528, "Member 'UWB_ui_Notice_Quest_reward_C::TextSet_reward_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, Title_base) == 0x000530, "Member 'UWB_ui_Notice_Quest_reward_C::Title_base' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, WB_ui_Choise_parts_1_1) == 0x000538, "Member 'UWB_ui_Notice_Quest_reward_C::WB_ui_Choise_parts_1_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, WB_ui_Choise_parts_1_2) == 0x000540, "Member 'UWB_ui_Notice_Quest_reward_C::WB_ui_Choise_parts_1_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, QuestId) == 0x000548, "Member 'UWB_ui_Notice_Quest_reward_C::QuestId' has a wrong offset!");
static_assert(offsetof(UWB_ui_Notice_Quest_reward_C, OldLayout) == 0x000550, "Member 'UWB_ui_Notice_Quest_reward_C::OldLayout' has a wrong offset!");

}


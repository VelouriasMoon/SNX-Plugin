#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_SasLink_slot_parts_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "Enum_ui_saslink_slot_parts_2_animation_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_SasLink_slot_parts_2.WB_ui_SasLink_slot_parts_2_C
// 0x00A0 (0x0428 - 0x0388)
class UWB_ui_SasLink_slot_parts_2_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Decision_1;                                        // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_3_2;                                        // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_3_1;                                        // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_2_3;                                        // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_1_3;                                        // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_in_2;                                       // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_in_1;                                       // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_3;                                          // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_2_1;                                        // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_1_1;                                        // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_2;                                         // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_1;                                         // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_cursor_1;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_cursor_2;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SAS_Base;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sas_frame_pattern;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sas_icon;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sas_icon_add;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_SASKindNative                               SkillID;                                           // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SASKindNative                               CurrentSkillID;                                    // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlagDecide;                                        // 0x0422(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FlagLock;                                          // 0x0423(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FlagCurrentLock;                                   // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FlagSelect;                                        // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_ui_SasLink_slot_parts_2(int32 EntryPoint);
	void OnInitialized();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	void StateNone(int32 SubState);
	void StateLoop(int32 SubState);
	void StateLoopSelect(int32 SubState);
	void SetSkill(E_SASKindNative Param_SkillID, bool IsChange);
	void Decide();
	void Unlock();
	void UpdateIcon();
	void GetDefaultAnimIndex(int32* Param_Index);
	void GetChangeLockAnimIndex(int32* Param_Index);
	void GetSelectInAnimIndex(int32* Param_Index);
	void GetSelectAnimIndex(int32* Param_Index);
	void GetSelectOutAnimIndex(int32* Param_Index);
	void SetSelect(bool IsSelect);
	void Lock();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_SasLink_slot_parts_2_C">();
	}
	static class UWB_ui_SasLink_slot_parts_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_SasLink_slot_parts_2_C>();
	}
};
static_assert(alignof(UWB_ui_SasLink_slot_parts_2_C) == 0x000008, "Wrong alignment on UWB_ui_SasLink_slot_parts_2_C");
static_assert(sizeof(UWB_ui_SasLink_slot_parts_2_C) == 0x000428, "Wrong size on UWB_ui_SasLink_slot_parts_2_C");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_SasLink_slot_parts_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Decision_1) == 0x000390, "Member 'UWB_ui_SasLink_slot_parts_2_C::Decision_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Change_3_2) == 0x000398, "Member 'UWB_ui_SasLink_slot_parts_2_C::Change_3_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Change_3_1) == 0x0003A0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Change_3_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Change_2_3) == 0x0003A8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Change_2_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Change_1_3) == 0x0003B0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Change_1_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Select_in_2) == 0x0003B8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Select_in_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Select_in_1) == 0x0003C0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Select_in_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Select_3) == 0x0003C8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Select_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Select_2_1) == 0x0003D0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Select_2_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Select_1_1) == 0x0003D8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Select_1_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Default_2) == 0x0003E0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Default_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Default_1) == 0x0003E8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Default_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Icon_cursor_1) == 0x0003F0, "Member 'UWB_ui_SasLink_slot_parts_2_C::Icon_cursor_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Icon_cursor_2) == 0x0003F8, "Member 'UWB_ui_SasLink_slot_parts_2_C::Icon_cursor_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, SAS_Base) == 0x000400, "Member 'UWB_ui_SasLink_slot_parts_2_C::SAS_Base' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Sas_frame_pattern) == 0x000408, "Member 'UWB_ui_SasLink_slot_parts_2_C::Sas_frame_pattern' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Sas_icon) == 0x000410, "Member 'UWB_ui_SasLink_slot_parts_2_C::Sas_icon' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, Sas_icon_add) == 0x000418, "Member 'UWB_ui_SasLink_slot_parts_2_C::Sas_icon_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, SkillID) == 0x000420, "Member 'UWB_ui_SasLink_slot_parts_2_C::SkillID' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, CurrentSkillID) == 0x000421, "Member 'UWB_ui_SasLink_slot_parts_2_C::CurrentSkillID' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, FlagDecide) == 0x000422, "Member 'UWB_ui_SasLink_slot_parts_2_C::FlagDecide' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, FlagLock) == 0x000423, "Member 'UWB_ui_SasLink_slot_parts_2_C::FlagLock' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, FlagCurrentLock) == 0x000424, "Member 'UWB_ui_SasLink_slot_parts_2_C::FlagCurrentLock' has a wrong offset!");
static_assert(offsetof(UWB_ui_SasLink_slot_parts_2_C, FlagSelect) == 0x000425, "Member 'UWB_ui_SasLink_slot_parts_2_C::FlagSelect' has a wrong offset!");

}


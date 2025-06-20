#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_ConfigList_Parts_6

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_ConfigList_Parts_6.WB_ui_ConfigList_Parts_6_C
// 0x0090 (0x06A0 - 0x0610)
class UWB_ui_ConfigList_Parts_6_C final : public UUIConfigSelect4
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select_out;                                        // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_in;                                         // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select;                                            // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UREDHorizonFlipbookWidget*              PF_Arrow_L;                                        // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDHorizonFlipbookWidget*              PF_Arrow_R;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_config_list_1;                                // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Config_Parts_4_C*                WB_ui_Config_Parts_4_0;                            // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Config_Parts_4_C*                WB_ui_Config_Parts_4_1;                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Config_Parts_4_C*                WB_ui_Config_Parts_4_2;                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Config_Parts_4_C*                WB_ui_Config_Parts_4_3;                            // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Config_Parts_4_C*                WB_ui_Config_Parts_4_4;                            // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperFlipbook*                         DefaultPF;                                         // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         SelectPF;                                          // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         SelectInPF;                                        // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         SelectOutPF;                                       // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         DecisionPF;                                        // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_ConfigList_Parts_6(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_ConfigList_Parts_6_C">();
	}
	static class UWB_ui_ConfigList_Parts_6_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_ConfigList_Parts_6_C>();
	}
};
static_assert(alignof(UWB_ui_ConfigList_Parts_6_C) == 0x000008, "Wrong alignment on UWB_ui_ConfigList_Parts_6_C");
static_assert(sizeof(UWB_ui_ConfigList_Parts_6_C) == 0x0006A0, "Wrong size on UWB_ui_ConfigList_Parts_6_C");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, UberGraphFrame) == 0x000610, "Member 'UWB_ui_ConfigList_Parts_6_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, Select_out) == 0x000618, "Member 'UWB_ui_ConfigList_Parts_6_C::Select_out' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, Select_in) == 0x000620, "Member 'UWB_ui_ConfigList_Parts_6_C::Select_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, Select) == 0x000628, "Member 'UWB_ui_ConfigList_Parts_6_C::Select' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, Default) == 0x000630, "Member 'UWB_ui_ConfigList_Parts_6_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, PF_Arrow_L) == 0x000638, "Member 'UWB_ui_ConfigList_Parts_6_C::PF_Arrow_L' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, PF_Arrow_R) == 0x000640, "Member 'UWB_ui_ConfigList_Parts_6_C::PF_Arrow_R' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, Text_config_list_1) == 0x000648, "Member 'UWB_ui_ConfigList_Parts_6_C::Text_config_list_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, WB_ui_Config_Parts_4_0) == 0x000650, "Member 'UWB_ui_ConfigList_Parts_6_C::WB_ui_Config_Parts_4_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, WB_ui_Config_Parts_4_1) == 0x000658, "Member 'UWB_ui_ConfigList_Parts_6_C::WB_ui_Config_Parts_4_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, WB_ui_Config_Parts_4_2) == 0x000660, "Member 'UWB_ui_ConfigList_Parts_6_C::WB_ui_Config_Parts_4_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, WB_ui_Config_Parts_4_3) == 0x000668, "Member 'UWB_ui_ConfigList_Parts_6_C::WB_ui_Config_Parts_4_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, WB_ui_Config_Parts_4_4) == 0x000670, "Member 'UWB_ui_ConfigList_Parts_6_C::WB_ui_Config_Parts_4_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, DefaultPF) == 0x000678, "Member 'UWB_ui_ConfigList_Parts_6_C::DefaultPF' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, SelectPF) == 0x000680, "Member 'UWB_ui_ConfigList_Parts_6_C::SelectPF' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, SelectInPF) == 0x000688, "Member 'UWB_ui_ConfigList_Parts_6_C::SelectInPF' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, SelectOutPF) == 0x000690, "Member 'UWB_ui_ConfigList_Parts_6_C::SelectOutPF' has a wrong offset!");
static_assert(offsetof(UWB_ui_ConfigList_Parts_6_C, DecisionPF) == 0x000698, "Member 'UWB_ui_ConfigList_Parts_6_C::DecisionPF' has a wrong offset!");

}


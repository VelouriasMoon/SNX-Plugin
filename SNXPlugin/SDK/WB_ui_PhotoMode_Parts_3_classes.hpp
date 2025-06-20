#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_PhotoMode_Parts_3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_PhotoMode_Parts_3.WB_ui_PhotoMode_Parts_3_C
// 0x0058 (0x04A8 - 0x0450)
class UWB_ui_PhotoMode_Parts_3_C final : public UUIPhotoModeIndexSlider
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select_out;                                        // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_in;                                         // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select;                                            // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Guage_1;                                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDHorizonFlipbookWidget*              PF_Arrow_L;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDHorizonFlipbookWidget*              PF_Arrow_R;                                        // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDImage*                              Slider_1;                                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_category_2;                                   // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_contents_2_num;                               // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_PhotoMode_Parts_3(int32 EntryPoint);
	void OnInitialized();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_PhotoMode_Parts_3_C">();
	}
	static class UWB_ui_PhotoMode_Parts_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_PhotoMode_Parts_3_C>();
	}
};
static_assert(alignof(UWB_ui_PhotoMode_Parts_3_C) == 0x000008, "Wrong alignment on UWB_ui_PhotoMode_Parts_3_C");
static_assert(sizeof(UWB_ui_PhotoMode_Parts_3_C) == 0x0004A8, "Wrong size on UWB_ui_PhotoMode_Parts_3_C");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, UberGraphFrame) == 0x000450, "Member 'UWB_ui_PhotoMode_Parts_3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Select_out) == 0x000458, "Member 'UWB_ui_PhotoMode_Parts_3_C::Select_out' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Select_in) == 0x000460, "Member 'UWB_ui_PhotoMode_Parts_3_C::Select_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Select) == 0x000468, "Member 'UWB_ui_PhotoMode_Parts_3_C::Select' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Default) == 0x000470, "Member 'UWB_ui_PhotoMode_Parts_3_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Guage_1) == 0x000478, "Member 'UWB_ui_PhotoMode_Parts_3_C::Guage_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, PF_Arrow_L) == 0x000480, "Member 'UWB_ui_PhotoMode_Parts_3_C::PF_Arrow_L' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, PF_Arrow_R) == 0x000488, "Member 'UWB_ui_PhotoMode_Parts_3_C::PF_Arrow_R' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Slider_1) == 0x000490, "Member 'UWB_ui_PhotoMode_Parts_3_C::Slider_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Text_category_2) == 0x000498, "Member 'UWB_ui_PhotoMode_Parts_3_C::Text_category_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_PhotoMode_Parts_3_C, Text_contents_2_num) == 0x0004A0, "Member 'UWB_ui_PhotoMode_Parts_3_C::Text_contents_2_num' has a wrong offset!");

}


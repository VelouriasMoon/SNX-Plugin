#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Chara_Info_Parts_3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_3_C
// 0x0038 (0x03F0 - 0x03B8)
class UWB_ui_Chara_Info_Parts_3_C final : public UUICharaPresentListIndex
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select_in;                                         // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select;                                            // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_category;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item_icon_frame_2;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_Chara_name_4;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Chara_Info_Parts_3(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	bool SetItemInfo(const class FName& ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Chara_Info_Parts_3_C">();
	}
	static class UWB_ui_Chara_Info_Parts_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Chara_Info_Parts_3_C>();
	}
};
static_assert(alignof(UWB_ui_Chara_Info_Parts_3_C) == 0x000008, "Wrong alignment on UWB_ui_Chara_Info_Parts_3_C");
static_assert(sizeof(UWB_ui_Chara_Info_Parts_3_C) == 0x0003F0, "Wrong size on UWB_ui_Chara_Info_Parts_3_C");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, UberGraphFrame) == 0x0003B8, "Member 'UWB_ui_Chara_Info_Parts_3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Select_in) == 0x0003C0, "Member 'UWB_ui_Chara_Info_Parts_3_C::Select_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Select) == 0x0003C8, "Member 'UWB_ui_Chara_Info_Parts_3_C::Select' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Default) == 0x0003D0, "Member 'UWB_ui_Chara_Info_Parts_3_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Icon_category) == 0x0003D8, "Member 'UWB_ui_Chara_Info_Parts_3_C::Icon_category' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Item_icon_frame_2) == 0x0003E0, "Member 'UWB_ui_Chara_Info_Parts_3_C::Item_icon_frame_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Chara_Info_Parts_3_C, Text_Chara_name_4) == 0x0003E8, "Member 'UWB_ui_Chara_Info_Parts_3_C::Text_Chara_name_4' has a wrong offset!");

}


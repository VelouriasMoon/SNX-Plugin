#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_DetailMap_Parts_4

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_DetailMap_Parts_4.WB_ui_DetailMap_Parts_4_C
// 0x0098 (0x0420 - 0x0388)
class UWB_ui_DetailMap_Parts_4_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       R_decision;                                        // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       L_decision;                                        // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                All_Color;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_L_base_add;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_R_base_add;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_font_L1;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_font_R1;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2;                                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDOverlay*                            Pc_pg1;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDOverlay*                            Pc_pg2;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_83;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_95;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_DetailMap_AreaName_2;                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_DetailMap_Parts_4(int32 EntryPoint);
	void OnInitialized();
	void Construct();
	void PlayDetailAnimeR();
	void PlayDetailAnimeL();
	void SetStringName(const class FText& Param_Name);
	void InitializeAreaFixString();
	void InitializeBlockFixString();
	void SetGuide(bool Param_SetGuide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_DetailMap_Parts_4_C">();
	}
	static class UWB_ui_DetailMap_Parts_4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_DetailMap_Parts_4_C>();
	}
};
static_assert(alignof(UWB_ui_DetailMap_Parts_4_C) == 0x000008, "Wrong alignment on UWB_ui_DetailMap_Parts_4_C");
static_assert(sizeof(UWB_ui_DetailMap_Parts_4_C) == 0x000420, "Wrong size on UWB_ui_DetailMap_Parts_4_C");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_DetailMap_Parts_4_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, R_decision) == 0x000390, "Member 'UWB_ui_DetailMap_Parts_4_C::R_decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, L_decision) == 0x000398, "Member 'UWB_ui_DetailMap_Parts_4_C::L_decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Default_none) == 0x0003A0, "Member 'UWB_ui_DetailMap_Parts_4_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Default) == 0x0003A8, "Member 'UWB_ui_DetailMap_Parts_4_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, All_Color) == 0x0003B0, "Member 'UWB_ui_DetailMap_Parts_4_C::All_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Arrow_L_base_add) == 0x0003B8, "Member 'UWB_ui_DetailMap_Parts_4_C::Arrow_L_base_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Arrow_R_base_add) == 0x0003C0, "Member 'UWB_ui_DetailMap_Parts_4_C::Arrow_R_base_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Icon_font_L1) == 0x0003C8, "Member 'UWB_ui_DetailMap_Parts_4_C::Icon_font_L1' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Icon_font_R1) == 0x0003D0, "Member 'UWB_ui_DetailMap_Parts_4_C::Icon_font_R1' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Line_1) == 0x0003D8, "Member 'UWB_ui_DetailMap_Parts_4_C::Line_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Line_2) == 0x0003E0, "Member 'UWB_ui_DetailMap_Parts_4_C::Line_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Overlay_0) == 0x0003E8, "Member 'UWB_ui_DetailMap_Parts_4_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Overlay_1) == 0x0003F0, "Member 'UWB_ui_DetailMap_Parts_4_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Pc_pg1) == 0x0003F8, "Member 'UWB_ui_DetailMap_Parts_4_C::Pc_pg1' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Pc_pg2) == 0x000400, "Member 'UWB_ui_DetailMap_Parts_4_C::Pc_pg2' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Spacer_83) == 0x000408, "Member 'UWB_ui_DetailMap_Parts_4_C::Spacer_83' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Spacer_95) == 0x000410, "Member 'UWB_ui_DetailMap_Parts_4_C::Spacer_95' has a wrong offset!");
static_assert(offsetof(UWB_ui_DetailMap_Parts_4_C, Text_DetailMap_AreaName_2) == 0x000418, "Member 'UWB_ui_DetailMap_Parts_4_C::Text_DetailMap_AreaName_2' has a wrong offset!");

}


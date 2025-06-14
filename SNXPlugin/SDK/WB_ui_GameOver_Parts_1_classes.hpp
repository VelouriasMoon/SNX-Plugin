#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_GameOver_Parts_1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_GameOver_Parts_1.WB_ui_GameOver_Parts_1_C
// 0x0170 (0x04F8 - 0x0388)
class UWB_ui_GameOver_Parts_1_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out_title;                                         // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out_retry;                                         // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Black;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Emblem_1;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Grid;                                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Retry;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ghost_size;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ghost_Title_Line;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Help;                                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Help_base;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1_add;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2_add;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 None_Ghost_BG_add;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_eff;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu;                               // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu_add;                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu_base;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_1L_add;                                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_1R_add;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_2L_add;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_2R_add;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_3_add;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_4L_add;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Retry_4R_add;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_GameOver_1;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_GameOver_2;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Text_gameover_base;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_1L1;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_1L2;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_1R1;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_1R2;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_2L;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_2R;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_3L;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_3R;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_eff_1;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_eff_2;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_eff_3;                                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_eff_4;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_eff_5;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_GameOver_Parts_2_C*              WB_ui_GameOver_Parts_2_1;                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_GameOver_Parts_2_C*              WB_ui_GameOver_Parts_2_2;                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_GameOver_Parts_1(int32 EntryPoint);
	void UpdateGameOverBlackMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_GameOver_Parts_1_C">();
	}
	static class UWB_ui_GameOver_Parts_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_GameOver_Parts_1_C>();
	}
};
static_assert(alignof(UWB_ui_GameOver_Parts_1_C) == 0x000008, "Wrong alignment on UWB_ui_GameOver_Parts_1_C");
static_assert(sizeof(UWB_ui_GameOver_Parts_1_C) == 0x0004F8, "Wrong size on UWB_ui_GameOver_Parts_1_C");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_GameOver_Parts_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Out_title) == 0x000390, "Member 'UWB_ui_GameOver_Parts_1_C::Out_title' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Out_retry) == 0x000398, "Member 'UWB_ui_GameOver_Parts_1_C::Out_retry' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, In) == 0x0003A0, "Member 'UWB_ui_GameOver_Parts_1_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Default) == 0x0003A8, "Member 'UWB_ui_GameOver_Parts_1_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, BG_Black) == 0x0003B0, "Member 'UWB_ui_GameOver_Parts_1_C::BG_Black' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, BG_Emblem_1) == 0x0003B8, "Member 'UWB_ui_GameOver_Parts_1_C::BG_Emblem_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, BG_Grid) == 0x0003C0, "Member 'UWB_ui_GameOver_Parts_1_C::BG_Grid' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, BG_Retry) == 0x0003C8, "Member 'UWB_ui_GameOver_Parts_1_C::BG_Retry' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Ghost_size) == 0x0003D0, "Member 'UWB_ui_GameOver_Parts_1_C::Ghost_size' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Ghost_Title_Line) == 0x0003D8, "Member 'UWB_ui_GameOver_Parts_1_C::Ghost_Title_Line' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Help) == 0x0003E0, "Member 'UWB_ui_GameOver_Parts_1_C::Help' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Help_base) == 0x0003E8, "Member 'UWB_ui_GameOver_Parts_1_C::Help_base' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Line_1) == 0x0003F0, "Member 'UWB_ui_GameOver_Parts_1_C::Line_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Line_1_add) == 0x0003F8, "Member 'UWB_ui_GameOver_Parts_1_C::Line_1_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Line_2_add) == 0x000400, "Member 'UWB_ui_GameOver_Parts_1_C::Line_2_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, None_Ghost_BG_add) == 0x000408, "Member 'UWB_ui_GameOver_Parts_1_C::None_Ghost_BG_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, REDRetainerBox_eff) == 0x000410, "Member 'UWB_ui_GameOver_Parts_1_C::REDRetainerBox_eff' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, REDRetainerBox_Menu) == 0x000418, "Member 'UWB_ui_GameOver_Parts_1_C::REDRetainerBox_Menu' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, REDRetainerBox_Menu_add) == 0x000420, "Member 'UWB_ui_GameOver_Parts_1_C::REDRetainerBox_Menu_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, REDRetainerBox_Menu_base) == 0x000428, "Member 'UWB_ui_GameOver_Parts_1_C::REDRetainerBox_Menu_base' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_1L_add) == 0x000430, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_1L_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_1R_add) == 0x000438, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_1R_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_2L_add) == 0x000440, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_2L_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_2R_add) == 0x000448, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_2R_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_3_add) == 0x000450, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_3_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_4L_add) == 0x000458, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_4L_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Retry_4R_add) == 0x000460, "Member 'UWB_ui_GameOver_Parts_1_C::Retry_4R_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Text_GameOver_1) == 0x000468, "Member 'UWB_ui_GameOver_Parts_1_C::Text_GameOver_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Text_GameOver_2) == 0x000470, "Member 'UWB_ui_GameOver_Parts_1_C::Text_GameOver_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Text_gameover_base) == 0x000478, "Member 'UWB_ui_GameOver_Parts_1_C::Text_gameover_base' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_1L1) == 0x000480, "Member 'UWB_ui_GameOver_Parts_1_C::Title_1L1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_1L2) == 0x000488, "Member 'UWB_ui_GameOver_Parts_1_C::Title_1L2' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_1R1) == 0x000490, "Member 'UWB_ui_GameOver_Parts_1_C::Title_1R1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_1R2) == 0x000498, "Member 'UWB_ui_GameOver_Parts_1_C::Title_1R2' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_2L) == 0x0004A0, "Member 'UWB_ui_GameOver_Parts_1_C::Title_2L' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_2R) == 0x0004A8, "Member 'UWB_ui_GameOver_Parts_1_C::Title_2R' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_3L) == 0x0004B0, "Member 'UWB_ui_GameOver_Parts_1_C::Title_3L' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_3R) == 0x0004B8, "Member 'UWB_ui_GameOver_Parts_1_C::Title_3R' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_eff_1) == 0x0004C0, "Member 'UWB_ui_GameOver_Parts_1_C::Title_eff_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_eff_2) == 0x0004C8, "Member 'UWB_ui_GameOver_Parts_1_C::Title_eff_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_eff_3) == 0x0004D0, "Member 'UWB_ui_GameOver_Parts_1_C::Title_eff_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_eff_4) == 0x0004D8, "Member 'UWB_ui_GameOver_Parts_1_C::Title_eff_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, Title_eff_5) == 0x0004E0, "Member 'UWB_ui_GameOver_Parts_1_C::Title_eff_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, WB_ui_GameOver_Parts_2_1) == 0x0004E8, "Member 'UWB_ui_GameOver_Parts_1_C::WB_ui_GameOver_Parts_2_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_GameOver_Parts_1_C, WB_ui_GameOver_Parts_2_2) == 0x0004F0, "Member 'UWB_ui_GameOver_Parts_1_C::WB_ui_GameOver_Parts_2_2' has a wrong offset!");

}


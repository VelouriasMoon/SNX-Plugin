#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Item.WB_ui_Item_C
// 0x00F8 (0x10280 - 0x10188)
class UWB_ui_Item_C final : public UUIItemMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10188(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x10190(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x10198(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x101A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x101A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ViewRange;                             // 0x101B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x101B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2;                                            // 0x101C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_3;                                            // 0x101C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_4;                                            // 0x101D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_5;                                            // 0x101D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_6;                                            // 0x101E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_7;                                            // 0x101E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x101F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PG_All_Color;                                      // 0x101F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu;                               // 0x10200(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDScrollBox*                          RedScrollBox_C_0;                                  // 0x10208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Item_EStatus_Parts_1_C*          WB_ui_Item_EStatus_Parts_1;                        // 0x10210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Item_Info_Parts_1_C*             WB_ui_Item_Info_Parts_1;                           // 0x10218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_4_C*          WB_ui_MainContents_Parts_4;                        // 0x10220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_5_C*          WB_ui_MainContents_Parts_5;                        // 0x10228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_1;                      // 0x10230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_2;                      // 0x10238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_3;                      // 0x10240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_4;                      // 0x10248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_5;                      // 0x10250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_6;                      // 0x10258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_7;                      // 0x10260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_MainContents_Parts_6_C*          WB_ui_MainContents_Parts_6_8;                      // 0x10268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_ui_MainContents_Parts_6_C*>  ChildItemCategory;                                 // 0x10270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Item(int32 EntryPoint);
	void OnInitialized();
	void ListUnFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void ListFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void ListUpdateElement(int32 Param_Index, class UUserWidget* Widget);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Item_C">();
	}
	static class UWB_ui_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Item_C>();
	}
};
static_assert(alignof(UWB_ui_Item_C) == 0x000008, "Wrong alignment on UWB_ui_Item_C");
static_assert(sizeof(UWB_ui_Item_C) == 0x010280, "Wrong size on UWB_ui_Item_C");
static_assert(offsetof(UWB_ui_Item_C, UberGraphFrame) == 0x010188, "Member 'UWB_ui_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Out) == 0x010190, "Member 'UWB_ui_Item_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, In) == 0x010198, "Member 'UWB_ui_Item_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Default) == 0x0101A0, "Member 'UWB_ui_Item_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, CanvasPanel_1) == 0x0101A8, "Member 'UWB_ui_Item_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, CanvasPanel_ViewRange) == 0x0101B0, "Member 'UWB_ui_Item_C::CanvasPanel_ViewRange' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_1) == 0x0101B8, "Member 'UWB_ui_Item_C::Line_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_2) == 0x0101C0, "Member 'UWB_ui_Item_C::Line_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_3) == 0x0101C8, "Member 'UWB_ui_Item_C::Line_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_4) == 0x0101D0, "Member 'UWB_ui_Item_C::Line_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_5) == 0x0101D8, "Member 'UWB_ui_Item_C::Line_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_6) == 0x0101E0, "Member 'UWB_ui_Item_C::Line_6' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Line_7) == 0x0101E8, "Member 'UWB_ui_Item_C::Line_7' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, Overlay_2) == 0x0101F0, "Member 'UWB_ui_Item_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, PG_All_Color) == 0x0101F8, "Member 'UWB_ui_Item_C::PG_All_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, REDRetainerBox_Menu) == 0x010200, "Member 'UWB_ui_Item_C::REDRetainerBox_Menu' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, RedScrollBox_C_0) == 0x010208, "Member 'UWB_ui_Item_C::RedScrollBox_C_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_Item_EStatus_Parts_1) == 0x010210, "Member 'UWB_ui_Item_C::WB_ui_Item_EStatus_Parts_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_Item_Info_Parts_1) == 0x010218, "Member 'UWB_ui_Item_C::WB_ui_Item_Info_Parts_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_4) == 0x010220, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_5) == 0x010228, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_1) == 0x010230, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_2) == 0x010238, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_3) == 0x010240, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_4) == 0x010248, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_5) == 0x010250, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_6) == 0x010258, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_6' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_7) == 0x010260, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_7' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, WB_ui_MainContents_Parts_6_8) == 0x010268, "Member 'UWB_ui_Item_C::WB_ui_MainContents_Parts_6_8' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_C, ChildItemCategory) == 0x010270, "Member 'UWB_ui_Item_C::ChildItemCategory' has a wrong offset!");

}


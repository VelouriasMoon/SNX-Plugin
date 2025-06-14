#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Trade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Trade.WB_ui_Trade_C
// 0x0080 (0xFF78 - 0xFEF8)
class UWB_ui_Trade_C final : public UUIItemTrade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0xFEF8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                All_Color;                                         // 0xFF00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               All_Set;                                           // 0xFF08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ViewRange;                             // 0xFF10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_List;                                         // 0xFF18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Trade_Item;                                   // 0xFF20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDScrollBox*                          ScrollBox_TradeList;                               // 0xFF28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_trade_contents_2;                             // 0xFF30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_trade_contents_3;                             // 0xFF38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_trade_contents_4;                             // 0xFF40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_trade_contents_5;                             // 0xFF48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_trade_contents_7;                             // 0xFF50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Trade_List_Parts_1_C*            WB_ui_Trade_List_Parts_1;                          // 0xFF58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Trade_List_Parts_2_C*            WB_ui_Trade_List_Parts_2_1;                        // 0xFF60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Trade_List_Parts_2_C*            WB_ui_Trade_List_Parts_2_2;                        // 0xFF68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Trade_List_Parts_2_C*            WB_ui_Trade_List_Parts_2_3;                        // 0xFF70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Trade(int32 EntryPoint);
	void ListUnFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void ListFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void OnInitialized();
	void ListUnFocus(class UUserWidget* Widget);
	void ListFocus(class UUserWidget* Widget);
	void ListUpdateElement(int32 Param_Index, class UUserWidget* Widget);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Trade_C">();
	}
	static class UWB_ui_Trade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Trade_C>();
	}
};
static_assert(alignof(UWB_ui_Trade_C) == 0x000008, "Wrong alignment on UWB_ui_Trade_C");
static_assert(sizeof(UWB_ui_Trade_C) == 0x00FF78, "Wrong size on UWB_ui_Trade_C");
static_assert(offsetof(UWB_ui_Trade_C, UberGraphFrame) == 0x00FEF8, "Member 'UWB_ui_Trade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, All_Color) == 0x00FF00, "Member 'UWB_ui_Trade_C::All_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, All_Set) == 0x00FF08, "Member 'UWB_ui_Trade_C::All_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, CanvasPanel_ViewRange) == 0x00FF10, "Member 'UWB_ui_Trade_C::CanvasPanel_ViewRange' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Line_List) == 0x00FF18, "Member 'UWB_ui_Trade_C::Line_List' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Line_Trade_Item) == 0x00FF20, "Member 'UWB_ui_Trade_C::Line_Trade_Item' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, ScrollBox_TradeList) == 0x00FF28, "Member 'UWB_ui_Trade_C::ScrollBox_TradeList' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Text_trade_contents_2) == 0x00FF30, "Member 'UWB_ui_Trade_C::Text_trade_contents_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Text_trade_contents_3) == 0x00FF38, "Member 'UWB_ui_Trade_C::Text_trade_contents_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Text_trade_contents_4) == 0x00FF40, "Member 'UWB_ui_Trade_C::Text_trade_contents_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Text_trade_contents_5) == 0x00FF48, "Member 'UWB_ui_Trade_C::Text_trade_contents_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, Text_trade_contents_7) == 0x00FF50, "Member 'UWB_ui_Trade_C::Text_trade_contents_7' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, WB_ui_Trade_List_Parts_1) == 0x00FF58, "Member 'UWB_ui_Trade_C::WB_ui_Trade_List_Parts_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, WB_ui_Trade_List_Parts_2_1) == 0x00FF60, "Member 'UWB_ui_Trade_C::WB_ui_Trade_List_Parts_2_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, WB_ui_Trade_List_Parts_2_2) == 0x00FF68, "Member 'UWB_ui_Trade_C::WB_ui_Trade_List_Parts_2_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Trade_C, WB_ui_Trade_List_Parts_2_3) == 0x00FF70, "Member 'UWB_ui_Trade_C::WB_ui_Trade_List_Parts_2_3' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Trade_List_Parts_1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK::Params
{

// Function WB_ui_Trade_List_Parts_1.WB_ui_Trade_List_Parts_1_C.ExecuteUbergraph_WB_ui_Trade_List_Parts_1
// 0x0010 (0x0010 - 0x0000)
struct WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_State;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubState;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1) == 0x000004, "Wrong alignment on WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1");
static_assert(sizeof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1) == 0x000010, "Wrong size on WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1, EntryPoint) == 0x000000, "Member 'WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1, K2Node_Event_State) == 0x000004, "Member 'WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1, K2Node_Event_SubState) == 0x000008, "Member 'WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1::K2Node_Event_SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'WB_ui_Trade_List_Parts_1_C_ExecuteUbergraph_WB_ui_Trade_List_Parts_1::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function WB_ui_Trade_List_Parts_1.WB_ui_Trade_List_Parts_1_C.UpdateState
// 0x000C (0x000C - 0x0000)
struct WB_ui_Trade_List_Parts_1_C_UpdateState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubState;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_Trade_List_Parts_1_C_UpdateState) == 0x000004, "Wrong alignment on WB_ui_Trade_List_Parts_1_C_UpdateState");
static_assert(sizeof(WB_ui_Trade_List_Parts_1_C_UpdateState) == 0x00000C, "Wrong size on WB_ui_Trade_List_Parts_1_C_UpdateState");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_UpdateState, State) == 0x000000, "Member 'WB_ui_Trade_List_Parts_1_C_UpdateState::State' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_UpdateState, SubState) == 0x000004, "Member 'WB_ui_Trade_List_Parts_1_C_UpdateState::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_UpdateState, DeltaSeconds) == 0x000008, "Member 'WB_ui_Trade_List_Parts_1_C_UpdateState::DeltaSeconds' has a wrong offset!");

// Function WB_ui_Trade_List_Parts_1.WB_ui_Trade_List_Parts_1_C.SetItemInfo
// 0x00B8 (0x00B8 - 0x0000)
struct WB_ui_Trade_List_Parts_1_C_SetItemInfo final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TradeItemIndex;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTrade;                                          // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5811[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TakeNum;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetItemInfo_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5812[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemDataCell                          CallFunc_GetItemDataCell_ItemData;                 // 0x0020(0x0080)()
	bool                                          CallFunc_GetItemDataCell_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5813[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_UI_GetArrayColor_Shop_Frame_1_UI_ColorArray_Shop_Frame_1; // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_Trade_List_Parts_1_C_SetItemInfo) == 0x000008, "Wrong alignment on WB_ui_Trade_List_Parts_1_C_SetItemInfo");
static_assert(sizeof(WB_ui_Trade_List_Parts_1_C_SetItemInfo) == 0x0000B8, "Wrong size on WB_ui_Trade_List_Parts_1_C_SetItemInfo");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, ItemId) == 0x000000, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::ItemId' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, TradeItemIndex) == 0x000008, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::TradeItemIndex' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CanTrade) == 0x00000C, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CanTrade' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, TakeNum) == 0x000010, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::TakeNum' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, ReturnValue) == 0x000014, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_SetItemInfo_ReturnValue) == 0x000015, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_SetItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_GetItemDataCell_ItemData) == 0x000020, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_GetItemDataCell_ItemData' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_GetItemDataCell_ReturnValue) == 0x0000A0, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_GetItemDataCell_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_UI_GetArrayColor_Shop_Frame_1_UI_ColorArray_Shop_Frame_1) == 0x0000A4, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_UI_GetArrayColor_Shop_Frame_1_UI_ColorArray_Shop_Frame_1' has a wrong offset!");
static_assert(offsetof(WB_ui_Trade_List_Parts_1_C_SetItemInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000B4, "Member 'WB_ui_Trade_List_Parts_1_C_SetItemInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

}


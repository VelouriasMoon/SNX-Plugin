#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_SaveLoadList_Parts_1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK::Params
{

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1
// 0x0038 (0x0038 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_imageType;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_imagedata;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5955[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_State;                                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubState;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5956[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1) == 0x000008, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1) == 0x000038, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, EntryPoint) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, K2Node_Event_imageType) == 0x000004, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::K2Node_Event_imageType' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, K2Node_Event_imagedata) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::K2Node_Event_imagedata' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, K2Node_Event_State) == 0x000020, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, K2Node_Event_SubState) == 0x000024, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::K2Node_Event_SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.UpdateState
// 0x000C (0x000C - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_UpdateState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubState;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_UpdateState) == 0x000004, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_UpdateState");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_UpdateState) == 0x00000C, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_UpdateState");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_UpdateState, State) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_UpdateState::State' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_UpdateState, SubState) == 0x000004, "Member 'WB_ui_SaveLoadList_Parts_1_C_UpdateState::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_UpdateState, DeltaSeconds) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_UpdateState::DeltaSeconds' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetScreenTexture
// 0x0010 (0x0010 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture final
{
public:
	int32                                         ImageType;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5957[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ImageData;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture) == 0x000008, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture) == 0x000010, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture, ImageType) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture::ImageType' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture, ImageData) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture::ImageData' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetTitleFontOutLineColor
// 0x0048 (0x0048 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor final
{
public:
	ESaveLoadListType                             DataType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5958[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5959[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             TextData;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutlineColor;                                      // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicOutlineMaterial_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicOutlineMaterial_ReturnValue_1;  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor) == 0x000008, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor) == 0x000048, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, DataType) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::DataType' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, Text) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::Text' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, ReturnValue) == 0x000010, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, TextData) == 0x000018, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::TextData' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, OutlineColor) == 0x000020, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::OutlineColor' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, CallFunc_GetDynamicOutlineMaterial_ReturnValue) == 0x000030, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::CallFunc_GetDynamicOutlineMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor, CallFunc_GetDynamicOutlineMaterial_ReturnValue_1) == 0x000040, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor::CallFunc_GetDynamicOutlineMaterial_ReturnValue_1' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetDataFontOutLineColor
// 0x0040 (0x0040 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor final
{
public:
	ESaveLoadListType                             DataType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             TextData;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutlineColor;                                      // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicOutlineMaterial_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor) == 0x000008, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor) == 0x000040, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, DataType) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::DataType' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, Text) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::Text' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, ReturnValue) == 0x000010, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, TextData) == 0x000018, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::TextData' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, OutlineColor) == 0x000020, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::OutlineColor' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor, CallFunc_GetDynamicOutlineMaterial_ReturnValue) == 0x000038, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor::CallFunc_GetDynamicOutlineMaterial_ReturnValue' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetFontColor
// 0x0028 (0x0028 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_SetFontColor final
{
public:
	ESaveLoadListClearType                        DataType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             TextData;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetFontColor_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor) == 0x000008, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_SetFontColor");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor) == 0x000028, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_SetFontColor");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, DataType) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::DataType' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, Text) == 0x000008, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::Text' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, ReturnValue) == 0x000010, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, TextData) == 0x000018, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::TextData' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetFontColor, CallFunc_SetFontColor_ReturnValue) == 0x000021, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetFontColor::CallFunc_SetFontColor_ReturnValue' has a wrong offset!");

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetLevelFontColor
// 0x0003 (0x0003 - 0x0000)
struct WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor final
{
public:
	bool                                          LevelMax;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLevelFontColor_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor) == 0x000001, "Wrong alignment on WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor");
static_assert(sizeof(WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor) == 0x000003, "Wrong size on WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor, LevelMax) == 0x000000, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor::LevelMax' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor, ReturnValue) == 0x000001, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor, CallFunc_SetLevelFontColor_ReturnValue) == 0x000002, "Member 'WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor::CallFunc_SetLevelFontColor_ReturnValue' has a wrong offset!");

}


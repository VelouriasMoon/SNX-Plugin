#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ui_UV_item_small

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ui_UV_item_small.BP_ui_UV_item_small_C.UI_SetThumbnail_Category
// 0x0078 (0x0078 - 0x0000)
struct BP_ui_UV_item_small_C_UI_SetThumbnail_Category final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_323D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 _IconIndexList;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_323E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category) == 0x000008, "Wrong alignment on BP_ui_UV_item_small_C_UI_SetThumbnail_Category");
static_assert(sizeof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category) == 0x000078, "Wrong size on BP_ui_UV_item_small_C_UI_SetThumbnail_Category");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, WorldContext) == 0x000000, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, Image) == 0x000008, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, Param_Index) == 0x000010, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, __WorldContext) == 0x000018, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, _IconIndexList) == 0x000020, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::_IconIndexList' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Divide_IntInt_ReturnValue) == 0x00003C, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000040, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Percent_IntInt_ReturnValue) == 0x000044, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Add_FloatFloat_ReturnValue) == 0x000048, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00004C, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000060, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_item_small_C_UI_SetThumbnail_Category, K2Node_MakeStruct_LinearColor) == 0x000064, "Member 'BP_ui_UV_item_small_C_UI_SetThumbnail_Category::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}


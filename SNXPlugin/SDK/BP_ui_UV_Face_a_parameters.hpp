#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ui_UV_Face_a

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ui_UV_Face_a.BP_ui_UV_Face_a_C.UI_SetThumbnail_Face_a
// 0x0048 (0x0048 - 0x0000)
struct BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a) == 0x000008, "Wrong alignment on BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a");
static_assert(sizeof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a) == 0x000048, "Wrong size on BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, Image) == 0x000000, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, ID) == 0x000008, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::ID' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, __WorldContext) == 0x000010, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Percent_IntInt_ReturnValue) == 0x000024, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00002C, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Add_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000034, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'BP_ui_UV_Face_a_C_UI_SetThumbnail_Face_a::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ui_UV_Action_Sas

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK::Params
{

// Function BP_ui_UV_Action_Sas.BP_ui_UV_Action_Sas_C.UI_SetThumbnail_ActionSas
// 0x0040 (0x0040 - 0x0000)
struct BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESASActionIconType                            Param_Index;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4779[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas) == 0x000008, "Wrong alignment on BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas");
static_assert(sizeof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas) == 0x000040, "Wrong size on BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, Image) == 0x000000, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, Param_Index) == 0x000008, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, __WorldContext) == 0x000010, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas, K2Node_MakeStruct_LinearColor) == 0x000030, "Member 'BP_ui_UV_Action_Sas_C_UI_SetThumbnail_ActionSas::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function BP_ui_UV_Action_Sas.BP_ui_UV_Action_Sas_C.UI_SetColor_Frame1_ActionSas
// 0x0048 (0x0048 - 0x0000)
struct BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESASActionIconType                            Param_Index;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         B;                                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         G;                                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         R;                                                 // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas) == 0x000008, "Wrong alignment on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas");
static_assert(sizeof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas) == 0x000048, "Wrong size on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, Image) == 0x000000, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, Param_Index) == 0x000008, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, __WorldContext) == 0x000010, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, A) == 0x000018, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::A' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, B) == 0x00001C, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::B' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, G) == 0x000020, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::G' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, R) == 0x000024, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::R' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame1_ActionSas::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function BP_ui_UV_Action_Sas.BP_ui_UV_Action_Sas_C.UI_SetColor_Frame6_ActionSas
// 0x0048 (0x0048 - 0x0000)
struct BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESASActionIconType                            Param_Index;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         B;                                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         G;                                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         R;                                                 // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas) == 0x000008, "Wrong alignment on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas");
static_assert(sizeof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas) == 0x000048, "Wrong size on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, Image) == 0x000000, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, Param_Index) == 0x000008, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, __WorldContext) == 0x000010, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, A) == 0x000018, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::A' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, B) == 0x00001C, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::B' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, G) == 0x000020, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::G' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, R) == 0x000024, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::R' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame6_ActionSas::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function BP_ui_UV_Action_Sas.BP_ui_UV_Action_Sas_C.UI_SetColor_Frame3_ActionSas
// 0x0048 (0x0048 - 0x0000)
struct BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESASActionIconType                            Param_Index;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         B;                                                 // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         G;                                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         R;                                                 // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas) == 0x000008, "Wrong alignment on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas");
static_assert(sizeof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas) == 0x000048, "Wrong size on BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, Image) == 0x000000, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::Image' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, Param_Index) == 0x000008, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, __WorldContext) == 0x000010, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, A) == 0x000018, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::A' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, B) == 0x00001C, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::B' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, G) == 0x000020, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::G' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, R) == 0x000024, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::R' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'BP_ui_UV_Action_Sas_C_UI_SetColor_Frame3_ActionSas::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}


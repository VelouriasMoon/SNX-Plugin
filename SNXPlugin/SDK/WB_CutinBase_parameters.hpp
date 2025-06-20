#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CutinBase

#include "Basic.hpp"

#include "ERenderTargetType_structs.hpp"


namespace SDK::Params
{

// Function WB_CutinBase.WB_CutinBase_C.ExecuteUbergraph_WB_CutinBase
// 0x0050 (0x0050 - 0x0000)
struct WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ERenderTargetType RenderTargetType, class UTextureRenderTarget2D* NewTarget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4B62[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RenderTargetManager_C*              CallFunc_GetRenderTargetManager_Manager;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERenderTargetType                             K2Node_CustomEvent_RenderTargetType;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B63[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 K2Node_CustomEvent_NewTarget;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B64[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RenderTargetManager_C*              CallFunc_GetRenderTargetManager_Manager_1;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_GetRenderTarget_RenderTarget;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase) == 0x000008, "Wrong alignment on WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase");
static_assert(sizeof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase) == 0x000050, "Wrong size on WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, EntryPoint) == 0x000000, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_GetRenderTargetManager_Manager) == 0x000020, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_GetRenderTargetManager_Manager' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, K2Node_CustomEvent_RenderTargetType) == 0x000029, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::K2Node_CustomEvent_RenderTargetType' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, K2Node_CustomEvent_NewTarget) == 0x000030, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::K2Node_CustomEvent_NewTarget' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_GetRenderTargetManager_Manager_1) == 0x000040, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_GetRenderTargetManager_Manager_1' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase, CallFunc_GetRenderTarget_RenderTarget) == 0x000048, "Member 'WB_CutinBase_C_ExecuteUbergraph_WB_CutinBase::CallFunc_GetRenderTarget_RenderTarget' has a wrong offset!");

// Function WB_CutinBase.WB_CutinBase_C.ResetRenderTarget
// 0x0010 (0x0010 - 0x0000)
struct WB_CutinBase_C_ResetRenderTarget final
{
public:
	ERenderTargetType                             RenderTargetType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B65[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 NewTarget;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CutinBase_C_ResetRenderTarget) == 0x000008, "Wrong alignment on WB_CutinBase_C_ResetRenderTarget");
static_assert(sizeof(WB_CutinBase_C_ResetRenderTarget) == 0x000010, "Wrong size on WB_CutinBase_C_ResetRenderTarget");
static_assert(offsetof(WB_CutinBase_C_ResetRenderTarget, RenderTargetType) == 0x000000, "Member 'WB_CutinBase_C_ResetRenderTarget::RenderTargetType' has a wrong offset!");
static_assert(offsetof(WB_CutinBase_C_ResetRenderTarget, NewTarget) == 0x000008, "Member 'WB_CutinBase_C_ResetRenderTarget::NewTarget' has a wrong offset!");

}


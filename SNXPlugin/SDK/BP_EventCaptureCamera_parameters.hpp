#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventCaptureCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.ExecuteUbergraph_BP_EventCaptureCamera
// 0x0018 (0x0018 - 0x0000)
struct BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6666[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventManager_C*                     CallFunc_GetEventManager_EventManager;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCutSceneEvent_IsCutSceneEvent;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6667[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera) == 0x000008, "Wrong alignment on BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera");
static_assert(sizeof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera) == 0x000018, "Wrong size on BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera");
static_assert(offsetof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera, EntryPoint) == 0x000000, "Member 'BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera, CallFunc_GetEventManager_EventManager) == 0x000008, "Member 'BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera::CallFunc_GetEventManager_EventManager' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera, CallFunc_IsCutSceneEvent_IsCutSceneEvent) == 0x000011, "Member 'BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera::CallFunc_IsCutSceneEvent_IsCutSceneEvent' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_EventCaptureCamera_C_ExecuteUbergraph_BP_EventCaptureCamera::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EventCaptureCamera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventCaptureCamera_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EventCaptureCamera_C_ReceiveTick");
static_assert(sizeof(BP_EventCaptureCamera_C_ReceiveTick) == 0x000004, "Wrong size on BP_EventCaptureCamera_C_ReceiveTick");
static_assert(offsetof(BP_EventCaptureCamera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EventCaptureCamera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.SetTicks
// 0x0001 (0x0001 - 0x0000)
struct BP_EventCaptureCamera_C_SetTicks final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventCaptureCamera_C_SetTicks) == 0x000001, "Wrong alignment on BP_EventCaptureCamera_C_SetTicks");
static_assert(sizeof(BP_EventCaptureCamera_C_SetTicks) == 0x000001, "Wrong size on BP_EventCaptureCamera_C_SetTicks");
static_assert(offsetof(BP_EventCaptureCamera_C_SetTicks, bEnabled) == 0x000000, "Member 'BP_EventCaptureCamera_C_SetTicks::bEnabled' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.SetCaptureCompFOVToCamComp
// 0x0010 (0x0010 - 0x0000)
struct BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp final
{
public:
	class UCineCameraComponent*                   K2Node_DynamicCast_AsCine_Camera_Component;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6668[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHorizontalFieldOfView_ReturnValue;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp) == 0x000008, "Wrong alignment on BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp");
static_assert(sizeof(BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp) == 0x000010, "Wrong size on BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp");
static_assert(offsetof(BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp, K2Node_DynamicCast_AsCine_Camera_Component) == 0x000000, "Member 'BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp::K2Node_DynamicCast_AsCine_Camera_Component' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp, CallFunc_GetHorizontalFieldOfView_ReturnValue) == 0x00000C, "Member 'BP_EventCaptureCamera_C_SetCaptureCompFOVToCamComp::CallFunc_GetHorizontalFieldOfView_ReturnValue' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.GetDefaultPPS
// 0x0780 (0x0780 - 0x0000)
struct BP_EventCaptureCamera_C_GetDefaultPPS final
{
public:
	struct FPostProcessSettings                   PPS;                                               // 0x0000(0x0780)(Parm, OutParm)
};
static_assert(alignof(BP_EventCaptureCamera_C_GetDefaultPPS) == 0x000010, "Wrong alignment on BP_EventCaptureCamera_C_GetDefaultPPS");
static_assert(sizeof(BP_EventCaptureCamera_C_GetDefaultPPS) == 0x000780, "Wrong size on BP_EventCaptureCamera_C_GetDefaultPPS");
static_assert(offsetof(BP_EventCaptureCamera_C_GetDefaultPPS, PPS) == 0x000000, "Member 'BP_EventCaptureCamera_C_GetDefaultPPS::PPS' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.LoadAssets
// 0x0090 (0x0090 - 0x0000)
struct BP_EventCaptureCamera_C_LoadAssets final
{
public:
	TArray<struct FWeightedBlendable>             Blendable;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0010(0x0010)()
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0020(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6669[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadSoftObject_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables_1;            // 0x0050(0x0010)()
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable_1;             // 0x0060(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666B[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadSoftObject_ReturnValue_1;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface_1;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventCaptureCamera_C_LoadAssets) == 0x000008, "Wrong alignment on BP_EventCaptureCamera_C_LoadAssets");
static_assert(sizeof(BP_EventCaptureCamera_C_LoadAssets) == 0x000090, "Wrong size on BP_EventCaptureCamera_C_LoadAssets");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, Blendable) == 0x000000, "Member 'BP_EventCaptureCamera_C_LoadAssets::Blendable' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_MakeStruct_WeightedBlendables) == 0x000010, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_MakeStruct_WeightedBlendable) == 0x000020, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'BP_EventCaptureCamera_C_LoadAssets::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, CallFunc_LoadSoftObject_ReturnValue) == 0x000038, "Member 'BP_EventCaptureCamera_C_LoadAssets::CallFunc_LoadSoftObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_DynamicCast_AsMaterial_Interface) == 0x000040, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_MakeStruct_WeightedBlendables_1) == 0x000050, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_MakeStruct_WeightedBlendables_1' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_MakeStruct_WeightedBlendable_1) == 0x000060, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_MakeStruct_WeightedBlendable_1' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, CallFunc_Array_Add_ReturnValue_1) == 0x000070, "Member 'BP_EventCaptureCamera_C_LoadAssets::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, CallFunc_LoadSoftObject_ReturnValue_1) == 0x000078, "Member 'BP_EventCaptureCamera_C_LoadAssets::CallFunc_LoadSoftObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_DynamicCast_AsMaterial_Interface_1) == 0x000080, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_DynamicCast_AsMaterial_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_EventCaptureCamera_C_LoadAssets, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_EventCaptureCamera_C_LoadAssets::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_EventCaptureCamera.BP_EventCaptureCamera_C.GetDefaultPPS_OutlineFront
// 0x0780 (0x0780 - 0x0000)
struct BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront final
{
public:
	struct FPostProcessSettings                   PPS;                                               // 0x0000(0x0780)(Parm, OutParm)
};
static_assert(alignof(BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront) == 0x000010, "Wrong alignment on BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront");
static_assert(sizeof(BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront) == 0x000780, "Wrong size on BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront");
static_assert(offsetof(BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront, PPS) == 0x000000, "Member 'BP_EventCaptureCamera_C_GetDefaultPPS_OutlineFront::PPS' has a wrong offset!");

}


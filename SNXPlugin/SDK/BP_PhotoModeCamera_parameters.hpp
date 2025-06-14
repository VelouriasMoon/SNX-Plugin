#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhotoModeCamera

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PhotoModeCamera.BP_PhotoModeCamera_C.GetCollisionRadius
// 0x0018 (0x0018 - 0x0000)
struct BP_PhotoModeCamera_C_GetCollisionRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhotoModeCamera_C_GetCollisionRadius) == 0x000008, "Wrong alignment on BP_PhotoModeCamera_C_GetCollisionRadius");
static_assert(sizeof(BP_PhotoModeCamera_C_GetCollisionRadius) == 0x000018, "Wrong size on BP_PhotoModeCamera_C_GetCollisionRadius");
static_assert(offsetof(BP_PhotoModeCamera_C_GetCollisionRadius, ReturnValue) == 0x000000, "Member 'BP_PhotoModeCamera_C_GetCollisionRadius::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCamera_C_GetCollisionRadius, K2Node_DynamicCast_AsCapsule_Collision) == 0x000008, "Member 'BP_PhotoModeCamera_C_GetCollisionRadius::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCamera_C_GetCollisionRadius, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PhotoModeCamera_C_GetCollisionRadius::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCamera_C_GetCollisionRadius, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000014, "Member 'BP_PhotoModeCamera_C_GetCollisionRadius::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");

// Function BP_PhotoModeCamera.BP_PhotoModeCamera_C.SetCollisionRadius
// 0x0018 (0x0018 - 0x0000)
struct BP_PhotoModeCamera_C_SetCollisionRadius final
{
public:
	float                                         Radius;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PhotoModeCamera_C_SetCollisionRadius) == 0x000008, "Wrong alignment on BP_PhotoModeCamera_C_SetCollisionRadius");
static_assert(sizeof(BP_PhotoModeCamera_C_SetCollisionRadius) == 0x000018, "Wrong size on BP_PhotoModeCamera_C_SetCollisionRadius");
static_assert(offsetof(BP_PhotoModeCamera_C_SetCollisionRadius, Radius) == 0x000000, "Member 'BP_PhotoModeCamera_C_SetCollisionRadius::Radius' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCamera_C_SetCollisionRadius, K2Node_DynamicCast_AsCapsule_Collision) == 0x000008, "Member 'BP_PhotoModeCamera_C_SetCollisionRadius::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCamera_C_SetCollisionRadius, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PhotoModeCamera_C_SetCollisionRadius::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}


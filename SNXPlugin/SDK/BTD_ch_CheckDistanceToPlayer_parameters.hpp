#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_ch_CheckDistanceToPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTD_ch_CheckDistanceToPlayer.BTD_ch_CheckDistanceToPlayer_C.PerformConditionCheckAI
// 0x0058 (0x0058 - 0x0000)
struct BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6642[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface;       // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6643[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetControlPlayerDist_Dist;                // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6644[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckDistanceFromVector_bResult;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI) == 0x000058, "Wrong size on BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBPI_Player_AIInterface) == 0x000018, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBPI_Player_AIInterface' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_GetControlPlayerDist_Dist) == 0x00002C, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_GetControlPlayerDist_Dist' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_BreakVector_X) == 0x00003C, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_BreakVector_Y) == 0x000040, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_BreakVector_Z) == 0x000044, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000048, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000050, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI, CallFunc_CheckDistanceFromVector_bResult) == 0x000051, "Member 'BTD_ch_CheckDistanceToPlayer_C_PerformConditionCheckAI::CallFunc_CheckDistanceFromVector_bResult' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsBattleMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTD_IsBattleMode.BTD_IsBattleMode_C.PerformConditionCheckAI
// 0x0070 (0x0070 - 0x0000)
struct BTD_IsBattleMode_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          LbBattle;                                          // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85F2[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface;       // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85F3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerInterface_C> K2Node_DynamicCast_AsBPI_Player_Interface;         // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBattleActionStartAI_bStart;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnemyPlayer_bEnemyPlayer;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85F4[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICommonAIInterface_C>  K2Node_DynamicCast_AsCommon_AIInterface;           // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsBattleMode_IsBattleMode;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85F5[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDebuggingManager_Manager;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDebugNpcNoBattle_ReturnValue;           // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTD_IsBattleMode_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_IsBattleMode_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_IsBattleMode_C_PerformConditionCheckAI) == 0x000070, "Wrong size on BTD_IsBattleMode_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, LbBattle) == 0x000011, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::LbBattle' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBPI_Player_AIInterface) == 0x000018, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBPI_Player_AIInterface' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBPI_Player_Interface) == 0x000030, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBPI_Player_Interface' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_IsBattleActionStartAI_bStart) == 0x000041, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_IsBattleActionStartAI_bStart' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_IsEnemyPlayer_bEnemyPlayer) == 0x000042, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_IsEnemyPlayer_bEnemyPlayer' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_AsCommon_AIInterface) == 0x000048, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_AsCommon_AIInterface' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_GetIsBattleMode_IsBattleMode) == 0x000059, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_GetIsBattleMode_IsBattleMode' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_GetDebuggingManager_Manager) == 0x000060, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_GetDebuggingManager_Manager' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsBattleMode_C_PerformConditionCheckAI, CallFunc_IsDebugNpcNoBattle_ReturnValue) == 0x000069, "Member 'BTD_IsBattleMode_C_PerformConditionCheckAI::CallFunc_IsDebugNpcNoBattle_ReturnValue' has a wrong offset!");

}


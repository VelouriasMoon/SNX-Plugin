#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_LevelManagerFunctionLibrary

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPFL_LevelManagerFunctionLibrary.BPFL_LevelManagerFunctionLibrary_C.GetLevelManager
// 0x0040 (0x0040 - 0x0000)
struct BPFL_LevelManagerFunctionLibrary_C_GetLevelManager final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LevelManager_C*                     LevelManager;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSGameInstance*                        K2Node_DynamicCast_AsRSGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3235[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetLevelManager_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LevelManager_C*                     K2Node_DynamicCast_AsBP_Level_Manager;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager) == 0x000008, "Wrong alignment on BPFL_LevelManagerFunctionLibrary_C_GetLevelManager");
static_assert(sizeof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager) == 0x000040, "Wrong size on BPFL_LevelManagerFunctionLibrary_C_GetLevelManager");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, __WorldContext) == 0x000000, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, LevelManager) == 0x000008, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::LevelManager' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, K2Node_DynamicCast_AsRSGame_Instance) == 0x000018, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::K2Node_DynamicCast_AsRSGame_Instance' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, CallFunc_GetLevelManager_ReturnValue) == 0x000028, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::CallFunc_GetLevelManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, K2Node_DynamicCast_AsBP_Level_Manager) == 0x000030, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::K2Node_DynamicCast_AsBP_Level_Manager' has a wrong offset!");
static_assert(offsetof(BPFL_LevelManagerFunctionLibrary_C_GetLevelManager, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BPFL_LevelManagerFunctionLibrary_C_GetLevelManager::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}


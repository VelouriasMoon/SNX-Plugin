#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_ClearGetterManagerFunctionLibrary

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPFL_ClearGetterManagerFunctionLibrary.BPFL_ClearGetterManagerFunctionLibrary_C.GetClearGetterManager
// 0x0030 (0x0030 - 0x0000)
struct BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClearGetterManager*                    ClearGetterManager;                                // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSGameInstance*                        K2Node_DynamicCast_AsRSGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClearGetterManager*                    CallFunc_GetClearGetterManager_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager) == 0x000008, "Wrong alignment on BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager");
static_assert(sizeof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager) == 0x000030, "Wrong size on BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, __WorldContext) == 0x000000, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, ClearGetterManager) == 0x000008, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::ClearGetterManager' has a wrong offset!");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, K2Node_DynamicCast_AsRSGame_Instance) == 0x000018, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::K2Node_DynamicCast_AsRSGame_Instance' has a wrong offset!");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager, CallFunc_GetClearGetterManager_ReturnValue) == 0x000028, "Member 'BPFL_ClearGetterManagerFunctionLibrary_C_GetClearGetterManager::CallFunc_GetClearGetterManager_ReturnValue' has a wrong offset!");

}


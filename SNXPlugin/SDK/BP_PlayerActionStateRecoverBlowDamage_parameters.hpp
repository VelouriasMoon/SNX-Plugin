#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateRecoverBlowDamage

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerActionStateRecoverBlowDamage.BP_PlayerActionStateRecoverBlowDamage_C.Enter
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerActionStateRecoverBlowDamage_C_Enter final
{
public:
	int32                                         Param;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Enter_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlayerInterface>      CallFunc_IsActiveSAS_Copy_self_CastInput;          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveSAS_Copy_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CopyPlayerOn_bDummy;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerActionStateRecoverBlowDamage_C_Enter) == 0x000008, "Wrong alignment on BP_PlayerActionStateRecoverBlowDamage_C_Enter");
static_assert(sizeof(BP_PlayerActionStateRecoverBlowDamage_C_Enter) == 0x000028, "Wrong size on BP_PlayerActionStateRecoverBlowDamage_C_Enter");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, Param) == 0x000000, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::Param' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, ReturnValue) == 0x000004, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, CallFunc_Enter_ReturnValue) == 0x000008, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::CallFunc_Enter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, CallFunc_IsActiveSAS_Copy_self_CastInput) == 0x000010, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::CallFunc_IsActiveSAS_Copy_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, CallFunc_IsActiveSAS_Copy_ReturnValue) == 0x000020, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::CallFunc_IsActiveSAS_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Enter, CallFunc_CopyPlayerOn_bDummy) == 0x000021, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Enter::CallFunc_CopyPlayerOn_bDummy' has a wrong offset!");

// Function BP_PlayerActionStateRecoverBlowDamage.BP_PlayerActionStateRecoverBlowDamage_C.Transition
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerActionStateRecoverBlowDamage_C_Transition final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Transition_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsASAnimPlayEnd_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerActionStateRecoverBlowDamage_C_Transition) == 0x000001, "Wrong alignment on BP_PlayerActionStateRecoverBlowDamage_C_Transition");
static_assert(sizeof(BP_PlayerActionStateRecoverBlowDamage_C_Transition) == 0x000003, "Wrong size on BP_PlayerActionStateRecoverBlowDamage_C_Transition");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Transition, ReturnValue) == 0x000000, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Transition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Transition, CallFunc_Transition_ReturnValue) == 0x000001, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Transition::CallFunc_Transition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Transition, CallFunc_IsASAnimPlayEnd_ReturnValue) == 0x000002, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Transition::CallFunc_IsASAnimPlayEnd_ReturnValue' has a wrong offset!");

// Function BP_PlayerActionStateRecoverBlowDamage.BP_PlayerActionStateRecoverBlowDamage_C.Exit
// 0x000C (0x000C - 0x0000)
struct BP_PlayerActionStateRecoverBlowDamage_C_Exit final
{
public:
	int32                                         NextStateIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Exit_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerActionStateRecoverBlowDamage_C_Exit) == 0x000004, "Wrong alignment on BP_PlayerActionStateRecoverBlowDamage_C_Exit");
static_assert(sizeof(BP_PlayerActionStateRecoverBlowDamage_C_Exit) == 0x00000C, "Wrong size on BP_PlayerActionStateRecoverBlowDamage_C_Exit");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Exit, NextStateIndex) == 0x000000, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Exit::NextStateIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Exit, ReturnValue) == 0x000004, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Exit::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateRecoverBlowDamage_C_Exit, CallFunc_Exit_ReturnValue) == 0x000008, "Member 'BP_PlayerActionStateRecoverBlowDamage_C_Exit::CallFunc_Exit_ReturnValue' has a wrong offset!");

}


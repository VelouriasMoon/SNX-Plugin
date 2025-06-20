#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateWakeUp

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Enter
// 0x0048 (0x0048 - 0x0000)
struct BP_PlayerActionStateWakeUp_C_Enter final
{
public:
	int32                                         Param;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93C1[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Enter_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CopyPlayerOn_bDummy;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C2[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlayerInterface>      CallFunc_IsActiveSAS_Copy_self_CastInput;          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveSAS_Copy_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetInvalidDamage_Dummy;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetFootIKEnable_Dummy;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C3[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_LookAtInterface_C> CallFunc_SetLookAtEnable_self_CastInput;           // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLookAtEnable_bResult;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerActionStateWakeUp_C_Enter) == 0x000008, "Wrong alignment on BP_PlayerActionStateWakeUp_C_Enter");
static_assert(sizeof(BP_PlayerActionStateWakeUp_C_Enter) == 0x000048, "Wrong size on BP_PlayerActionStateWakeUp_C_Enter");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, Param) == 0x000000, "Member 'BP_PlayerActionStateWakeUp_C_Enter::Param' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, ReturnValue) == 0x000004, "Member 'BP_PlayerActionStateWakeUp_C_Enter::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_GetValidValue_ReturnValue) == 0x000009, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_Enter_ReturnValue) == 0x00000C, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_Enter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_CopyPlayerOn_bDummy) == 0x000010, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_CopyPlayerOn_bDummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_IsActiveSAS_Copy_self_CastInput) == 0x000018, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_IsActiveSAS_Copy_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_IsActiveSAS_Copy_ReturnValue) == 0x000028, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_IsActiveSAS_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_SetInvalidDamage_Dummy) == 0x000029, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_SetInvalidDamage_Dummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_SetFootIKEnable_Dummy) == 0x00002A, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_SetFootIKEnable_Dummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_SetLookAtEnable_self_CastInput) == 0x000030, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_SetLookAtEnable_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Enter, CallFunc_SetLookAtEnable_bResult) == 0x000040, "Member 'BP_PlayerActionStateWakeUp_C_Enter::CallFunc_SetLookAtEnable_bResult' has a wrong offset!");

// Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Update
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerActionStateWakeUp_C_Update final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetActorDeltaSeconds_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetInvalidDamage_Dummy;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C4[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsASAnimPlayEnd_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C5[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Update_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerActionStateWakeUp_C_Update) == 0x000004, "Wrong alignment on BP_PlayerActionStateWakeUp_C_Update");
static_assert(sizeof(BP_PlayerActionStateWakeUp_C_Update) == 0x000018, "Wrong size on BP_PlayerActionStateWakeUp_C_Update");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, ReturnValue) == 0x000000, "Member 'BP_PlayerActionStateWakeUp_C_Update::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_GetActorDeltaSeconds_ReturnValue) == 0x000004, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_GetActorDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_SetInvalidDamage_Dummy) == 0x000008, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_SetInvalidDamage_Dummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000009, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_IsASAnimPlayEnd_ReturnValue) == 0x000010, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_IsASAnimPlayEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Update, CallFunc_Update_ReturnValue) == 0x000014, "Member 'BP_PlayerActionStateWakeUp_C_Update::CallFunc_Update_ReturnValue' has a wrong offset!");

// Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Exit
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerActionStateWakeUp_C_Exit final
{
public:
	int32                                         NextStateIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Exit_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93C6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_ch0200_C>         K2Node_DynamicCast_AsBPI_Ch_0200;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnEndWakeupFromDead_bDummy;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetInvalidDamage_Dummy;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattleCharacterInterface_C> CallFunc_CancelMeshFitGround_self_CastInput;       // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CancelMeshFitGround_bDummy;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetFootIKEnable_Dummy;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C7[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_LookAtInterface_C> CallFunc_SetLookAtEnable_self_CastInput;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLookAtEnable_bResult;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerActionStateWakeUp_C_Exit) == 0x000008, "Wrong alignment on BP_PlayerActionStateWakeUp_C_Exit");
static_assert(sizeof(BP_PlayerActionStateWakeUp_C_Exit) == 0x000058, "Wrong size on BP_PlayerActionStateWakeUp_C_Exit");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, NextStateIndex) == 0x000000, "Member 'BP_PlayerActionStateWakeUp_C_Exit::NextStateIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, ReturnValue) == 0x000004, "Member 'BP_PlayerActionStateWakeUp_C_Exit::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_Exit_ReturnValue) == 0x000008, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_Exit_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, K2Node_DynamicCast_AsBPI_Ch_0200) == 0x000010, "Member 'BP_PlayerActionStateWakeUp_C_Exit::K2Node_DynamicCast_AsBPI_Ch_0200' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PlayerActionStateWakeUp_C_Exit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_DoesImplementInterface_ReturnValue) == 0x000021, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_OnEndWakeupFromDead_bDummy) == 0x000022, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_OnEndWakeupFromDead_bDummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000023, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000024, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_SetInvalidDamage_Dummy) == 0x000025, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_SetInvalidDamage_Dummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000026, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_Not_PreBool_ReturnValue) == 0x000027, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_CancelMeshFitGround_self_CastInput) == 0x000028, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_CancelMeshFitGround_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_CancelMeshFitGround_bDummy) == 0x000038, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_CancelMeshFitGround_bDummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_SetFootIKEnable_Dummy) == 0x000039, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_SetFootIKEnable_Dummy' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_SetLookAtEnable_self_CastInput) == 0x000040, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_SetLookAtEnable_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerActionStateWakeUp_C_Exit, CallFunc_SetLookAtEnable_bResult) == 0x000050, "Member 'BP_PlayerActionStateWakeUp_C_Exit::CallFunc_SetLookAtEnable_bResult' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IntroTutorialManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.BeginIntroTutorial
// 0x00C8 (0x00C8 - 0x0000)
struct BP_IntroTutorialManager_C_BeginIntroTutorial final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A81[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8A82[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A83[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A84[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BeginIntroTutorial_ReturnValue;           // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_BeginIntroTutorial) == 0x000008, "Wrong alignment on BP_IntroTutorialManager_C_BeginIntroTutorial");
static_assert(sizeof(BP_IntroTutorialManager_C_BeginIntroTutorial) == 0x0000C8, "Wrong size on BP_IntroTutorialManager_C_BeginIntroTutorial");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, ReturnValue) == 0x000000, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, CallFunc_GetPlayerManager_PlayerManager) == 0x000078, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_7) == 0x000080, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, CallFunc_GetMainPlayer_Player) == 0x000098, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::CallFunc_GetMainPlayer_Player' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000A4, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000B4, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_BeginIntroTutorial, CallFunc_BeginIntroTutorial_ReturnValue) == 0x0000C4, "Member 'BP_IntroTutorialManager_C_BeginIntroTutorial::CallFunc_BeginIntroTutorial_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.EndIntroTutorial
// 0x00A8 (0x00A8 - 0x0000)
struct BP_IntroTutorialManager_C_EndIntroTutorial final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A85[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RestrictPlayerPsychic_ReturnValue;        // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RestrictPlayerAttack_ReturnValue;         // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EndIntroTutorial_ReturnValue;             // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_EndIntroTutorial) == 0x000004, "Wrong alignment on BP_IntroTutorialManager_C_EndIntroTutorial");
static_assert(sizeof(BP_IntroTutorialManager_C_EndIntroTutorial) == 0x0000A8, "Wrong size on BP_IntroTutorialManager_C_EndIntroTutorial");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, ReturnValue) == 0x000000, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_7) == 0x000074, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_8) == 0x000084, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, K2Node_CreateDelegate_OutputDelegate_9) == 0x000094, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, CallFunc_RestrictPlayerPsychic_ReturnValue) == 0x0000A4, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::CallFunc_RestrictPlayerPsychic_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, CallFunc_RestrictPlayerAttack_ReturnValue) == 0x0000A5, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::CallFunc_RestrictPlayerAttack_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, CallFunc_EndIntroTutorial_ReturnValue) == 0x0000A6, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::CallFunc_EndIntroTutorial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_EndIntroTutorial, CallFunc_IsValid_ReturnValue) == 0x0000A7, "Member 'BP_IntroTutorialManager_C_EndIntroTutorial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RemoveEnemysNoDead
// 0x0068 (0x0068 - 0x0000)
struct BP_IntroTutorialManager_C_RemoveEnemysNoDead final
{
public:
	int32                                         GroupID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubGroupID;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveEnemysNoDead_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A86[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyManager_C*                     CallFunc_GetEnemyManager_Manager;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A87[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A88[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ARSCharacterBase*>               CallFunc_GetEnemyListRef_ReturnValue;              // 0x0028(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A89[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleEnemy_C*                       K2Node_DynamicCast_AsRSBattle_Enemy;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A8A[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBattleCharacterInterface> CallFunc_DisEnableNoDeadTutorial_self_CastInput;   // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_RemoveEnemysNoDead) == 0x000008, "Wrong alignment on BP_IntroTutorialManager_C_RemoveEnemysNoDead");
static_assert(sizeof(BP_IntroTutorialManager_C_RemoveEnemysNoDead) == 0x000068, "Wrong size on BP_IntroTutorialManager_C_RemoveEnemysNoDead");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, GroupID) == 0x000000, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::GroupID' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, SubGroupID) == 0x000004, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::SubGroupID' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, ReturnValue) == 0x000008, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_RemoveEnemysNoDead_ReturnValue) == 0x000009, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_RemoveEnemysNoDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_GetEnemyManager_Manager) == 0x000010, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_GetEnemyManager_Manager' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_GetEnemyListRef_ReturnValue) == 0x000028, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_GetEnemyListRef_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, K2Node_DynamicCast_AsRSBattle_Enemy) == 0x000040, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::K2Node_DynamicCast_AsRSBattle_Enemy' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_DisEnableNoDeadTutorial_self_CastInput) == 0x000050, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_DisEnableNoDeadTutorial_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000061, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RemoveEnemysNoDead, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'BP_IntroTutorialManager_C_RemoveEnemysNoDead::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerAttack
// 0x0003 (0x0003 - 0x0000)
struct BP_IntroTutorialManager_C_RestrictPlayerAttack final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RestrictPlayerAttack_ReturnValue;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_RestrictPlayerAttack) == 0x000001, "Wrong alignment on BP_IntroTutorialManager_C_RestrictPlayerAttack");
static_assert(sizeof(BP_IntroTutorialManager_C_RestrictPlayerAttack) == 0x000003, "Wrong size on BP_IntroTutorialManager_C_RestrictPlayerAttack");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerAttack, IsOn) == 0x000000, "Member 'BP_IntroTutorialManager_C_RestrictPlayerAttack::IsOn' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerAttack, ReturnValue) == 0x000001, "Member 'BP_IntroTutorialManager_C_RestrictPlayerAttack::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerAttack, CallFunc_RestrictPlayerAttack_ReturnValue) == 0x000002, "Member 'BP_IntroTutorialManager_C_RestrictPlayerAttack::CallFunc_RestrictPlayerAttack_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerPsychic
// 0x0003 (0x0003 - 0x0000)
struct BP_IntroTutorialManager_C_RestrictPlayerPsychic final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RestrictPlayerPsychic_ReturnValue;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_RestrictPlayerPsychic) == 0x000001, "Wrong alignment on BP_IntroTutorialManager_C_RestrictPlayerPsychic");
static_assert(sizeof(BP_IntroTutorialManager_C_RestrictPlayerPsychic) == 0x000003, "Wrong size on BP_IntroTutorialManager_C_RestrictPlayerPsychic");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerPsychic, IsOn) == 0x000000, "Member 'BP_IntroTutorialManager_C_RestrictPlayerPsychic::IsOn' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerPsychic, ReturnValue) == 0x000001, "Member 'BP_IntroTutorialManager_C_RestrictPlayerPsychic::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerPsychic, CallFunc_RestrictPlayerPsychic_ReturnValue) == 0x000002, "Member 'BP_IntroTutorialManager_C_RestrictPlayerPsychic::CallFunc_RestrictPlayerPsychic_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerSpecialAttack
// 0x0003 (0x0003 - 0x0000)
struct BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RestrictPlayerSpecialAttack_ReturnValue;  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack) == 0x000001, "Wrong alignment on BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack");
static_assert(sizeof(BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack) == 0x000003, "Wrong size on BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack, IsOn) == 0x000000, "Member 'BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack::IsOn' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack, ReturnValue) == 0x000001, "Member 'BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack, CallFunc_RestrictPlayerSpecialAttack_ReturnValue) == 0x000002, "Member 'BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack::CallFunc_RestrictPlayerSpecialAttack_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.SetTutrialPKGaugeRecovery
// 0x0003 (0x0003 - 0x0000)
struct BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTutrialPKGaugeRecovery_ReturnValue;    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery) == 0x000001, "Wrong alignment on BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery");
static_assert(sizeof(BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery) == 0x000003, "Wrong size on BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery");
static_assert(offsetof(BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery, IsOn) == 0x000000, "Member 'BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery::IsOn' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery, ReturnValue) == 0x000001, "Member 'BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery, CallFunc_SetTutrialPKGaugeRecovery_ReturnValue) == 0x000002, "Member 'BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery::CallFunc_SetTutrialPKGaugeRecovery_ReturnValue' has a wrong offset!");

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerLaunchAttack
// 0x0003 (0x0003 - 0x0000)
struct BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RestrictPlayerLaunchAttack_ReturnValue;   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack) == 0x000001, "Wrong alignment on BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack");
static_assert(sizeof(BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack) == 0x000003, "Wrong size on BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack, IsOn) == 0x000000, "Member 'BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack::IsOn' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack, ReturnValue) == 0x000001, "Member 'BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack, CallFunc_RestrictPlayerLaunchAttack_ReturnValue) == 0x000002, "Member 'BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack::CallFunc_RestrictPlayerLaunchAttack_ReturnValue' has a wrong offset!");

}


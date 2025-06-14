#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ch_MoveAim

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTT_ch_MoveAim.BTT_ch_MoveAim_C.ExecuteUbergraph_BTT_ch_MoveAim
// 0x0118 (0x0118 - 0x0000)
struct BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_2;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface;       // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_527F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_1;     // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AimEndAI_bDummy;                          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AimStartAI_bDummy;                        // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5280[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_2;     // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5281[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5282[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_3;     // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5283[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_4;     // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5284[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAttackCountAI_Count;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_5;     // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5285[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_6;     // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputAI_Attack_bON;                     // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5286[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface_7;     // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5287[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAttackCountAI_Count_1;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5288[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOver_ReturnValue;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5289[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim) == 0x000008, "Wrong alignment on BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim");
static_assert(sizeof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim) == 0x000118, "Wrong size on BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, EntryPoint) == 0x000000, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, Temp_int_Variable) == 0x000004, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_OwnerController_2) == 0x000008, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_OwnerController_2' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_ControlledPawn_2) == 0x000010, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_OwnerController_1) == 0x000018, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_ControlledPawn_1) == 0x000020, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface) == 0x000028, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_1) == 0x000040, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_AimEndAI_bDummy) == 0x000051, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_AimEndAI_bDummy' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_AimStartAI_bDummy) == 0x000052, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_AimStartAI_bDummy' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_2) == 0x000058, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_2' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_OwnerController) == 0x000070, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_ControlledPawn) == 0x000078, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_Event_DeltaSeconds) == 0x000080, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_3) == 0x000088, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_3' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_4) == 0x0000A0, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_4' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_4) == 0x0000B0, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_GetAttackCountAI_Count) == 0x0000B4, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_GetAttackCountAI_Count' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_5) == 0x0000B8, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_5' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_5) == 0x0000C8, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_6) == 0x0000D0, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_6' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_6) == 0x0000E0, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_IsInputAI_Attack_bON) == 0x0000E1, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_IsInputAI_Attack_bON' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_AsBPI_Player_AIInterface_7) == 0x0000E8, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_AsBPI_Player_AIInterface_7' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_DynamicCast_bSuccess_7) == 0x0000F8, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_GetAttackCountAI_Count_1) == 0x0000FC, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_GetAttackCountAI_Count_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, K2Node_SwitchInteger_CmpSuccess) == 0x000100, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, Temp_int_Variable_1) == 0x000104, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_IsOver_ReturnValue) == 0x000108, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_IsOver_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_Add_IntInt_ReturnValue) == 0x00010C, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_Add_IntInt_ReturnValue_1) == 0x000110, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000114, "Member 'BTT_ch_MoveAim_C_ExecuteUbergraph_BTT_ch_MoveAim::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BTT_ch_MoveAim.BTT_ch_MoveAim_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTT_ch_MoveAim_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ch_MoveAim_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTT_ch_MoveAim_C_ReceiveTickAI");
static_assert(sizeof(BTT_ch_MoveAim_C_ReceiveTickAI) == 0x000018, "Wrong size on BTT_ch_MoveAim_C_ReceiveTickAI");
static_assert(offsetof(BTT_ch_MoveAim_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTT_ch_MoveAim_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTT_ch_MoveAim_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTT_ch_MoveAim_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function BTT_ch_MoveAim.BTT_ch_MoveAim_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_ch_MoveAim_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ch_MoveAim_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_ch_MoveAim_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_ch_MoveAim_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_ch_MoveAim_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_ch_MoveAim_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_ch_MoveAim_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_ch_MoveAim_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTT_ch_MoveAim.BTT_ch_MoveAim_C.Exit
// 0x0010 (0x0010 - 0x0000)
struct BTT_ch_MoveAim_C_Exit final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ch_MoveAim_C_Exit) == 0x000008, "Wrong alignment on BTT_ch_MoveAim_C_Exit");
static_assert(sizeof(BTT_ch_MoveAim_C_Exit) == 0x000010, "Wrong size on BTT_ch_MoveAim_C_Exit");
static_assert(offsetof(BTT_ch_MoveAim_C_Exit, OwnerController) == 0x000000, "Member 'BTT_ch_MoveAim_C_Exit::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ch_MoveAim_C_Exit, ControlledPawn) == 0x000008, "Member 'BTT_ch_MoveAim_C_Exit::ControlledPawn' has a wrong offset!");

}


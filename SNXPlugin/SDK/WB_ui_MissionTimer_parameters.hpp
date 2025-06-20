#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_MissionTimer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.ExecuteUbergraph_WB_ui_MissionTimer
// 0x0038 (0x0038 - 0x0000)
struct WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_State;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubState;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5706[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer) == 0x000008, "Wrong alignment on WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer");
static_assert(sizeof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer) == 0x000038, "Wrong size on WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, EntryPoint) == 0x000000, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_Event_State) == 0x000004, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_Event_SubState) == 0x000008, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_Event_SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_MakeArray_Array) == 0x000018, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer, K2Node_MakeArray_Array_1) == 0x000028, "Member 'WB_ui_MissionTimer_C_ExecuteUbergraph_WB_ui_MissionTimer::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.UpdateState
// 0x000C (0x000C - 0x0000)
struct WB_ui_MissionTimer_C_UpdateState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubState;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_MissionTimer_C_UpdateState) == 0x000004, "Wrong alignment on WB_ui_MissionTimer_C_UpdateState");
static_assert(sizeof(WB_ui_MissionTimer_C_UpdateState) == 0x00000C, "Wrong size on WB_ui_MissionTimer_C_UpdateState");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateState, State) == 0x000000, "Member 'WB_ui_MissionTimer_C_UpdateState::State' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateState, SubState) == 0x000004, "Member 'WB_ui_MissionTimer_C_UpdateState::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateState, DeltaSeconds) == 0x000008, "Member 'WB_ui_MissionTimer_C_UpdateState::DeltaSeconds' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.StateNone
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_MissionTimer_C_StateNone final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_MissionTimer_C_StateNone) == 0x000004, "Wrong alignment on WB_ui_MissionTimer_C_StateNone");
static_assert(sizeof(WB_ui_MissionTimer_C_StateNone) == 0x000008, "Wrong size on WB_ui_MissionTimer_C_StateNone");
static_assert(offsetof(WB_ui_MissionTimer_C_StateNone, SubState) == 0x000000, "Member 'WB_ui_MissionTimer_C_StateNone::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateNone, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_MissionTimer_C_StateNone::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.StateOpen
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_MissionTimer_C_StateOpen final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayUICurrentAnimation_isPlay;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_MissionTimer_C_StateOpen) == 0x000004, "Wrong alignment on WB_ui_MissionTimer_C_StateOpen");
static_assert(sizeof(WB_ui_MissionTimer_C_StateOpen) == 0x000008, "Wrong size on WB_ui_MissionTimer_C_StateOpen");
static_assert(offsetof(WB_ui_MissionTimer_C_StateOpen, SubState) == 0x000000, "Member 'WB_ui_MissionTimer_C_StateOpen::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateOpen, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_MissionTimer_C_StateOpen::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateOpen, CallFunc_IsPlayUICurrentAnimation_isPlay) == 0x000005, "Member 'WB_ui_MissionTimer_C_StateOpen::CallFunc_IsPlayUICurrentAnimation_isPlay' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.StateLoop
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_MissionTimer_C_StateLoop final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_MissionTimer_C_StateLoop) == 0x000004, "Wrong alignment on WB_ui_MissionTimer_C_StateLoop");
static_assert(sizeof(WB_ui_MissionTimer_C_StateLoop) == 0x000008, "Wrong size on WB_ui_MissionTimer_C_StateLoop");
static_assert(offsetof(WB_ui_MissionTimer_C_StateLoop, SubState) == 0x000000, "Member 'WB_ui_MissionTimer_C_StateLoop::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateLoop, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_MissionTimer_C_StateLoop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.StateClose
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_MissionTimer_C_StateClose final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayUICurrentAnimation_isPlay;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_MissionTimer_C_StateClose) == 0x000004, "Wrong alignment on WB_ui_MissionTimer_C_StateClose");
static_assert(sizeof(WB_ui_MissionTimer_C_StateClose) == 0x000008, "Wrong size on WB_ui_MissionTimer_C_StateClose");
static_assert(offsetof(WB_ui_MissionTimer_C_StateClose, SubState) == 0x000000, "Member 'WB_ui_MissionTimer_C_StateClose::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateClose, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_MissionTimer_C_StateClose::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateClose, CallFunc_IsPlayUICurrentAnimation_isPlay) == 0x000005, "Member 'WB_ui_MissionTimer_C_StateClose::CallFunc_IsPlayUICurrentAnimation_isPlay' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateClose, CallFunc_Not_PreBool_ReturnValue) == 0x000006, "Member 'WB_ui_MissionTimer_C_StateClose::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_StateClose, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'WB_ui_MissionTimer_C_StateClose::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.UpdateTime
// 0x0048 (0x0048 - 0x0000)
struct WB_ui_MissionTimer_C_UpdateTime final
{
public:
	int32                                         _drawTime;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_3;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_3;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5707[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleSimulatorManager*                CallFunc_GetBattleSimulatorManager_BattleSimulatorManager; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBattleTime_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5708[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_FFloor64_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_MissionTimer_C_UpdateTime) == 0x000008, "Wrong alignment on WB_ui_MissionTimer_C_UpdateTime");
static_assert(sizeof(WB_ui_MissionTimer_C_UpdateTime) == 0x000048, "Wrong size on WB_ui_MissionTimer_C_UpdateTime");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, _drawTime) == 0x000000, "Member 'WB_ui_MissionTimer_C_UpdateTime::_drawTime' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Percent_IntInt_ReturnValue) == 0x000004, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000008, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Percent_IntInt_ReturnValue_2) == 0x00000C, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Divide_IntInt_ReturnValue) == 0x000010, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000014, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Divide_IntInt_ReturnValue_2) == 0x000018, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Percent_IntInt_ReturnValue_3) == 0x00001C, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Percent_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Divide_IntInt_ReturnValue_3) == 0x000020, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Divide_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_GetBattleSimulatorManager_BattleSimulatorManager) == 0x000028, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_GetBattleSimulatorManager_BattleSimulatorManager' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_GetBattleTime_ReturnValue) == 0x000030, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_GetBattleTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_FFloor64_ReturnValue) == 0x000038, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_FFloor64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateTime, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000040, "Member 'WB_ui_MissionTimer_C_UpdateTime::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.SetColor
// 0x0040 (0x0040 - 0x0000)
struct WB_ui_MissionTimer_C_SetColor final
{
public:
	int32                                         Param_ColorIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5709[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_570A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_570B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_MissionTimer_C_SetColor) == 0x000008, "Wrong alignment on WB_ui_MissionTimer_C_SetColor");
static_assert(sizeof(WB_ui_MissionTimer_C_SetColor) == 0x000040, "Wrong size on WB_ui_MissionTimer_C_SetColor");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, Param_ColorIndex) == 0x000000, "Member 'WB_ui_MissionTimer_C_SetColor::Param_ColorIndex' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_ui_MissionTimer_C_SetColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WB_ui_MissionTimer_C_SetColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'WB_ui_MissionTimer_C_SetColor::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'WB_ui_MissionTimer_C_SetColor::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_Less_IntInt_ReturnValue_1) == 0x000034, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetColor, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000038, "Member 'WB_ui_MissionTimer_C_SetColor::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.SetTimeNum
// 0x0058 (0x0058 - 0x0000)
struct WB_ui_MissionTimer_C_SetTimeNum final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _ColorWork;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_570C[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_MissionTimer_C_SetTimeNum) == 0x000008, "Wrong alignment on WB_ui_MissionTimer_C_SetTimeNum");
static_assert(sizeof(WB_ui_MissionTimer_C_SetTimeNum) == 0x000058, "Wrong size on WB_ui_MissionTimer_C_SetTimeNum");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, Param_Index) == 0x000000, "Member 'WB_ui_MissionTimer_C_SetTimeNum::Param_Index' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, Num) == 0x000004, "Member 'WB_ui_MissionTimer_C_SetTimeNum::Num' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, _ColorWork) == 0x000008, "Member 'WB_ui_MissionTimer_C_SetTimeNum::_ColorWork' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00000C, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, K2Node_MakeStruct_LinearColor) == 0x000010, "Member 'WB_ui_MissionTimer_C_SetTimeNum::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_Array_Get_Item) == 0x000020, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000030, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, K2Node_MakeStruct_LinearColor_1) == 0x000034, "Member 'WB_ui_MissionTimer_C_SetTimeNum::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000044, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_SetTimeNum, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000050, "Member 'WB_ui_MissionTimer_C_SetTimeNum::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

// Function WB_ui_MissionTimer.WB_ui_MissionTimer_C.UpdateColor
// 0x0020 (0x0020 - 0x0000)
struct WB_ui_MissionTimer_C_UpdateColor final
{
public:
	int32                                         _Work;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRedPaused_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_570D[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleSimulatorManager*                CallFunc_GetBattleSimulatorManager_BattleSimulatorManager; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMissionActive_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTimerPause_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMissionStartBefore_ReturnValue;         // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_MissionTimer_C_UpdateColor) == 0x000008, "Wrong alignment on WB_ui_MissionTimer_C_UpdateColor");
static_assert(sizeof(WB_ui_MissionTimer_C_UpdateColor) == 0x000020, "Wrong size on WB_ui_MissionTimer_C_UpdateColor");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, _Work) == 0x000000, "Member 'WB_ui_MissionTimer_C_UpdateColor::_Work' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_GetRedPaused_ReturnValue) == 0x000004, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_GetRedPaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000009, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_GetBattleSimulatorManager_BattleSimulatorManager) == 0x000010, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_GetBattleSimulatorManager_BattleSimulatorManager' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_IsMissionActive_ReturnValue) == 0x000018, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_IsMissionActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_IsTimerPause_ReturnValue) == 0x000019, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_IsTimerPause_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_MissionTimer_C_UpdateColor, CallFunc_IsMissionStartBefore_ReturnValue) == 0x00001B, "Member 'WB_ui_MissionTimer_C_UpdateColor::CallFunc_IsMissionStartBefore_ReturnValue' has a wrong offset!");

}


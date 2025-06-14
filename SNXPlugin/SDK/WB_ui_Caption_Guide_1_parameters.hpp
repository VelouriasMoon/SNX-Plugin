#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Caption_Guide_1

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.ExecuteUbergraph_WB_ui_Caption_Guide_1
// 0x0028 (0x0028 - 0x0000)
struct WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_State;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubState;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E0F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSHUDBase*                             CallFunc_GetHUDBase_HUDBase;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFade_ReturnValue;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1) == 0x000008, "Wrong alignment on WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1) == 0x000028, "Wrong size on WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, EntryPoint) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, K2Node_Event_State) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, K2Node_Event_SubState) == 0x000008, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::K2Node_Event_SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, CallFunc_GetHUDBase_HUDBase) == 0x000018, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::CallFunc_GetHUDBase_HUDBase' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1, CallFunc_IsFade_ReturnValue) == 0x000020, "Member 'WB_ui_Caption_Guide_1_C_ExecuteUbergraph_WB_ui_Caption_Guide_1::CallFunc_IsFade_ReturnValue' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.UpdateState
// 0x000C (0x000C - 0x0000)
struct WB_ui_Caption_Guide_1_C_UpdateState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubState;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_UpdateState) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_UpdateState");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_UpdateState) == 0x00000C, "Wrong size on WB_ui_Caption_Guide_1_C_UpdateState");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_UpdateState, State) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_UpdateState::State' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_UpdateState, SubState) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_UpdateState::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_UpdateState, DeltaSeconds) == 0x000008, "Member 'WB_ui_Caption_Guide_1_C_UpdateState::DeltaSeconds' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.StateNone
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_Caption_Guide_1_C_StateNone final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_StateNone) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_StateNone");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_StateNone) == 0x000008, "Wrong size on WB_ui_Caption_Guide_1_C_StateNone");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateNone, SubState) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_StateNone::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateNone, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_StateNone::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.StateOpen
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_Caption_Guide_1_C_StateOpen final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayUICurrentAnimation_isPlay;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_StateOpen) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_StateOpen");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_StateOpen) == 0x000008, "Wrong size on WB_ui_Caption_Guide_1_C_StateOpen");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateOpen, SubState) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_StateOpen::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateOpen, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_StateOpen::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateOpen, CallFunc_IsPlayUICurrentAnimation_isPlay) == 0x000005, "Member 'WB_ui_Caption_Guide_1_C_StateOpen::CallFunc_IsPlayUICurrentAnimation_isPlay' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.StateLoop
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_Caption_Guide_1_C_StateLoop final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_StateLoop) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_StateLoop");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_StateLoop) == 0x000008, "Wrong size on WB_ui_Caption_Guide_1_C_StateLoop");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateLoop, SubState) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_StateLoop::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateLoop, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_StateLoop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.StateClose
// 0x0008 (0x0008 - 0x0000)
struct WB_ui_Caption_Guide_1_C_StateClose final
{
public:
	int32                                         SubState;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayUICurrentAnimation_isPlay;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_StateClose) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_StateClose");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_StateClose) == 0x000008, "Wrong size on WB_ui_Caption_Guide_1_C_StateClose");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateClose, SubState) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_StateClose::SubState' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateClose, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_StateClose::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_StateClose, CallFunc_IsPlayUICurrentAnimation_isPlay) == 0x000005, "Member 'WB_ui_Caption_Guide_1_C_StateClose::CallFunc_IsPlayUICurrentAnimation_isPlay' has a wrong offset!");

// Function WB_ui_Caption_Guide_1.WB_ui_Caption_Guide_1_C.Set Guide
// 0x0010 (0x0010 - 0x0000)
struct WB_ui_Caption_Guide_1_C_Set_Guide final
{
public:
	bool                                          FlagSkip;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FlagPhotoMode;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E10[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _index;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_Caption_Guide_1_C_Set_Guide) == 0x000004, "Wrong alignment on WB_ui_Caption_Guide_1_C_Set_Guide");
static_assert(sizeof(WB_ui_Caption_Guide_1_C_Set_Guide) == 0x000010, "Wrong size on WB_ui_Caption_Guide_1_C_Set_Guide");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_Set_Guide, FlagSkip) == 0x000000, "Member 'WB_ui_Caption_Guide_1_C_Set_Guide::FlagSkip' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_Set_Guide, FlagPhotoMode) == 0x000001, "Member 'WB_ui_Caption_Guide_1_C_Set_Guide::FlagPhotoMode' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_Set_Guide, _index) == 0x000004, "Member 'WB_ui_Caption_Guide_1_C_Set_Guide::_index' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_Set_Guide, Temp_int_Variable) == 0x000008, "Member 'WB_ui_Caption_Guide_1_C_Set_Guide::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_ui_Caption_Guide_1_C_Set_Guide, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WB_ui_Caption_Guide_1_C_Set_Guide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}


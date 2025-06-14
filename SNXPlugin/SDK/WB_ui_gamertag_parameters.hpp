#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_gamertag

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_ui_gamertag.WB_ui_gamertag_C.ExecuteUbergraph_WB_ui_gamertag
// 0x00D8 (0x00D8 - 0x0000)
struct WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E0D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDatabaseManager*                       CallFunc_GetDataBaseManager_Manager;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetText_ReturnValue;                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_1;            // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E0E[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_2;            // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_3;            // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag) == 0x000008, "Wrong alignment on WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag");
static_assert(sizeof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag) == 0x0000D8, "Wrong size on WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, EntryPoint) == 0x000000, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetDataBaseManager_Manager) == 0x000008, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetDataBaseManager_Manager' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, K2Node_Event_MyGeometry) == 0x000020, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetViewportSize_ReturnValue) == 0x00005C, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_X) == 0x000064, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x00006C, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetViewportSize_ReturnValue_1) == 0x000074, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetViewportSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_X_1) == 0x00007C, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_Y_1) == 0x000080, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000084, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000085, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000088, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetViewportSize_ReturnValue_2) == 0x00008C, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetViewportSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_GetViewportSize_ReturnValue_3) == 0x000094, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_GetViewportSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_X_2) == 0x00009C, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_Y_2) == 0x0000A0, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A4, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_X_3) == 0x0000AC, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_Y_3) == 0x0000B0, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_X_4) == 0x0000B4, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_BreakVector2D_Y_4) == 0x0000B8, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000BC, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0000C0, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_MakeVector2D_ReturnValue) == 0x0000C4, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000CC, "Member 'WB_ui_gamertag_C_ExecuteUbergraph_WB_ui_gamertag::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function WB_ui_gamertag.WB_ui_gamertag_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_ui_gamertag_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ui_gamertag_C_Tick) == 0x000004, "Wrong alignment on WB_ui_gamertag_C_Tick");
static_assert(sizeof(WB_ui_gamertag_C_Tick) == 0x00003C, "Wrong size on WB_ui_gamertag_C_Tick");
static_assert(offsetof(WB_ui_gamertag_C_Tick, MyGeometry) == 0x000000, "Member 'WB_ui_gamertag_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_ui_gamertag_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_ui_gamertag_C_Tick::InDeltaTime' has a wrong offset!");

}


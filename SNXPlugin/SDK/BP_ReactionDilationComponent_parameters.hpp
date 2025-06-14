#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReactionDilationComponent

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "DE_em_ChangeTimeDilation_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ExecuteUbergraph_BP_ReactionDilationComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent) == 0x000004, "Wrong alignment on BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent");
static_assert(sizeof(BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent) == 0x000008, "Wrong size on BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent");
static_assert(offsetof(BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent, EntryPoint) == 0x000000, "Member 'BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ReactionDilationComponent_C_ExecuteUbergraph_BP_ReactionDilationComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ReactionDilationComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReactionDilationComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ReactionDilationComponent_C_ReceiveTick");
static_assert(sizeof(BP_ReactionDilationComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_ReactionDilationComponent_C_ReceiveTick");
static_assert(offsetof(BP_ReactionDilationComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ReactionDilationComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Start
// 0x0058 (0x0058 - 0x0000)
struct BP_ReactionDilationComponent_C_Start final
{
public:
	EDE_em_ChangeTimeDilation                     Param_ReactionType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B52[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_LearpTime;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEasingFunc                                   Param_EaseFunc;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B53[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_EaseBlendExp;                                // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Steps;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddDamage;                                         // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B54[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B55[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChangeTimeDilation_bChange;             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerAccelerating_bAccelerating;       // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B56[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitStopComponent*                      CallFunc_GetHitStopComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ReactionDilationComponent_C_Start) == 0x000008, "Wrong alignment on BP_ReactionDilationComponent_C_Start");
static_assert(sizeof(BP_ReactionDilationComponent_C_Start) == 0x000058, "Wrong size on BP_ReactionDilationComponent_C_Start");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, Param_ReactionType) == 0x000000, "Member 'BP_ReactionDilationComponent_C_Start::Param_ReactionType' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, Param_LearpTime) == 0x000004, "Member 'BP_ReactionDilationComponent_C_Start::Param_LearpTime' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, Param_EaseFunc) == 0x000008, "Member 'BP_ReactionDilationComponent_C_Start::Param_EaseFunc' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, Param_EaseBlendExp) == 0x00000C, "Member 'BP_ReactionDilationComponent_C_Start::Param_EaseBlendExp' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, Param_Steps) == 0x000010, "Member 'BP_ReactionDilationComponent_C_Start::Param_Steps' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, AddDamage) == 0x000014, "Member 'BP_ReactionDilationComponent_C_Start::AddDamage' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_GetPlayerManager_PlayerManager) == 0x000018, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_GetMainPlayer_Player) == 0x000030, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_GetMainPlayer_Player' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_Less_FloatFloat_ReturnValue) == 0x000039, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsChangeTimeDilation_bChange) == 0x00003A, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsChangeTimeDilation_bChange' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsPlayerAccelerating_bAccelerating) == 0x00003B, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsPlayerAccelerating_bAccelerating' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_GetOwner_ReturnValue_1) == 0x000040, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_GetHitStopComponent_ReturnValue) == 0x000048, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_GetHitStopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Start, CallFunc_IsValid_ReturnValue_3) == 0x000050, "Member 'BP_ReactionDilationComponent_C_Start::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Update
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ReactionDilationComponent_C_Update final
{
public:
	float                                         DeltaSec;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LCurrentTimeDilation;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LBasicDilation;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LPlayerCustomTimeDilation;                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B57[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerInterface>      K2Node_DynamicCast_AsPlayer_Interface;             // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerActionKind                             CallFunc_GetCurrentActionStateInterface_ReturnValue; // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B58[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B59[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5B[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerAccelerating_bAccelerating;       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5C[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B5D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5E[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5F[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReactionDilationComponent_C_Update) == 0x000008, "Wrong alignment on BP_ReactionDilationComponent_C_Update");
static_assert(sizeof(BP_ReactionDilationComponent_C_Update) == 0x0000A0, "Wrong size on BP_ReactionDilationComponent_C_Update");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, DeltaSec) == 0x000000, "Member 'BP_ReactionDilationComponent_C_Update::DeltaSec' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, LCurrentTimeDilation) == 0x000004, "Member 'BP_ReactionDilationComponent_C_Update::LCurrentTimeDilation' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, LBasicDilation) == 0x000008, "Member 'BP_ReactionDilationComponent_C_Update::LBasicDilation' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, LPlayerCustomTimeDilation) == 0x00000C, "Member 'BP_ReactionDilationComponent_C_Update::LPlayerCustomTimeDilation' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, K2Node_DynamicCast_AsPlayer_Interface) == 0x000020, "Member 'BP_ReactionDilationComponent_C_Update::K2Node_DynamicCast_AsPlayer_Interface' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ReactionDilationComponent_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_GetCurrentActionStateInterface_ReturnValue) == 0x000032, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_GetCurrentActionStateInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000033, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000034, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_GetPlayerManager_PlayerManager) == 0x000040, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_GetMainPlayer_Player) == 0x000050, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_GetMainPlayer_Player' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Add_FloatFloat_ReturnValue) == 0x00005C, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_IsPlayerAccelerating_bAccelerating) == 0x000060, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_IsPlayerAccelerating_bAccelerating' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_GetOwner_ReturnValue_1) == 0x000068, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, K2Node_DynamicCast_AsRSBattle_Character) == 0x000078, "Member 'BP_ReactionDilationComponent_C_Update::K2Node_DynamicCast_AsRSBattle_Character' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_ReactionDilationComponent_C_Update::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Ease_ReturnValue) == 0x000084, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00008C, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_FClamp_ReturnValue_1) == 0x000090, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000094, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000098, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_Update, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00009C, "Member 'BP_ReactionDilationComponent_C_Update::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsPlayerAccelerating
// 0x0038 (0x0038 - 0x0000)
struct BP_ReactionDilationComponent_C_IsPlayerAccelerating final
{
public:
	bool                                          bAccelerating;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LAccelerating;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B60[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B61[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleCharacterInterface_C> K2Node_DynamicCast_AsBPI_Battle_Character_Interface; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAccelerating_Accelerating;             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ReactionDilationComponent_C_IsPlayerAccelerating) == 0x000008, "Wrong alignment on BP_ReactionDilationComponent_C_IsPlayerAccelerating");
static_assert(sizeof(BP_ReactionDilationComponent_C_IsPlayerAccelerating) == 0x000038, "Wrong size on BP_ReactionDilationComponent_C_IsPlayerAccelerating");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, bAccelerating) == 0x000000, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::bAccelerating' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, LAccelerating) == 0x000001, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::LAccelerating' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, CallFunc_GetPlayerManager_PlayerManager) == 0x000008, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, CallFunc_GetMainPlayer_Player) == 0x000018, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::CallFunc_GetMainPlayer_Player' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, K2Node_DynamicCast_AsBPI_Battle_Character_Interface) == 0x000020, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::K2Node_DynamicCast_AsBPI_Battle_Character_Interface' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsPlayerAccelerating, CallFunc_GetAccelerating_Accelerating) == 0x000032, "Member 'BP_ReactionDilationComponent_C_IsPlayerAccelerating::CallFunc_GetAccelerating_Accelerating' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.End
// 0x0028 (0x0028 - 0x0000)
struct BP_ReactionDilationComponent_C_End final
{
public:
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B62[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B63[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitStopComponent*                      CallFunc_GetHitStopComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReactionDilationComponent_C_End) == 0x000008, "Wrong alignment on BP_ReactionDilationComponent_C_End");
static_assert(sizeof(BP_ReactionDilationComponent_C_End) == 0x000028, "Wrong size on BP_ReactionDilationComponent_C_End");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000000, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, K2Node_DynamicCast_AsRSBattle_Character) == 0x000010, "Member 'BP_ReactionDilationComponent_C_End::K2Node_DynamicCast_AsRSBattle_Character' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ReactionDilationComponent_C_End::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x00001A, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReactionDilationComponent_C_End, CallFunc_GetHitStopComponent_ReturnValue) == 0x000020, "Member 'BP_ReactionDilationComponent_C_End::CallFunc_GetHitStopComponent_ReturnValue' has a wrong offset!");

// Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsChangeTimeDilation
// 0x0001 (0x0001 - 0x0000)
struct BP_ReactionDilationComponent_C_IsChangeTimeDilation final
{
public:
	bool                                          bChange;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ReactionDilationComponent_C_IsChangeTimeDilation) == 0x000001, "Wrong alignment on BP_ReactionDilationComponent_C_IsChangeTimeDilation");
static_assert(sizeof(BP_ReactionDilationComponent_C_IsChangeTimeDilation) == 0x000001, "Wrong size on BP_ReactionDilationComponent_C_IsChangeTimeDilation");
static_assert(offsetof(BP_ReactionDilationComponent_C_IsChangeTimeDilation, bChange) == 0x000000, "Member 'BP_ReactionDilationComponent_C_IsChangeTimeDilation::bChange' has a wrong offset!");

}


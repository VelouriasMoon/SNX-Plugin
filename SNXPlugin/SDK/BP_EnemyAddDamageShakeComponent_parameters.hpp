#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyAddDamageShakeComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.ExecuteUbergraph_BP_EnemyAddDamageShakeComponent
// 0x0040 (0x0040 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD9[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DDB[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DDC[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float DeltaSeconds)>           K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent) == 0x000008, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent) == 0x000040, "Wrong size on BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, EntryPoint) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, Temp_bool_IsClosed_Variable_1) == 0x000005, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, Temp_bool_Has_Been_Initd_Variable_1) == 0x000018, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, K2Node_DynamicCast_AsRSBattle_Character) == 0x000020, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::K2Node_DynamicCast_AsRSBattle_Character' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_EnemyAddDamageShakeComponent_C_ExecuteUbergraph_BP_EnemyAddDamageShakeComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_ReceiveTick");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_EnemyAddDamageShakeComponent_C_ReceiveTick");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.Update
// 0x0104 (0x0104 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_Update final
{
public:
	float                                         DeltaSec;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                L_AddLoc;                                          // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                L_CalcLoc;                                         // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcShakeScale_CalcScale;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DDD[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRandomVec_ReturnVec;                   // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_Update) == 0x000004, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_Update");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_Update) == 0x000104, "Wrong size on BP_EnemyAddDamageShakeComponent_C_Update");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, DeltaSec) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::DeltaSec' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, L_AddLoc) == 0x000004, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::L_AddLoc' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, L_CalcLoc) == 0x000010, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::L_CalcLoc' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, Temp_int_Variable) == 0x00001C, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_CalcShakeScale_CalcScale) == 0x000020, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_CalcShakeScale_CalcScale' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_RandomBool_ReturnValue) == 0x000024, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000025, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x000028, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000BC, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_FClamp_ReturnValue) == 0x0000C0, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C4, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_VEase_ReturnValue) == 0x0000C8, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000D4, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000DC, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_GetRandomVec_ReturnVec) == 0x0000E8, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_GetRandomVec_ReturnVec' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F4, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x000100, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Update, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'BP_EnemyAddDamageShakeComponent_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.Start
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_Start final
{
public:
	bool                                          bTriggerAttack;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DDE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         L_Min;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_Start) == 0x000004, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_Start");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_Start) == 0x000008, "Wrong size on BP_EnemyAddDamageShakeComponent_C_Start");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Start, bTriggerAttack) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_Start::bTriggerAttack' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_Start, L_Min) == 0x000004, "Member 'BP_EnemyAddDamageShakeComponent_C_Start::L_Min' has a wrong offset!");

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.GetRandomVec
// 0x0048 (0x0048 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_GetRandomVec final
{
public:
	struct FVector                                CurrentVec;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsRight;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DDF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnVec;                                         // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         L_Min;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec) == 0x000004, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_GetRandomVec");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec) == 0x000048, "Wrong size on BP_EnemyAddDamageShakeComponent_C_GetRandomVec");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CurrentVec) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CurrentVec' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, Range) == 0x00000C, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::Range' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, Param_IsRight) == 0x000010, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::Param_IsRight' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, ReturnVec) == 0x000014, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::ReturnVec' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, L_Min) == 0x000020, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::L_Min' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CallFunc_Add_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CallFunc_RandomFloatInRange_ReturnValue) == 0x00002C, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_GetRandomVec, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x00003C, "Member 'BP_EnemyAddDamageShakeComponent_C_GetRandomVec::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");

// Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.CalcShakeScale
// 0x0088 (0x0088 - 0x0000)
struct BP_EnemyAddDamageShakeComponent_C_CalcShakeScale final
{
public:
	float                                         CalcScale;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LScale;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetDebuggingManager_Manager;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DE0[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_3;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_4;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_8;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DE1[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_5;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_9;        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale) == 0x000008, "Wrong alignment on BP_EnemyAddDamageShakeComponent_C_CalcShakeScale");
static_assert(sizeof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale) == 0x000088, "Wrong size on BP_EnemyAddDamageShakeComponent_C_CalcShakeScale");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CalcScale) == 0x000000, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CalcScale' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, LScale) == 0x000004, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::LScale' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_GetDebuggingManager_Manager) == 0x000008, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_GetDebuggingManager_Manager' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue) == 0x000014, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue_1) == 0x00001C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000024, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00002C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000030, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000034, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_FClamp_ReturnValue) == 0x00003C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue_2) == 0x000040, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue_3) == 0x000044, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_GetFloatValue_ReturnValue) == 0x000048, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x00004C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue_4) == 0x000050, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x000054, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_6) == 0x000058, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00005C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_7) == 0x000060, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_8) == 0x000064, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x00006C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000070, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_FClamp_ReturnValue_1) == 0x000074, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_SelectFloat_ReturnValue_5) == 0x000078, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_SelectFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_GetFloatValue_ReturnValue_1) == 0x00007C, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAddDamageShakeComponent_C_CalcShakeScale, CallFunc_Multiply_FloatFloat_ReturnValue_9) == 0x000080, "Member 'BP_EnemyAddDamageShakeComponent_C_CalcShakeScale::CallFunc_Multiply_FloatFloat_ReturnValue_9' has a wrong offset!");

}


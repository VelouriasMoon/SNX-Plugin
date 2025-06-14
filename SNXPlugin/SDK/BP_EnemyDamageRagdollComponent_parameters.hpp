#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyDamageRagdollComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.ExecuteUbergraph_BP_EnemyDamageRagdollComponent
// 0x0028 (0x0028 - 0x0000)
struct BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B04[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B05[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B06[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent) == 0x000008, "Wrong alignment on BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent");
static_assert(sizeof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent) == 0x000028, "Wrong size on BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, EntryPoint) == 0x000000, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, K2Node_DynamicCast_AsRSBattle_Character) == 0x000018, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::K2Node_DynamicCast_AsRSBattle_Character' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent, K2Node_Event_DeltaSeconds) == 0x000024, "Member 'BP_EnemyDamageRagdollComponent_C_ExecuteUbergraph_BP_EnemyDamageRagdollComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EnemyDamageRagdollComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDamageRagdollComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EnemyDamageRagdollComponent_C_ReceiveTick");
static_assert(sizeof(BP_EnemyDamageRagdollComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_EnemyDamageRagdollComponent_C_ReceiveTick");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EnemyDamageRagdollComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.StartRagdoll
// 0x0060 (0x0060 - 0x0000)
struct BP_EnemyDamageRagdollComponent_C_StartRagdoll final
{
public:
	struct FVector                                HitDir;                                            // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B07[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 L_Mesh;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B08[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B09[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyDamageRagdollComponent_C_StartRagdoll) == 0x000008, "Wrong alignment on BP_EnemyDamageRagdollComponent_C_StartRagdoll");
static_assert(sizeof(BP_EnemyDamageRagdollComponent_C_StartRagdoll) == 0x000060, "Wrong size on BP_EnemyDamageRagdollComponent_C_StartRagdoll");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, HitDir) == 0x000000, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::HitDir' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, L_Mesh) == 0x000010, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::L_Mesh' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000031, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004C, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00004D, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000050, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_StartRagdoll, CallFunc_IsValid_ReturnValue_1) == 0x00005D, "Member 'BP_EnemyDamageRagdollComponent_C_StartRagdoll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.UpdateRagdoll
// 0x0048 (0x0048 - 0x0000)
struct BP_EnemyDamageRagdollComponent_C_UpdateRagdoll final
{
public:
	float                                         DeltaSec;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B0A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 L_Mesh;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0D[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll) == 0x000008, "Wrong alignment on BP_EnemyDamageRagdollComponent_C_UpdateRagdoll");
static_assert(sizeof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll) == 0x000048, "Wrong size on BP_EnemyDamageRagdollComponent_C_UpdateRagdoll");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, DeltaSec) == 0x000000, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::DeltaSec' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, L_Mesh) == 0x000008, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::L_Mesh' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_GetFloatValue_ReturnValue) == 0x000030, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Add_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_IsValid_ReturnValue_1) == 0x00003D, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Less_IntInt_ReturnValue) == 0x00003E, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_UpdateRagdoll, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_EnemyDamageRagdollComponent_C_UpdateRagdoll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_EnemyDamageRagdollComponent.BP_EnemyDamageRagdollComponent_C.EndRagdoll
// 0x0020 (0x0020 - 0x0000)
struct BP_EnemyDamageRagdollComponent_C_EndRagdoll final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0F[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDamageRagdollComponent_C_EndRagdoll) == 0x000004, "Wrong alignment on BP_EnemyDamageRagdollComponent_C_EndRagdoll");
static_assert(sizeof(BP_EnemyDamageRagdollComponent_C_EndRagdoll) == 0x000020, "Wrong size on BP_EnemyDamageRagdollComponent_C_EndRagdoll");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_Less_IntInt_ReturnValue) == 0x00001A, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDamageRagdollComponent_C_EndRagdoll, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_EnemyDamageRagdollComponent_C_EndRagdoll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}


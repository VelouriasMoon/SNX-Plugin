#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TownPeopleCrowd

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ExecuteUbergraph_BP_TownPeopleCrowd
// 0x0048 (0x0048 - 0x0000)
struct BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E44[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventManager_C*                     CallFunc_GetEventManager_EventManager;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E45[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetAnimationComponent_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Check_Mesh_Wire_Visible_IsWireVisible;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWireVisibleOffEvent_IsOffWireEvent;     // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E46[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventManager_C*                     CallFunc_GetEventManager_EventManager_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E47[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd) == 0x000008, "Wrong alignment on BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd");
static_assert(sizeof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd) == 0x000048, "Wrong size on BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, EntryPoint) == 0x000000, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_GetEventManager_EventManager) == 0x000008, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_GetEventManager_EventManager' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_GetAnimationComponent_ReturnValue) == 0x000018, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_GetAnimationComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_Check_Mesh_Wire_Visible_IsWireVisible) == 0x000021, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_Check_Mesh_Wire_Visible_IsWireVisible' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_IsWireVisibleOffEvent_IsOffWireEvent) == 0x000022, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_IsWireVisibleOffEvent_IsOffWireEvent' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_GetEventManager_EventManager_1) == 0x000038, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_GetEventManager_EventManager_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, CallFunc_IsValid_ReturnValue_3) == 0x000040, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd, K2Node_Event_DeltaSeconds) == 0x000044, "Member 'BP_TownPeopleCrowd_C_ExecuteUbergraph_BP_TownPeopleCrowd::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_TownPeopleCrowd_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TownPeopleCrowd_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_TownPeopleCrowd_C_ReceiveTick");
static_assert(sizeof(BP_TownPeopleCrowd_C_ReceiveTick) == 0x000004, "Wrong size on BP_TownPeopleCrowd_C_ReceiveTick");
static_assert(offsetof(BP_TownPeopleCrowd_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_TownPeopleCrowd_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.CheckUpdateEnable
// 0x0078 (0x0078 - 0x0000)
struct BP_TownPeopleCrowd_C_CheckUpdateEnable final
{
public:
	float                                         DistanceToPlayer;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E48[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E49[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4A[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4B[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4C[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TownPeopleCrowd_C_CheckUpdateEnable) == 0x000008, "Wrong alignment on BP_TownPeopleCrowd_C_CheckUpdateEnable");
static_assert(sizeof(BP_TownPeopleCrowd_C_CheckUpdateEnable) == 0x000078, "Wrong size on BP_TownPeopleCrowd_C_CheckUpdateEnable");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, DistanceToPlayer) == 0x000000, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::DistanceToPlayer' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_GetChildrenComponents_Children) == 0x000018, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000044, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00005C, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TownPeopleCrowd_C_CheckUpdateEnable, CallFunc_VSize_ReturnValue) == 0x000074, "Member 'BP_TownPeopleCrowd_C_CheckUpdateEnable::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.IsPhotoModeManualOverlap
// 0x0001 (0x0001 - 0x0000)
struct BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap) == 0x000001, "Wrong alignment on BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap");
static_assert(sizeof(BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap) == 0x000001, "Wrong size on BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap");
static_assert(offsetof(BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap, ReturnValue) == 0x000000, "Member 'BP_TownPeopleCrowd_C_IsPhotoModeManualOverlap::ReturnValue' has a wrong offset!");

// Function BP_TownPeopleCrowd.BP_TownPeopleCrowd_C.GetPhotoModeManualOverlapCapsule
// 0x0008 (0x0008 - 0x0000)
struct BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule final
{
public:
	class UCapsuleComponent*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule) == 0x000008, "Wrong alignment on BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule");
static_assert(sizeof(BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule) == 0x000008, "Wrong size on BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule");
static_assert(offsetof(BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule, ReturnValue) == 0x000000, "Member 'BP_TownPeopleCrowd_C_GetPhotoModeManualOverlapCapsule::ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletManageComponent

#include "Basic.hpp"

#include "FBulletManageData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.ExecuteUbergraph_BP_BulletManageComponent
// 0x0024 (0x0024 - 0x0000)
struct BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent) == 0x000004, "Wrong alignment on BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent");
static_assert(sizeof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent) == 0x000024, "Wrong size on BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, EntryPoint) == 0x000000, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, Temp_int_Loop_Num_Variable) == 0x000010, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, K2Node_Event_EndPlayReason) == 0x000020, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'BP_BulletManageComponent_C_ExecuteUbergraph_BP_BulletManageComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_BulletManageComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletManageComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_BulletManageComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_BulletManageComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_BulletManageComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_BulletManageComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_BulletManageComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.AddBullet
// 0x00B0 (0x00B0 - 0x0000)
struct BP_BulletManageComponent_C_AddBullet final
{
public:
	class UClass*                                 BulletClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletNum;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C0[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LOwner;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBulletManageData                     LData;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LbSuccess;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C1[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BulletBase_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetBulletVisibility_dunnmy;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C2[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C3[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBulletManageData                     K2Node_MakeStruct_FBulletManageData;               // 0x0098(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C4[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBulletManageData                     CallFunc_Map_Find_Value;                           // 0x00A4(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_AddBullet) == 0x000010, "Wrong alignment on BP_BulletManageComponent_C_AddBullet");
static_assert(sizeof(BP_BulletManageComponent_C_AddBullet) == 0x0000B0, "Wrong size on BP_BulletManageComponent_C_AddBullet");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, BulletClass) == 0x000000, "Member 'BP_BulletManageComponent_C_AddBullet::BulletClass' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, BulletNum) == 0x000008, "Member 'BP_BulletManageComponent_C_AddBullet::BulletNum' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, bSuccess) == 0x00000C, "Member 'BP_BulletManageComponent_C_AddBullet::bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, LOwner) == 0x000010, "Member 'BP_BulletManageComponent_C_AddBullet::LOwner' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, LData) == 0x000018, "Member 'BP_BulletManageComponent_C_AddBullet::LData' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, LbSuccess) == 0x000020, "Member 'BP_BulletManageComponent_C_AddBullet::LbSuccess' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, Temp_int_Variable) == 0x000078, "Member 'BP_BulletManageComponent_C_AddBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_SetBulletVisibility_dunnmy) == 0x00007C, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_SetBulletVisibility_dunnmy' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00007D, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Array_Add_ReturnValue) == 0x000084, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Subtract_IntInt_ReturnValue) == 0x000088, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Greater_IntInt_ReturnValue) == 0x00008C, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, K2Node_MakeStruct_FBulletManageData) == 0x000098, "Member 'BP_BulletManageComponent_C_AddBullet::K2Node_MakeStruct_FBulletManageData' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_IsValidClass_ReturnValue) == 0x0000A0, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Map_Find_Value) == 0x0000A4, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Map_Find_ReturnValue) == 0x0000AC, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_AddBullet, CallFunc_Not_PreBool_ReturnValue) == 0x0000AD, "Member 'BP_BulletManageComponent_C_AddBullet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetBulletList
// 0x0010 (0x0010 - 0x0000)
struct BP_BulletManageComponent_C_GetBulletList final
{
public:
	TArray<class ABP_BulletBase_C*>               Param_BulletList;                                  // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletManageComponent_C_GetBulletList) == 0x000008, "Wrong alignment on BP_BulletManageComponent_C_GetBulletList");
static_assert(sizeof(BP_BulletManageComponent_C_GetBulletList) == 0x000010, "Wrong size on BP_BulletManageComponent_C_GetBulletList");
static_assert(offsetof(BP_BulletManageComponent_C_GetBulletList, Param_BulletList) == 0x000000, "Member 'BP_BulletManageComponent_C_GetBulletList::Param_BulletList' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.FinishUsedBullet
// 0x0030 (0x0030 - 0x0000)
struct BP_BulletManageComponent_C_FinishUsedBullet final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_BulletBase_C*>               CallFunc_GetUsedBulletAllList_BulletList;          // 0x0008(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BulletBase_C*                       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_FinishUsedBullet) == 0x000008, "Wrong alignment on BP_BulletManageComponent_C_FinishUsedBullet");
static_assert(sizeof(BP_BulletManageComponent_C_FinishUsedBullet) == 0x000030, "Wrong size on BP_BulletManageComponent_C_FinishUsedBullet");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, Temp_int_Variable) == 0x000000, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, CallFunc_GetUsedBulletAllList_BulletList) == 0x000008, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::CallFunc_GetUsedBulletAllList_BulletList' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_FinishUsedBullet, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_BulletManageComponent_C_FinishUsedBullet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUnusedBullet
// 0x0048 (0x0048 - 0x0000)
struct BP_BulletManageComponent_C_GetUnusedBullet final
{
public:
	class UClass*                                 BulletClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BulletBase_C*                       Bullet;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BulletBase_C*                       LBullet;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBulletManageData                     LData;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C7[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BulletBase_C*                       CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAttack_bAttack;                         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C8[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBulletManageData                     CallFunc_Map_Find_Value;                           // 0x003C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_GetUnusedBullet) == 0x000008, "Wrong alignment on BP_BulletManageComponent_C_GetUnusedBullet");
static_assert(sizeof(BP_BulletManageComponent_C_GetUnusedBullet) == 0x000048, "Wrong size on BP_BulletManageComponent_C_GetUnusedBullet");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, BulletClass) == 0x000000, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::BulletClass' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, Bullet) == 0x000008, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::Bullet' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, LBullet) == 0x000010, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::LBullet' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, LData) == 0x000018, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::LData' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, Temp_int_Variable) == 0x000020, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_IsAttack_bAttack) == 0x000039, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_IsAttack_bAttack' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_Map_Find_Value) == 0x00003C, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUnusedBullet, CallFunc_Map_Find_ReturnValue) == 0x000044, "Member 'BP_BulletManageComponent_C_GetUnusedBullet::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUsedBulletList
// 0x0068 (0x0068 - 0x0000)
struct BP_BulletManageComponent_C_GetUsedBulletList final
{
public:
	class UClass*                                 BulletClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BulletBase_C*>               Param_BulletList;                                  // 0x0008(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	class ABP_BulletBase_C*                       LBullet;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BulletBase_C*>               LList;                                             // 0x0020(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	struct FFBulletManageData                     LData;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C9[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BulletBase_C*                       CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAttack_bAttack;                         // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38CA[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBulletManageData                     CallFunc_Map_Find_Value;                           // 0x0058(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_GetUsedBulletList) == 0x000008, "Wrong alignment on BP_BulletManageComponent_C_GetUsedBulletList");
static_assert(sizeof(BP_BulletManageComponent_C_GetUsedBulletList) == 0x000068, "Wrong size on BP_BulletManageComponent_C_GetUsedBulletList");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, BulletClass) == 0x000000, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::BulletClass' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, Param_BulletList) == 0x000008, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::Param_BulletList' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, LBullet) == 0x000018, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::LBullet' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, LList) == 0x000020, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::LList' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, LData) == 0x000030, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::LData' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, Temp_int_Variable) == 0x000038, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_IsAttack_bAttack) == 0x000054, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_IsAttack_bAttack' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_Map_Find_Value) == 0x000058, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletList, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'BP_BulletManageComponent_C_GetUsedBulletList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUsedBulletAllList
// 0x0058 (0x0058 - 0x0000)
struct BP_BulletManageComponent_C_GetUsedBulletAllList final
{
public:
	TArray<class ABP_BulletBase_C*>               Param_BulletList;                                  // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	class ABP_BulletBase_C*                       LBullet;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BulletBase_C*>               LList;                                             // 0x0018(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	struct FFBulletManageData                     LData;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAttack_bAttack;                         // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38CB[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BulletBase_C*                       CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BulletManageComponent_C_GetUsedBulletAllList) == 0x000008, "Wrong alignment on BP_BulletManageComponent_C_GetUsedBulletAllList");
static_assert(sizeof(BP_BulletManageComponent_C_GetUsedBulletAllList) == 0x000058, "Wrong size on BP_BulletManageComponent_C_GetUsedBulletAllList");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, Param_BulletList) == 0x000000, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::Param_BulletList' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, LBullet) == 0x000010, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::LBullet' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, LList) == 0x000018, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::LList' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, LData) == 0x000028, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::LData' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_IsAttack_bAttack) == 0x00003D, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_IsAttack_bAttack' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletManageComponent_C_GetUsedBulletAllList, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_BulletManageComponent_C_GetUsedBulletAllList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}


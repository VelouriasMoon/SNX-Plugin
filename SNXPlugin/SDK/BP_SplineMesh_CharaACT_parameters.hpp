#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMesh_CharaACT

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.ExecuteUbergraph_BP_SplineMesh_CharaACT
// 0x0130 (0x0130 - 0x0000)
struct BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4535[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4536[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0030(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerActor_Valid;                      // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4537[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4538[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision_1;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerActor_Valid_1;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4539[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453A[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453B[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT) == 0x000008, "Wrong alignment on BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT");
static_assert(sizeof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT) == 0x000130, "Wrong size on BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, EntryPoint) == 0x000000, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, Temp_int_Loop_Num_Variable) == 0x000004, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000010, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000018, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000020, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000028, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_bFromSweep) == 0x00002C, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_SweepResult) == 0x000030, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_DynamicCast_AsCapsule_Collision) == 0x0000B8, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_IsPlayerActor_Valid) == 0x0000C2, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_IsPlayerActor_Valid' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000C8, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D0, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherComp) == 0x0000D8, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000E0, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_DynamicCast_AsCapsule_Collision_1) == 0x0000E8, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_DynamicCast_AsCapsule_Collision_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_IsPlayerActor_Valid_1) == 0x0000F1, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_IsPlayerActor_Valid_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, Temp_int_Array_Index_Variable) == 0x0000F4, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F8, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000104, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_IsValid_ReturnValue_1) == 0x000114, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000118, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, Temp_int_Loop_Counter_Variable) == 0x000124, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT, CallFunc_Add_IntInt_ReturnValue) == 0x00012C, "Member 'BP_SplineMesh_CharaACT_C_ExecuteUbergraph_BP_SplineMesh_CharaACT::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SplineMesh_CharaACT_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SplineMesh_CharaACT_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineMesh_CharaACT_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SplineMesh_CharaACT_C_ReceiveTick");
static_assert(sizeof(BP_SplineMesh_CharaACT_C_ReceiveTick) == 0x000004, "Wrong size on BP_SplineMesh_CharaACT_C_ReceiveTick");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SplineMesh_CharaACT_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SplineMesh_CharaACT.BP_SplineMesh_CharaACT_C.UserConstructionScript
// 0x0080 (0x0080 - 0x0000)
struct BP_SplineMesh_CharaACT_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453D[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetStartPosition_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453E[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USphereComponent*                       CallFunc_AddComponent_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineMesh_CharaACT_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_SplineMesh_CharaACT_C_UserConstructionScript");
static_assert(sizeof(BP_SplineMesh_CharaACT_C_UserConstructionScript) == 0x000080, "Wrong size on BP_SplineMesh_CharaACT_C_UserConstructionScript");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, Temp_int_Loop_Num_Variable) == 0x000004, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_GetStartPosition_ReturnValue) == 0x000018, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_GetStartPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_GetComponentBounds_Origin) == 0x000024, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_GetComponentBounds_BoxExtent) == 0x000030, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_GetComponentBounds_SphereRadius) == 0x00003C, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000040, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SplineMesh_CharaACT_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'BP_SplineMesh_CharaACT_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonFuncLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommonFuncLibrary.CommonFuncLibrary_C.ActivateActor
// 0x0058 (0x0058 - 0x0000)
struct CommonFuncLibrary_C_ActivateActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43A6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43A7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A8[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43A9[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonFuncLibrary_C_ActivateActor) == 0x000008, "Wrong alignment on CommonFuncLibrary_C_ActivateActor");
static_assert(sizeof(CommonFuncLibrary_C_ActivateActor) == 0x000058, "Wrong size on CommonFuncLibrary_C_ActivateActor");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, Actor) == 0x000000, "Member 'CommonFuncLibrary_C_ActivateActor::Actor' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, Active) == 0x000008, "Member 'CommonFuncLibrary_C_ActivateActor::Active' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, __WorldContext) == 0x000010, "Member 'CommonFuncLibrary_C_ActivateActor::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_GetAIController_ReturnValue) == 0x000020, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000028, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'CommonFuncLibrary_C_ActivateActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'CommonFuncLibrary_C_ActivateActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_Array_Get_Item) == 0x000048, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_ActivateActor, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'CommonFuncLibrary_C_ActivateActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommonFuncLibrary.CommonFuncLibrary_C.CalcYawActorToPosition
// 0x0080 (0x0080 - 0x0000)
struct CommonFuncLibrary_C_CalcYawActorToPosition final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Position;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43AA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw;                                               // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43AB[0xC];                                     // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;     // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAtan2_ReturnValue;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonFuncLibrary_C_CalcYawActorToPosition) == 0x000010, "Wrong alignment on CommonFuncLibrary_C_CalcYawActorToPosition");
static_assert(sizeof(CommonFuncLibrary_C_CalcYawActorToPosition) == 0x000080, "Wrong size on CommonFuncLibrary_C_CalcYawActorToPosition");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, Actor) == 0x000000, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::Actor' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, Position) == 0x000008, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::Position' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, __WorldContext) == 0x000018, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, Yaw) == 0x000020, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::Yaw' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_InverseTransformLocation_ReturnValue) == 0x000060, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_BreakVector_X) == 0x00006C, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_BreakVector_Y) == 0x000070, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_BreakVector_Z) == 0x000074, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcYawActorToPosition, CallFunc_DegAtan2_ReturnValue) == 0x000078, "Member 'CommonFuncLibrary_C_CalcYawActorToPosition::CallFunc_DegAtan2_ReturnValue' has a wrong offset!");

// Function CommonFuncLibrary.CommonFuncLibrary_C.CalcDirectionWoldToActor
// 0x0060 (0x0060 - 0x0000)
struct CommonFuncLibrary_C_CalcDirectionWoldToActor final
{
public:
	struct FVector                                WorldDir;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43AC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ActorDir;                                          // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonFuncLibrary_C_CalcDirectionWoldToActor) == 0x000008, "Wrong alignment on CommonFuncLibrary_C_CalcDirectionWoldToActor");
static_assert(sizeof(CommonFuncLibrary_C_CalcDirectionWoldToActor) == 0x000060, "Wrong size on CommonFuncLibrary_C_CalcDirectionWoldToActor");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, WorldDir) == 0x000000, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::WorldDir' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, Actor) == 0x000010, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::Actor' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, __WorldContext) == 0x000018, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, ActorDir) == 0x000020, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::ActorDir' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, CallFunc_MakeRotFromX_ReturnValue) == 0x00002C, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000038, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000044, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonFuncLibrary_C_CalcDirectionWoldToActor, CallFunc_GetForwardVector_ReturnValue) == 0x000050, "Member 'CommonFuncLibrary_C_CalcDirectionWoldToActor::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");

}


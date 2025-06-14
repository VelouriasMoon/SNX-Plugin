#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_co0300

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_co0300.ABP_co0300_C.ExecuteUbergraph_ABP_co0300
// 0x0190 (0x0190 - 0x0000)
struct ABP_co0300_C_ExecuteUbergraph_ABP_co0300 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42DD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DE[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_GetPosition_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42DF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInterrupted;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E0[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E1[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E2[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E3[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E4[0x8];                                     // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCaptureActor_C*                      K2Node_DynamicCast_AsBPCapture_Actor;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E5[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue_1;         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;         // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesSocketExist_ReturnValue_1;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E6[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E7[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SpecialStaticNodeActor_C*           K2Node_DynamicCast_AsBP_Special_Static_Node_Actor; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E8[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> K2Node_CreateDelegate_OutputDelegate;              // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300) == 0x000010, "Wrong alignment on ABP_co0300_C_ExecuteUbergraph_ABP_co0300");
static_assert(sizeof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300) == 0x000190, "Wrong size on ABP_co0300_C_ExecuteUbergraph_ABP_co0300");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, EntryPoint) == 0x000000, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000008, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetTimeRange_MinTime) == 0x000014, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetTimeRange_MaxTime) == 0x000018, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_Montage_GetPosition_ReturnValue) == 0x00001C, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_Montage_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_CustomEvent_Montage) == 0x000028, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_CustomEvent_bInterrupted) == 0x000030, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_CustomEvent_bInterrupted' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetFloatValue_ReturnValue) == 0x000038, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetOwningComponent_ReturnValue) == 0x000040, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetSocketTransform_ReturnValue) == 0x000050, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_DoesSocketExist_ReturnValue) == 0x000080, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Location) == 0x000084, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Rotation) == 0x000090, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Scale) == 0x00009C, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetOwningActor_ReturnValue) == 0x0000E0, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_DynamicCast_AsBPCapture_Actor) == 0x0000E8, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_DynamicCast_AsBPCapture_Actor' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetOwningComponent_ReturnValue_1) == 0x0000F8, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetOwningComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetSocketTransform_ReturnValue_1) == 0x000100, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_DoesSocketExist_ReturnValue_1) == 0x000130, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_DoesSocketExist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Location_1) == 0x000134, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Rotation_1) == 0x000140, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_BreakTransform_Scale_1) == 0x00014C, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, CallFunc_GetOwningActor_ReturnValue_1) == 0x000158, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_Event_DeltaTimeX) == 0x000160, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_DynamicCast_AsBP_Special_Static_Node_Actor) == 0x000168, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_DynamicCast_AsBP_Special_Static_Node_Actor' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_DynamicCast_bSuccess_1) == 0x000170, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_ExecuteUbergraph_ABP_co0300, K2Node_CreateDelegate_OutputDelegate) == 0x000174, "Member 'ABP_co0300_C_ExecuteUbergraph_ABP_co0300::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ABP_co0300.ABP_co0300_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_co0300_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_co0300_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_co0300_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_co0300_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_co0300_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_co0300_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_co0300_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_co0300.ABP_co0300_C.EventMontageBlendingOut
// 0x0010 (0x0010 - 0x0000)
struct ABP_co0300_C_EventMontageBlendingOut final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_co0300_C_EventMontageBlendingOut) == 0x000008, "Wrong alignment on ABP_co0300_C_EventMontageBlendingOut");
static_assert(sizeof(ABP_co0300_C_EventMontageBlendingOut) == 0x000010, "Wrong size on ABP_co0300_C_EventMontageBlendingOut");
static_assert(offsetof(ABP_co0300_C_EventMontageBlendingOut, Montage) == 0x000000, "Member 'ABP_co0300_C_EventMontageBlendingOut::Montage' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_EventMontageBlendingOut, bInterrupted) == 0x000008, "Member 'ABP_co0300_C_EventMontageBlendingOut::bInterrupted' has a wrong offset!");

// Function ABP_co0300.ABP_co0300_C.SetPhaseChangeCameraTransform
// 0x0120 (0x0120 - 0x0000)
struct ABP_co0300_C_SetPhaseChangeCameraTransform final
{
public:
	class ABP_SpecialStaticNodeActor_C*           SpecialStaticNodeActor;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventManager_C*                     CallFunc_GetEventManager_EventManager;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42E9[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42EA[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0090(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_co0300_C_SetPhaseChangeCameraTransform) == 0x000010, "Wrong alignment on ABP_co0300_C_SetPhaseChangeCameraTransform");
static_assert(sizeof(ABP_co0300_C_SetPhaseChangeCameraTransform) == 0x000120, "Wrong size on ABP_co0300_C_SetPhaseChangeCameraTransform");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, SpecialStaticNodeActor) == 0x000000, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::SpecialStaticNodeActor' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_GetEventManager_EventManager) == 0x000008, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_GetEventManager_EventManager' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakTransform_Location) == 0x000010, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakTransform_Rotation) == 0x00001C, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakTransform_Scale) == 0x000028, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakRotator_Roll) == 0x000034, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakRotator_Pitch) == 0x000038, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_BreakRotator_Yaw) == 0x00003C, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000040, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00004C, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_MakeRotator_ReturnValue) == 0x000050, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000090, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(ABP_co0300_C_SetPhaseChangeCameraTransform, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000118, "Member 'ABP_co0300_C_SetPhaseChangeCameraTransform::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

// Function ABP_co0300.ABP_co0300_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_co0300_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_co0300_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_co0300_C_AnimGraph");
static_assert(sizeof(ABP_co0300_C_AnimGraph) == 0x000010, "Wrong size on ABP_co0300_C_AnimGraph");
static_assert(offsetof(ABP_co0300_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_co0300_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}


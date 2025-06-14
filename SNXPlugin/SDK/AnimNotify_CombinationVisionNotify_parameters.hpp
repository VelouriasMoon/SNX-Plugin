#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_CombinationVisionNotify

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_CombinationVisionNotify.AnimNotify_CombinationVisionNotify_C.Received_Notify
// 0x0048 (0x0048 - 0x0000)
struct AnimNotify_CombinationVisionNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508F[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimMontageStoped_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5090[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerHologramInterface_C> K2Node_DynamicCast_AsBPI_Player_Hologram_Interface; // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AnimNotifyCombinationAttack_bDummy;       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_CombinationVisionNotify_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_CombinationVisionNotify_C_Received_Notify");
static_assert(sizeof(AnimNotify_CombinationVisionNotify_C_Received_Notify) == 0x000048, "Wrong size on AnimNotify_CombinationVisionNotify_C_Received_Notify");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, CallFunc_IsAnimMontageStoped_ReturnValue) == 0x000020, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::CallFunc_IsAnimMontageStoped_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, K2Node_DynamicCast_AsBPI_Player_Hologram_Interface) == 0x000030, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::K2Node_DynamicCast_AsBPI_Player_Hologram_Interface' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_CombinationVisionNotify_C_Received_Notify, CallFunc_AnimNotifyCombinationAttack_bDummy) == 0x000041, "Member 'AnimNotify_CombinationVisionNotify_C_Received_Notify::CallFunc_AnimNotifyCombinationAttack_bDummy' has a wrong offset!");

}


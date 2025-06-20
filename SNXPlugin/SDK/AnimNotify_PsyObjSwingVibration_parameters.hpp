#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PsyObjSwingVibration

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_PsyObjSwingVibration.AnimNotify_PsyObjSwingVibration_C.Received_Notify
// 0x0058 (0x0058 - 0x0000)
struct AnimNotify_PsyObjSwingVibration_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896F[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerInterface_C> CallFunc_IsOpenBrainField_self_CastInput;          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpenBrainField_bOpen;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8970[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TriggerEffectManager_C*             CallFunc_GetTriggerEffectManager_BP_TriggerEffectManager; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_PsyObjSwingVibration_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_PsyObjSwingVibration_C_Received_Notify");
static_assert(sizeof(AnimNotify_PsyObjSwingVibration_C_Received_Notify) == 0x000058, "Wrong size on AnimNotify_PsyObjSwingVibration_C_Received_Notify");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_GetPlayerManager_PlayerManager) == 0x000018, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_GetMainPlayer_Player) == 0x000028, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_GetMainPlayer_Player' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_IsOpenBrainField_self_CastInput) == 0x000038, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_IsOpenBrainField_self_CastInput' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_IsOpenBrainField_bOpen) == 0x000048, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_IsOpenBrainField_bOpen' has a wrong offset!");
static_assert(offsetof(AnimNotify_PsyObjSwingVibration_C_Received_Notify, CallFunc_GetTriggerEffectManager_BP_TriggerEffectManager) == 0x000050, "Member 'AnimNotify_PsyObjSwingVibration_C_Received_Notify::CallFunc_GetTriggerEffectManager_BP_TriggerEffectManager' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimNotifyState_TemporaryCameraControl

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyEnd
// 0x0040 (0x0040 - 0x0000)
struct PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E77[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerCameraComponent_C*            CallFunc_GetCameraComponent_Camera;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd");
static_assert(sizeof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd) == 0x000040, "Wrong size on PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, CallFunc_GetCameraComponent_Camera) == 0x000020, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::CallFunc_GetCameraComponent_Camera' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyBegin
// 0x0040 (0x0040 - 0x0000)
struct PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E78[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerCameraComponent_C*            CallFunc_GetCameraComponent_Camera;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E79[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin");
static_assert(sizeof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin) == 0x000040, "Wrong size on PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, CallFunc_GetCameraComponent_Camera) == 0x000020, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::CallFunc_GetCameraComponent_Camera' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_Received_NotifyBegin::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.GetCameraComponent
// 0x0060 (0x0060 - 0x0000)
struct PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerCameraComponent_C*            Camera;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARSBattlePlayer_C*                      L_mainPlayer;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerCameraComponent_C*            LCamera;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerProxyAttacker_C> K2Node_DynamicCast_AsBPI_Player_Proxy_Attacker;    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetProxyRequestedPlayer_Player;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7B[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerManager_C*                    CallFunc_GetPlayerManager_PlayerManager;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      CallFunc_GetMainPlayer_Player;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent) == 0x000008, "Wrong alignment on PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent");
static_assert(sizeof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent) == 0x000060, "Wrong size on PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, OwnerActor) == 0x000000, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::OwnerActor' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, Camera) == 0x000008, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::Camera' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, L_mainPlayer) == 0x000010, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::L_mainPlayer' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, LCamera) == 0x000018, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::LCamera' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, K2Node_DynamicCast_AsBPI_Player_Proxy_Attacker) == 0x000020, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::K2Node_DynamicCast_AsBPI_Player_Proxy_Attacker' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_GetProxyRequestedPlayer_Player) == 0x000038, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_GetProxyRequestedPlayer_Player' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000041, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_GetPlayerManager_PlayerManager) == 0x000048, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_GetPlayerManager_PlayerManager' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent, CallFunc_GetMainPlayer_Player) == 0x000058, "Member 'PlayerAnimNotifyState_TemporaryCameraControl_C_GetCameraComponent::CallFunc_GetMainPlayer_Player' has a wrong offset!");

}


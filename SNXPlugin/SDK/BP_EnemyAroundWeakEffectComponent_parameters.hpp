#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyAroundWeakEffectComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent
// 0x0048 (0x0048 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AFF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Owner_1;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         K2Node_Event_AroundWeakEffect;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Owner;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         K2Node_Event_EffectHandle;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B00[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   K2Node_DynamicCast_AsRSBattle_Character_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent) == 0x000008, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent) == 0x000048, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, EntryPoint) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_Event_Owner_1) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_Event_Owner_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_Event_AroundWeakEffect) == 0x000010, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_Event_AroundWeakEffect' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_Event_Owner) == 0x000018, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_Event_Owner' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_Event_EffectHandle) == 0x000020, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_Event_EffectHandle' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_DynamicCast_AsRSBattle_Character) == 0x000028, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_DynamicCast_AsRSBattle_Character' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_DynamicCast_AsRSBattle_Character_1) == 0x000038, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_DynamicCast_AsRSBattle_Character_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_EnemyAroundWeakEffectComponent_C_ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.UnregisterCameraDitherParticleHandle_FromNative
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative final
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         Param_EffectHandle;                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative) == 0x000008, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative) == 0x000010, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative, Owner) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative::Owner' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative, Param_EffectHandle) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_UnregisterCameraDitherParticleHandle_FromNative::Param_EffectHandle' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.RegisterCameraDitherParticleHandle_FromNative
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative final
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         Param_AroundWeakEffect;                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative) == 0x000008, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative) == 0x000010, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative, Owner) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative::Owner' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative, Param_AroundWeakEffect) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_RegisterCameraDitherParticleHandle_FromNative::Param_AroundWeakEffect' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.StartAroundWeakEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LbDisableAllEmitter;                               // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B01[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleCharacter_C*                   LEnemy;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 L_TargetMesh;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LSuccess;                                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StartAroundWeakEffect_Native_ReturnValue; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect) == 0x000008, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect) == 0x000020, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, Param_Index) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, bSuccess) == 0x000004, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, LbDisableAllEmitter) == 0x000005, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::LbDisableAllEmitter' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, LEnemy) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::LEnemy' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, L_TargetMesh) == 0x000010, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::L_TargetMesh' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, LSuccess) == 0x000018, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::LSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect, CallFunc_StartAroundWeakEffect_Native_ReturnValue) == 0x000019, "Member 'BP_EnemyAroundWeakEffectComponent_C_StartAroundWeakEffect::CallFunc_StartAroundWeakEffect_Native_ReturnValue' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.EndAroundWeakEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EndAroundWeakEffect_Native_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect) == 0x000004, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect) == 0x000008, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect, Param_Index) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect, CallFunc_EndAroundWeakEffect_Native_ReturnValue) == 0x000004, "Member 'BP_EnemyAroundWeakEffectComponent_C_EndAroundWeakEffect::CallFunc_EndAroundWeakEffect_Native_ReturnValue' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SetVisibleEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect) == 0x000001, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect, Visible) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_SetVisibleEffect::Visible' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsVisibleEffect
// 0x0002 (0x0002 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect final
{
public:
	bool                                          Param_bVisible;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleEffect_Native_ReturnValue;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect) == 0x000002, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect, Param_bVisible) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect::Param_bVisible' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect, CallFunc_IsVisibleEffect_Native_ReturnValue) == 0x000001, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsVisibleEffect::CallFunc_IsVisibleEffect_Native_ReturnValue' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsUseEffect
// 0x0002 (0x0002 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_IsUseEffect final
{
public:
	bool                                          Use;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUseEffect_Native_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_IsUseEffect) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_IsUseEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_IsUseEffect) == 0x000002, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_IsUseEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsUseEffect, Use) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsUseEffect::Use' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsUseEffect, CallFunc_IsUseEffect_Native_ReturnValue) == 0x000001, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsUseEffect::CallFunc_IsUseEffect_Native_ReturnValue' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SetEffectParam
// 0x000C (0x000C - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_SetEffectParam final
{
public:
	float                                         NewCommonRate;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewAttachRate;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dummy;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_SetEffectParam) == 0x000004, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_SetEffectParam");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_SetEffectParam) == 0x00000C, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_SetEffectParam");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SetEffectParam, NewCommonRate) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_SetEffectParam::NewCommonRate' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SetEffectParam, NewAttachRate) == 0x000004, "Member 'BP_EnemyAroundWeakEffectComponent_C_SetEffectParam::NewAttachRate' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SetEffectParam, Dummy) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_SetEffectParam::Dummy' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.HiddenEffect
// 0x0002 (0x0002 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_HiddenEffect final
{
public:
	bool                                          NewHidden;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Dummy;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_HiddenEffect) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_HiddenEffect");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_HiddenEffect) == 0x000002, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_HiddenEffect");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_HiddenEffect, NewHidden) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_HiddenEffect::NewHidden' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_HiddenEffect, Dummy) == 0x000001, "Member 'BP_EnemyAroundWeakEffectComponent_C_HiddenEffect::Dummy' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsVisible
// 0x0003 (0x0003 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_IsVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LbVisible;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_Native_ReturnValue;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_IsVisible) == 0x000001, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_IsVisible");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_IsVisible) == 0x000003, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_IsVisible");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsVisible, Param_IsVisible) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsVisible, LbVisible) == 0x000001, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsVisible::LbVisible' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_IsVisible, CallFunc_IsVisible_Native_ReturnValue) == 0x000002, "Member 'BP_EnemyAroundWeakEffectComponent_C_IsVisible::CallFunc_IsVisible_Native_ReturnValue' has a wrong offset!");

// Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SpawnEmitter_FromNative
// 0x0020 (0x0020 - 0x0000)
struct BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative final
{
public:
	class USkeletalMeshComponent*                 TargetMesh;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative) == 0x000008, "Wrong alignment on BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative");
static_assert(sizeof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative) == 0x000020, "Wrong size on BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative, TargetMesh) == 0x000000, "Member 'BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative::TargetMesh' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative, ReturnValue) == 0x000008, "Member 'BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000010, "Member 'BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_EnemyAroundWeakEffectComponent_C_SpawnEmitter_FromNative::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}


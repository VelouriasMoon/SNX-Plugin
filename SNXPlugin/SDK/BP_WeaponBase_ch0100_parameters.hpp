#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponBase_ch0100

#include "Basic.hpp"

#include "EPlayerComboPattern_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.ExecuteUbergraph_BP_WeaponBase_ch0100
// 0x0030 (0x0030 - 0x0000)
struct BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E51[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattlePlayer_C*                      K2Node_Event_Owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        K2Node_Event_Component;                            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_SocketName;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bON;                                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100");
static_assert(sizeof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100) == 0x000030, "Wrong size on BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, EntryPoint) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_Event_Owner) == 0x000008, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_Event_Owner' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_Event_Component) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_Event_Component' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_Event_SocketName) == 0x000018, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_Event_SocketName' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000020, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, K2Node_Event_bON) == 0x000029, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::K2Node_Event_bON' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00002A, "Member 'BP_WeaponBase_ch0100_C_ExecuteUbergraph_BP_WeaponBase_ch0100::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.SetBattleEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponBase_ch0100_C_SetBattleEffect final
{
public:
	bool                                          bON;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_SetBattleEffect) == 0x000001, "Wrong alignment on BP_WeaponBase_ch0100_C_SetBattleEffect");
static_assert(sizeof(BP_WeaponBase_ch0100_C_SetBattleEffect) == 0x000001, "Wrong size on BP_WeaponBase_ch0100_C_SetBattleEffect");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetBattleEffect, bON) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_SetBattleEffect::bON' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.Attach
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponBase_ch0100_C_Attach final
{
public:
	class ARSBattlePlayer_C*                      Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_Attach) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_Attach");
static_assert(sizeof(BP_WeaponBase_ch0100_C_Attach) == 0x000018, "Wrong size on BP_WeaponBase_ch0100_C_Attach");
static_assert(offsetof(BP_WeaponBase_ch0100_C_Attach, Param_Owner) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_Attach::Param_Owner' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_Attach, Component) == 0x000008, "Member 'BP_WeaponBase_ch0100_C_Attach::Component' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_Attach, SocketName) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_Attach::SocketName' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_WeaponBase_ch0100_C_UserConstructionScript final
{
public:
	TArray<class UMaterialInstanceDynamic*>       CallFunc_CreateAllDynamicMaterialInstance_DMArray; // 0x0000(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_UserConstructionScript");
static_assert(sizeof(BP_WeaponBase_ch0100_C_UserConstructionScript) == 0x000010, "Wrong size on BP_WeaponBase_ch0100_C_UserConstructionScript");
static_assert(offsetof(BP_WeaponBase_ch0100_C_UserConstructionScript, CallFunc_CreateAllDynamicMaterialInstance_DMArray) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_UserConstructionScript::CallFunc_CreateAllDynamicMaterialInstance_DMArray' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetExtraMaterialInstanceArray
// 0x0010 (0x0010 - 0x0000)
struct BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray final
{
public:
	TArray<class UMaterialInstanceDynamic*>       MaterialInstance;                                  // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray");
static_assert(sizeof(BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray) == 0x000010, "Wrong size on BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray");
static_assert(offsetof(BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray, MaterialInstance) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_GetExtraMaterialInstanceArray::MaterialInstance' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetExtraMesh
// 0x0020 (0x0020 - 0x0000)
struct BP_WeaponBase_ch0100_C_GetExtraMesh final
{
public:
	TArray<class USkeletalMeshComponent*>         ExtraMesh;                                         // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_GetExtraMesh) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_GetExtraMesh");
static_assert(sizeof(BP_WeaponBase_ch0100_C_GetExtraMesh) == 0x000020, "Wrong size on BP_WeaponBase_ch0100_C_GetExtraMesh");
static_assert(offsetof(BP_WeaponBase_ch0100_C_GetExtraMesh, ExtraMesh) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_GetExtraMesh::ExtraMesh' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_GetExtraMesh, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_GetExtraMesh::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.OnBattleEffect
// 0x0048 (0x0048 - 0x0000)
struct BP_WeaponBase_ch0100_C_OnBattleEffect final
{
public:
	EPlayerComboPattern                           LPattern;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E52[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E53[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerComboPattern                           Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E54[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSParticleSystemComponentBase*         CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerComboPattern                           K2Node_Select_Default_1;                           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_OnBattleEffect) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_OnBattleEffect");
static_assert(sizeof(BP_WeaponBase_ch0100_C_OnBattleEffect) == 0x000048, "Wrong size on BP_WeaponBase_ch0100_C_OnBattleEffect");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, LPattern) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::LPattern' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, Temp_object_Variable) == 0x000008, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, Temp_object_Variable_1) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, Temp_bool_Variable) == 0x000018, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, Temp_object_Variable_2) == 0x000020, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000028, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, Temp_byte_Variable) == 0x000029, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00002A, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, K2Node_Select_Default) == 0x000030, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000038, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000040, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OnBattleEffect, K2Node_Select_Default_1) == 0x000041, "Member 'BP_WeaponBase_ch0100_C_OnBattleEffect::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.OffBattleEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponBase_ch0100_C_OffBattleEffect final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_OffBattleEffect) == 0x000001, "Wrong alignment on BP_WeaponBase_ch0100_C_OffBattleEffect");
static_assert(sizeof(BP_WeaponBase_ch0100_C_OffBattleEffect) == 0x000001, "Wrong size on BP_WeaponBase_ch0100_C_OffBattleEffect");
static_assert(offsetof(BP_WeaponBase_ch0100_C_OffBattleEffect, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_OffBattleEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.ResetMaterialInstanceArray
// 0x0010 (0x0010 - 0x0000)
struct BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray final
{
public:
	TArray<class UMaterialInstanceDynamic*>       CallFunc_CreateAllDynamicMaterialInstance_DMArray; // 0x0000(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray");
static_assert(sizeof(BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray) == 0x000010, "Wrong size on BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray");
static_assert(offsetof(BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray, CallFunc_CreateAllDynamicMaterialInstance_DMArray) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_ResetMaterialInstanceArray::CallFunc_CreateAllDynamicMaterialInstance_DMArray' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.SetWeaponVisibility
// 0x0048 (0x0048 - 0x0000)
struct BP_WeaponBase_ch0100_C_SetWeaponVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E55[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        LAttachedMesh;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E56[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IABPI_ch0100_C>        K2Node_DynamicCast_AsABPI_Ch_0100;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E57[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_SetWeaponVisibility) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_SetWeaponVisibility");
static_assert(sizeof(BP_WeaponBase_ch0100_C_SetWeaponVisibility) == 0x000048, "Wrong size on BP_WeaponBase_ch0100_C_SetWeaponVisibility");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, bVisible) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, LAttachedMesh) == 0x000008, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::LAttachedMesh' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, K2Node_DynamicCast_AsABPI_Ch_0100) == 0x000020, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::K2Node_DynamicCast_AsABPI_Ch_0100' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, CallFunc_GetAttachParent_ReturnValue) == 0x000038, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SetWeaponVisibility, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'BP_WeaponBase_ch0100_C_SetWeaponVisibility::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.DoLoadMeshAfter
// 0x0003 (0x0003 - 0x0000)
struct BP_WeaponBase_ch0100_C_DoLoadMeshAfter final
{
public:
	bool                                          bDisableStringWeapon;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDummy;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoLoadMeshAfter_bDummy;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_DoLoadMeshAfter) == 0x000001, "Wrong alignment on BP_WeaponBase_ch0100_C_DoLoadMeshAfter");
static_assert(sizeof(BP_WeaponBase_ch0100_C_DoLoadMeshAfter) == 0x000003, "Wrong size on BP_WeaponBase_ch0100_C_DoLoadMeshAfter");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoLoadMeshAfter, bDisableStringWeapon) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_DoLoadMeshAfter::bDisableStringWeapon' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoLoadMeshAfter, bDummy) == 0x000001, "Member 'BP_WeaponBase_ch0100_C_DoLoadMeshAfter::bDummy' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoLoadMeshAfter, CallFunc_DoLoadMeshAfter_bDummy) == 0x000002, "Member 'BP_WeaponBase_ch0100_C_DoLoadMeshAfter::CallFunc_DoLoadMeshAfter_bDummy' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.DoAttachAfter
// 0x0003 (0x0003 - 0x0000)
struct BP_WeaponBase_ch0100_C_DoAttachAfter final
{
public:
	bool                                          bDisableStringWeapon;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDummy;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoAttachAfter_bDummy;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_DoAttachAfter) == 0x000001, "Wrong alignment on BP_WeaponBase_ch0100_C_DoAttachAfter");
static_assert(sizeof(BP_WeaponBase_ch0100_C_DoAttachAfter) == 0x000003, "Wrong size on BP_WeaponBase_ch0100_C_DoAttachAfter");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoAttachAfter, bDisableStringWeapon) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_DoAttachAfter::bDisableStringWeapon' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoAttachAfter, bDummy) == 0x000001, "Member 'BP_WeaponBase_ch0100_C_DoAttachAfter::bDummy' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_DoAttachAfter, CallFunc_DoAttachAfter_bDummy) == 0x000002, "Member 'BP_WeaponBase_ch0100_C_DoAttachAfter::CallFunc_DoAttachAfter_bDummy' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.SheathStringSetting
// 0x0058 (0x0058 - 0x0000)
struct BP_WeaponBase_ch0100_C_SheathStringSetting final
{
public:
	bool                                          bDisableStringWeapon;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E58[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          LAnimInstance;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LParentMesh;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E59[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IABPI_ch0100_C>        K2Node_DynamicCast_AsABPI_Ch_0100;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_SheathStringSetting) == 0x000008, "Wrong alignment on BP_WeaponBase_ch0100_C_SheathStringSetting");
static_assert(sizeof(BP_WeaponBase_ch0100_C_SheathStringSetting) == 0x000058, "Wrong size on BP_WeaponBase_ch0100_C_SheathStringSetting");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, bDisableStringWeapon) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::bDisableStringWeapon' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, LAnimInstance) == 0x000008, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::LAnimInstance' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, LParentMesh) == 0x000010, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::LParentMesh' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, K2Node_DynamicCast_AsABPI_Ch_0100) == 0x000020, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::K2Node_DynamicCast_AsABPI_Ch_0100' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, CallFunc_GetAttachParent_ReturnValue) == 0x000038, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000040, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_SheathStringSetting, CallFunc_GetAnimInstance_ReturnValue) == 0x000050, "Member 'BP_WeaponBase_ch0100_C_SheathStringSetting::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

// Function BP_WeaponBase_ch0100.BP_WeaponBase_ch0100_C.GetAttachTransform
// 0x0060 (0x0060 - 0x0000)
struct BP_WeaponBase_ch0100_C_GetAttachTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponBase_ch0100_C_GetAttachTransform) == 0x000010, "Wrong alignment on BP_WeaponBase_ch0100_C_GetAttachTransform");
static_assert(sizeof(BP_WeaponBase_ch0100_C_GetAttachTransform) == 0x000060, "Wrong size on BP_WeaponBase_ch0100_C_GetAttachTransform");
static_assert(offsetof(BP_WeaponBase_ch0100_C_GetAttachTransform, Transform) == 0x000000, "Member 'BP_WeaponBase_ch0100_C_GetAttachTransform::Transform' has a wrong offset!");
static_assert(offsetof(BP_WeaponBase_ch0100_C_GetAttachTransform, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_WeaponBase_ch0100_C_GetAttachTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Attachment

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"


namespace SDK::Params
{

// Function BPI_Attachment.BPI_Attachment_C.GetAttachedCharacterMesh
// 0x0010 (0x0010 - 0x0000)
struct BPI_Attachment_C_GetAttachedCharacterMesh final
{
public:
	EPlayerID                                     EquipPlayerID;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipMeshIndex;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Attachment_C_GetAttachedCharacterMesh) == 0x000008, "Wrong alignment on BPI_Attachment_C_GetAttachedCharacterMesh");
static_assert(sizeof(BPI_Attachment_C_GetAttachedCharacterMesh) == 0x000010, "Wrong size on BPI_Attachment_C_GetAttachedCharacterMesh");
static_assert(offsetof(BPI_Attachment_C_GetAttachedCharacterMesh, EquipPlayerID) == 0x000000, "Member 'BPI_Attachment_C_GetAttachedCharacterMesh::EquipPlayerID' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_GetAttachedCharacterMesh, EquipMeshIndex) == 0x000004, "Member 'BPI_Attachment_C_GetAttachedCharacterMesh::EquipMeshIndex' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_GetAttachedCharacterMesh, Mesh) == 0x000008, "Member 'BPI_Attachment_C_GetAttachedCharacterMesh::Mesh' has a wrong offset!");

// Function BPI_Attachment.BPI_Attachment_C.EquipAttachmentInterface
// 0x0014 (0x0014 - 0x0000)
struct BPI_Attachment_C_EquipAttachmentInterface final
{
public:
	EPlayerAttachment                             Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AttachmentItemID;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerID                                     EquipPlayerID;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipMeshIndex;                                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDummy;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Attachment_C_EquipAttachmentInterface) == 0x000004, "Wrong alignment on BPI_Attachment_C_EquipAttachmentInterface");
static_assert(sizeof(BPI_Attachment_C_EquipAttachmentInterface) == 0x000014, "Wrong size on BPI_Attachment_C_EquipAttachmentInterface");
static_assert(offsetof(BPI_Attachment_C_EquipAttachmentInterface, Param_Index) == 0x000000, "Member 'BPI_Attachment_C_EquipAttachmentInterface::Param_Index' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_EquipAttachmentInterface, AttachmentItemID) == 0x000004, "Member 'BPI_Attachment_C_EquipAttachmentInterface::AttachmentItemID' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_EquipAttachmentInterface, EquipPlayerID) == 0x000008, "Member 'BPI_Attachment_C_EquipAttachmentInterface::EquipPlayerID' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_EquipAttachmentInterface, EquipMeshIndex) == 0x00000C, "Member 'BPI_Attachment_C_EquipAttachmentInterface::EquipMeshIndex' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_EquipAttachmentInterface, bDummy) == 0x000010, "Member 'BPI_Attachment_C_EquipAttachmentInterface::bDummy' has a wrong offset!");

// Function BPI_Attachment.BPI_Attachment_C.DestroyAttachmentMeshComponent
// 0x0010 (0x0010 - 0x0000)
struct BPI_Attachment_C_DestroyAttachmentMeshComponent final
{
public:
	class USceneComponent*                        DestroyMeshComponent;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDummy;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Attachment_C_DestroyAttachmentMeshComponent) == 0x000008, "Wrong alignment on BPI_Attachment_C_DestroyAttachmentMeshComponent");
static_assert(sizeof(BPI_Attachment_C_DestroyAttachmentMeshComponent) == 0x000010, "Wrong size on BPI_Attachment_C_DestroyAttachmentMeshComponent");
static_assert(offsetof(BPI_Attachment_C_DestroyAttachmentMeshComponent, DestroyMeshComponent) == 0x000000, "Member 'BPI_Attachment_C_DestroyAttachmentMeshComponent::DestroyMeshComponent' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_DestroyAttachmentMeshComponent, bDummy) == 0x000008, "Member 'BPI_Attachment_C_DestroyAttachmentMeshComponent::bDummy' has a wrong offset!");

// Function BPI_Attachment.BPI_Attachment_C.AttachmentVisibilityOffOnHead
// 0x0002 (0x0002 - 0x0000)
struct BPI_Attachment_C_AttachmentVisibilityOffOnHead final
{
public:
	bool                                          bOff;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDummy;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Attachment_C_AttachmentVisibilityOffOnHead) == 0x000001, "Wrong alignment on BPI_Attachment_C_AttachmentVisibilityOffOnHead");
static_assert(sizeof(BPI_Attachment_C_AttachmentVisibilityOffOnHead) == 0x000002, "Wrong size on BPI_Attachment_C_AttachmentVisibilityOffOnHead");
static_assert(offsetof(BPI_Attachment_C_AttachmentVisibilityOffOnHead, bOff) == 0x000000, "Member 'BPI_Attachment_C_AttachmentVisibilityOffOnHead::bOff' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_AttachmentVisibilityOffOnHead, bDummy) == 0x000001, "Member 'BPI_Attachment_C_AttachmentVisibilityOffOnHead::bDummy' has a wrong offset!");

// Function BPI_Attachment.BPI_Attachment_C.AttachmentVisibilityOffOnBackBody
// 0x000C (0x000C - 0x0000)
struct BPI_Attachment_C_AttachmentVisibilityOffOnBackBody final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeTime;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDummy;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Attachment_C_AttachmentVisibilityOffOnBackBody) == 0x000004, "Wrong alignment on BPI_Attachment_C_AttachmentVisibilityOffOnBackBody");
static_assert(sizeof(BPI_Attachment_C_AttachmentVisibilityOffOnBackBody) == 0x00000C, "Wrong size on BPI_Attachment_C_AttachmentVisibilityOffOnBackBody");
static_assert(offsetof(BPI_Attachment_C_AttachmentVisibilityOffOnBackBody, bVisibility) == 0x000000, "Member 'BPI_Attachment_C_AttachmentVisibilityOffOnBackBody::bVisibility' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_AttachmentVisibilityOffOnBackBody, FadeTime) == 0x000004, "Member 'BPI_Attachment_C_AttachmentVisibilityOffOnBackBody::FadeTime' has a wrong offset!");
static_assert(offsetof(BPI_Attachment_C_AttachmentVisibilityOffOnBackBody, bDummy) == 0x000008, "Member 'BPI_Attachment_C_AttachmentVisibilityOffOnBackBody::bDummy' has a wrong offset!");

}


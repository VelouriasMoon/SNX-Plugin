#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttachmentManageComponent

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "FAttachmentMeshComponentData_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FAttachmentData_structs.hpp"
#include "FAttachmentEquipData_structs.hpp"
#include "EAttachmentCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AttachmentManageComponent.BP_AttachmentManageComponent_C
// 0x00C0 (0x0180 - 0x00C0)
class UBP_AttachmentManageComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 EquipAttachmentItemID;                             // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EPlayerID                                     PlayerId;                                          // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_769D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFAttachmentData>               AttachmentData;                                    // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FFAttachmentEquipData>          EquipData;                                         // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FFAttachmentMeshComponentData>  MeshComponentData;                                 // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<int32>                                 LoadAttachmentIndexReserveList;                    // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         CurrentLoadingAttachmentIndex;                     // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopLoadAsset;                                    // 0x0124(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CopyParentMaterialFlag;                            // 0x0125(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769E[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ED_LoadCompleted;                                  // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 MaterialSwitchLayerID;                             // 0x0138(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SetoMaskAnimBP;                                    // 0x0148(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bSetoMaskBattleFlag;                               // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHeadVisibilityOffFlag;                            // 0x0171(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769F[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipMeshIndex;                                    // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHologramMode;                                     // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHologramNoLoadMaterial;                           // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ED_LoadCompleted__DelegateSignature();
	void ExecuteUbergraph_BP_AttachmentManageComponent(int32 EntryPoint);
	void OnHiddenSetoMask(bool bHidden);
	void LoadAttachmentMeshOld(int32 AttachmentIndex);
	void ReceiveBeginPlay();
	void OnLoaded_0CFCF78E4D34EAE44DCD22AC2752519B(class UObject* Loaded);
	void Equip(EPlayerAttachment AttachmentIndex, int32 AttachmentItemID);
	void GetAttachmentDataTable(int32 AttachmentItemID, bool* bSuccess, struct FFAttachmentData* Param_AttachmentData, struct FFAttachmentEquipData* Param_EquipData);
	void TakeOff(EPlayerAttachment AttachmentIndex);
	void IsCategoryVisibility(EAttachmentCategory Category, bool* bVisibility);
	void Attachment(int32 AttachmentIndex, int32 MeshIndex, class UObject* LoadedObject);
	void SetMaterialScalarParameter(class FName ParamName, float Value);
	void SetMaterialVectorParameter(class FName ParamName, const struct FVector& Value);
	void ReserveLoadAsset(int32 AttachmentIndex);
	void IsLoadComplete(int32 AttachmentIndex, bool* bComplete);
	void GetNextLoadAsset(int32 AttachmentIndex, bool* bSuccess, TSoftObjectPtr<class UObject>* Array_Element, int32* MeshIndex);
	void SetMaterialVector4Parameter(class FName ParamName, const struct FLinearColor& Value);
	void SetMaterialScalarArrayParameter(TArray<class FName>& ParamName, TArray<float>& Value);
	void SetMaterialVector4ArrayParameter(TArray<class FName>& ParamName, TArray<struct FLinearColor>& Value);
	void EquipAttachmentFromPlayerInfo(const struct FPlayerInfo& PlayerInfo);
	void SetAttachmentLight(bool Channel0, bool Channel1, bool Channel2);
	void SwitchMaterial(struct FMaterialSwitchCache& MaterialCache, TArray<class FName>& ExcludeSlots, class UMaterialInterface* NewMaterial);
	void ResetupSwitchMaterial(struct FMaterialSwitchCache& MaterialCache, TArray<class FName>& ExcludeSlots, class UMaterialInterface* NewMaterial);
	void AnimationSetting(class USkeletalMeshComponent* InMesh);
	void SetoMaskAnim(bool bInBattle);
	void RestoreSwitchMaterial(struct FMaterialSwitchCache& MaterialCahe);
	void VisibilityOffOnHead(bool bOff);
	void SetRenderCustomDepth(bool Value);
	void SetCustomDepthStencilValue(int32 Value);
	void GetCustomDepthStencilValue(bool* RenderCustomDepth, int32* CustomDepthStencilValue);
	void LoadAttachmentMesh(int32 AttachmentIndex);
	void GetMeshes(TArray<class UMeshComponent*>* MeshComps);
	void HiddenSetoMask(bool bHidden);
	void GetSetoMaskMesh(class USkeletalMeshComponent** Mesh);
	void SetoMaskEventSetting(bool bEvent);
	void Set_Attachment_Visibility(bool bNewVisibility);
	void ResetCopyPlayerMaterial();
	void SetMaterialFromOtherManage(class UBP_AttachmentManageComponent_C* OtherManage);
	void GetMeshAll(TArray<class UMeshComponent*>* MeshList);
	void EventBackBodyAttachmentDither(float DitherRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AttachmentManageComponent_C">();
	}
	static class UBP_AttachmentManageComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AttachmentManageComponent_C>();
	}
};
static_assert(alignof(UBP_AttachmentManageComponent_C) == 0x000008, "Wrong alignment on UBP_AttachmentManageComponent_C");
static_assert(sizeof(UBP_AttachmentManageComponent_C) == 0x000180, "Wrong size on UBP_AttachmentManageComponent_C");
static_assert(offsetof(UBP_AttachmentManageComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_AttachmentManageComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, EquipAttachmentItemID) == 0x0000C8, "Member 'UBP_AttachmentManageComponent_C::EquipAttachmentItemID' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, PlayerId) == 0x0000D8, "Member 'UBP_AttachmentManageComponent_C::PlayerId' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, AttachmentData) == 0x0000E0, "Member 'UBP_AttachmentManageComponent_C::AttachmentData' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, EquipData) == 0x0000F0, "Member 'UBP_AttachmentManageComponent_C::EquipData' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, MeshComponentData) == 0x000100, "Member 'UBP_AttachmentManageComponent_C::MeshComponentData' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, LoadAttachmentIndexReserveList) == 0x000110, "Member 'UBP_AttachmentManageComponent_C::LoadAttachmentIndexReserveList' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, CurrentLoadingAttachmentIndex) == 0x000120, "Member 'UBP_AttachmentManageComponent_C::CurrentLoadingAttachmentIndex' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, bStopLoadAsset) == 0x000124, "Member 'UBP_AttachmentManageComponent_C::bStopLoadAsset' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, CopyParentMaterialFlag) == 0x000125, "Member 'UBP_AttachmentManageComponent_C::CopyParentMaterialFlag' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, ED_LoadCompleted) == 0x000128, "Member 'UBP_AttachmentManageComponent_C::ED_LoadCompleted' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, MaterialSwitchLayerID) == 0x000138, "Member 'UBP_AttachmentManageComponent_C::MaterialSwitchLayerID' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, SetoMaskAnimBP) == 0x000148, "Member 'UBP_AttachmentManageComponent_C::SetoMaskAnimBP' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, bSetoMaskBattleFlag) == 0x000170, "Member 'UBP_AttachmentManageComponent_C::bSetoMaskBattleFlag' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, bHeadVisibilityOffFlag) == 0x000171, "Member 'UBP_AttachmentManageComponent_C::bHeadVisibilityOffFlag' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, EquipMeshIndex) == 0x000174, "Member 'UBP_AttachmentManageComponent_C::EquipMeshIndex' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, bHologramMode) == 0x000178, "Member 'UBP_AttachmentManageComponent_C::bHologramMode' has a wrong offset!");
static_assert(offsetof(UBP_AttachmentManageComponent_C, bHologramNoLoadMaterial) == 0x000179, "Member 'UBP_AttachmentManageComponent_C::bHologramNoLoadMaterial' has a wrong offset!");

}


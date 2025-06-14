#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SASManager

#include "Basic.hpp"

#include "FSASStealthParam_structs.hpp"
#include "AcceleratorParam_structs.hpp"
#include "FSASCopyParam_structs.hpp"
#include "Engine_structs.hpp"
#include "FSASCommandInternal_structs.hpp"
#include "FSASMetalParam_structs.hpp"
#include "FSASSeeThroughParam_structs.hpp"
#include "FSASFireParam_structs.hpp"
#include "F_SASParam_structs.hpp"
#include "FSASTelepoParam_structs.hpp"
#include "FSASElectricParam_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSASPsychicParam_structs.hpp"
#include "E_SASKind_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SASManager.BP_SASManager_C
// 0x0200 (0x0438 - 0x0238)
class ABP_SASManager_C final : public ASASManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFSASCommandInternal>           CutInCommandArray;                                 // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ReservedFlag;                                      // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveFlag;                                        // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFSASCommandInternal>           SkillCommandArray;                                 // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         SASActorArray;                                     // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAcceleratorParam                      AcceleratorParameter;                              // 0x0280(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C7[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AccelerateName;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CutInName;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFSASFireParam                         FireParameter;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASMetalParam                        MetalParameter;                                    // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASSeeThroughParam                   SeeThroughParameter;                               // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASStealthParam                      StealthParameter;                                  // 0x02B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASCopyParam                         CopyParameter;                                     // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASTelepoParam                       TelepoParameter;                                   // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFSASElectricParam                     ElectricParameter;                                 // 0x02B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C8[0x1];                                     // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SASCharacter_C*>             CutinBindingActors;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_CutinManager_C*                     BPCutinManager;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Fire;                                 // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Metal;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_SeeThrough;                           // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Telepo;                               // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Stealth;                              // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Electric;                             // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Copy;                                 // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTable_Accelerator;                          // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      LogoTextureAssets;                                 // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         LoadLogoTextureIndex;                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C9[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     LogoTextureObject;                                 // 0x0368(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UParticleSystem>> CodeEmitterAssets;                                 // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                CodeEmitterObject;                                 // 0x0388(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FTransform>                     CodeEmitterTransform;                              // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ULevelSequence>>  CutinSeqeuncerAssets;                              // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ULevelSequence*>                 CutinSeqeuncerObject;                              // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFSASPsychicParam                      PsychicParameter;                                  // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41CA[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FF_SASParam>                    SASDataTablePsychicCh0100;                         // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FF_SASParam>                    SASDataTablePsychicCh0200;                         // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bBrainFieldHelpMode;                               // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_SASKind                                     BrainFieldHelpKind;                                // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41CB[0x6];                                     // 0x03F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SASCableEnergyMesh_C*>       ConnectEnergyActors;                               // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 StopSceneName;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         StopSceneDilation;                                 // 0x0418(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41CC[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SASCutinExtra_C*                    ExtraCutin;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHealedBrainFieldFlag;                             // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41CD[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CutSceneDilation;                                  // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AC_SASExtendTime_TimeRate;                         // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStoppedSASCutIn;                                  // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOptionNoCutin;                                    // 0x0435(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SASManager(int32 EntryPoint);
	void DelayBeginPlay();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void OnPsychicEnd(const struct FFSASPsychicParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnPsychicStart(const struct FFSASPsychicParam& Param, class AActor* Param_Owner);
	void OnCutInEnd();
	void OnCutInStart();
	void OnCopyEnd(const struct FFSASCopyParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnCopyStart(const struct FFSASCopyParam& Param, class AActor* Param_Owner);
	void OnStealthEnd(const struct FFSASStealthParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnStealthStart(const struct FFSASStealthParam& Param, class AActor* Param_Owner);
	void OnTelepoEnd(const struct FFSASTelepoParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnTelepoStart(const struct FFSASTelepoParam& Param, class AActor* Param_Owner);
	void OnSeeThroughEnd(const struct FFSASSeeThroughParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnSeeThroughStart(const struct FFSASSeeThroughParam& Param, class AActor* Param_Owner);
	void OnMetalEnd(const struct FFSASMetalParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnMetalStart(const struct FFSASMetalParam& Param, class AActor* Param_Owner);
	void OnFireEnd(const struct FFSASFireParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnFireStart(const struct FFSASFireParam& Param, class AActor* Param_Owner);
	void OnElectricEnd(const struct FFSASElectricParam& Param, class AActor* Param_Owner, float RemainTime);
	void OnElectricStart(const struct FFSASElectricParam& Param, class AActor* Param_Owner);
	void OnAcceleratorEnd(const struct FAcceleratorParam& Parameter, class AActor* Param_Owner, float RemainTime, bool bHologram);
	void OnAcceleratorStart(const struct FAcceleratorParam& Parameter, class AActor* Param_Owner, bool bHologram);
	void UpdateSASCommand(float DeltaSeconds);
	void UpdateCutIn(float DeltaSeconds);
	void SetReservedFlag(E_SASKind SasKind, bool On);
	void OnSkillStart(struct FFSASCommandInternal& Command);
	void OnSkillEnd(struct FFSASCommandInternal& Command, bool bCancelSASCost);
	void OnStopCutin();
	void StartCutinSlow();
	void StopCutinSlow();
	void GetCurrentCutinSASType_Internal(E_SASKind* SASType);
	void ResetCharacters();
	void SetupActiveCutinActor(E_SASKind SasKind, bool Active);
	void LoadSASParamDataTable();
	void GetSASLogoTexture(E_SASKind SasKind, class UTexture2D** Texture);
	void LoadAssets();
	void GetSASCodeEmitterTemplates(TArray<class UParticleSystem*>* EmitterTemplates, TArray<struct FTransform>* Transforms);
	void GetSASSequencer(E_SASKind SasKind, class ULevelSequence** Sequencer);
	void AcceleratorStart(const struct FAcceleratorParam& Param_AcceleratorParameter, class AActor* Param_Owner, bool bHologram);
	void AcceleratorEnd(const struct FAcceleratorParam& InputPin, float RemainTime, class AActor* Param_Owner, bool bHologram);
	void StopCutin();
	void PlayBrainFieldHelpCutIn(EPlayerID HelpPlayerID);
	void CancelBrainFieldHelpCutIn();
	void StartStopScene();
	void StopStopScene();
	void StartCableEnergy();
	void DetachCableEnergy();
	void EraseCableEnergy();
	void VisibleCableEnergy();
	void LoadExtraCutin();
	void UnloadExtraCutin();
	void StartExtraCutin(ESASCutinExtraID ExtraID);
	bool IsPlayingCutinExtra();
	void EmitParticleCableEnergy();
	void SetMipPreStream(E_SASKind SasKind, bool Enable);
	void SetHealedBrainFieldFlag(bool bHealed);
	void GetHealedBrainFieldFlag(bool* IsHealed);
	void OnEndCutinSequencer();
	void DispTipsSAS();
	bool GetSASEffectFixParam(E_SASKindNative InKind, TArray<struct F_SASParamNative>* OutFixParam);
	void SetExtraCutinDilation(float Dilation);
	bool IsNeedFrameWait();
	void PauseExtraCutin(bool IsPause);
	bool IsCutinPlayingNative();
	void CancelSASWhenPlayingCutin();
	void SetOptionNoCutin(bool bNoCutin);
	void Start(const struct FFSASCommand& Parameter, bool* Success);
	void UnregisterActor(class AActor* Actor, bool* Success);
	void RegisterActor(class AActor* Actor, bool* Success);
	void CancelSAS(E_SASKind SAS_Kind, bool bCancelSASCost, bool* Success);
	void EndSAS(const struct FFSASCommand& Parameter, bool* Success);
	void GetCurrentCutinSASType(E_SASKind* SASType);
	void SAS_CommonStart(const struct FFSASCommand& SAS_Command, bool* Dummy);
	void SAS_CommonEnd(E_SASKind SAS_Kind, bool bCancelSASCost, bool* bDummy, float* RemainTime);

	void IsCutInPlaying(bool bCheckSASCutInStopped, bool* Playing) const;
	void GetAcceleratorParameter(struct FAcceleratorParam* Param_AcceleratorParameter) const;
	void GetCutinManager(class ABP_CutinManager_C** CutinManager) const;
	class FName GetCutinRowNameByESASKind(E_SASKind Param_Index) const;
	void GetSASParamData(E_SASKind Kind, int32 Level, struct FF_SASParam* Param) const;
	void GetSASParamDataNum(E_SASKindNative InKind, int32* DataNum) const;
	void IsOptionNoCutin(bool* bNoCutin) const;
	void IsAnyReserved(bool* Reserved) const;
	void IsReserved(E_SASKind SAS_Kind, bool* Reserved) const;
	void IsAnyCutInReserved(bool* Reserved) const;
	void IsCutInReserved(E_SASKind SasKind, bool* Reserved) const;
	void GetSASExtendTimeRate(float* Rate) const;
	void IsAcceleratorValid(bool* Valid) const;
	void IsAccelerating(bool* Accelerating) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SASManager_C">();
	}
	static class ABP_SASManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SASManager_C>();
	}
};
static_assert(alignof(ABP_SASManager_C) == 0x000008, "Wrong alignment on ABP_SASManager_C");
static_assert(sizeof(ABP_SASManager_C) == 0x000438, "Wrong size on ABP_SASManager_C");
static_assert(offsetof(ABP_SASManager_C, UberGraphFrame) == 0x000238, "Member 'ABP_SASManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_SASManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutInCommandArray) == 0x000248, "Member 'ABP_SASManager_C::CutInCommandArray' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, ReservedFlag) == 0x000258, "Member 'ABP_SASManager_C::ReservedFlag' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, ActiveFlag) == 0x00025C, "Member 'ABP_SASManager_C::ActiveFlag' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SkillCommandArray) == 0x000260, "Member 'ABP_SASManager_C::SkillCommandArray' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASActorArray) == 0x000270, "Member 'ABP_SASManager_C::SASActorArray' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, AcceleratorParameter) == 0x000280, "Member 'ABP_SASManager_C::AcceleratorParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, AccelerateName) == 0x000290, "Member 'ABP_SASManager_C::AccelerateName' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutInName) == 0x0002A0, "Member 'ABP_SASManager_C::CutInName' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, FireParameter) == 0x0002B0, "Member 'ABP_SASManager_C::FireParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, MetalParameter) == 0x0002B1, "Member 'ABP_SASManager_C::MetalParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SeeThroughParameter) == 0x0002B2, "Member 'ABP_SASManager_C::SeeThroughParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, StealthParameter) == 0x0002B3, "Member 'ABP_SASManager_C::StealthParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CopyParameter) == 0x0002B4, "Member 'ABP_SASManager_C::CopyParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, TelepoParameter) == 0x0002B5, "Member 'ABP_SASManager_C::TelepoParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, ElectricParameter) == 0x0002B6, "Member 'ABP_SASManager_C::ElectricParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutinBindingActors) == 0x0002B8, "Member 'ABP_SASManager_C::CutinBindingActors' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, BPCutinManager) == 0x0002C8, "Member 'ABP_SASManager_C::BPCutinManager' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Fire) == 0x0002D0, "Member 'ABP_SASManager_C::SASDataTable_Fire' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Metal) == 0x0002E0, "Member 'ABP_SASManager_C::SASDataTable_Metal' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_SeeThrough) == 0x0002F0, "Member 'ABP_SASManager_C::SASDataTable_SeeThrough' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Telepo) == 0x000300, "Member 'ABP_SASManager_C::SASDataTable_Telepo' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Stealth) == 0x000310, "Member 'ABP_SASManager_C::SASDataTable_Stealth' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Electric) == 0x000320, "Member 'ABP_SASManager_C::SASDataTable_Electric' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Copy) == 0x000330, "Member 'ABP_SASManager_C::SASDataTable_Copy' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTable_Accelerator) == 0x000340, "Member 'ABP_SASManager_C::SASDataTable_Accelerator' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, LogoTextureAssets) == 0x000350, "Member 'ABP_SASManager_C::LogoTextureAssets' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, LoadLogoTextureIndex) == 0x000360, "Member 'ABP_SASManager_C::LoadLogoTextureIndex' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, LogoTextureObject) == 0x000368, "Member 'ABP_SASManager_C::LogoTextureObject' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CodeEmitterAssets) == 0x000378, "Member 'ABP_SASManager_C::CodeEmitterAssets' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CodeEmitterObject) == 0x000388, "Member 'ABP_SASManager_C::CodeEmitterObject' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CodeEmitterTransform) == 0x000398, "Member 'ABP_SASManager_C::CodeEmitterTransform' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutinSeqeuncerAssets) == 0x0003A8, "Member 'ABP_SASManager_C::CutinSeqeuncerAssets' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutinSeqeuncerObject) == 0x0003B8, "Member 'ABP_SASManager_C::CutinSeqeuncerObject' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, PsychicParameter) == 0x0003C8, "Member 'ABP_SASManager_C::PsychicParameter' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTablePsychicCh0100) == 0x0003D0, "Member 'ABP_SASManager_C::SASDataTablePsychicCh0100' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, SASDataTablePsychicCh0200) == 0x0003E0, "Member 'ABP_SASManager_C::SASDataTablePsychicCh0200' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, bBrainFieldHelpMode) == 0x0003F0, "Member 'ABP_SASManager_C::bBrainFieldHelpMode' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, BrainFieldHelpKind) == 0x0003F1, "Member 'ABP_SASManager_C::BrainFieldHelpKind' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, ConnectEnergyActors) == 0x0003F8, "Member 'ABP_SASManager_C::ConnectEnergyActors' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, StopSceneName) == 0x000408, "Member 'ABP_SASManager_C::StopSceneName' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, StopSceneDilation) == 0x000418, "Member 'ABP_SASManager_C::StopSceneDilation' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, ExtraCutin) == 0x000420, "Member 'ABP_SASManager_C::ExtraCutin' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, bHealedBrainFieldFlag) == 0x000428, "Member 'ABP_SASManager_C::bHealedBrainFieldFlag' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, CutSceneDilation) == 0x00042C, "Member 'ABP_SASManager_C::CutSceneDilation' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, AC_SASExtendTime_TimeRate) == 0x000430, "Member 'ABP_SASManager_C::AC_SASExtendTime_TimeRate' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, bStoppedSASCutIn) == 0x000434, "Member 'ABP_SASManager_C::bStoppedSASCutIn' has a wrong offset!");
static_assert(offsetof(ABP_SASManager_C, bOptionNoCutin) == 0x000435, "Member 'ABP_SASManager_C::bOptionNoCutin' has a wrong offset!");

}


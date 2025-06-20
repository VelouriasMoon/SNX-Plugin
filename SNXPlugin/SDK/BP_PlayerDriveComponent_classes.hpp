#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerDriveComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerDriveComponent.BP_PlayerDriveComponent_C
// 0x01C0 (0x04A0 - 0x02E0)
class UBP_PlayerDriveComponent_C final : public UPlayerDriveComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ULevelSequence*>                 StartSequence;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMainPlayer;                                      // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingSequence;                                   // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_314A[0x5];                                     // 0x02FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSLevelSequenceActor*                  Sequencer;                                         // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SequencerIndex;                                    // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314B[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 RootActor;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerID                                     PlayerId;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314C[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      PP_PulseForce;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartCameraLocation;                               // 0x0328(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314D[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPostProcessComponent*                  PerformPostProcess;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>       PP_PulseForceRef;                                  // 0x0340(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_DriveSequenceParameter_C*           ParameterActor;                                    // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARSBattlePlayer_C*                      OwnerCharacter;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ED_PlayStart;                                      // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ED_PlayFinish;                                     // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ULevelSequence*>                 EndSequence;                                       // 0x0398(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          PlayStart;                                         // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SkillDamageUp;                                     // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ParameterActorBinding;                             // 0x03AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EventEnemy;                                        // 0x03AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_314E[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LowDamageShotName;                                 // 0x03B0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          RestoreUI;                                         // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RestorePlayerInput;                                // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_314F[0x2];                                     // 0x03CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               StartCameraRotation;                               // 0x03CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerDynamic;                                     // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3150[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartPlayerLocation;                               // 0x03DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDriveRendererParameter*                Parameter;                                         // 0x03E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RendererRate;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RendererEnable;                                    // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3151[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPostProcessComponent*                  PostProcess;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   HighDamageShotName;                                // 0x0400(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ACameraActor*                           ControlCamera;                                     // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReadyFlag;                                        // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3152[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DriveDelayTimer;                                   // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SimpleDirectionTimer;                              // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3153[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           SimpleDirectionCurve;                              // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           PlayerDirectionCurve;                              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           NpcDirectionCurve;                                 // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSimpleDirectionFlash;                             // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSimpleDirectionCamera;                            // 0x0449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSimpleDirectionHood;                              // 0x044A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSimpleDirectionFlag;                              // 0x044B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSimpleDirectionSlow;                              // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNotifyChangePlayerAction;                         // 0x044D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFIrstSimpleDirectionTick;                         // 0x044E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3154[0x1];                                     // 0x044F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInstance>       PP_DrivePlaneRef;                                  // 0x0450(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PP_DrivePlane;                                     // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastHandedOverLocation;                            // 0x0480(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipSimpleDirection;                             // 0x048C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceSimpleDirection;                             // 0x048D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3155[0x2];                                     // 0x048E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BattlingDelayTimer;                                // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RenderPostProcess;                                 // 0x0494(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NowBattling;                                       // 0x0495(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseBattlingTimer;                                  // 0x0496(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CallSetDriveMaterial;                              // 0x0497(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bManualMode;                                       // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ED_PlayStart__DelegateSignature(class AActor* User, bool bPlayStart);
	void ED_PlayFinish__DelegateSignature(class AActor* User, bool bPlayStart);
	void ExecuteUbergraph_BP_PlayerDriveComponent(int32 EntryPoint);
	void UnbindSimpleDirectionTick();
	void BindSimpleDirectionTick();
	void ReceiveBeginPlay();
	void UnbindDriveReadyTick();
	void BindDriveReadyTick();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void PlayStartSequence(bool HighDamage);
	void Initialize();
	void Finalize();
	void ProtectedInitialize();
	void ProtectedFinalize(EEndPlayReason EndPlayReason);
	void LoadAsset(EPlayerID UserPlayerID, bool MainPlayer);
	void ProtectedGetLoadSequencerAsset(EPlayerID Param_PlayerId, TArray<TSoftObjectPtr<class ULevelSequence>>* StartLevelSequences, TArray<TSoftObjectPtr<class ULevelSequence>>* EndLevelSequences);
	void ProtectedBindingSequence();
	void ProtectedOnFinishSequencer();
	void ProtectedPlaySequencer();
	void EventSeqStartInputPlayer();
	void EventSeqDamageEnemy();
	void EventSeqSetVisibleUI(bool Enable);
	void ProtectedSetSequenceActorEvent(bool SetPlayer, bool SetEnemy, bool IsStart, bool IsDynamic);
	void ProtectedUpdate(float DeltaSeconds);
	void PlayEndSequence(bool bNoSequence);
	void EventSeqPlayerOpenSwitch();
	void ResetSequence();
	void EventSeqSetDriveMaterial(bool EnableDrive);
	void ProtectedGetSequencerAsset(bool IsStart, bool* Valid, class ULevelSequence** LevelSequence);
	void ProtectedUpdateSequenceParameter();
	void SetupSequencePPM(bool Enable);
	void ProtectedUpdatePostProcess(float DeltaSeconds);
	void IsActivePostProcess(bool* Param_IsActive);
	void ClearPostProcess();
	void TickDriveReady(float DeltaSeconds);
	void ReadyDrive(bool bAfterBrainCrash, bool bManual);
	void CancelReadyDrive();
	void OnDriveEnd(bool bInterruption, bool bLocationChange);
	void BeginSimpleDirectionFlash();
	void EndSimpleDirectionFlash();
	void EndSimpleDirection(bool bSuccess);
	void TickSimpleDirection(float DeltaSeconds);
	void BeginSimpleDirection(bool IsSkipDirection);
	void BeginSimpleDirectionCamera();
	void EndSimpleDirectionCamera();
	void SetSimpleDirectionHood();
	void DriveImpactAttack();
	void BeginSimpleDirectionSlow(float Rate);
	void EndSimpleDirectionSlow();
	void NotifyChangePlayerAction();
	void DriveBeginFinalCheck(bool* bOK);
	void SetBrainFieldDrive(bool bDrive);
	void PlayDriveVoice(EPlayerID Param_PlayerId);
	void UpdateDrivePlane(float EffectLength);
	void Shutdown_DrivePlane();
	void BeginDriveNoDirection();
	void SetBattling(bool Battliing);
	void ProtectedUpdateBattling(float DeltaSeconds);
	void IsSimpleDirectionTiming(bool* bSImpleDirection);

	bool IsDebugInfiniteDrive() const;
	bool IsDebugAlwaysDrive() const;
	void IsPlayingSequence(bool* IsPlaying) const;
	void IsInitialize(bool* IsInitialized) const;
	void IsDriveReadyAble(bool bInManual, bool* bOK) const;
	void IsPlaySimpleDirection(bool* bPlay) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerDriveComponent_C">();
	}
	static class UBP_PlayerDriveComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerDriveComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerDriveComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerDriveComponent_C");
static_assert(sizeof(UBP_PlayerDriveComponent_C) == 0x0004A0, "Wrong size on UBP_PlayerDriveComponent_C");
static_assert(offsetof(UBP_PlayerDriveComponent_C, UberGraphFrame) == 0x0002E0, "Member 'UBP_PlayerDriveComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, StartSequence) == 0x0002E8, "Member 'UBP_PlayerDriveComponent_C::StartSequence' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, Initialized) == 0x0002F8, "Member 'UBP_PlayerDriveComponent_C::Initialized' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, IsMainPlayer) == 0x0002F9, "Member 'UBP_PlayerDriveComponent_C::IsMainPlayer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PlayingSequence) == 0x0002FA, "Member 'UBP_PlayerDriveComponent_C::PlayingSequence' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, Sequencer) == 0x000300, "Member 'UBP_PlayerDriveComponent_C::Sequencer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, SequencerIndex) == 0x000308, "Member 'UBP_PlayerDriveComponent_C::SequencerIndex' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RootActor) == 0x000310, "Member 'UBP_PlayerDriveComponent_C::RootActor' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PlayerId) == 0x000318, "Member 'UBP_PlayerDriveComponent_C::PlayerId' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PP_PulseForce) == 0x000320, "Member 'UBP_PlayerDriveComponent_C::PP_PulseForce' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, StartCameraLocation) == 0x000328, "Member 'UBP_PlayerDriveComponent_C::StartCameraLocation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PerformPostProcess) == 0x000338, "Member 'UBP_PlayerDriveComponent_C::PerformPostProcess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PP_PulseForceRef) == 0x000340, "Member 'UBP_PlayerDriveComponent_C::PP_PulseForceRef' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, ParameterActor) == 0x000368, "Member 'UBP_PlayerDriveComponent_C::ParameterActor' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, OwnerCharacter) == 0x000370, "Member 'UBP_PlayerDriveComponent_C::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, ED_PlayStart) == 0x000378, "Member 'UBP_PlayerDriveComponent_C::ED_PlayStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, ED_PlayFinish) == 0x000388, "Member 'UBP_PlayerDriveComponent_C::ED_PlayFinish' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, EndSequence) == 0x000398, "Member 'UBP_PlayerDriveComponent_C::EndSequence' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PlayStart) == 0x0003A8, "Member 'UBP_PlayerDriveComponent_C::PlayStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, SkillDamageUp) == 0x0003A9, "Member 'UBP_PlayerDriveComponent_C::SkillDamageUp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, ParameterActorBinding) == 0x0003AA, "Member 'UBP_PlayerDriveComponent_C::ParameterActorBinding' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, EventEnemy) == 0x0003AB, "Member 'UBP_PlayerDriveComponent_C::EventEnemy' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, LowDamageShotName) == 0x0003B0, "Member 'UBP_PlayerDriveComponent_C::LowDamageShotName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RestoreUI) == 0x0003C8, "Member 'UBP_PlayerDriveComponent_C::RestoreUI' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RestorePlayerInput) == 0x0003C9, "Member 'UBP_PlayerDriveComponent_C::RestorePlayerInput' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, StartCameraRotation) == 0x0003CC, "Member 'UBP_PlayerDriveComponent_C::StartCameraRotation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PlayerDynamic) == 0x0003D8, "Member 'UBP_PlayerDriveComponent_C::PlayerDynamic' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, StartPlayerLocation) == 0x0003DC, "Member 'UBP_PlayerDriveComponent_C::StartPlayerLocation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, Parameter) == 0x0003E8, "Member 'UBP_PlayerDriveComponent_C::Parameter' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RendererRate) == 0x0003F0, "Member 'UBP_PlayerDriveComponent_C::RendererRate' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RendererEnable) == 0x0003F4, "Member 'UBP_PlayerDriveComponent_C::RendererEnable' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PostProcess) == 0x0003F8, "Member 'UBP_PlayerDriveComponent_C::PostProcess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, HighDamageShotName) == 0x000400, "Member 'UBP_PlayerDriveComponent_C::HighDamageShotName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, ControlCamera) == 0x000418, "Member 'UBP_PlayerDriveComponent_C::ControlCamera' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bReadyFlag) == 0x000420, "Member 'UBP_PlayerDriveComponent_C::bReadyFlag' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, DriveDelayTimer) == 0x000424, "Member 'UBP_PlayerDriveComponent_C::DriveDelayTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, SimpleDirectionTimer) == 0x000428, "Member 'UBP_PlayerDriveComponent_C::SimpleDirectionTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, SimpleDirectionCurve) == 0x000430, "Member 'UBP_PlayerDriveComponent_C::SimpleDirectionCurve' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PlayerDirectionCurve) == 0x000438, "Member 'UBP_PlayerDriveComponent_C::PlayerDirectionCurve' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, NpcDirectionCurve) == 0x000440, "Member 'UBP_PlayerDriveComponent_C::NpcDirectionCurve' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bSimpleDirectionFlash) == 0x000448, "Member 'UBP_PlayerDriveComponent_C::bSimpleDirectionFlash' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bSimpleDirectionCamera) == 0x000449, "Member 'UBP_PlayerDriveComponent_C::bSimpleDirectionCamera' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bSimpleDirectionHood) == 0x00044A, "Member 'UBP_PlayerDriveComponent_C::bSimpleDirectionHood' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bSimpleDirectionFlag) == 0x00044B, "Member 'UBP_PlayerDriveComponent_C::bSimpleDirectionFlag' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bSimpleDirectionSlow) == 0x00044C, "Member 'UBP_PlayerDriveComponent_C::bSimpleDirectionSlow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bNotifyChangePlayerAction) == 0x00044D, "Member 'UBP_PlayerDriveComponent_C::bNotifyChangePlayerAction' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bFIrstSimpleDirectionTick) == 0x00044E, "Member 'UBP_PlayerDriveComponent_C::bFIrstSimpleDirectionTick' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PP_DrivePlaneRef) == 0x000450, "Member 'UBP_PlayerDriveComponent_C::PP_DrivePlaneRef' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, PP_DrivePlane) == 0x000478, "Member 'UBP_PlayerDriveComponent_C::PP_DrivePlane' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, LastHandedOverLocation) == 0x000480, "Member 'UBP_PlayerDriveComponent_C::LastHandedOverLocation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, IsSkipSimpleDirection) == 0x00048C, "Member 'UBP_PlayerDriveComponent_C::IsSkipSimpleDirection' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bForceSimpleDirection) == 0x00048D, "Member 'UBP_PlayerDriveComponent_C::bForceSimpleDirection' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, BattlingDelayTimer) == 0x000490, "Member 'UBP_PlayerDriveComponent_C::BattlingDelayTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, RenderPostProcess) == 0x000494, "Member 'UBP_PlayerDriveComponent_C::RenderPostProcess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, NowBattling) == 0x000495, "Member 'UBP_PlayerDriveComponent_C::NowBattling' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, UseBattlingTimer) == 0x000496, "Member 'UBP_PlayerDriveComponent_C::UseBattlingTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, CallSetDriveMaterial) == 0x000497, "Member 'UBP_PlayerDriveComponent_C::CallSetDriveMaterial' has a wrong offset!");
static_assert(offsetof(UBP_PlayerDriveComponent_C, bManualMode) == 0x000498, "Member 'UBP_PlayerDriveComponent_C::bManualMode' has a wrong offset!");

}


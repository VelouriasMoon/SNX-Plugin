#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMainGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "Enum_ui_pk_weight_gauge_button_structs.hpp"
#include "UMG_structs.hpp"
#include "Enum_ui_object_guide_structs.hpp"
#include "PsychicGrabButtonType_structs.hpp"
#include "Enum_ui_action_icon_device_type_structs.hpp"
#include "Enum_ui_pk_weight_gauge_size_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HUDMainGame.HUDMainGame_C
// 0x0178 (0x0960 - 0x07E8)
class AHUDMainGame_C final : public ARSHUDBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerInputComponent_C*                PlayerInputComponent;                              // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BattleDamage2D;                                    // 0x0800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             BattleDamage3D;                                    // 0x0810(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DebugInvisibleFlag;                                // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655E[0x7];                                     // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ui_Caption_1_C*                     Caption;                                           // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugBattleUIPlayFlag;                             // 0x0830(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_655F[0x3];                                     // 0x0831(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugLogCount;                                     // 0x0834(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Loading_1_C*                     LoadingWidget;                                     // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugSystemMessageFlag;                            // 0x0840(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6560[0x7];                                     // 0x0841(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ui_Info_window_1_C*                 WidgetSystemMessage;                               // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Choice_window_C*                 UIGeneralChoice_0;                                 // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugSystemWarningFlag;                            // 0x0858(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6561[0x7];                                     // 0x0859(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ui_CharaName_C*                     UICharaName;                                       // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_TownName_C*                      UITownName;                                        // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Loading_chara_1_C*               LoadingWidgetChara;                                // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Loading_interlude_C*             LoadingWidgetInterlude;                            // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Loading_chapter_C*               LoadingWidgetChapter;                              // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugLoadingIndex;                                 // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugTownFlag;                                     // 0x088C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugKeyboardFlag;                                 // 0x088D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6562[0x2];                                     // 0x088E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIAutoSaving*                          UIAutoSave;                                        // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugInitFlag;                                     // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugMinimapDispAdd;                               // 0x0899(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6563[0x6];                                     // 0x089A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUITutoOperation*                       HelpOperation;                                     // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUINoticeMessage*                       NoticeMessage;                                     // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugHelpID;                                       // 0x08B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugTutoID;                                       // 0x08B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugMessageNo;                                    // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitDriveGaugePercent;                             // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitDriveGaugePercent;                           // 0x08C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6564[0x3];                                     // 0x08C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InitState;                                         // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugDriveGaugeState;                              // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugDriveGaugePercent;                            // 0x08CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDriveGaugeUnlockFlag;                         // 0x08D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6565[0x3];                                     // 0x08D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugDrawMessageCounter;                           // 0x08D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _TempBrainTalkDelaySecond;                         // 0x08D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _TempBrainTalkDelaySecond_Work;                    // 0x08DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _TempBrainTalkDeltaSeconds;                        // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlagLoadingSetupEvent;                             // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FlagLoadingReserveEnd;                             // 0x08E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6566[0x2];                                     // 0x08E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LogDrawTime;                                       // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LogWaitTime;                                       // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TestItem0001;                                      // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TestItem0002;                                      // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TestItem0003;                                      // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TestLoadingID;                                     // 0x0908(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6567[0x4];                                     // 0x090C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ui_SasSkill_Popup_C*                SasWindow;                                         // 0x0910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Caption_Guide_1_C*               CaptionGuide;                                      // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnMainContentsUIClose;                             // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlayDecideAnimeBrainTuto;                        // 0x0930(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWB_ui_Keyword_C*                       WidghetKeyword;                                    // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMessageDrawFlag;                              // 0x0948(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6568[0x3];                                     // 0x0949(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RestoreRadialBlur;                                 // 0x094C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESoundState                                   StoreSoundState;                                   // 0x0950(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6569[0x3];                                     // 0x0951(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RestoreOutlineDepthLength;                         // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RestoreOutlineDepthSmooth;                         // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BattleDamage2D__DelegateSignature(int32 Damage, const struct FVector2D& Position2D, bool IsPlayer, bool IsCritical, bool IsSasCritical, bool IsBrainCrashCritical, bool IsHeal, bool IsWeak, bool IsNoDamage);
	void BattleDamage3D__DelegateSignature(int32 Damage, const struct FVector& Position3D, bool IsPlayer, bool IsCritical, bool IsSasCritical, bool IsBrainCrashCritical, bool IsHeal, bool IsWeak, bool IsNoDamage, class ARSBattleCharacter_C* CrushTarget, int32 CrushBonus, const struct FVector2D& Offset);
	void OnMainContentsUIClose__DelegateSignature();
	void OnPlayDecideAnimeBrainTuto__DelegateSignature();
	void ExecuteUbergraph_HUDMainGame(int32 EntryPoint);
	void StartPhotoModeUI();
	void StartVisionSimulatorEnd();
	void StartVisionSimulatorStart();
	void StartVisionSimulatorSelect();
	void PauseBrainTalkForEventFromNative(const bool IsPause);
	void RemoveCustomTimeDilation_FromNative(const class FString& Param_Name);
	void SetCustomTimeDilation_FromNative(const class FString& Param_Name, float CurrentCustomTimeDilation);
	void Event_SetPlayer(class ARsBattleHero_C* Player);
	void StopBrainTalkVoiceFromNative();
	void CloseBrainTalkFromNative();
	void OpenBrainTalkFromNative(const int32 CharacterId, const int32 ExpressionID, const class FString& MessageID, const float DrawSecond);
	void OnOpenBrainMessage(ERSGamepadLayoutType Layout, ERSGamepadInputName Key);
	void StartStaffRoll(float Speed);
	void BattleDamage_3D_Event(int32 Damage, const struct FVector& Position3D, bool IsPlayer, bool IsCritical, bool IsSasCritical, bool IsBrainCrashCritical, bool IsHeal, bool IsWeak, bool IsNoDamage, class ARSBattleCharacter_C* CrushTarget, int32 CrushBonus, const struct FVector2D& Offset);
	void BattleDamage2D_Event(int32 Damage, const struct FVector2D& Position2D, bool IsPlayer, bool IsCritical, bool IsSasCritical, bool IsBrainCrashCritical, bool IsHeal, bool IsWeak, bool IsNoDamage);
	void OnOpenDetailmap(ERSGamepadLayoutType Layout, ERSGamepadInputName Key);
	void OnOpenMenu(ERSGamepadLayoutType Layout, ERSGamepadInputName Key);
	void OnOpenWorldmap(ERSGamepadLayoutType Layout, ERSGamepadInputName Key);
	void Event_PlayBrainTalkVoice(float DelaySecond);
	void Event_CrushBonus(class AActor* Target, int32 bonus);
	void OnInitialized();
	void ReceiveActorBeginCursorOver();
	void DebugChangeVisible(bool Visibleflag);
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void UpdateBossEnemyHpWidget(class ARSBattleCharacter_C* Boss);
	void UpdatePlayerHpWidget(class ARSBattlePlayer_C* Player, int32 Param_Index);
	void SetCharacterDamage(class AActor* Target, int32 CurrentHp, int32 BaseHp, bool IsAlways, float Time);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void KeyboardPressInputEvent(const struct FKey& Key);
	void KeyboardReleaseInputEvent(const struct FKey& Key);
	void InitBattleMenu();
	void SetBrainCrashTarget(class ARSBattleCharacter_C* Target, bool* Success);
	void InitMessageWidget();
	void DrawDebugPsychicType();
	void SetLogKillEnemy(class FName CharacterId);
	void PlayerUseItem(bool* IsUse);
	void InitLoading();
	void PsychicIconSetWeakShow(class ARSBattleCharacter_C* Actor, int32 WeakIndex, EPsychicGrabButtonType Button, bool IsShow);
	void SetupMinimapEnemyIcon();
	class UUIActionIcon* AddActionIcon();
	bool RemoveActionIcon(class UUIActionIcon* ActionIcon);
	void CreateDetailMap();
	void InitAreaNext();
	void InitAreaHere();
	void EndAreaNext();
	void StartGameOver();
	void IsEndGameOver(bool* IsEnd);
	void GetGameOverResult(EGameOverResult* Result);
	bool UpdateItemMenuUI();
	void InitBrainTalk();
	void OpenBrainTalk(int32 CharacterId, int32 ExpressionID, const class FString& MessageID, float DrawSecond);
	void CloseBrainTalk();
	int32 DrawMessage(const class FString& Talker, const class FString& Message, int32 WindowType, float DrawSecond, bool IsEnableSkip, class URSAtomComponentBase* Voice, bool IsSkipVoiceEnd, bool IsWaitMode);
	void SetupSAS();
	void IsExecuteBrainTalkWidget(bool* IsExecute);
	void IsExecuteBrainTalkMessage(bool* IsExecute);
	void CreatePartyWidget();
	bool NextBrainTalkMessage(const int32 Param_Index);
	void SetLogGetMoney(int32 GetMoney, float DrawTime);
	void SetLogGetExperience(int32 GetExp);
	int32 DrawChoiceMessage(int32 ChoiceNum, const class FString& Choice0, const class FString& Choice1, const class FString& Choice2, const class FString& Choice3, const class FString& Choice4, int32 DefaultIndex, int32 CancelIndex, float DrawSecond, bool IsEnableCancel, bool IsWaitMode);
	bool SkipMessage();
	void GetChoiceResult(int32 MessageIndex, int32* Result);
	void GetLastChoiceResult(int32* Result);
	void CheckEndMessage(int32 MessageIndex, bool* IsEnd);
	void CheckEndAllMessage(bool* IsEnd, bool FlagCheckClose);
	void CreateWorldMap();
	void StartWorldMap(bool IsDetailMap);
	void BattleMenuPlayDamageEffect();
	void SetBrainTalkBugMode(bool IsBug);
	void InitCharaName();
	void InitTownName();
	bool StartCharaName(const class FString& CharaID);
	bool StartTownName(int32 LocationId);
	bool Init();
	bool ProcBattleMenu();
	bool IsBrainTalkFinishedWait();
	void SetIntercept(class AActor* Target);
	void ResetIntercept();
	void UpdateItemNum();
	class URSAtomComponentBase* GetMessageVoice();
	void SetSkipAllMessage(bool IsSkip);
	void StartLoadingChara(int32 ID);
	void StartLoadingInterlude(int32 ID);
	void StartLoadingChapter(int32 ID);
	void SetUIAnimationSpeed(float UIAnimationSpeed);
	void CreateSaveLoad();
	void InitAutoSave();
	void SetPsychicGauge(float Param);
	void SetPsychicWeightGaugeStyle(Enum_ui_pk_weight_gauge_button Button, Enum_ui_pk_weight_gauge_size Size, int32 MaxLevel);
	void StartPsychicWeightGauge(Enum_ui_pk_weight_gauge_button Button, class AActor* Target, bool IsExObject);
	void EndPsychicWeightGauge(Enum_ui_pk_weight_gauge_button Button, bool IsSuccess);
	void SetPsychicWeightGauge(Enum_ui_pk_weight_gauge_button Button, int32 Level, float Percent);
	void StartPursuitIcon(EPsychicObjectUniqueInputType LeftInput, EPsychicObjectUniqueInputButton LeftButton, EPsychicObjectUniqueInputType CenterInput, EPsychicObjectUniqueInputButton CenterButton, EPsychicObjectUniqueInputType RightInput, EPsychicObjectUniqueInputButton RightButton, Enum_ui_action_icon_device_type DeviceType, bool FlagDrawMouse);
	void EndPursuitIcon(bool IsSuccess);
	void SetPsychicWeightGaugeVisible(Enum_ui_pk_weight_gauge_button Button, bool IsVisible);
	void SetPsychicWeightGaugeReverse(bool IsReverse);
	void GetPsychicWeightGaugeReverseFlag(bool* IsReverse);
	void StartTutorial();
	void UsePsychicGauge(float UsePercent);
	void ErrorPsychicGauge();
	void InitDebugParam();
	void GetDebugInvisible(bool* IsVisible);
	void SetDebugMinimapDispAdd(bool Param_DebugMinimapDispAdd);
	void GetDebugMinimapDispAdd(bool* Param_DebugMinimapDispAdd);
	bool StopAutoSaveIcon();
	bool StartAutoSaveIcon();
	void CreateOperation();
	void StartOperation();
	void CreateNoticeMessage();
	void CreateNoticeQuest();
	void SetPsychicWeightGaugeEnableFlag(Enum_ui_pk_weight_gauge_button Button, bool IsEnable);
	void LevelUpMain(int32 Level);
	void SasChangePage(int32 Page);
	bool StartTutoOperation(class FName HelpTutoID);
	bool CloseTutoOperation();
	bool IsTutoOperation();
	void SetVisibleAreaHere(bool Visibleflag);
	void SetVisibleAreaNext(bool Visibleflag);
	void IsVisibleAreaHere(bool* Visibleflag);
	void IsVisibleAreaNext(bool* Visibleflag);
	bool StartAreaNext(int32 LocationId, int32 AreaId, int32 PortalID, bool IsWorldMap);
	bool StartAreaHere(int32 LocationId, int32 AreaId, int32 PortalID);
	void SetBrainCrashEnable(class ARSBattleCharacter_C* Target, bool IsEnable);
	void DriveGaugeSetPercent(float Percent);
	void DriveGaugeSetUnlockBrainField(bool IsUnlock);
	void DriveGaugeSetDriveMode(bool IsDriveMode);
	void DriveGaugeSetBrainFieldMode(bool Param_IsBrainField);
	void CreatePresentWidget();
	void InitParameter();
	void RushPursuitIcon(bool Left, bool Center, bool Right);
	void PresentGetSelectItemID(class FName* ItemId);
	void PresentGetSelectFlag(bool* SelectFlag);
	bool SetLogGetItem(const class FString& ItemName, int32 ItemNum, const float _drawTime);
	void SetupMinimapEtcIcon();
	void DebugDriveGauge();
	void SetLogLevelUp(class FName CharacterId);
	void SetPsychicGaugeLevel(int32 Level);
	void SetEnemyHpWidgetVisible(bool IsVisible);
	void StartSasHologram(EPlayerID CharaID, bool IsCrashVision);
	void StopSasHologram();
	void DecideSasHologram();
	void SetPsychicWeightGaugeEnableComboFlag(bool IsEnable);
	void SetPursuitIconStickHoldPercent(float LeftPercent, float CenterPercent, float RightPercent);
	void SetPursuitIconStickRoll(bool FlagLeft, bool FlagCenter, bool FlagRight);
	bool SetLogItemOverFlow(const class FString& ItemName, const float _drawTime);
	void SetPursuitIconStickHold(bool FlagLeft, bool FlagCenter, bool FlagRight);
	void SetPursuitIconRushPercent(float LeftPercent, float CenterPercent, float RightPercent);
	void SetPursuitIconStickRollStart(bool FlagStartLeft, bool FlagStartCenter, bool FlagStartRight);
	void ItemSetEnableUse(bool IsEnable);
	void DroneGuideOpen(Enum_ui_object_guide ObjectType);
	void DroneGuideClose();
	void SetPursuitIconButtonHoldPercent(float LeftPercent, float CenterPercent, float RightPercent);
	void SetPursuitIconButtonHold(bool IsHoldLeft, bool IsHoldCenter, bool IsHoldRight);
	void ItemMenuSetRecastPercent(float Percent);
	bool OnTitleBack();
	void ItemShiftLeft();
	void ItemShiftRight();
	void ExpBonusOpen(float bonus);
	void ExpBonusClose();
	void ExpBonusUpdate(float bonus);
	void DriveGaugeSetDrivePercent(float Percent);
	void DriveGaugeSetBrainPercent(float Percent);
	void DriveGaugeSetStockFlag(bool StockFlag, bool UseItemFlag);
	void DriveGaugeSetDownFlag(bool DownFlag);
	void DriveGaugeSetDisableFlag(bool DisableFlag);
	void DriveGaugeSetRemainingSecond(int32 Second);
	void DriveGaugeSetBrainChargePercent(float Percent);
	bool ChangeSoundState(ESoundState State);
	void DriveGaugeSetVisibleBrainKeyGuide(bool Visibleflag);
	void MiniTipsOpen(int32 TipsID);
	void MiniTipsClose();
	bool IsValidMessageVoiceToMessageBuffer();
	void SetPsychicGaugeEffect(int32 Param_Index, float Time);
	void SasFireStart();
	void SasFireEnd(bool IsSuccess);
	void SasFireRush();
	bool IsEnableOpenMenu();
	float MiniTipsStartDraw(EHelpTutorial TipsID);
	bool MiniTipsStopDraw(EHelpTutorial TipsID);
	void SetLoadingFlagEventSetup(bool IsSetup);
	void PsychicTimerOpen();
	void PsychicTimerClose();
	void PsychicTimerSetGaugePercent(float Percent);
	bool SetLogGetMoneyFromNative(int32 GetMoney, const float _drawTime);
	bool IsOpenLoadingUI();
	void SetLogDrawTime(float Time);
	void GetLogDrawTime(float* Time);
	void SetLogWaitTime(float Time);
	void GetLogWaitTime(float* Time);
	void Is_Init_Loading_Chara(bool* Isinit);
	bool IsCurrentMessageWithVoice();
	void SetDebugLoadingID(int32 ID);
	void GetDebugLoadingID(int32* ID);
	void SetLoadingCharaID(int32 ID);
	void SetLoadingInterludeID(int32 ID);
	void SetLoadingChapterID(int32 ID);
	void ItemMenuGetCurrentItemID(class FName* ItemId);
	void InitSasWindow();
	void StartSasWindow(EPlayerID Target, bool IsEx1, bool IsEx2);
	bool SetLogUpdateGoal();
	bool StartSasWindowNative(EPlayerID Target, bool IsEx1, bool IsEx2);
	bool MiniTipsSuccessStartDraw();
	bool MiniTipsSuccessStopDraw();
	void MessageSetDebugDrawFlag(bool IsDraw);
	bool StartMinimapBrainField();
	bool EndMinimapBrainField();
	void DeleteCloseMessageGuide();
	void PsychicTimerSetState(int32 Param_Index);
	bool StartMessageGuide(bool FlagSkip, bool FlagPhotoMode);
	bool CloseMessageGuide();
	void SetDebugFlagDrawShortcutGuide(bool IsDraw);
	void GetDebugFlagDrawShortcutGuide(bool* IsDraw);
	void Set_Player_Wait_Flag(bool IsWait);
	bool SetLogBrainFieldAddTime();
	void PkObjectTimerStart(class ARSCharacterBase* Target, float MaxSecond, float CurrentSecond, bool OpenDirect);
	void PkObjectTimerStop(class ARSCharacterBase* Target);
	void PkObjectTimerUpdate(class ARSCharacterBase* Target, float MaxSecond, float CurrentSecond);
	void StopBrainTalkVoice();
	void Set_Pause_Event_Widgets(bool IsPause);
	void IsPlayTownName(bool* Result);
	void Stop_Town_Name();
	bool IsCurrentMessageWithChoices();
	void IsFoundCustomTimeDilationRegistName_FromNative(const class FString& RegistName, bool* IsFound, float* CurrentCustomTimeDilation);
	bool CanPlayCutScene_FromNative(const bool IsTipsCheck);
	void PauseBrainTalkForEvent(bool IsPause);
	bool IsEnableOpenTips();
	bool CheckEndChoiceMessage();
	void ItemSetNoMotionUse(bool IsNoMotion);
	void CanEndLoading(bool* Can_End);
	void IsPlayMessageOpenAnimation(bool* IsPlay);
	void SetUUIVitalityEN02Visible(bool IsVisible);
	void EnemyHpWidgetDisappearInstantly(class ARSCharacterBase* InTarget);
	void DebugSetFlagBrainMessageTest(bool IsTest);
	bool StartCode();
	bool StartKeyword();
	bool CloseMessage();
	bool StartVisionSimulatorResult(bool IsCheckMode, class FName MissionTitle);
	bool IsEnableOpenPhotoMode();
	bool EndPhotoMode();
	bool StartPhotoMode();
	bool SetVisionSimulatorTimerDraw(bool IsDraw);
	bool StartLoading(bool IsFadeWhite);
	bool EndLoading();

	bool IsLogMessageEmpty() const;
	void IsPlaySasWindow(bool* IsPlay) const;
	bool IsPlaySasWindowNative() const;
	bool IsDrawMiniTipsSuccess() const;
	void MessageGetDebugDrawFlag(bool* IsDraw) const;
	bool IsDrawMessageGuide() const;
	bool IsBrainField() const;
	void Is_Players_Brain_Field(bool* Return_Value) const;
	bool IsPlayMessageOpenAnimationNative() const;
	bool IsEndKeyword() const;
	bool IsCancelKeyword() const;
	class FString GetResultKeyword() const;
	bool IsEndVisionSimulatorResult() const;
	bool IsDrawMessageSkipGuide() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDMainGame_C">();
	}
	static class AHUDMainGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHUDMainGame_C>();
	}
};
static_assert(alignof(AHUDMainGame_C) == 0x000008, "Wrong alignment on AHUDMainGame_C");
static_assert(sizeof(AHUDMainGame_C) == 0x000960, "Wrong size on AHUDMainGame_C");
static_assert(offsetof(AHUDMainGame_C, UberGraphFrame) == 0x0007E8, "Member 'AHUDMainGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, PlayerInputComponent) == 0x0007F0, "Member 'AHUDMainGame_C::PlayerInputComponent' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DefaultSceneRoot) == 0x0007F8, "Member 'AHUDMainGame_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, BattleDamage2D) == 0x000800, "Member 'AHUDMainGame_C::BattleDamage2D' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, BattleDamage3D) == 0x000810, "Member 'AHUDMainGame_C::BattleDamage3D' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugInvisibleFlag) == 0x000820, "Member 'AHUDMainGame_C::DebugInvisibleFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, Caption) == 0x000828, "Member 'AHUDMainGame_C::Caption' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugBattleUIPlayFlag) == 0x000830, "Member 'AHUDMainGame_C::DebugBattleUIPlayFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugLogCount) == 0x000834, "Member 'AHUDMainGame_C::DebugLogCount' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LoadingWidget) == 0x000838, "Member 'AHUDMainGame_C::LoadingWidget' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugSystemMessageFlag) == 0x000840, "Member 'AHUDMainGame_C::DebugSystemMessageFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, WidgetSystemMessage) == 0x000848, "Member 'AHUDMainGame_C::WidgetSystemMessage' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, UIGeneralChoice_0) == 0x000850, "Member 'AHUDMainGame_C::UIGeneralChoice_0' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugSystemWarningFlag) == 0x000858, "Member 'AHUDMainGame_C::DebugSystemWarningFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, UICharaName) == 0x000860, "Member 'AHUDMainGame_C::UICharaName' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, UITownName) == 0x000868, "Member 'AHUDMainGame_C::UITownName' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LoadingWidgetChara) == 0x000870, "Member 'AHUDMainGame_C::LoadingWidgetChara' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LoadingWidgetInterlude) == 0x000878, "Member 'AHUDMainGame_C::LoadingWidgetInterlude' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LoadingWidgetChapter) == 0x000880, "Member 'AHUDMainGame_C::LoadingWidgetChapter' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugLoadingIndex) == 0x000888, "Member 'AHUDMainGame_C::DebugLoadingIndex' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugTownFlag) == 0x00088C, "Member 'AHUDMainGame_C::DebugTownFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugKeyboardFlag) == 0x00088D, "Member 'AHUDMainGame_C::DebugKeyboardFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, UIAutoSave) == 0x000890, "Member 'AHUDMainGame_C::UIAutoSave' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugInitFlag) == 0x000898, "Member 'AHUDMainGame_C::DebugInitFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugMinimapDispAdd) == 0x000899, "Member 'AHUDMainGame_C::DebugMinimapDispAdd' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, HelpOperation) == 0x0008A0, "Member 'AHUDMainGame_C::HelpOperation' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, NoticeMessage) == 0x0008A8, "Member 'AHUDMainGame_C::NoticeMessage' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugHelpID) == 0x0008B0, "Member 'AHUDMainGame_C::DebugHelpID' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugTutoID) == 0x0008B4, "Member 'AHUDMainGame_C::DebugTutoID' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugMessageNo) == 0x0008B8, "Member 'AHUDMainGame_C::DebugMessageNo' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, InitDriveGaugePercent) == 0x0008BC, "Member 'AHUDMainGame_C::InitDriveGaugePercent' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, IsInitDriveGaugePercent) == 0x0008C0, "Member 'AHUDMainGame_C::IsInitDriveGaugePercent' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, InitState) == 0x0008C4, "Member 'AHUDMainGame_C::InitState' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugDriveGaugeState) == 0x0008C8, "Member 'AHUDMainGame_C::DebugDriveGaugeState' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugDriveGaugePercent) == 0x0008CC, "Member 'AHUDMainGame_C::DebugDriveGaugePercent' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugDriveGaugeUnlockFlag) == 0x0008D0, "Member 'AHUDMainGame_C::DebugDriveGaugeUnlockFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugDrawMessageCounter) == 0x0008D4, "Member 'AHUDMainGame_C::DebugDrawMessageCounter' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, _TempBrainTalkDelaySecond) == 0x0008D8, "Member 'AHUDMainGame_C::_TempBrainTalkDelaySecond' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, _TempBrainTalkDelaySecond_Work) == 0x0008DC, "Member 'AHUDMainGame_C::_TempBrainTalkDelaySecond_Work' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, _TempBrainTalkDeltaSeconds) == 0x0008E0, "Member 'AHUDMainGame_C::_TempBrainTalkDeltaSeconds' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, FlagLoadingSetupEvent) == 0x0008E4, "Member 'AHUDMainGame_C::FlagLoadingSetupEvent' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, FlagLoadingReserveEnd) == 0x0008E5, "Member 'AHUDMainGame_C::FlagLoadingReserveEnd' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LogDrawTime) == 0x0008E8, "Member 'AHUDMainGame_C::LogDrawTime' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, LogWaitTime) == 0x0008EC, "Member 'AHUDMainGame_C::LogWaitTime' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, TestItem0001) == 0x0008F0, "Member 'AHUDMainGame_C::TestItem0001' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, TestItem0002) == 0x0008F8, "Member 'AHUDMainGame_C::TestItem0002' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, TestItem0003) == 0x000900, "Member 'AHUDMainGame_C::TestItem0003' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, TestLoadingID) == 0x000908, "Member 'AHUDMainGame_C::TestLoadingID' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, SasWindow) == 0x000910, "Member 'AHUDMainGame_C::SasWindow' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, CaptionGuide) == 0x000918, "Member 'AHUDMainGame_C::CaptionGuide' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, OnMainContentsUIClose) == 0x000920, "Member 'AHUDMainGame_C::OnMainContentsUIClose' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, OnPlayDecideAnimeBrainTuto) == 0x000930, "Member 'AHUDMainGame_C::OnPlayDecideAnimeBrainTuto' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, WidghetKeyword) == 0x000940, "Member 'AHUDMainGame_C::WidghetKeyword' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, DebugMessageDrawFlag) == 0x000948, "Member 'AHUDMainGame_C::DebugMessageDrawFlag' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, RestoreRadialBlur) == 0x00094C, "Member 'AHUDMainGame_C::RestoreRadialBlur' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, StoreSoundState) == 0x000950, "Member 'AHUDMainGame_C::StoreSoundState' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, RestoreOutlineDepthLength) == 0x000954, "Member 'AHUDMainGame_C::RestoreOutlineDepthLength' has a wrong offset!");
static_assert(offsetof(AHUDMainGame_C, RestoreOutlineDepthSmooth) == 0x000958, "Member 'AHUDMainGame_C::RestoreOutlineDepthSmooth' has a wrong offset!");

}


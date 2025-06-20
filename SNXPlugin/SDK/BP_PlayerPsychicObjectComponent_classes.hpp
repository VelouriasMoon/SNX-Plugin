#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerPsychicObjectComponent

#include "Basic.hpp"

#include "E_SASKind_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PsychicGrabPosData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerPsychicObjectComponent.BP_PlayerPsychicObjectComponent_C
// 0x0290 (0x0350 - 0x00C0)
class UBP_PlayerPsychicObjectComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ARsBattleHero_C*                        HeroOwner;                                         // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CaptureSuccess;                                    // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UniqueAttackSuccess;                               // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             AttractSuccess;                                    // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ComboAttackStart;                                  // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_PsychicObjectBasic_C*               AttackComboObj;                                    // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PsychicObjectBasic_C*               AttackUnqObj;                                      // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APsychicObjectManager_C*                PsyObjMan;                                         // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FPsychicGrabPosData> PosList;                                           // 0x0128(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPsychicGrabPosData>            PosList2;                                          // 0x0178(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bBrainField;                                       // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBrainFieldProc;                                   // 0x0189(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_513C[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BrainFieldObjMax;                                  // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BrainFieldIndexThrowMax;                           // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BrainFieldIndexThrowLast;                          // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PsychicObjectBasic_C*>       BrainFieldObjList;                                 // 0x0198(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 BrainFieldObjIndexList;                            // 0x01A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<EPsychicObjectSizeType>                BrainFieldObjTypeList;                             // 0x01B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 BrainFieldAttackIndex;                             // 0x01C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bBrainFieldSafety;                                 // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReplenish;                                        // 0x01D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_513D[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReplenishTime;                                     // 0x01DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTimer                             ReplenishTimer;                                    // 0x01E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_513E[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BrainFieldManager_C*                BrainFieldMan;                                     // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNpc;                                              // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnemy;                                            // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_513F[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PsychicObjectBasic_C*>       DropSplineList;                                    // 0x0200(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ABP_PsychicObjectBasic_C*>       DropWaitList;                                      // 0x0210(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_PsychicObjectBasic_C*               DropObjCore;                                       // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DropLevel;                                         // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBrainFieldFinishDrop;                             // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnpcOld;                                          // 0x022D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_SASKind                                     CurrentSasKind;                                    // 0x022E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugDrawBrainFieldObjInfo;                       // 0x022F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_             UniqueInputStart;                                  // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UniqueObjectEnd;                                   // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UniqueObjectAddGauge;                              // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UniqueObjectControlStart;                          // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 BrainFieldSwingNumList;                            // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 BrainFieldThrowNumListOld;                         // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 BrainFieldDropNumList;                             // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                 BrainFieldSwingAngleList;                          // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         BrainFieldThrowAttractTime;                        // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFirstSwing;                                       // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5140[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BrainFieldFirstSwingAnimation;                     // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EPsychicObjectBrainFieldAttackType            BrainFieldThrowAttackType;                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5141[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BrainFieldThrowSkillLevel;                         // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBrainFieldThrowDelay;                             // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5142[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PsychicObjectBasic_C*>       BrainFieldThrowObjList;                            // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 BrainFieldThrowIndexList;                          // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         BrainFieldThrowDelayTime;                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTimer                             BrainFieldThrowDelayTimer;                         // 0x02FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBrainFieldFinishThrow;                            // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5143[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BrainFieldDropTypeRowName;                         // 0x030C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBrainFieldUnqObjCam;                              // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5144[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PsychicObjectBasic_C*               BrainFieldFirstSwingObj;                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PsychicObjectBasic_C*>       BrainFieldSwingObjList;                            // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FVector>                        BrainFieldSwingPosList;                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_TriggerEffectManager_C*             TrgEffMgr;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopTrgEff;                                       // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInvalidInput;                                     // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAerialAfterThrowAirRt;                            // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBrainFieldNewChoose;                              // 0x034B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugDrawBrainFieldNearest;                       // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEventCancel;                                      // 0x034D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEventResetPartyRotation;                          // 0x034E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CaptureSuccess__DelegateSignature(class UAnimMontage* Unique_montage);
	void UniqueAttackSuccess__DelegateSignature(class UAnimMontage* Unique_montage);
	void AttractSuccess__DelegateSignature();
	void ComboAttackStart__DelegateSignature();
	void UniqueInputStart__DelegateSignature();
	void UniqueObjectEnd__DelegateSignature(bool Input_success_in);
	void UniqueObjectAddGauge__DelegateSignature();
	void UniqueObjectControlStart__DelegateSignature(class ABP_PsychicObjectBasic_C* Psy_obj_in);
	void ExecuteUbergraph_BP_PlayerPsychicObjectComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Initialize();
	void Update();
	void Finalize();
	void InitOwnerType();
	void CaptureFocusObject(bool Unique_obj_in, bool Combo_in, bool Air_in, bool* Return);
	void AttackCaptureObject(class AActor* Target_actor_in, bool Direct_drop_in, bool* Return);
	void AttackComboCaptureObject(class AActor* Target_actor_in, int32 Attack_level_in, int32 Attack_index_in, float Attract_time_in, class UAnimSequence* Anim_seq_in, bool Air_combo_in, bool Enemy_direct_shot_in, bool* Return);
	void DetachAttackComboObject();
	void GetCurrentPsychicAnimObject(class APsychicAnimObject_C** Psy_anim_obj);
	void CancelCaptureObject();
	void AttackBrainFieldObject(EPsychicObjectBrainFieldAttackType Attack_type_in, int32 Skill_level_in, bool Swing_lerp_in, float Swing_lerp_time_in, float Swing_update_time_in);
	void CancelUniqueObjectInput();
	void CancelPsychicObjectAction(bool Event_in, bool Psychic_battle_in);
	void GetPsychicObject(bool Unq_obj_in, bool Focus_in, bool Capture_in, bool Attack_in, class ABP_PsychicObjectBasic_C** Return);
	void GetPsychicObjectState(bool Unq_obj_in, bool Focus_in, bool Capture_in, bool Attack_in, EPsychicObjectState* State);
	void GetCapturePsychicObject(class ABP_PsychicObjectBasic_C** Return);
	void GetCapturePsychicObjectState(bool Unq_obj_in, EPsychicObjectState* State);
	void IsNormalObjectFocus(bool* Return);
	void IsUniqueObjectFocus(bool* Return);
	void IsMapGimmickFocus(bool* Return);
	void IsFocusPsychicObjectUnique(bool* Return);
	void CanCapture(bool Unq_obj_in, bool* Return);
	void IsNormalObjectCapture(bool* Return);
	void IsUniqueObjectCapture(bool* Return);
	void SetBrainField(bool Flag_in);
	void UpdateBrainField();
	void GetBrainFieldOffsetPos(int32 Index_in, class ABP_PsychicObjectBasic_C* Psy_obj_in, struct FVector* Offset_pos);
	void InitBrainFieldObjList();
	void ReplenishBrainFieldObj(int32 Index_in, float Replenish_time_in);
	void SetAttackBrainFieldObj(class ABP_PsychicObjectBasic_C* Psy_obj_in, int32 Index_in, int32 Skill_level_in, EPsychicObjectBrainFieldAttackType Attack_type_in, bool Attack_collision_in, int32 Attack_index_in, float Attract_time_in);
	void SetBrainFieldDropLevel(int32 Level);
	void AttackBrainFieldDrop();
	void CancelBrainFieldDrop();
	void ReportDropObjWait(class ABP_PsychicObjectBasic_C* Psy_obj_in);
	void ReportDropObjHit(class ABP_PsychicObjectBasic_C* Psy_obj_in);
	void SetEnpcOld(bool Flag_in);
	void SearchNpcObject(bool Unq_obj, bool* Return);
	void CheckNpcObject(bool Unq_obj_in, bool Chk_capture_in, bool Chk_attack_in, bool* Return);
	void SetSasKind(E_SASKind Sas_kind_in, bool Flag_in);
	void GetSasKind(E_SASKind* Return);
	void CheckSasCopyParameter(bool* Return, int32* Copy_count);
	void SetBrainFieldReplenishTimer();
	void DebugDrawBrainFieldInfo();
	void AnimNotifyFirstAttack();
	void AnimNotifyAttackInterpolate(float Interpolate_time_in);
	void AttackBrainFieldThrow(EPsychicObjectBrainFieldAttackType Attack_type_in, int32 Skill_level_in);
	void AttackBrainFieldSwing(EPsychicObjectBrainFieldAttackType Attack_type_in, int32 Skill_level_in, bool Swing_lerp_in, float Swing_lerp_time_in, float Swing_update_time_in);
	void SetBrainFieldFirstSwing(bool Flag_in, class ABP_PsychicObjectBasic_C* Psy_obj_in, const class FString& Animation_name_in, bool Force_off_in);
	void SetPsychicFieldCapture(int32 Capture_num_in);
	void IsPsychicFieldCaptureFinish(bool* Finish);
	void SetPsychicFieldAttract();
	void SetPsychicFieldThrow();
	void CancelPsychicField();
	void GetFocusUniqueObjectMontageOld(EPsychicObjectUniqueMontageIndex Montage_index_in, bool Left_in, class UAnimMontage** Unique_montage);
	void IsNewObjectSystem(bool* Return);
	void IsUnqObjTemp(bool Unq_obj_in, bool* Return);
	void SetUniqueObjectCamera(bool Flag_in, class AActor* Obj_actor_in, bool Socket_type_in, bool Control_type_in, bool Remote_type_in, bool brain_field_drop_type_in);
	void GetBrainFieldDropTypeCameraParameter(struct FCameraUniqueObjectParameter* Camera_parameter);
	void CalcBrainFieldSwingPos();
	void SetBrainFieldSwingEnd();
	void GetNearestBrainFieldObj(EPsychicObjectBrainFieldAttackType Attack_type_in, int32 Skill_level_in, int32 Obj_num_in, TArray<int32>* Tgt_index_list);
	void GetFocusMapGimmick(class ABP_MapGimmickObjectBase_C** MapGimmick);
	void PrevEventCancel();
	void PostEventCancel();
	void StartEventCancel();
	void EndEventCancel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPsychicObjectComponent_C">();
	}
	static class UBP_PlayerPsychicObjectComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerPsychicObjectComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerPsychicObjectComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerPsychicObjectComponent_C");
static_assert(sizeof(UBP_PlayerPsychicObjectComponent_C) == 0x000350, "Wrong size on UBP_PlayerPsychicObjectComponent_C");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_PlayerPsychicObjectComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, HeroOwner) == 0x0000C8, "Member 'UBP_PlayerPsychicObjectComponent_C::HeroOwner' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, CaptureSuccess) == 0x0000D0, "Member 'UBP_PlayerPsychicObjectComponent_C::CaptureSuccess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UniqueAttackSuccess) == 0x0000E0, "Member 'UBP_PlayerPsychicObjectComponent_C::UniqueAttackSuccess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, AttractSuccess) == 0x0000F0, "Member 'UBP_PlayerPsychicObjectComponent_C::AttractSuccess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, ComboAttackStart) == 0x000100, "Member 'UBP_PlayerPsychicObjectComponent_C::ComboAttackStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, AttackComboObj) == 0x000110, "Member 'UBP_PlayerPsychicObjectComponent_C::AttackComboObj' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, AttackUnqObj) == 0x000118, "Member 'UBP_PlayerPsychicObjectComponent_C::AttackUnqObj' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, PsyObjMan) == 0x000120, "Member 'UBP_PlayerPsychicObjectComponent_C::PsyObjMan' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, PosList) == 0x000128, "Member 'UBP_PlayerPsychicObjectComponent_C::PosList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, PosList2) == 0x000178, "Member 'UBP_PlayerPsychicObjectComponent_C::PosList2' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainField) == 0x000188, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainField' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldProc) == 0x000189, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldProc' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldObjMax) == 0x00018C, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldObjMax' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldIndexThrowMax) == 0x000190, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldIndexThrowMax' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldIndexThrowLast) == 0x000194, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldIndexThrowLast' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldObjList) == 0x000198, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldObjList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldObjIndexList) == 0x0001A8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldObjIndexList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldObjTypeList) == 0x0001B8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldObjTypeList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldAttackIndex) == 0x0001C8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldAttackIndex' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldSafety) == 0x0001D8, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldSafety' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bReplenish) == 0x0001D9, "Member 'UBP_PlayerPsychicObjectComponent_C::bReplenish' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, ReplenishTime) == 0x0001DC, "Member 'UBP_PlayerPsychicObjectComponent_C::ReplenishTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, ReplenishTimer) == 0x0001E0, "Member 'UBP_PlayerPsychicObjectComponent_C::ReplenishTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldMan) == 0x0001F0, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldMan' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bNpc) == 0x0001F8, "Member 'UBP_PlayerPsychicObjectComponent_C::bNpc' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bEnemy) == 0x0001F9, "Member 'UBP_PlayerPsychicObjectComponent_C::bEnemy' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, DropSplineList) == 0x000200, "Member 'UBP_PlayerPsychicObjectComponent_C::DropSplineList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, DropWaitList) == 0x000210, "Member 'UBP_PlayerPsychicObjectComponent_C::DropWaitList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, DropObjCore) == 0x000220, "Member 'UBP_PlayerPsychicObjectComponent_C::DropObjCore' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, DropLevel) == 0x000228, "Member 'UBP_PlayerPsychicObjectComponent_C::DropLevel' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldFinishDrop) == 0x00022C, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldFinishDrop' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bEnpcOld) == 0x00022D, "Member 'UBP_PlayerPsychicObjectComponent_C::bEnpcOld' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, CurrentSasKind) == 0x00022E, "Member 'UBP_PlayerPsychicObjectComponent_C::CurrentSasKind' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bDebugDrawBrainFieldObjInfo) == 0x00022F, "Member 'UBP_PlayerPsychicObjectComponent_C::bDebugDrawBrainFieldObjInfo' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UniqueInputStart) == 0x000230, "Member 'UBP_PlayerPsychicObjectComponent_C::UniqueInputStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UniqueObjectEnd) == 0x000240, "Member 'UBP_PlayerPsychicObjectComponent_C::UniqueObjectEnd' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UniqueObjectAddGauge) == 0x000250, "Member 'UBP_PlayerPsychicObjectComponent_C::UniqueObjectAddGauge' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, UniqueObjectControlStart) == 0x000260, "Member 'UBP_PlayerPsychicObjectComponent_C::UniqueObjectControlStart' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldSwingNumList) == 0x000270, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldSwingNumList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowNumListOld) == 0x000280, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowNumListOld' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldDropNumList) == 0x000290, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldDropNumList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldSwingAngleList) == 0x0002A0, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldSwingAngleList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowAttractTime) == 0x0002B0, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowAttractTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bFirstSwing) == 0x0002B4, "Member 'UBP_PlayerPsychicObjectComponent_C::bFirstSwing' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldFirstSwingAnimation) == 0x0002B8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldFirstSwingAnimation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowAttackType) == 0x0002C8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowAttackType' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowSkillLevel) == 0x0002CC, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowSkillLevel' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldThrowDelay) == 0x0002D0, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldThrowDelay' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowObjList) == 0x0002D8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowObjList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowIndexList) == 0x0002E8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowIndexList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowDelayTime) == 0x0002F8, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowDelayTime' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldThrowDelayTimer) == 0x0002FC, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldThrowDelayTimer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldFinishThrow) == 0x000308, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldFinishThrow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldDropTypeRowName) == 0x00030C, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldDropTypeRowName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldUnqObjCam) == 0x000314, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldUnqObjCam' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldFirstSwingObj) == 0x000318, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldFirstSwingObj' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldSwingObjList) == 0x000320, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldSwingObjList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, BrainFieldSwingPosList) == 0x000330, "Member 'UBP_PlayerPsychicObjectComponent_C::BrainFieldSwingPosList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, TrgEffMgr) == 0x000340, "Member 'UBP_PlayerPsychicObjectComponent_C::TrgEffMgr' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bStopTrgEff) == 0x000348, "Member 'UBP_PlayerPsychicObjectComponent_C::bStopTrgEff' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bInvalidInput) == 0x000349, "Member 'UBP_PlayerPsychicObjectComponent_C::bInvalidInput' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bAerialAfterThrowAirRt) == 0x00034A, "Member 'UBP_PlayerPsychicObjectComponent_C::bAerialAfterThrowAirRt' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bBrainFieldNewChoose) == 0x00034B, "Member 'UBP_PlayerPsychicObjectComponent_C::bBrainFieldNewChoose' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bDebugDrawBrainFieldNearest) == 0x00034C, "Member 'UBP_PlayerPsychicObjectComponent_C::bDebugDrawBrainFieldNearest' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bEventCancel) == 0x00034D, "Member 'UBP_PlayerPsychicObjectComponent_C::bEventCancel' has a wrong offset!");
static_assert(offsetof(UBP_PlayerPsychicObjectComponent_C, bEventResetPartyRotation) == 0x00034E, "Member 'UBP_PlayerPsychicObjectComponent_C::bEventResetPartyRotation' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventParamComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventParamComponent.BP_EventParamComponent_C
// 0x0220 (0x02E0 - 0x00C0)
class UBP_EventParamComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_846D[0x8];                                     // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DynamicActorTransform;                             // 0x00D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             DynamicMeshTransform;                              // 0x0100(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             StaticActorTransform;                              // 0x0130(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             TalkActorTransform;                                // 0x0160(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             CollisionEnabled;                                  // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         MeshComponentUpdateFlag;                           // 0x0191(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_846E[0xE];                                     // 0x0192(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             StaticMeshTransform;                               // 0x01A0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEnableTick;                                      // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsVisibility;                                      // 0x01D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846F[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UActorComponent*>                EnableTickComponentArray;                          // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UClass*                                 Event;                                             // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EventHpRate;                                       // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlreadyEvent;                                    // 0x01F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8470[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharacterEventInfo>            EventArray;                                        // 0x01F8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                         Pad_8471[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DynamicStoreTransform;                             // 0x0210(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             StaticStoreTransform;                              // 0x0240(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStoreStaticTransform;                            // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCallStaticEventStart;                            // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8472[0xE];                                     // 0x0272(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CharaHipsTransform;                                // 0x0280(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimSequence*                          Animtes;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStoreEnableTick;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStoreVisibility;                                  // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8473[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            EventRestoreCollisions;                            // 0x02C0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<ECollisionEnabled>                     EventRestoreCollisionEnabled;                      // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EventParamComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DynamicEventStart(class USkeletalMeshComponent* Mesh);
	void DynamicEventEnd(class USkeletalMeshComponent* Mesh, bool IsRestoreTransform, class UCapsuleComponent* CapsuleComponent);
	void TalkEventStart();
	void TalkEventEnd(bool IsTransformRestore);
	void StaticEventStart();
	void StaticEventEnd(bool IsTransformRestore, class UCapsuleComponent* CapsuleComponent);
	void RestoreComponentTickEnabled();
	void EventManagerStartForActor(bool TickEnable, bool Visibility);
	void EventManagerEndForActor(bool RestoreTickEnable, bool RestoreVisibility);
	void CheckEventHpRate();
	void EventStartCheck(class UClass*& MakeEventActor, float& Param_EventHpRate, bool& Param_IsAlreadyEvent);
	void BattleSequencerStart(class USkeletalMeshComponent* Mesh);
	void BattleSequencerEnd(class USkeletalMeshComponent* Mesh, bool IsRestoreTransform, class UCapsuleComponent* CapsuleComponent);
	void RestoreEventCollision();
	void RestoreMeshTransform();
	void PrivateEventStartCollisionDisable(class USkeletalMeshComponent* MeshComp);
	void PrivateEventEndCollisionRestore(class USkeletalMeshComponent* MeshComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventParamComponent_C">();
	}
	static class UBP_EventParamComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EventParamComponent_C>();
	}
};
static_assert(alignof(UBP_EventParamComponent_C) == 0x000010, "Wrong alignment on UBP_EventParamComponent_C");
static_assert(sizeof(UBP_EventParamComponent_C) == 0x0002E0, "Wrong size on UBP_EventParamComponent_C");
static_assert(offsetof(UBP_EventParamComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_EventParamComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, DynamicActorTransform) == 0x0000D0, "Member 'UBP_EventParamComponent_C::DynamicActorTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, DynamicMeshTransform) == 0x000100, "Member 'UBP_EventParamComponent_C::DynamicMeshTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, StaticActorTransform) == 0x000130, "Member 'UBP_EventParamComponent_C::StaticActorTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, TalkActorTransform) == 0x000160, "Member 'UBP_EventParamComponent_C::TalkActorTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, CollisionEnabled) == 0x000190, "Member 'UBP_EventParamComponent_C::CollisionEnabled' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, MeshComponentUpdateFlag) == 0x000191, "Member 'UBP_EventParamComponent_C::MeshComponentUpdateFlag' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, StaticMeshTransform) == 0x0001A0, "Member 'UBP_EventParamComponent_C::StaticMeshTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, IsEnableTick) == 0x0001D0, "Member 'UBP_EventParamComponent_C::IsEnableTick' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, IsVisibility) == 0x0001D1, "Member 'UBP_EventParamComponent_C::IsVisibility' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, EnableTickComponentArray) == 0x0001D8, "Member 'UBP_EventParamComponent_C::EnableTickComponentArray' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, Event) == 0x0001E8, "Member 'UBP_EventParamComponent_C::Event' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, EventHpRate) == 0x0001F0, "Member 'UBP_EventParamComponent_C::EventHpRate' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, IsAlreadyEvent) == 0x0001F4, "Member 'UBP_EventParamComponent_C::IsAlreadyEvent' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, EventArray) == 0x0001F8, "Member 'UBP_EventParamComponent_C::EventArray' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, DynamicStoreTransform) == 0x000210, "Member 'UBP_EventParamComponent_C::DynamicStoreTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, StaticStoreTransform) == 0x000240, "Member 'UBP_EventParamComponent_C::StaticStoreTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, IsStoreStaticTransform) == 0x000270, "Member 'UBP_EventParamComponent_C::IsStoreStaticTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, IsCallStaticEventStart) == 0x000271, "Member 'UBP_EventParamComponent_C::IsCallStaticEventStart' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, CharaHipsTransform) == 0x000280, "Member 'UBP_EventParamComponent_C::CharaHipsTransform' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, Animtes) == 0x0002B0, "Member 'UBP_EventParamComponent_C::Animtes' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, bStoreEnableTick) == 0x0002B8, "Member 'UBP_EventParamComponent_C::bStoreEnableTick' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, bStoreVisibility) == 0x0002B9, "Member 'UBP_EventParamComponent_C::bStoreVisibility' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, EventRestoreCollisions) == 0x0002C0, "Member 'UBP_EventParamComponent_C::EventRestoreCollisions' has a wrong offset!");
static_assert(offsetof(UBP_EventParamComponent_C, EventRestoreCollisionEnabled) == 0x0002D0, "Member 'UBP_EventParamComponent_C::EventRestoreCollisionEnabled' has a wrong offset!");

}


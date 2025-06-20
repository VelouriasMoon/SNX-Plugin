#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimNotifyState_FacialAnim

#include "Basic.hpp"

#include "EPlayerFacialAnim_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerAnimNotifyState_FacialAnim.PlayerAnimNotifyState_FacialAnim_C
// 0x0008 (0x0038 - 0x0030)
class UPlayerAnimNotifyState_FacialAnim_C final : public UAnimNotifyState
{
public:
	EPlayerFacialAnim                             Pattern;                                           // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_WeaponIndex();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerAnimNotifyState_FacialAnim_C">();
	}
	static class UPlayerAnimNotifyState_FacialAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerAnimNotifyState_FacialAnim_C>();
	}
};
static_assert(alignof(UPlayerAnimNotifyState_FacialAnim_C) == 0x000008, "Wrong alignment on UPlayerAnimNotifyState_FacialAnim_C");
static_assert(sizeof(UPlayerAnimNotifyState_FacialAnim_C) == 0x000038, "Wrong size on UPlayerAnimNotifyState_FacialAnim_C");
static_assert(offsetof(UPlayerAnimNotifyState_FacialAnim_C, Pattern) == 0x000030, "Member 'UPlayerAnimNotifyState_FacialAnim_C::Pattern' has a wrong offset!");

}


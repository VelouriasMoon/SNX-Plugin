#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimNotify_InputPsychic

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerAnimNotify_InputPsychic.PlayerAnimNotify_InputPsychic_C
// 0x0000 (0x0038 - 0x0038)
class UPlayerAnimNotify_InputPsychic_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerAnimNotify_InputPsychic_C">();
	}
	static class UPlayerAnimNotify_InputPsychic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerAnimNotify_InputPsychic_C>();
	}
};
static_assert(alignof(UPlayerAnimNotify_InputPsychic_C) == 0x000008, "Wrong alignment on UPlayerAnimNotify_InputPsychic_C");
static_assert(sizeof(UPlayerAnimNotify_InputPsychic_C) == 0x000038, "Wrong size on UPlayerAnimNotify_InputPsychic_C");

}


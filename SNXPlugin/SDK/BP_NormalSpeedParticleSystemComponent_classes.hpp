#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NormalSpeedParticleSystemComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RSParticleSystemComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C
// 0x0010 (0x0720 - 0x0710)
class UBP_NormalSpeedParticleSystemComponent_C final : public UBP_RSParticleSystemComponent_C
{
public:
	uint8                                         Pad_4172[0x5];                                     // 0x070B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NormalSpeedParticleSystemComponent_C; // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_NormalSpeedParticleSystemComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnAcceleratorStart(const struct FAcceleratorParam& Parameter, class AActor* Owner, bool bHologram);
	void OnAcceleratorEnd(const struct FAcceleratorParam& Parameter, class AActor* Owner, float RemainTime, bool bHologram);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NormalSpeedParticleSystemComponent_C">();
	}
	static class UBP_NormalSpeedParticleSystemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NormalSpeedParticleSystemComponent_C>();
	}
};
static_assert(alignof(UBP_NormalSpeedParticleSystemComponent_C) == 0x000010, "Wrong alignment on UBP_NormalSpeedParticleSystemComponent_C");
static_assert(sizeof(UBP_NormalSpeedParticleSystemComponent_C) == 0x000720, "Wrong size on UBP_NormalSpeedParticleSystemComponent_C");
static_assert(offsetof(UBP_NormalSpeedParticleSystemComponent_C, UberGraphFrame_BP_NormalSpeedParticleSystemComponent_C) == 0x000710, "Member 'UBP_NormalSpeedParticleSystemComponent_C::UberGraphFrame_BP_NormalSpeedParticleSystemComponent_C' has a wrong offset!");

}


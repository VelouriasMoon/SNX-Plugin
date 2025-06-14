#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcessVolumeAccess

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PostProcessVolumeAccess.BP_PostProcessVolumeAccess_C
// 0x0010 (0x00D0 - 0x00C0)
class UBP_PostProcessVolumeAccess_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APostProcessVolume*                     PostProcessVolume;                                 // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PostProcessVolumeAccess(int32 EntryPoint);
	void ReceiveBeginPlay();
	void GetPostProcessVolume(class APostProcessVolume** Param_PostProcessVolume);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PostProcessVolumeAccess_C">();
	}
	static class UBP_PostProcessVolumeAccess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PostProcessVolumeAccess_C>();
	}
};
static_assert(alignof(UBP_PostProcessVolumeAccess_C) == 0x000008, "Wrong alignment on UBP_PostProcessVolumeAccess_C");
static_assert(sizeof(UBP_PostProcessVolumeAccess_C) == 0x0000D0, "Wrong size on UBP_PostProcessVolumeAccess_C");
static_assert(offsetof(UBP_PostProcessVolumeAccess_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_PostProcessVolumeAccess_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PostProcessVolumeAccess_C, PostProcessVolume) == 0x0000C8, "Member 'UBP_PostProcessVolumeAccess_C::PostProcessVolume' has a wrong offset!");

}


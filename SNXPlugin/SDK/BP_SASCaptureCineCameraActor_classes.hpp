#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SASCaptureCineCameraActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CaptureCineCameraActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C
// 0x0010 (0x0A80 - 0x0A70)
class ABP_SASCaptureCineCameraActor_C final : public ABP_CaptureCineCameraActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SASCaptureCineCameraActor_C;     // 0x0A70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPC_CutinEffect_C*                     BPC_CutinEffect;                                   // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SASCaptureCineCameraActor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateCharaLight();
	void SetUseCharaMaterial(bool Use);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SASCaptureCineCameraActor_C">();
	}
	static class ABP_SASCaptureCineCameraActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SASCaptureCineCameraActor_C>();
	}
};
static_assert(alignof(ABP_SASCaptureCineCameraActor_C) == 0x000010, "Wrong alignment on ABP_SASCaptureCineCameraActor_C");
static_assert(sizeof(ABP_SASCaptureCineCameraActor_C) == 0x000A80, "Wrong size on ABP_SASCaptureCineCameraActor_C");
static_assert(offsetof(ABP_SASCaptureCineCameraActor_C, UberGraphFrame_BP_SASCaptureCineCameraActor_C) == 0x000A70, "Member 'ABP_SASCaptureCineCameraActor_C::UberGraphFrame_BP_SASCaptureCineCameraActor_C' has a wrong offset!");
static_assert(offsetof(ABP_SASCaptureCineCameraActor_C, BPC_CutinEffect) == 0x000A78, "Member 'ABP_SASCaptureCineCameraActor_C::BPC_CutinEffect' has a wrong offset!");

}


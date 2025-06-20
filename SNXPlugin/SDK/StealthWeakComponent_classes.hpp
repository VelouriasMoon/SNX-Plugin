#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StealthWeakComponent

#include "Basic.hpp"

#include "StealthWeakData_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StealthWeakComponent.StealthWeakComponent_C
// 0x0030 (0x00F0 - 0x00C0)
class UStealthWeakComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FStealthWeakData>               Data;                                              // 0x00C8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ARSBattleEnemy_C*                       DataOwner;                                         // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URSParticleSystemComponentBase*> DataParticle;                                      // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StealthWeakComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void CreateParticle();
	void EndParticle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StealthWeakComponent_C">();
	}
	static class UStealthWeakComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStealthWeakComponent_C>();
	}
};
static_assert(alignof(UStealthWeakComponent_C) == 0x000008, "Wrong alignment on UStealthWeakComponent_C");
static_assert(sizeof(UStealthWeakComponent_C) == 0x0000F0, "Wrong size on UStealthWeakComponent_C");
static_assert(offsetof(UStealthWeakComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UStealthWeakComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStealthWeakComponent_C, Data) == 0x0000C8, "Member 'UStealthWeakComponent_C::Data' has a wrong offset!");
static_assert(offsetof(UStealthWeakComponent_C, DataOwner) == 0x0000D8, "Member 'UStealthWeakComponent_C::DataOwner' has a wrong offset!");
static_assert(offsetof(UStealthWeakComponent_C, DataParticle) == 0x0000E0, "Member 'UStealthWeakComponent_C::DataParticle' has a wrong offset!");

}


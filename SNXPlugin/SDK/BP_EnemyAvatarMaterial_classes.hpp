#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyAvatarMaterial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C
// 0x0058 (0x0118 - 0x00C0)
class UBP_EnemyAvatarMaterial_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         AvatarMaterialSeconds;                             // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6238[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 DefaultAvatarMaterialParam;                        // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           AvatarMaterialNames;                               // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         AvatarMaterialDuration;                            // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6239[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSBattleEnemy_C*                       OwnerEnemy;                                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReverse;                                         // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623A[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 TargetAvatarMaterialParam;                         // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EnemyAvatarMaterial(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Initialize(float Duration, bool Reverse);
	void Update(float DeltaSeconds, bool* Dummy);
	void Cancel(float Alpha, bool* bDummy);
	void ApplyMaterial(float Alpha, bool* bDummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyAvatarMaterial_C">();
	}
	static class UBP_EnemyAvatarMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyAvatarMaterial_C>();
	}
};
static_assert(alignof(UBP_EnemyAvatarMaterial_C) == 0x000008, "Wrong alignment on UBP_EnemyAvatarMaterial_C");
static_assert(sizeof(UBP_EnemyAvatarMaterial_C) == 0x000118, "Wrong size on UBP_EnemyAvatarMaterial_C");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_EnemyAvatarMaterial_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, AvatarMaterialSeconds) == 0x0000C8, "Member 'UBP_EnemyAvatarMaterial_C::AvatarMaterialSeconds' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, DefaultAvatarMaterialParam) == 0x0000D0, "Member 'UBP_EnemyAvatarMaterial_C::DefaultAvatarMaterialParam' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, AvatarMaterialNames) == 0x0000E0, "Member 'UBP_EnemyAvatarMaterial_C::AvatarMaterialNames' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, AvatarMaterialDuration) == 0x0000F0, "Member 'UBP_EnemyAvatarMaterial_C::AvatarMaterialDuration' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, OwnerEnemy) == 0x0000F8, "Member 'UBP_EnemyAvatarMaterial_C::OwnerEnemy' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, IsReverse) == 0x000100, "Member 'UBP_EnemyAvatarMaterial_C::IsReverse' has a wrong offset!");
static_assert(offsetof(UBP_EnemyAvatarMaterial_C, TargetAvatarMaterialParam) == 0x000108, "Member 'UBP_EnemyAvatarMaterial_C::TargetAvatarMaterialParam' has a wrong offset!");

}


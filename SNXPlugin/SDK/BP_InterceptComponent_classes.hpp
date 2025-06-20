#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InterceptComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InterceptComponent.BP_InterceptComponent_C
// 0x0020 (0x00E0 - 0x00C0)
class UBP_InterceptComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 InterceptObject;                                   // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARsBattleHero_C*                        OwnerHero;                                         // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterceptRange;                                    // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterceptAble;                                    // 0x00DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNoEnemyAttackIntercept;                           // 0x00DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReserveIntercept;                                 // 0x00DE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_InterceptComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CheckIntercept(bool* bExistObject);
	void ExecIntercept();
	void ResetIntercept();
	void CancelIntercept();
	void ReserveIntercept();
	void CatchInterceptObject();

	void IsInterceptAble(bool* bAble) const;
	void IsExistInterceptObject(bool* bExist) const;
	void IsNoEnemyAttackIntercept(bool* bNoEnemyAttack) const;
	void IsReserveIntercept(bool* bReserve) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InterceptComponent_C">();
	}
	static class UBP_InterceptComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InterceptComponent_C>();
	}
};
static_assert(alignof(UBP_InterceptComponent_C) == 0x000008, "Wrong alignment on UBP_InterceptComponent_C");
static_assert(sizeof(UBP_InterceptComponent_C) == 0x0000E0, "Wrong size on UBP_InterceptComponent_C");
static_assert(offsetof(UBP_InterceptComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_InterceptComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, InterceptObject) == 0x0000C8, "Member 'UBP_InterceptComponent_C::InterceptObject' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, OwnerHero) == 0x0000D0, "Member 'UBP_InterceptComponent_C::OwnerHero' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, InterceptRange) == 0x0000D8, "Member 'UBP_InterceptComponent_C::InterceptRange' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, bInterceptAble) == 0x0000DC, "Member 'UBP_InterceptComponent_C::bInterceptAble' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, bNoEnemyAttackIntercept) == 0x0000DD, "Member 'UBP_InterceptComponent_C::bNoEnemyAttackIntercept' has a wrong offset!");
static_assert(offsetof(UBP_InterceptComponent_C, bReserveIntercept) == 0x0000DE, "Member 'UBP_InterceptComponent_C::bReserveIntercept' has a wrong offset!");

}


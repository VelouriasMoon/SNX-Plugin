#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ch0200

#include "Basic.hpp"

#include "ECh0200WeaponAnimState_structs.hpp"


namespace SDK::Params
{

// Function BPI_ch0200.BPI_ch0200_C.SetWeaponAnimStateInterface
// 0x0020 (0x0020 - 0x0000)
struct BPI_ch0200_C_SetWeaponAnimStateInterface final
{
public:
	ECh0200WeaponAnimState                        State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4733[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWithCopy;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4734[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SectionName;                                       // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterruptDamage;                                  // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDummy;                                            // 0x001D(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_SetWeaponAnimStateInterface) == 0x000008, "Wrong alignment on BPI_ch0200_C_SetWeaponAnimStateInterface");
static_assert(sizeof(BPI_ch0200_C_SetWeaponAnimStateInterface) == 0x000020, "Wrong size on BPI_ch0200_C_SetWeaponAnimStateInterface");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, State) == 0x000000, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::State' has a wrong offset!");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, Montage) == 0x000008, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::Montage' has a wrong offset!");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, bWithCopy) == 0x000010, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::bWithCopy' has a wrong offset!");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, SectionName) == 0x000014, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::SectionName' has a wrong offset!");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, bInterruptDamage) == 0x00001C, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::bInterruptDamage' has a wrong offset!");
static_assert(offsetof(BPI_ch0200_C_SetWeaponAnimStateInterface, bDummy) == 0x00001D, "Member 'BPI_ch0200_C_SetWeaponAnimStateInterface::bDummy' has a wrong offset!");

// Function BPI_ch0200.BPI_ch0200_C.OnEndWakeupFromDead
// 0x0001 (0x0001 - 0x0000)
struct BPI_ch0200_C_OnEndWakeupFromDead final
{
public:
	bool                                          bDummy;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_OnEndWakeupFromDead) == 0x000001, "Wrong alignment on BPI_ch0200_C_OnEndWakeupFromDead");
static_assert(sizeof(BPI_ch0200_C_OnEndWakeupFromDead) == 0x000001, "Wrong size on BPI_ch0200_C_OnEndWakeupFromDead");
static_assert(offsetof(BPI_ch0200_C_OnEndWakeupFromDead, bDummy) == 0x000000, "Member 'BPI_ch0200_C_OnEndWakeupFromDead::bDummy' has a wrong offset!");

// Function BPI_ch0200.BPI_ch0200_C.IdleWeaponAnimInterface
// 0x0001 (0x0001 - 0x0000)
struct BPI_ch0200_C_IdleWeaponAnimInterface final
{
public:
	bool                                          bDummy;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_IdleWeaponAnimInterface) == 0x000001, "Wrong alignment on BPI_ch0200_C_IdleWeaponAnimInterface");
static_assert(sizeof(BPI_ch0200_C_IdleWeaponAnimInterface) == 0x000001, "Wrong size on BPI_ch0200_C_IdleWeaponAnimInterface");
static_assert(offsetof(BPI_ch0200_C_IdleWeaponAnimInterface, bDummy) == 0x000000, "Member 'BPI_ch0200_C_IdleWeaponAnimInterface::bDummy' has a wrong offset!");

// Function BPI_ch0200.BPI_ch0200_C.BeginBattleWeaponAnimInterface
// 0x0001 (0x0001 - 0x0000)
struct BPI_ch0200_C_BeginBattleWeaponAnimInterface final
{
public:
	bool                                          bDummy;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_BeginBattleWeaponAnimInterface) == 0x000001, "Wrong alignment on BPI_ch0200_C_BeginBattleWeaponAnimInterface");
static_assert(sizeof(BPI_ch0200_C_BeginBattleWeaponAnimInterface) == 0x000001, "Wrong size on BPI_ch0200_C_BeginBattleWeaponAnimInterface");
static_assert(offsetof(BPI_ch0200_C_BeginBattleWeaponAnimInterface, bDummy) == 0x000000, "Member 'BPI_ch0200_C_BeginBattleWeaponAnimInterface::bDummy' has a wrong offset!");

// Function BPI_ch0200.BPI_ch0200_C.EndBattleWeaponAnimInterface
// 0x0001 (0x0001 - 0x0000)
struct BPI_ch0200_C_EndBattleWeaponAnimInterface final
{
public:
	bool                                          bDummy;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_EndBattleWeaponAnimInterface) == 0x000001, "Wrong alignment on BPI_ch0200_C_EndBattleWeaponAnimInterface");
static_assert(sizeof(BPI_ch0200_C_EndBattleWeaponAnimInterface) == 0x000001, "Wrong size on BPI_ch0200_C_EndBattleWeaponAnimInterface");
static_assert(offsetof(BPI_ch0200_C_EndBattleWeaponAnimInterface, bDummy) == 0x000000, "Member 'BPI_ch0200_C_EndBattleWeaponAnimInterface::bDummy' has a wrong offset!");

// Function BPI_ch0200.BPI_ch0200_C.DamageInterruptWeaponAnim
// 0x0001 (0x0001 - 0x0000)
struct BPI_ch0200_C_DamageInterruptWeaponAnim final
{
public:
	bool                                          bDummy;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ch0200_C_DamageInterruptWeaponAnim) == 0x000001, "Wrong alignment on BPI_ch0200_C_DamageInterruptWeaponAnim");
static_assert(sizeof(BPI_ch0200_C_DamageInterruptWeaponAnim) == 0x000001, "Wrong size on BPI_ch0200_C_DamageInterruptWeaponAnim");
static_assert(offsetof(BPI_ch0200_C_DamageInterruptWeaponAnim, bDummy) == 0x000000, "Member 'BPI_ch0200_C_DamageInterruptWeaponAnim::bDummy' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_om0698

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_om0698.BPI_om0698_C.GetAnimInstance
// 0x0008 (0x0008 - 0x0000)
struct BPI_om0698_C_GetAnimInstance final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_om0698_C_GetAnimInstance) == 0x000008, "Wrong alignment on BPI_om0698_C_GetAnimInstance");
static_assert(sizeof(BPI_om0698_C_GetAnimInstance) == 0x000008, "Wrong size on BPI_om0698_C_GetAnimInstance");
static_assert(offsetof(BPI_om0698_C_GetAnimInstance, AnimInstance) == 0x000000, "Member 'BPI_om0698_C_GetAnimInstance::AnimInstance' has a wrong offset!");

}


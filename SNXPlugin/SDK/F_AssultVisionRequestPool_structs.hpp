#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_AssultVisionRequestPool

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_AssultVisionRequestPool.F_AssultVisionRequestPool
// 0x0010 (0x0010 - 0x0000)
struct FF_AssultVisionRequestPool final
{
public:
	ESASHologramAttackTiming                      Timing_3_DFABF7334D792BA3ACE723853B0E336D;         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_417E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARSCharacterBase*                       RequestCharacter_5_942F62F84DDEC8460370D594DF494486; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_AssultVisionRequestPool) == 0x000008, "Wrong alignment on FF_AssultVisionRequestPool");
static_assert(sizeof(FF_AssultVisionRequestPool) == 0x000010, "Wrong size on FF_AssultVisionRequestPool");
static_assert(offsetof(FF_AssultVisionRequestPool, Timing_3_DFABF7334D792BA3ACE723853B0E336D) == 0x000000, "Member 'FF_AssultVisionRequestPool::Timing_3_DFABF7334D792BA3ACE723853B0E336D' has a wrong offset!");
static_assert(offsetof(FF_AssultVisionRequestPool, RequestCharacter_5_942F62F84DDEC8460370D594DF494486) == 0x000008, "Member 'FF_AssultVisionRequestPool::RequestCharacter_5_942F62F84DDEC8460370D594DF494486' has a wrong offset!");

}


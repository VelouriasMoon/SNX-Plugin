#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_om0404

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_om0404.ABP_om0404_C.ExecuteUbergraph_ABP_om0404
// 0x0004 (0x0004 - 0x0000)
struct ABP_om0404_C_ExecuteUbergraph_ABP_om0404 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_om0404_C_ExecuteUbergraph_ABP_om0404) == 0x000004, "Wrong alignment on ABP_om0404_C_ExecuteUbergraph_ABP_om0404");
static_assert(sizeof(ABP_om0404_C_ExecuteUbergraph_ABP_om0404) == 0x000004, "Wrong size on ABP_om0404_C_ExecuteUbergraph_ABP_om0404");
static_assert(offsetof(ABP_om0404_C_ExecuteUbergraph_ABP_om0404, EntryPoint) == 0x000000, "Member 'ABP_om0404_C_ExecuteUbergraph_ABP_om0404::EntryPoint' has a wrong offset!");

// Function ABP_om0404.ABP_om0404_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_om0404_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_om0404_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_om0404_C_AnimGraph");
static_assert(sizeof(ABP_om0404_C_AnimGraph) == 0x000010, "Wrong size on ABP_om0404_C_AnimGraph");
static_assert(offsetof(ABP_om0404_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_om0404_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}


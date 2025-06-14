#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcessOverrayGradiation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.ExecuteUbergraph_BP_PostProcessOverrayGradiation
// 0x0004 (0x0004 - 0x0000)
struct BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation) == 0x000004, "Wrong alignment on BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation");
static_assert(sizeof(BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation) == 0x000004, "Wrong size on BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation, EntryPoint) == 0x000000, "Member 'BP_PostProcessOverrayGradiation_C_ExecuteUbergraph_BP_PostProcessOverrayGradiation::EntryPoint' has a wrong offset!");

// Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_PostProcessOverrayGradiation_C_UserConstructionScript final
{
public:
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue_1;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PostProcessOverrayGradiation_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_PostProcessOverrayGradiation_C_UserConstructionScript");
static_assert(sizeof(BP_PostProcessOverrayGradiation_C_UserConstructionScript) == 0x000008, "Wrong size on BP_PostProcessOverrayGradiation_C_UserConstructionScript");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_UserConstructionScript, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000000, "Member 'BP_PostProcessOverrayGradiation_C_UserConstructionScript::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_UserConstructionScript, CallFunc_Conv_LinearColorToColor_ReturnValue_1) == 0x000004, "Member 'BP_PostProcessOverrayGradiation_C_UserConstructionScript::CallFunc_Conv_LinearColorToColor_ReturnValue_1' has a wrong offset!");

// Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.CalcRate
// 0x0020 (0x0020 - 0x0000)
struct BP_PostProcessOverrayGradiation_C_CalcRate final
{
public:
	struct FVector                                CameraVector;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CameraRotation;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Rate;                                              // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcRotationRate_Rate;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PostProcessOverrayGradiation_C_CalcRate) == 0x000004, "Wrong alignment on BP_PostProcessOverrayGradiation_C_CalcRate");
static_assert(sizeof(BP_PostProcessOverrayGradiation_C_CalcRate) == 0x000020, "Wrong size on BP_PostProcessOverrayGradiation_C_CalcRate");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_CalcRate, CameraVector) == 0x000000, "Member 'BP_PostProcessOverrayGradiation_C_CalcRate::CameraVector' has a wrong offset!");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_CalcRate, CameraRotation) == 0x00000C, "Member 'BP_PostProcessOverrayGradiation_C_CalcRate::CameraRotation' has a wrong offset!");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_CalcRate, Rate) == 0x000018, "Member 'BP_PostProcessOverrayGradiation_C_CalcRate::Rate' has a wrong offset!");
static_assert(offsetof(BP_PostProcessOverrayGradiation_C_CalcRate, CallFunc_CalcRotationRate_Rate) == 0x00001C, "Member 'BP_PostProcessOverrayGradiation_C_CalcRate::CallFunc_CalcRotationRate_Rate' has a wrong offset!");

}


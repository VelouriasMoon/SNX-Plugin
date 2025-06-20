#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Intercept

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPFL_Intercept.BPFL_Intercept_C.OverwriteHitCollisionData
// 0x0030 (0x0030 - 0x0000)
struct BPFL_Intercept_C_OverwriteHitCollisionData final
{
public:
	class UPrimitiveComponent*                    Primitive;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewAttackSource;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitCheckComponent*                     LHitCheckComponent;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHitManager_C*                          CallFunc_GetHitManager_Manager;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPFL_Intercept_C_OverwriteHitCollisionData) == 0x000008, "Wrong alignment on BPFL_Intercept_C_OverwriteHitCollisionData");
static_assert(sizeof(BPFL_Intercept_C_OverwriteHitCollisionData) == 0x000030, "Wrong size on BPFL_Intercept_C_OverwriteHitCollisionData");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, Primitive) == 0x000000, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::Primitive' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, NewAttackSource) == 0x000008, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::NewAttackSource' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, __WorldContext) == 0x000010, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, LHitCheckComponent) == 0x000018, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::LHitCheckComponent' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, CallFunc_GetHitManager_Manager) == 0x000020, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::CallFunc_GetHitManager_Manager' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_Intercept_C_OverwriteHitCollisionData, CallFunc_IsValid_ReturnValue_2) == 0x00002A, "Member 'BPFL_Intercept_C_OverwriteHitCollisionData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}


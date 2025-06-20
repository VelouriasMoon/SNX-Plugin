#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPsychicDitherData

#include "Basic.hpp"

#include "EPsychicDitherType_structs.hpp"


namespace SDK
{

// UserDefinedStruct FPsychicDitherData.FPsychicDitherData
// 0x0014 (0x0014 - 0x0000)
struct FFPsychicDitherData final
{
public:
	EPsychicDitherType                            DitherTarget_18_2371173C48E48BA1930335BD910A67D3;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5328[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BeginTime_11_4F11DED1483037A073C531B1412DC1CA;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndTime_12_81E29CF340843A731A671F99BB5D87DC;       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range0_13_64D4B0AE406516B2AE00AFB9FDB4D78D;        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range1_14_D9123A8D431265ABE90365A8EBA85DD0;        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFPsychicDitherData) == 0x000004, "Wrong alignment on FFPsychicDitherData");
static_assert(sizeof(FFPsychicDitherData) == 0x000014, "Wrong size on FFPsychicDitherData");
static_assert(offsetof(FFPsychicDitherData, DitherTarget_18_2371173C48E48BA1930335BD910A67D3) == 0x000000, "Member 'FFPsychicDitherData::DitherTarget_18_2371173C48E48BA1930335BD910A67D3' has a wrong offset!");
static_assert(offsetof(FFPsychicDitherData, BeginTime_11_4F11DED1483037A073C531B1412DC1CA) == 0x000004, "Member 'FFPsychicDitherData::BeginTime_11_4F11DED1483037A073C531B1412DC1CA' has a wrong offset!");
static_assert(offsetof(FFPsychicDitherData, EndTime_12_81E29CF340843A731A671F99BB5D87DC) == 0x000008, "Member 'FFPsychicDitherData::EndTime_12_81E29CF340843A731A671F99BB5D87DC' has a wrong offset!");
static_assert(offsetof(FFPsychicDitherData, Range0_13_64D4B0AE406516B2AE00AFB9FDB4D78D) == 0x00000C, "Member 'FFPsychicDitherData::Range0_13_64D4B0AE406516B2AE00AFB9FDB4D78D' has a wrong offset!");
static_assert(offsetof(FFPsychicDitherData, Range1_14_D9123A8D431265ABE90365A8EBA85DD0) == 0x000010, "Member 'FFPsychicDitherData::Range1_14_D9123A8D431265ABE90365A8EBA85DD0' has a wrong offset!");

}


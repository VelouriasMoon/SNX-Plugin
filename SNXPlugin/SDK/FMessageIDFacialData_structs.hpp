#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FMessageIDFacialData

#include "Basic.hpp"

#include "ECharaFacialID_structs.hpp"


namespace SDK
{

// UserDefinedStruct FMessageIDFacialData.FMessageIDFacialData
// 0x0018 (0x0018 - 0x0000)
struct FFMessageIDFacialData final
{
public:
	class FString                                 MessageLabel_2_31475D204DCCE2069426F4AAD1127BCE;   // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ECharaFacialID                                FacialType_5_E94885634E4F7359E72DC29E48AB2B62;     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RipSync_8_5D8B6A9944793A83181AEB8E99AE900D;        // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FFMessageIDFacialData) == 0x000008, "Wrong alignment on FFMessageIDFacialData");
static_assert(sizeof(FFMessageIDFacialData) == 0x000018, "Wrong size on FFMessageIDFacialData");
static_assert(offsetof(FFMessageIDFacialData, MessageLabel_2_31475D204DCCE2069426F4AAD1127BCE) == 0x000000, "Member 'FFMessageIDFacialData::MessageLabel_2_31475D204DCCE2069426F4AAD1127BCE' has a wrong offset!");
static_assert(offsetof(FFMessageIDFacialData, FacialType_5_E94885634E4F7359E72DC29E48AB2B62) == 0x000010, "Member 'FFMessageIDFacialData::FacialType_5_E94885634E4F7359E72DC29E48AB2B62' has a wrong offset!");
static_assert(offsetof(FFMessageIDFacialData, RipSync_8_5D8B6A9944793A83181AEB8E99AE900D) == 0x000011, "Member 'FFMessageIDFacialData::RipSync_8_5D8B6A9944793A83181AEB8E99AE900D' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FAASettingData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FAASettingData.FAASettingData
// 0x0010 (0x0010 - 0x0000)
struct FFAASettingData final
{
public:
	float                                         CurrentFrameWeight_2_08D719934249BEE9CF4BBA85967D8F9D; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SampleCount_6_057742104A2E0516D9072487B1051787;    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FilterSize_7_7CED1E754E6FE4DA14E2F9AE3B758650;     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFXAA_9_054BAC5941FD9A94FB21EC905AA6A9F8;        // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FFAASettingData) == 0x000004, "Wrong alignment on FFAASettingData");
static_assert(sizeof(FFAASettingData) == 0x000010, "Wrong size on FFAASettingData");
static_assert(offsetof(FFAASettingData, CurrentFrameWeight_2_08D719934249BEE9CF4BBA85967D8F9D) == 0x000000, "Member 'FFAASettingData::CurrentFrameWeight_2_08D719934249BEE9CF4BBA85967D8F9D' has a wrong offset!");
static_assert(offsetof(FFAASettingData, SampleCount_6_057742104A2E0516D9072487B1051787) == 0x000004, "Member 'FFAASettingData::SampleCount_6_057742104A2E0516D9072487B1051787' has a wrong offset!");
static_assert(offsetof(FFAASettingData, FilterSize_7_7CED1E754E6FE4DA14E2F9AE3B758650) == 0x000008, "Member 'FFAASettingData::FilterSize_7_7CED1E754E6FE4DA14E2F9AE3B758650' has a wrong offset!");
static_assert(offsetof(FFAASettingData, UseFXAA_9_054BAC5941FD9A94FB21EC905AA6A9F8) == 0x00000C, "Member 'FFAASettingData::UseFXAA_9_054BAC5941FD9A94FB21EC905AA6A9F8' has a wrong offset!");

}


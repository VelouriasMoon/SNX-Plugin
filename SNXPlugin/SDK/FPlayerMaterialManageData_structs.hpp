#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPlayerMaterialManageData

#include "Basic.hpp"

#include "EPlayerMaterialManageType_structs.hpp"


namespace SDK
{

// UserDefinedStruct FPlayerMaterialManageData.FPlayerMaterialManageData
// 0x0018 (0x0018 - 0x0000)
struct FFPlayerMaterialManageData final
{
public:
	EPlayerMaterialManageType                     Type_6_E7D6F53E489DCF350671F2BF0D8F264A;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50FA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartValue_12_5D277324440EAF59A87612A61AC5D86C;    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndValue_13_8969B84240C5114D75841BB3AEE589A4;      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_14_B1CAED1E44898C3E20B75FA77562CF29;          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElapsedTime_26_63566EAD4ED59D43BD39D2BF361FE39E;   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayer_20_AB28DC704682A60C23AD4FBC225DFFC5;       // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWeapon_21_DAE9A93042B08A7ED9B4779359542E7E;       // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCable_22_4B5D1CD547CA3DC96D8AE7979F766F84;        // 0x0016(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCopy_23_3D9061F34B701C4E20EE2DBBAF1AD969;         // 0x0017(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FFPlayerMaterialManageData) == 0x000004, "Wrong alignment on FFPlayerMaterialManageData");
static_assert(sizeof(FFPlayerMaterialManageData) == 0x000018, "Wrong size on FFPlayerMaterialManageData");
static_assert(offsetof(FFPlayerMaterialManageData, Type_6_E7D6F53E489DCF350671F2BF0D8F264A) == 0x000000, "Member 'FFPlayerMaterialManageData::Type_6_E7D6F53E489DCF350671F2BF0D8F264A' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, StartValue_12_5D277324440EAF59A87612A61AC5D86C) == 0x000004, "Member 'FFPlayerMaterialManageData::StartValue_12_5D277324440EAF59A87612A61AC5D86C' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, EndValue_13_8969B84240C5114D75841BB3AEE589A4) == 0x000008, "Member 'FFPlayerMaterialManageData::EndValue_13_8969B84240C5114D75841BB3AEE589A4' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, Time_14_B1CAED1E44898C3E20B75FA77562CF29) == 0x00000C, "Member 'FFPlayerMaterialManageData::Time_14_B1CAED1E44898C3E20B75FA77562CF29' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, ElapsedTime_26_63566EAD4ED59D43BD39D2BF361FE39E) == 0x000010, "Member 'FFPlayerMaterialManageData::ElapsedTime_26_63566EAD4ED59D43BD39D2BF361FE39E' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, bPlayer_20_AB28DC704682A60C23AD4FBC225DFFC5) == 0x000014, "Member 'FFPlayerMaterialManageData::bPlayer_20_AB28DC704682A60C23AD4FBC225DFFC5' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, bWeapon_21_DAE9A93042B08A7ED9B4779359542E7E) == 0x000015, "Member 'FFPlayerMaterialManageData::bWeapon_21_DAE9A93042B08A7ED9B4779359542E7E' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, bCable_22_4B5D1CD547CA3DC96D8AE7979F766F84) == 0x000016, "Member 'FFPlayerMaterialManageData::bCable_22_4B5D1CD547CA3DC96D8AE7979F766F84' has a wrong offset!");
static_assert(offsetof(FFPlayerMaterialManageData, bCopy_23_3D9061F34B701C4E20EE2DBBAF1AD969) == 0x000017, "Member 'FFPlayerMaterialManageData::bCopy_23_3D9061F34B701C4E20EE2DBBAF1AD969' has a wrong offset!");

}


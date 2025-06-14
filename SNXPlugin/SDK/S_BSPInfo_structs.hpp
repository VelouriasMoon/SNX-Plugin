#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_BSPInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_BSPInfo.S_BSPInfo
// 0x0010 (0x0010 - 0x0000)
struct FS_BSPInfo final
{
public:
	class ABSPBlockVolume*                        Block_13_D038CE72423167799135C49517712271;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OcclusionRate_6_FB6134C748325DFD8367D98D3830A0A8;  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurSoundVolumeRate_9_FE292F7448B132CA16FE448DC63357FF; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_BSPInfo) == 0x000008, "Wrong alignment on FS_BSPInfo");
static_assert(sizeof(FS_BSPInfo) == 0x000010, "Wrong size on FS_BSPInfo");
static_assert(offsetof(FS_BSPInfo, Block_13_D038CE72423167799135C49517712271) == 0x000000, "Member 'FS_BSPInfo::Block_13_D038CE72423167799135C49517712271' has a wrong offset!");
static_assert(offsetof(FS_BSPInfo, OcclusionRate_6_FB6134C748325DFD8367D98D3830A0A8) == 0x000008, "Member 'FS_BSPInfo::OcclusionRate_6_FB6134C748325DFD8367D98D3830A0A8' has a wrong offset!");
static_assert(offsetof(FS_BSPInfo, CurSoundVolumeRate_9_FE292F7448B132CA16FE448DC63357FF) == 0x00000C, "Member 'FS_BSPInfo::CurSoundVolumeRate_9_FE292F7448B132CA16FE448DC63357FF' has a wrong offset!");

}


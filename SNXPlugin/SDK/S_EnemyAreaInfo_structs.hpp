#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EnemyAreaInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_EnemyAreaInfo.S_EnemyAreaInfo
// 0x0010 (0x0010 - 0x0000)
struct FS_EnemyAreaInfo final
{
public:
	TArray<TSoftObjectPtr<class UObject>>         EnemyLevels_3_EA646890417D2EB51D1F109B52FB39EE;    // 0x0000(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_EnemyAreaInfo) == 0x000008, "Wrong alignment on FS_EnemyAreaInfo");
static_assert(sizeof(FS_EnemyAreaInfo) == 0x000010, "Wrong size on FS_EnemyAreaInfo");
static_assert(offsetof(FS_EnemyAreaInfo, EnemyLevels_3_EA646890417D2EB51D1F109B52FB39EE) == 0x000000, "Member 'FS_EnemyAreaInfo::EnemyLevels_3_EA646890417D2EB51D1F109B52FB39EE' has a wrong offset!");

}


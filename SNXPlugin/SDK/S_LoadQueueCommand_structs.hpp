#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_LoadQueueCommand

#include "Basic.hpp"

#include "E_LevelCommandStatus_structs.hpp"
#include "E_LoadQueueCommand_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_LoadQueueCommand.S_LoadQueueCommand
// 0x0058 (0x0058 - 0x0000)
struct FS_LoadQueueCommand final
{
public:
	int32                                         Id_17_0B1A5CEC4C7BC842FCD4E5843B63C689;            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_LoadQueueCommand                            Command_2_071D5CA2433B2D12A6D999806234DCD7;        // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_LevelCommandStatus                          Status_20_9DA6FF2044CF856415563ABFAE454EC4;        // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B2[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AreaName_10_EDBBDBEA45677009FBFFE98DD77E94FB;      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LevelName_12_885F73BE491E99852FDA1F90C6FA841C;     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetType                      PackName_14_87E29F9840ECF57D3024AC98B32D9DCF;      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 Asset_30_7EED51E6449D8A30F0E63080FC27A9FC;         // 0x0020(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   AssetListName_29_C4C798854F5AFBD820235CBF51989C6D; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flag_22_B58001254B253FBD4EF8978B00E3AF9E;          // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FS_LoadQueueCommand) == 0x000008, "Wrong alignment on FS_LoadQueueCommand");
static_assert(sizeof(FS_LoadQueueCommand) == 0x000058, "Wrong size on FS_LoadQueueCommand");
static_assert(offsetof(FS_LoadQueueCommand, Id_17_0B1A5CEC4C7BC842FCD4E5843B63C689) == 0x000000, "Member 'FS_LoadQueueCommand::Id_17_0B1A5CEC4C7BC842FCD4E5843B63C689' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, Command_2_071D5CA2433B2D12A6D999806234DCD7) == 0x000004, "Member 'FS_LoadQueueCommand::Command_2_071D5CA2433B2D12A6D999806234DCD7' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, Status_20_9DA6FF2044CF856415563ABFAE454EC4) == 0x000005, "Member 'FS_LoadQueueCommand::Status_20_9DA6FF2044CF856415563ABFAE454EC4' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, AreaName_10_EDBBDBEA45677009FBFFE98DD77E94FB) == 0x000008, "Member 'FS_LoadQueueCommand::AreaName_10_EDBBDBEA45677009FBFFE98DD77E94FB' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, LevelName_12_885F73BE491E99852FDA1F90C6FA841C) == 0x000010, "Member 'FS_LoadQueueCommand::LevelName_12_885F73BE491E99852FDA1F90C6FA841C' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, PackName_14_87E29F9840ECF57D3024AC98B32D9DCF) == 0x000018, "Member 'FS_LoadQueueCommand::PackName_14_87E29F9840ECF57D3024AC98B32D9DCF' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, Asset_30_7EED51E6449D8A30F0E63080FC27A9FC) == 0x000020, "Member 'FS_LoadQueueCommand::Asset_30_7EED51E6449D8A30F0E63080FC27A9FC' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, AssetListName_29_C4C798854F5AFBD820235CBF51989C6D) == 0x000048, "Member 'FS_LoadQueueCommand::AssetListName_29_C4C798854F5AFBD820235CBF51989C6D' has a wrong offset!");
static_assert(offsetof(FS_LoadQueueCommand, Flag_22_B58001254B253FBD4EF8978B00E3AF9E) == 0x000050, "Member 'FS_LoadQueueCommand::Flag_22_B58001254B253FBD4EF8978B00E3AF9E' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_SaveDataLoadFunction

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_SaveDataLoadFunction.BPFL_SaveDataLoadFunction_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_SaveDataLoadFunction_C final : public UBlueprintFunctionLibrary
{
public:
	static void SaveDataLoadInitialize(class UObject* __WorldContext);
	static void SaveDataLoadInitialize_Player(class UObject* __WorldContext);
	static void SaveDataLoadInitialize_Player_Position(class UObject* __WorldContext);
	static void SaveDataLoadMakeEventAsset(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_SaveDataLoadFunction_C">();
	}
	static class UBPFL_SaveDataLoadFunction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_SaveDataLoadFunction_C>();
	}
};
static_assert(alignof(UBPFL_SaveDataLoadFunction_C) == 0x000008, "Wrong alignment on UBPFL_SaveDataLoadFunction_C");
static_assert(sizeof(UBPFL_SaveDataLoadFunction_C) == 0x000028, "Wrong size on UBPFL_SaveDataLoadFunction_C");

}


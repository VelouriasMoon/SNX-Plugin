#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Party_CharaInfo_Parts_3

#include "Basic.hpp"

#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Party_CharaInfo_Parts_3.WB_ui_Party_CharaInfo_Parts_3_C
// 0x0020 (0x03A8 - 0x0388)
class UWB_ui_Party_CharaInfo_Parts_3_C final : public UUIBase
{
public:
	class UWidgetAnimation*                       Default_none;                                      // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Add;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PlayArrowAnimation();
	void StopArrowAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Party_CharaInfo_Parts_3_C">();
	}
	static class UWB_ui_Party_CharaInfo_Parts_3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Party_CharaInfo_Parts_3_C>();
	}
};
static_assert(alignof(UWB_ui_Party_CharaInfo_Parts_3_C) == 0x000008, "Wrong alignment on UWB_ui_Party_CharaInfo_Parts_3_C");
static_assert(sizeof(UWB_ui_Party_CharaInfo_Parts_3_C) == 0x0003A8, "Wrong size on UWB_ui_Party_CharaInfo_Parts_3_C");
static_assert(offsetof(UWB_ui_Party_CharaInfo_Parts_3_C, Default_none) == 0x000388, "Member 'UWB_ui_Party_CharaInfo_Parts_3_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Party_CharaInfo_Parts_3_C, Default) == 0x000390, "Member 'UWB_ui_Party_CharaInfo_Parts_3_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Party_CharaInfo_Parts_3_C, Arrow) == 0x000398, "Member 'UWB_ui_Party_CharaInfo_Parts_3_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWB_ui_Party_CharaInfo_Parts_3_C, Arrow_Add) == 0x0003A0, "Member 'UWB_ui_Party_CharaInfo_Parts_3_C::Arrow_Add' has a wrong offset!");

}


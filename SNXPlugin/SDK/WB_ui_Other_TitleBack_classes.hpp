#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Other_TitleBack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Other_TitleBack.WB_ui_Other_TitleBack_C
// 0x0018 (0x03A8 - 0x0390)
class UWB_ui_Other_TitleBack_C final : public UUIConfigOther
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default;                                           // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_Other_TitleBack_Parts_1_C*       WB_ui_Other_TitleBack_Parts_1;                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Other_TitleBack(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Other_TitleBack_C">();
	}
	static class UWB_ui_Other_TitleBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Other_TitleBack_C>();
	}
};
static_assert(alignof(UWB_ui_Other_TitleBack_C) == 0x000008, "Wrong alignment on UWB_ui_Other_TitleBack_C");
static_assert(sizeof(UWB_ui_Other_TitleBack_C) == 0x0003A8, "Wrong size on UWB_ui_Other_TitleBack_C");
static_assert(offsetof(UWB_ui_Other_TitleBack_C, UberGraphFrame) == 0x000390, "Member 'UWB_ui_Other_TitleBack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Other_TitleBack_C, Default) == 0x000398, "Member 'UWB_ui_Other_TitleBack_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Other_TitleBack_C, WB_ui_Other_TitleBack_Parts_1) == 0x0003A0, "Member 'UWB_ui_Other_TitleBack_C::WB_ui_Other_TitleBack_Parts_1' has a wrong offset!");

}


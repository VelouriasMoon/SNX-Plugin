#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Log_parts_1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Log_parts_1.WB_ui_Log_parts_1_C
// 0x0030 (0x0438 - 0x0408)
class UWB_ui_Log_parts_1_C final : public UUILogParts
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UREDImageBase*                          Icon_font;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          TextBlock_0;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Log_parts_1(int32 EntryPoint);
	void OnInitialized();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Log_parts_1_C">();
	}
	static class UWB_ui_Log_parts_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Log_parts_1_C>();
	}
};
static_assert(alignof(UWB_ui_Log_parts_1_C) == 0x000008, "Wrong alignment on UWB_ui_Log_parts_1_C");
static_assert(sizeof(UWB_ui_Log_parts_1_C) == 0x000438, "Wrong size on UWB_ui_Log_parts_1_C");
static_assert(offsetof(UWB_ui_Log_parts_1_C, UberGraphFrame) == 0x000408, "Member 'UWB_ui_Log_parts_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Log_parts_1_C, Out) == 0x000410, "Member 'UWB_ui_Log_parts_1_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Log_parts_1_C, In) == 0x000418, "Member 'UWB_ui_Log_parts_1_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Log_parts_1_C, Default) == 0x000420, "Member 'UWB_ui_Log_parts_1_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Log_parts_1_C, Icon_font) == 0x000428, "Member 'UWB_ui_Log_parts_1_C::Icon_font' has a wrong offset!");
static_assert(offsetof(UWB_ui_Log_parts_1_C, TextBlock_0) == 0x000430, "Member 'UWB_ui_Log_parts_1_C::TextBlock_0' has a wrong offset!");

}


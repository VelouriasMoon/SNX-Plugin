#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Target_Brain_1

#include "Basic.hpp"

#include "Enum_ui_UV_Button_N1_structs.hpp"
#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Target_Brain_1.WB_ui_Target_Brain_1_C
// 0x0078 (0x0488 - 0x0410)
class UWB_ui_Target_Brain_1_C final : public UUITargetBrain
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Change_2_1;                                        // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_1_2;                                        // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out_2;                                             // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_2;                                              // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_2;                                         // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Decision;                                          // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out_1;                                             // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_1;                                              // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_1;                                         // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Button_Set;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Target_Brain_button;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Target_Brain_Dummy;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Target_Brain_icon_font;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Target_Brain_1(int32 EntryPoint);
	void OnInitialized();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	bool UpdateButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Target_Brain_1_C">();
	}
	static class UWB_ui_Target_Brain_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Target_Brain_1_C>();
	}
};
static_assert(alignof(UWB_ui_Target_Brain_1_C) == 0x000008, "Wrong alignment on UWB_ui_Target_Brain_1_C");
static_assert(sizeof(UWB_ui_Target_Brain_1_C) == 0x000488, "Wrong size on UWB_ui_Target_Brain_1_C");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, UberGraphFrame) == 0x000410, "Member 'UWB_ui_Target_Brain_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Change_2_1) == 0x000418, "Member 'UWB_ui_Target_Brain_1_C::Change_2_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Change_1_2) == 0x000420, "Member 'UWB_ui_Target_Brain_1_C::Change_1_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Out_2) == 0x000428, "Member 'UWB_ui_Target_Brain_1_C::Out_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, In_2) == 0x000430, "Member 'UWB_ui_Target_Brain_1_C::In_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Default_2) == 0x000438, "Member 'UWB_ui_Target_Brain_1_C::Default_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Decision) == 0x000440, "Member 'UWB_ui_Target_Brain_1_C::Decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Out_1) == 0x000448, "Member 'UWB_ui_Target_Brain_1_C::Out_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, In_1) == 0x000450, "Member 'UWB_ui_Target_Brain_1_C::In_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Default_none) == 0x000458, "Member 'UWB_ui_Target_Brain_1_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Default_1) == 0x000460, "Member 'UWB_ui_Target_Brain_1_C::Default_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Button_Set) == 0x000468, "Member 'UWB_ui_Target_Brain_1_C::Button_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Target_Brain_button) == 0x000470, "Member 'UWB_ui_Target_Brain_1_C::Target_Brain_button' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Target_Brain_Dummy) == 0x000478, "Member 'UWB_ui_Target_Brain_1_C::Target_Brain_Dummy' has a wrong offset!");
static_assert(offsetof(UWB_ui_Target_Brain_1_C, Target_Brain_icon_font) == 0x000480, "Member 'UWB_ui_Target_Brain_1_C::Target_Brain_icon_font' has a wrong offset!");

}


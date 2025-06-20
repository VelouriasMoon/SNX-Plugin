#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Sas_frame_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Sas_frame_02.WB_ui_Sas_frame_02_C
// 0x0098 (0x0468 - 0x03D0)
class UWB_ui_Sas_frame_02_C final : public UUISASFrame2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out_full_2;                                        // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_full_2;                                         // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full_2;                                            // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full_in_2;                                         // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out_full;                                          // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_full;                                           // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full_out;                                          // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full;                                              // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full_in;                                           // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Sas_frame_0;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sas_frame_1;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefaultColor;                                      // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LockColorSas;                                      // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LockColorCv;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Sas_frame_02(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Sas_frame_02_C">();
	}
	static class UWB_ui_Sas_frame_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Sas_frame_02_C>();
	}
};
static_assert(alignof(UWB_ui_Sas_frame_02_C) == 0x000008, "Wrong alignment on UWB_ui_Sas_frame_02_C");
static_assert(sizeof(UWB_ui_Sas_frame_02_C) == 0x000468, "Wrong size on UWB_ui_Sas_frame_02_C");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, UberGraphFrame) == 0x0003D0, "Member 'UWB_ui_Sas_frame_02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Out_full_2) == 0x0003D8, "Member 'UWB_ui_Sas_frame_02_C::Out_full_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, In_full_2) == 0x0003E0, "Member 'UWB_ui_Sas_frame_02_C::In_full_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Full_2) == 0x0003E8, "Member 'UWB_ui_Sas_frame_02_C::Full_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Full_in_2) == 0x0003F0, "Member 'UWB_ui_Sas_frame_02_C::Full_in_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Out_full) == 0x0003F8, "Member 'UWB_ui_Sas_frame_02_C::Out_full' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, In_full) == 0x000400, "Member 'UWB_ui_Sas_frame_02_C::In_full' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Full_out) == 0x000408, "Member 'UWB_ui_Sas_frame_02_C::Full_out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Full) == 0x000410, "Member 'UWB_ui_Sas_frame_02_C::Full' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Full_in) == 0x000418, "Member 'UWB_ui_Sas_frame_02_C::Full_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Default) == 0x000420, "Member 'UWB_ui_Sas_frame_02_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Sas_frame_0) == 0x000428, "Member 'UWB_ui_Sas_frame_02_C::Sas_frame_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, Sas_frame_1) == 0x000430, "Member 'UWB_ui_Sas_frame_02_C::Sas_frame_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, DefaultColor) == 0x000438, "Member 'UWB_ui_Sas_frame_02_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, LockColorSas) == 0x000448, "Member 'UWB_ui_Sas_frame_02_C::LockColorSas' has a wrong offset!");
static_assert(offsetof(UWB_ui_Sas_frame_02_C, LockColorCv) == 0x000458, "Member 'UWB_ui_Sas_frame_02_C::LockColorCv' has a wrong offset!");

}


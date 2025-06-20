#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_ObjectGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_ui_object_guide_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_ObjectGuide.WB_ui_ObjectGuide_C
// 0x0050 (0x03D8 - 0x0388)
class UWB_ui_ObjectGuide_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default;                                           // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_ui_ObjectGuide_Parts_1_C*           WB_ui_ObjectGuide_Parts_1;                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_ObjectGuide_Parts_1_C*           WB_ui_ObjectGuide_Parts_2;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_ObjectGuide_Parts_1_C*           WB_ui_ObjectGuide_Parts_3;                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_ObjectGuide_Parts_1_C*           WB_ui_ObjectGuide_Parts_4;                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_ObjectGuide_Parts_1_C*           WB_ui_ObjectGuide_Parts_5;                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_ui_ObjectGuide_Parts_1_C*>   PartsList;                                         // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	Enum_ui_object_guide                          ObjectID;                                          // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_ObjectGuide(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void OnInitialized();
	void Construct();
	void StateNone(int32 SubState);
	void StateLoop(int32 SubState);
	void SetupMessage();
	void GetMessageID(Enum_ui_object_guide GuideID, int32 Param_Index, class FString* MessageID);
	void SetGuideID(Enum_ui_object_guide Param_ObjectID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_ObjectGuide_C">();
	}
	static class UWB_ui_ObjectGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_ObjectGuide_C>();
	}
};
static_assert(alignof(UWB_ui_ObjectGuide_C) == 0x000008, "Wrong alignment on UWB_ui_ObjectGuide_C");
static_assert(sizeof(UWB_ui_ObjectGuide_C) == 0x0003D8, "Wrong size on UWB_ui_ObjectGuide_C");
static_assert(offsetof(UWB_ui_ObjectGuide_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_ObjectGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, Default) == 0x000390, "Member 'UWB_ui_ObjectGuide_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, WB_ui_ObjectGuide_Parts_1) == 0x000398, "Member 'UWB_ui_ObjectGuide_C::WB_ui_ObjectGuide_Parts_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, WB_ui_ObjectGuide_Parts_2) == 0x0003A0, "Member 'UWB_ui_ObjectGuide_C::WB_ui_ObjectGuide_Parts_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, WB_ui_ObjectGuide_Parts_3) == 0x0003A8, "Member 'UWB_ui_ObjectGuide_C::WB_ui_ObjectGuide_Parts_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, WB_ui_ObjectGuide_Parts_4) == 0x0003B0, "Member 'UWB_ui_ObjectGuide_C::WB_ui_ObjectGuide_Parts_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, WB_ui_ObjectGuide_Parts_5) == 0x0003B8, "Member 'UWB_ui_ObjectGuide_C::WB_ui_ObjectGuide_Parts_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, PartsList) == 0x0003C0, "Member 'UWB_ui_ObjectGuide_C::PartsList' has a wrong offset!");
static_assert(offsetof(UWB_ui_ObjectGuide_C, ObjectID) == 0x0003D0, "Member 'UWB_ui_ObjectGuide_C::ObjectID' has a wrong offset!");

}


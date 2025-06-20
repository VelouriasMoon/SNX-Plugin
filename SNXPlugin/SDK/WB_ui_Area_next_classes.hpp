#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Area_next

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Area_next.WB_ui_Area_next_C
// 0x0048 (0x03E8 - 0x03A0)
class UWB_ui_Area_next_C final : public UUIAreaNext
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CA_Image_Blue;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CA_Image_Green;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CA_Image_Red;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        CA_RetainerBox;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDImageBase*                          Icon_font;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_Area_next_1;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Area_next(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	bool Start(int32 LocationId, int32 AreaId, int32 PortalID, bool IsWorldMap);
	bool End();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Area_next_C">();
	}
	static class UWB_ui_Area_next_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Area_next_C>();
	}
};
static_assert(alignof(UWB_ui_Area_next_C) == 0x000008, "Wrong alignment on UWB_ui_Area_next_C");
static_assert(sizeof(UWB_ui_Area_next_C) == 0x0003E8, "Wrong size on UWB_ui_Area_next_C");
static_assert(offsetof(UWB_ui_Area_next_C, UberGraphFrame) == 0x0003A0, "Member 'UWB_ui_Area_next_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, Out) == 0x0003A8, "Member 'UWB_ui_Area_next_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, In) == 0x0003B0, "Member 'UWB_ui_Area_next_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, CA_Image_Blue) == 0x0003B8, "Member 'UWB_ui_Area_next_C::CA_Image_Blue' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, CA_Image_Green) == 0x0003C0, "Member 'UWB_ui_Area_next_C::CA_Image_Green' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, CA_Image_Red) == 0x0003C8, "Member 'UWB_ui_Area_next_C::CA_Image_Red' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, CA_RetainerBox) == 0x0003D0, "Member 'UWB_ui_Area_next_C::CA_RetainerBox' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, Icon_font) == 0x0003D8, "Member 'UWB_ui_Area_next_C::Icon_font' has a wrong offset!");
static_assert(offsetof(UWB_ui_Area_next_C, Text_Area_next_1) == 0x0003E0, "Member 'UWB_ui_Area_next_C::Text_Area_next_1' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_SaveLoad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_SaveLoad.WB_ui_SaveLoad_C
// 0x0230 (0x06D8 - 0x04A8)
class UWB_ui_SaveLoad_C final : public UUISaveLoad
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Info_window_out;                                   // 0x04B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Info_window_in;                                    // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Info_window;                                       // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x04E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                All_Color;                                         // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 All_noise_1;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               All_Set;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_all;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_B;                                  // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_G;                                  // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_G_2;                                // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_G_3;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_G_4;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_light;                              // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Gradation_R;                                  // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_1;                                       // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_2;                                       // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_3;                                       // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_4;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_5;                                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_1_particle;                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_2_particle;                              // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_3_particle;                              // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_4_particle;                              // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Line_5_particle;                              // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_particle_1;                                   // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BG;                                                // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Black;                                          // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Grid;                                           // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Shadow;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackBand_L;                                       // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackBand_R;                                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackBand_Un;                                      // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackBand_Up;                                      // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ViewRange;                             // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cover_Black;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ghost_size;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Goal_Line1;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Goal_Line2;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Help;                                              // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Help_base;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_save;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_chara_1;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_chara_2;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_chara_1_particle;                             // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_chara_2_particle;                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                List_Color;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               List_Set;                                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_3;                                         // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu;                               // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDRetainerBox*                        REDRetainerBox_Menu_2;                             // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Save_List_Color;                                   // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDScrollBox*                          ScrollBoxSaveList;                                 // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_save_contents_1___;                           // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_save_help_1;                                  // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_Guide_C*                         WB_ui_Guide;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ui_SaveLoadChoice_Parts_1_C*        WB_ui_SaveLoadChoice_Parts_1;                      // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_ui_ShopContents_Parts_1_C*>  ChildModeTab;                                      // 0x06A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWB_ui_ShopContents_Parts_6_C*>  ChildItemCategory;                                 // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEventDispatcher;                                 // 0x06C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEventDispatcher__DelegateSignature();
	void ExecuteUbergraph_WB_ui_SaveLoad(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void ListUnFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void ListFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget);
	void OnEventDispatcher_Event();
	void ListUnFocus(class UUserWidget* Widget);
	void ListFocus(class UUserWidget* Widget);
	void ListUpdateElement(int32 Param_Index, class UUserWidget* Widget);
	void Destruct();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_SaveLoad_C">();
	}
	static class UWB_ui_SaveLoad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_SaveLoad_C>();
	}
};
static_assert(alignof(UWB_ui_SaveLoad_C) == 0x000008, "Wrong alignment on UWB_ui_SaveLoad_C");
static_assert(sizeof(UWB_ui_SaveLoad_C) == 0x0006D8, "Wrong size on UWB_ui_SaveLoad_C");
static_assert(offsetof(UWB_ui_SaveLoad_C, UberGraphFrame) == 0x0004A8, "Member 'UWB_ui_SaveLoad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Info_window_out) == 0x0004B0, "Member 'UWB_ui_SaveLoad_C::Info_window_out' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Info_window_in) == 0x0004B8, "Member 'UWB_ui_SaveLoad_C::Info_window_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Info_window) == 0x0004C0, "Member 'UWB_ui_SaveLoad_C::Info_window' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Out) == 0x0004C8, "Member 'UWB_ui_SaveLoad_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, In) == 0x0004D0, "Member 'UWB_ui_SaveLoad_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Default_none) == 0x0004D8, "Member 'UWB_ui_SaveLoad_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Default) == 0x0004E0, "Member 'UWB_ui_SaveLoad_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, All_Color) == 0x0004E8, "Member 'UWB_ui_SaveLoad_C::All_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, All_noise_1) == 0x0004F0, "Member 'UWB_ui_SaveLoad_C::All_noise_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, All_Set) == 0x0004F8, "Member 'UWB_ui_SaveLoad_C::All_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_all) == 0x000500, "Member 'UWB_ui_SaveLoad_C::Base_all' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_B) == 0x000508, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_B' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_G) == 0x000510, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_G' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_G_2) == 0x000518, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_G_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_G_3) == 0x000520, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_G_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_G_4) == 0x000528, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_G_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_light) == 0x000530, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_light' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Gradation_R) == 0x000538, "Member 'UWB_ui_SaveLoad_C::Base_Gradation_R' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_1) == 0x000540, "Member 'UWB_ui_SaveLoad_C::Base_Line_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_2) == 0x000548, "Member 'UWB_ui_SaveLoad_C::Base_Line_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_3) == 0x000550, "Member 'UWB_ui_SaveLoad_C::Base_Line_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_4) == 0x000558, "Member 'UWB_ui_SaveLoad_C::Base_Line_4' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_5) == 0x000560, "Member 'UWB_ui_SaveLoad_C::Base_Line_5' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_1_particle) == 0x000568, "Member 'UWB_ui_SaveLoad_C::Base_Line_1_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_2_particle) == 0x000570, "Member 'UWB_ui_SaveLoad_C::Base_Line_2_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_3_particle) == 0x000578, "Member 'UWB_ui_SaveLoad_C::Base_Line_3_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_4_particle) == 0x000580, "Member 'UWB_ui_SaveLoad_C::Base_Line_4_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_Line_5_particle) == 0x000588, "Member 'UWB_ui_SaveLoad_C::Base_Line_5_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Base_particle_1) == 0x000590, "Member 'UWB_ui_SaveLoad_C::Base_particle_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BG) == 0x000598, "Member 'UWB_ui_SaveLoad_C::BG' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BG_Black) == 0x0005A0, "Member 'UWB_ui_SaveLoad_C::BG_Black' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BG_Grid) == 0x0005A8, "Member 'UWB_ui_SaveLoad_C::BG_Grid' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BG_Shadow) == 0x0005B0, "Member 'UWB_ui_SaveLoad_C::BG_Shadow' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BlackBand_L) == 0x0005B8, "Member 'UWB_ui_SaveLoad_C::BlackBand_L' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BlackBand_R) == 0x0005C0, "Member 'UWB_ui_SaveLoad_C::BlackBand_R' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BlackBand_Un) == 0x0005C8, "Member 'UWB_ui_SaveLoad_C::BlackBand_Un' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, BlackBand_Up) == 0x0005D0, "Member 'UWB_ui_SaveLoad_C::BlackBand_Up' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, CanvasPanel_0) == 0x0005D8, "Member 'UWB_ui_SaveLoad_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, CanvasPanel_ViewRange) == 0x0005E0, "Member 'UWB_ui_SaveLoad_C::CanvasPanel_ViewRange' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Cover_Black) == 0x0005E8, "Member 'UWB_ui_SaveLoad_C::Cover_Black' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Ghost_size) == 0x0005F0, "Member 'UWB_ui_SaveLoad_C::Ghost_size' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Goal_Line1) == 0x0005F8, "Member 'UWB_ui_SaveLoad_C::Goal_Line1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Goal_Line2) == 0x000600, "Member 'UWB_ui_SaveLoad_C::Goal_Line2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Help) == 0x000608, "Member 'UWB_ui_SaveLoad_C::Help' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Help_base) == 0x000610, "Member 'UWB_ui_SaveLoad_C::Help_base' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Icon_save) == 0x000618, "Member 'UWB_ui_SaveLoad_C::Icon_save' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Line_chara_1) == 0x000620, "Member 'UWB_ui_SaveLoad_C::Line_chara_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Line_chara_2) == 0x000628, "Member 'UWB_ui_SaveLoad_C::Line_chara_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Line_chara_1_particle) == 0x000630, "Member 'UWB_ui_SaveLoad_C::Line_chara_1_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Line_chara_2_particle) == 0x000638, "Member 'UWB_ui_SaveLoad_C::Line_chara_2_particle' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, List_Color) == 0x000640, "Member 'UWB_ui_SaveLoad_C::List_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, List_Set) == 0x000648, "Member 'UWB_ui_SaveLoad_C::List_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Overlay_1) == 0x000650, "Member 'UWB_ui_SaveLoad_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Overlay_2) == 0x000658, "Member 'UWB_ui_SaveLoad_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Overlay_3) == 0x000660, "Member 'UWB_ui_SaveLoad_C::Overlay_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, REDRetainerBox_Menu) == 0x000668, "Member 'UWB_ui_SaveLoad_C::REDRetainerBox_Menu' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, REDRetainerBox_Menu_2) == 0x000670, "Member 'UWB_ui_SaveLoad_C::REDRetainerBox_Menu_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Save_List_Color) == 0x000678, "Member 'UWB_ui_SaveLoad_C::Save_List_Color' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, ScrollBoxSaveList) == 0x000680, "Member 'UWB_ui_SaveLoad_C::ScrollBoxSaveList' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Text_save_contents_1___) == 0x000688, "Member 'UWB_ui_SaveLoad_C::Text_save_contents_1___' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, Text_save_help_1) == 0x000690, "Member 'UWB_ui_SaveLoad_C::Text_save_help_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, WB_ui_Guide) == 0x000698, "Member 'UWB_ui_SaveLoad_C::WB_ui_Guide' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, WB_ui_SaveLoadChoice_Parts_1) == 0x0006A0, "Member 'UWB_ui_SaveLoad_C::WB_ui_SaveLoadChoice_Parts_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, ChildModeTab) == 0x0006A8, "Member 'UWB_ui_SaveLoad_C::ChildModeTab' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, ChildItemCategory) == 0x0006B8, "Member 'UWB_ui_SaveLoad_C::ChildItemCategory' has a wrong offset!");
static_assert(offsetof(UWB_ui_SaveLoad_C, OnEventDispatcher) == 0x0006C8, "Member 'UWB_ui_SaveLoad_C::OnEventDispatcher' has a wrong offset!");

}


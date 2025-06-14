#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_MainChoice_Parts_1

#include "Basic.hpp"

#include "WB_ui_MainChoice_Parts_1_classes.hpp"
#include "WB_ui_MainChoice_Parts_1_parameters.hpp"


namespace SDK
{

// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.ExecuteUbergraph_WB_ui_MainChoice_Parts_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::ExecuteUbergraph_WB_ui_MainChoice_Parts_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "ExecuteUbergraph_WB_ui_MainChoice_Parts_1");

	Params::WB_ui_MainChoice_Parts_1_C_ExecuteUbergraph_WB_ui_MainChoice_Parts_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.x�01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedMouseArgument                Argument                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::X_01(const struct FRedMouseArgument& Argument, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "x�01");

	Params::WB_ui_MainChoice_Parts_1_C_X_01 Parms{};

	Parms.Argument = std::move(Argument);
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.x�00
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedMouseArgument                Argument                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UUserWidget*                      PWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::X_00(const struct FRedMouseArgument& Argument, class UUserWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "x�00");

	Params::WB_ui_MainChoice_Parts_1_C_X_00 Parms{};

	Parms.Argument = std::move(Argument);
	Parms.PWidget = PWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "UpdateState");

	Params::WB_ui_MainChoice_Parts_1_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.StateNone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::StateNone(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "StateNone");

	Params::WB_ui_MainChoice_Parts_1_C_StateNone Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.StateOpen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::StateOpen(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "StateOpen");

	Params::WB_ui_MainChoice_Parts_1_C_StateOpen Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.StateLoop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::StateLoop(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "StateLoop");

	Params::WB_ui_MainChoice_Parts_1_C_StateLoop Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.StateClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::StateClose(int32 SubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "StateClose");

	Params::WB_ui_MainChoice_Parts_1_C_StateClose Parms{};

	Parms.SubState = SubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.UpdateCursor
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::UpdateCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "UpdateCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.InitParameterSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Select0                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Select1                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_StartIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsEnableCancel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_CancelIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDrawGuide                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_MainChoice_Parts_1_C::InitParameterSelect(const class FText& Title, const class FText& Message, const class FText& Select0, const class FText& Select1, int32 Param_StartIndex, bool Param_IsEnableCancel, int32 Param_CancelIndex, bool IsDrawGuide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "InitParameterSelect");

	Params::WB_ui_MainChoice_Parts_1_C_InitParameterSelect Parms{};

	Parms.Title = std::move(Title);
	Parms.Message = std::move(Message);
	Parms.Select0 = std::move(Select0);
	Parms.Select1 = std::move(Select1);
	Parms.Param_StartIndex = Param_StartIndex;
	Parms.Param_IsEnableCancel = Param_IsEnableCancel;
	Parms.Param_CancelIndex = Param_CancelIndex;
	Parms.IsDrawGuide = IsDrawGuide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.UpdateFocus
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::UpdateFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "UpdateFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "Decide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.GetResultIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ResultIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_MainChoice_Parts_1_C::GetResultIndex(int32* ResultIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "GetResultIndex");

	Params::WB_ui_MainChoice_Parts_1_C_GetResultIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ResultIndex != nullptr)
		*ResultIndex = Parms.ResultIndex;
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.SetSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerSkill                            SkillID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_ui_skill_type                      SkillType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsKasane                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_UseCancelAsDecide                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_MainChoice_Parts_1_C::SetSkill(EPlayerSkill SkillID, Enum_ui_skill_type SkillType, bool IsKasane, bool Param_UseCancelAsDecide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "SetSkill");

	Params::WB_ui_MainChoice_Parts_1_C_SetSkill Parms{};

	Parms.SkillID = SkillID;
	Parms.SkillType = SkillType;
	Parms.IsKasane = IsKasane;
	Parms.Param_UseCancelAsDecide = Param_UseCancelAsDecide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.SetupGuide
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::SetupGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "SetupGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.InitParameterWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsDrawGuide                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_UseCancelAsDecide                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_MainChoice_Parts_1_C::InitParameterWarning(const class FText& Title, const class FText& Message, bool IsDrawGuide, bool Param_UseCancelAsDecide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "InitParameterWarning");

	Params::WB_ui_MainChoice_Parts_1_C_InitParameterWarning Parms{};

	Parms.Title = std::move(Title);
	Parms.Message = std::move(Message);
	Parms.IsDrawGuide = IsDrawGuide;
	Parms.Param_UseCancelAsDecide = Param_UseCancelAsDecide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.IsChoiceMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsChoiceMode                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_MainChoice_Parts_1_C::IsChoiceMode(bool* Param_IsChoiceMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "IsChoiceMode");

	Params::WB_ui_MainChoice_Parts_1_C_IsChoiceMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsChoiceMode != nullptr)
		*Param_IsChoiceMode = Parms.Param_IsChoiceMode;
}


// Function WB_ui_MainChoice_Parts_1.WB_ui_MainChoice_Parts_1_C.InitQuestReportError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ui_MainChoice_Parts_1_C::InitQuestReportError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_MainChoice_Parts_1_C", "InitQuestReportError");

	UObject::ProcessEvent(Func, nullptr);
}

}


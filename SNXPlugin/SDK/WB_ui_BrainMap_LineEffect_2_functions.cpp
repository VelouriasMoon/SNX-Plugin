#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_BrainMap_LineEffect_2

#include "Basic.hpp"

#include "WB_ui_BrainMap_LineEffect_2_classes.hpp"
#include "WB_ui_BrainMap_LineEffect_2_parameters.hpp"


namespace SDK
{

// Function WB_ui_BrainMap_LineEffect_2.WB_ui_BrainMap_LineEffect_2_C.ExecuteUbergraph_WB_ui_BrainMap_LineEffect_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_BrainMap_LineEffect_2_C::ExecuteUbergraph_WB_ui_BrainMap_LineEffect_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainMap_LineEffect_2_C", "ExecuteUbergraph_WB_ui_BrainMap_LineEffect_2");

	Params::WB_ui_BrainMap_LineEffect_2_C_ExecuteUbergraph_WB_ui_BrainMap_LineEffect_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_BrainMap_LineEffect_2.WB_ui_BrainMap_LineEffect_2_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_BrainMap_LineEffect_2_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_BrainMap_LineEffect_2_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}


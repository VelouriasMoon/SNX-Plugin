#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BT_m05_140

#include "Basic.hpp"

#include "BP_BT_m05_140_classes.hpp"
#include "BP_BT_m05_140_parameters.hpp"


namespace SDK
{

// Function BP_BT_m05_140.BP_BT_m05_140_C.ExecuteUbergraph_BP_BT_m05_140
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BT_m05_140_C::ExecuteUbergraph_BP_BT_m05_140(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BT_m05_140_C", "ExecuteUbergraph_BP_BT_m05_140");

	Params::BP_BT_m05_140_C_ExecuteUbergraph_BP_BT_m05_140 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BT_m05_140.BP_BT_m05_140_C.StartEvent
// (Event, Public, BlueprintEvent)

void ABP_BT_m05_140_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BT_m05_140_C", "StartEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BT_f09_190

#include "Basic.hpp"

#include "BP_BT_f09_190_classes.hpp"
#include "BP_BT_f09_190_parameters.hpp"


namespace SDK
{

// Function BP_BT_f09_190.BP_BT_f09_190_C.ExecuteUbergraph_BP_BT_f09_190
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BT_f09_190_C::ExecuteUbergraph_BP_BT_f09_190(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BT_f09_190_C", "ExecuteUbergraph_BP_BT_f09_190");

	Params::BP_BT_f09_190_C_ExecuteUbergraph_BP_BT_f09_190 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BT_f09_190.BP_BT_f09_190_C.StartEvent
// (Event, Public, BlueprintEvent)

void ABP_BT_f09_190_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BT_f09_190_C", "StartEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ajito_ch0100

#include "Basic.hpp"

#include "BP_Ajito_ch0100_classes.hpp"
#include "BP_Ajito_ch0100_parameters.hpp"


namespace SDK
{

// Function BP_Ajito_ch0100.BP_Ajito_ch0100_C.ExecuteUbergraph_BP_Ajito_ch0100
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ajito_ch0100_C::ExecuteUbergraph_BP_Ajito_ch0100(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ajito_ch0100_C", "ExecuteUbergraph_BP_Ajito_ch0100");

	Params::BP_Ajito_ch0100_C_ExecuteUbergraph_BP_Ajito_ch0100 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ajito_ch0100.BP_Ajito_ch0100_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ajito_ch0100_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ajito_ch0100_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ch0400_Menu

#include "Basic.hpp"

#include "BP_ch0400_Menu_classes.hpp"
#include "BP_ch0400_Menu_parameters.hpp"


namespace SDK
{

// Function BP_ch0400_Menu.BP_ch0400_Menu_C.ExecuteUbergraph_BP_ch0400_Menu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ch0400_Menu_C::ExecuteUbergraph_BP_ch0400_Menu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ch0400_Menu_C", "ExecuteUbergraph_BP_ch0400_Menu");

	Params::BP_ch0400_Menu_C_ExecuteUbergraph_BP_ch0400_Menu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ch0400_Menu.BP_ch0400_Menu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ch0400_Menu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ch0400_Menu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ch0400_Menu.BP_ch0400_Menu_C.OnChangeWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ch0400_Menu_C::OnChangeWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ch0400_Menu_C", "OnChangeWeapon");

	UObject::ProcessEvent(Func, nullptr);
}

}


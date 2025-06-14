#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Player

#include "Basic.hpp"

#include "AIC_Player_classes.hpp"
#include "AIC_Player_parameters.hpp"


namespace SDK
{

// Function AIC_Player.AIC_Player_C.ExecuteUbergraph_AIC_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Player_C::ExecuteUbergraph_AIC_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Player_C", "ExecuteUbergraph_AIC_Player");

	Params::AIC_Player_C_ExecuteUbergraph_AIC_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Player.AIC_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Player_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Player.AIC_Player_C.BeginBehaviorTree
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_Player_C::BeginBehaviorTree()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Player_C", "BeginBehaviorTree");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Player.AIC_Player_C.IsAI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bAI                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_Player_C::IsAI(bool* bAI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Player_C", "IsAI");

	Params::AIC_Player_C_IsAI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAI != nullptr)
		*bAI = Parms.bAI;
}

}


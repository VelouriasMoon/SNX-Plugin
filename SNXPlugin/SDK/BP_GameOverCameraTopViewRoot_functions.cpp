#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameOverCameraTopViewRoot

#include "Basic.hpp"

#include "BP_GameOverCameraTopViewRoot_classes.hpp"
#include "BP_GameOverCameraTopViewRoot_parameters.hpp"


namespace SDK
{

// Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.ExecuteUbergraph_BP_GameOverCameraTopViewRoot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameOverCameraTopViewRoot_C::ExecuteUbergraph_BP_GameOverCameraTopViewRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameOverCameraTopViewRoot_C", "ExecuteUbergraph_BP_GameOverCameraTopViewRoot");

	Params::BP_GameOverCameraTopViewRoot_C_ExecuteUbergraph_BP_GameOverCameraTopViewRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameOverCameraTopViewRoot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameOverCameraTopViewRoot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.SetupCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARSBattlePlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameOverCameraTopViewRoot_C::SetupCollision(class ARSBattlePlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameOverCameraTopViewRoot_C", "SetupCollision");

	Params::BP_GameOverCameraTopViewRoot_C_SetupCollision Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameOverCameraTopViewRoot.BP_GameOverCameraTopViewRoot_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameOverCameraTopViewRoot_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameOverCameraTopViewRoot_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}

}


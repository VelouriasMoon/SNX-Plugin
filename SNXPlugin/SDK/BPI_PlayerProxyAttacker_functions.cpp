#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerProxyAttacker

#include "Basic.hpp"

#include "BPI_PlayerProxyAttacker_classes.hpp"
#include "BPI_PlayerProxyAttacker_parameters.hpp"


namespace SDK
{

// Function BPI_PlayerProxyAttacker.BPI_PlayerProxyAttacker_C.GetProxyRequestedPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARSBattlePlayer_C*                Player                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerProxyAttacker_C::GetProxyRequestedPlayer(class ARSBattlePlayer_C** Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayerProxyAttacker_C", "GetProxyRequestedPlayer");

	Params::BPI_PlayerProxyAttacker_C_GetProxyRequestedPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;
}


// Function BPI_PlayerProxyAttacker.BPI_PlayerProxyAttacker_C.GetProxyMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerProxyAttacker_C::GetProxyMesh(class UMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayerProxyAttacker_C", "GetProxyMesh");

	Params::BPI_PlayerProxyAttacker_C_GetProxyMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}

}


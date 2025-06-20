#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KizunaLvUp_ch0200

#include "Basic.hpp"

#include "BP_KizunaLvUp_ch0200_classes.hpp"
#include "BP_KizunaLvUp_ch0200_parameters.hpp"


namespace SDK
{

// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.ExecuteUbergraph_BP_KizunaLvUp_ch0200
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::ExecuteUbergraph_BP_KizunaLvUp_ch0200(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "ExecuteUbergraph_BP_KizunaLvUp_ch0200");

	Params::BP_KizunaLvUp_ch0200_C_ExecuteUbergraph_BP_KizunaLvUp_ch0200 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainEventLatentActor*            Latenter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::CustomEvent(class AMainEventLatentActor* Latenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "CustomEvent");

	Params::BP_KizunaLvUp_ch0200_C_CustomEvent Parms{};

	Parms.Latenter = Latenter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.EventLoadMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::EventLoadMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "EventLoadMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.StartEvent
// (Event, Public, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "StartEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.BPEventEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::BPEventEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "BPEventEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.SystemMes_TeamKizunaup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainEventLatentActor*            Latenter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::SystemMes_TeamKizunaup(class AMainEventLatentActor* Latenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "SystemMes_TeamKizunaup");

	Params::BP_KizunaLvUp_ch0200_C_SystemMes_TeamKizunaup Parms{};

	Parms.Latenter = Latenter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.SystemMes_kizunaup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainEventLatentActor*            Latenter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::SystemMes_kizunaup(class AMainEventLatentActor* Latenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "SystemMes_kizunaup");

	Params::BP_KizunaLvUp_ch0200_C_SystemMes_kizunaup Parms{};

	Parms.Latenter = Latenter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.SearchStringID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerID                               CheckCharaID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnString                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::SearchStringID(EPlayerID CheckCharaID, class FString* ReturnString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "SearchStringID");

	Params::BP_KizunaLvUp_ch0200_C_SearchStringID Parms{};

	Parms.CheckCharaID = CheckCharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnString != nullptr)
		*ReturnString = std::move(Parms.ReturnString);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.CheckWhoLevelUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerID                               CheckCharaID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLevelUp                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ReturnStringID                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_BondsLevelTag                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::CheckWhoLevelUp(EPlayerID CheckCharaID, bool* IsLevelUp, class FString* ReturnStringID, class FString* Param_BondsLevelTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "CheckWhoLevelUp");

	Params::BP_KizunaLvUp_ch0200_C_CheckWhoLevelUp Parms{};

	Parms.CheckCharaID = CheckCharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLevelUp != nullptr)
		*IsLevelUp = Parms.IsLevelUp;

	if (ReturnStringID != nullptr)
		*ReturnStringID = std::move(Parms.ReturnStringID);

	if (Param_BondsLevelTag != nullptr)
		*Param_BondsLevelTag = std::move(Parms.Param_BondsLevelTag);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.CheckMemberAlreadyUnion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerID                               CheckCharaID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AlreadyUnion                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KizunaLvUp_ch0200_C::CheckMemberAlreadyUnion(EPlayerID CheckCharaID, bool* AlreadyUnion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "CheckMemberAlreadyUnion");

	Params::BP_KizunaLvUp_ch0200_C_CheckMemberAlreadyUnion Parms{};

	Parms.CheckCharaID = CheckCharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (AlreadyUnion != nullptr)
		*AlreadyUnion = Parms.AlreadyUnion;
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.CheckTeamBondsLvUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::CheckTeamBondsLvUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "CheckTeamBondsLvUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.GetTeamBondsCostume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             GetCostume                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KizunaLvUp_ch0200_C::GetTeamBondsCostume(class FName GetCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "GetTeamBondsCostume");

	Params::BP_KizunaLvUp_ch0200_C_GetTeamBondsCostume Parms{};

	Parms.GetCostume = GetCostume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.GetIteminAllMemberLv6
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGet                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KizunaLvUp_ch0200_C::GetIteminAllMemberLv6(bool* IsGet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "GetIteminAllMemberLv6");

	Params::BP_KizunaLvUp_ch0200_C_GetIteminAllMemberLv6 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsGet != nullptr)
		*IsGet = Parms.IsGet;
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.Update_EP5_Synopsis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::Update_EP5_Synopsis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "Update_EP5_Synopsis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KizunaLvUp_ch0200.BP_KizunaLvUp_ch0200_C.ActionIconUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KizunaLvUp_ch0200_C::ActionIconUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KizunaLvUp_ch0200_C", "ActionIconUpdate");

	UObject::ProcessEvent(Func, nullptr);
}

}


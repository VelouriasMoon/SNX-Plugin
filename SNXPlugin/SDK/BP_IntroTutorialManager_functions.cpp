#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IntroTutorialManager

#include "Basic.hpp"

#include "BP_IntroTutorialManager_classes.hpp"
#include "BP_IntroTutorialManager_parameters.hpp"


namespace SDK
{

// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.BeginIntroTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::BeginIntroTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "BeginIntroTutorial");

	Params::BP_IntroTutorialManager_C_BeginIntroTutorial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.EndIntroTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::EndIntroTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "EndIntroTutorial");

	Params::BP_IntroTutorialManager_C_EndIntroTutorial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RemoveEnemysNoDead
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GroupID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubGroupID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::RemoveEnemysNoDead(int32 GroupID, int32 SubGroupID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "RemoveEnemysNoDead");

	Params::BP_IntroTutorialManager_C_RemoveEnemysNoDead Parms{};

	Parms.GroupID = GroupID;
	Parms.SubGroupID = SubGroupID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::RestrictPlayerAttack(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "RestrictPlayerAttack");

	Params::BP_IntroTutorialManager_C_RestrictPlayerAttack Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerPsychic
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::RestrictPlayerPsychic(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "RestrictPlayerPsychic");

	Params::BP_IntroTutorialManager_C_RestrictPlayerPsychic Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerSpecialAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::RestrictPlayerSpecialAttack(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "RestrictPlayerSpecialAttack");

	Params::BP_IntroTutorialManager_C_RestrictPlayerSpecialAttack Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.SetTutrialPKGaugeRecovery
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::SetTutrialPKGaugeRecovery(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "SetTutrialPKGaugeRecovery");

	Params::BP_IntroTutorialManager_C_SetTutrialPKGaugeRecovery Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_IntroTutorialManager.BP_IntroTutorialManager_C.RestrictPlayerLaunchAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IntroTutorialManager_C::RestrictPlayerLaunchAttack(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IntroTutorialManager_C", "RestrictPlayerLaunchAttack");

	Params::BP_IntroTutorialManager_C_RestrictPlayerLaunchAttack Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


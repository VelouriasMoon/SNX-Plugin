#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIMain3DPlayerCapture

#include "Basic.hpp"

#include "BP_UIMain3DPlayerCapture_classes.hpp"
#include "BP_UIMain3DPlayerCapture_parameters.hpp"


namespace SDK
{

// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.ExecuteUbergraph_BP_UIMain3DPlayerCapture
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::ExecuteUbergraph_BP_UIMain3DPlayerCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "ExecuteUbergraph_BP_UIMain3DPlayerCapture");

	Params::BP_UIMain3DPlayerCapture_C_ExecuteUbergraph_BP_UIMain3DPlayerCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.EndCaptureClearTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::EndCaptureClearTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "EndCaptureClearTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.StartNoise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reverse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UIMain3DPlayerCapture_C::StartNoise(bool Reverse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "StartNoise");

	Params::BP_UIMain3DPlayerCapture_C_StartNoise Parms{};

	Parms.Reverse = Reverse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.NoiseTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::NoiseTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "NoiseTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.NoiseTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::NoiseTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "NoiseTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MenuPlayerBase_C*             InMenuPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Chenged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UIMain3DPlayerCapture_C::SetPlayer(class ABP_MenuPlayerBase_C* InMenuPlayer, bool* Chenged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetPlayer");

	Params::BP_UIMain3DPlayerCapture_C_SetPlayer Parms{};

	Parms.InMenuPlayer = InMenuPlayer;

	UObject::ProcessEvent(Func, &Parms);

	if (Chenged != nullptr)
		*Chenged = Parms.Chenged;
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetSceneParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIMain3DCharacterSceneSetting   SceneSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UIMain3DPlayerCapture_C::SetSceneParameter(const struct FUIMain3DCharacterSceneSetting& SceneSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetSceneParameter");

	Params::BP_UIMain3DPlayerCapture_C_SetSceneParameter Parms{};

	Parms.SceneSetting = std::move(SceneSetting);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetCelLookLightDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::SetCelLookLightDirection(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetCelLookLightDirection");

	Params::BP_UIMain3DPlayerCapture_C_SetCelLookLightDirection Parms{};

	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.LoadAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::LoadAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "LoadAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetPlayerParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIMain3DCharacterPlayerSetting  PlayerSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_UIMain3DPlayerCapture_C::SetPlayerParameter(const struct FUIMain3DCharacterPlayerSetting& PlayerSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetPlayerParameter");

	Params::BP_UIMain3DPlayerCapture_C_SetPlayerParameter Parms{};

	Parms.PlayerSetting = std::move(PlayerSetting);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           RenderTarget2D                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           AlphaRenderTarget2D                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::SetRenderTarget(class UTextureRenderTarget2D* RenderTarget2D, class UTextureRenderTarget2D* AlphaRenderTarget2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetRenderTarget");

	Params::BP_UIMain3DPlayerCapture_C_SetRenderTarget Parms{};

	Parms.RenderTarget2D = RenderTarget2D;
	Parms.AlphaRenderTarget2D = AlphaRenderTarget2D;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.GetTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           AlphaTexture                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::GetTexture(class UTextureRenderTarget2D** Texture, class UTextureRenderTarget2D** AlphaTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "GetTexture");

	Params::BP_UIMain3DPlayerCapture_C_GetTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (AlphaTexture != nullptr)
		*AlphaTexture = Parms.AlphaTexture;
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.StartCapture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::StartCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "StartCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.EndCapture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::EndCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "EndCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.PrivateSetupCapture
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_UIMain3DPlayerCapture_C::PrivateSetupCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "PrivateSetupCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.GetNoiseRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Param_NoiseRate                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::GetNoiseRate(float* Param_NoiseRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "GetNoiseRate");

	Params::BP_UIMain3DPlayerCapture_C_GetNoiseRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_NoiseRate != nullptr)
		*Param_NoiseRate = Parms.Param_NoiseRate;
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.SetEquipParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIMain3DCharacterEquipSetting   EquipData                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_UIMain3DPlayerCapture_C::SetEquipParameter(const struct FUIMain3DCharacterEquipSetting& EquipData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "SetEquipParameter");

	Params::BP_UIMain3DPlayerCapture_C_SetEquipParameter Parms{};

	Parms.EquipData = std::move(EquipData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIMain3DPlayerCapture.BP_UIMain3DPlayerCapture_C.PrivateSetupViewRect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CutoutRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIMain3DPlayerCapture_C::PrivateSetupViewRect(float CutoutRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIMain3DPlayerCapture_C", "PrivateSetupViewRect");

	Params::BP_UIMain3DPlayerCapture_C_PrivateSetupViewRect Parms{};

	Parms.CutoutRate = CutoutRate;

	UObject::ProcessEvent(Func, &Parms);
}

}


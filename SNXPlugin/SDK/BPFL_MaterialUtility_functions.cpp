#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_MaterialUtility

#include "Basic.hpp"

#include "BPFL_MaterialUtility_classes.hpp"
#include "BPFL_MaterialUtility_parameters.hpp"


namespace SDK
{

// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetEnemyBrainCrashWeakColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HighDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Intensity                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::GetEnemyBrainCrashWeakColor(bool HighDamage, class UObject* __WorldContext, struct FLinearColor* Color, float* Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetEnemyBrainCrashWeakColor");

	Params::BPFL_MaterialUtility_C_GetEnemyBrainCrashWeakColor Parms{};

	Parms.HighDamage = HighDamage;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.EnableMaterialPreSkinFacialNormal
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMeshComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::EnableMaterialPreSkinFacialNormal(class USkeletalMeshComponent* SkeletalMeshComponent, bool Enable, bool IsEvent, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "EnableMaterialPreSkinFacialNormal");

	Params::BPFL_MaterialUtility_C_EnableMaterialPreSkinFacialNormal Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Enable = Enable;
	Parms.IsEvent = IsEvent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.UpdateMaterialPreSkinFacialNormal
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMeshComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::UpdateMaterialPreSkinFacialNormal(class USkeletalMeshComponent* SkeletalMeshComponent, bool IsEvent, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "UpdateMaterialPreSkinFacialNormal");

	Params::BPFL_MaterialUtility_C_UpdateMaterialPreSkinFacialNormal Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.IsEvent = IsEvent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.UpdateMaterialPreSkinFacialNormalToSlots
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMeshComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                           MaterialSlots                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::UpdateMaterialPreSkinFacialNormalToSlots(class USkeletalMeshComponent* SkeletalMeshComponent, bool IsEvent, TArray<int32>& MaterialSlots, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "UpdateMaterialPreSkinFacialNormalToSlots");

	Params::BPFL_MaterialUtility_C_UpdateMaterialPreSkinFacialNormalToSlots Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.IsEvent = IsEvent;
	Parms.MaterialSlots = std::move(MaterialSlots);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	MaterialSlots = std::move(Parms.MaterialSlots);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SearchMaterialPreSkinFacialNormalSlots
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMeshComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           MaterialSlots                                          (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SearchMaterialPreSkinFacialNormalSlots(class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, TArray<int32>* MaterialSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SearchMaterialPreSkinFacialNormalSlots");

	Params::BPFL_MaterialUtility_C_SearchMaterialPreSkinFacialNormalSlots Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MaterialSlots != nullptr)
		*MaterialSlots = std::move(Parms.MaterialSlots);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.EnableMaterialPreSkinFacialNormalNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANpcSkeletalMeshActor*            NpcSkeletalMeshActor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::EnableMaterialPreSkinFacialNormalNPC(class ANpcSkeletalMeshActor* NpcSkeletalMeshActor, bool Enable, bool IsEvent, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "EnableMaterialPreSkinFacialNormalNPC");

	Params::BPFL_MaterialUtility_C_EnableMaterialPreSkinFacialNormalNPC Parms{};

	Parms.NpcSkeletalMeshActor = NpcSkeletalMeshActor;
	Parms.Enable = Enable;
	Parms.IsEvent = IsEvent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.UpdateMaterialPreSkinFacialNormalNPC
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANpcSkeletalMeshActor*            NpcSkeletalMeshActor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::UpdateMaterialPreSkinFacialNormalNPC(class ANpcSkeletalMeshActor* NpcSkeletalMeshActor, bool IsEvent, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "UpdateMaterialPreSkinFacialNormalNPC");

	Params::BPFL_MaterialUtility_C_UpdateMaterialPreSkinFacialNormalNPC Parms{};

	Parms.NpcSkeletalMeshActor = NpcSkeletalMeshActor;
	Parms.IsEvent = IsEvent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthParam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   StealthRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseMatVanish                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsStealthMat                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_MaterialUtility_C::GetMaterialStealthParam(float Rate, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthParam");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthParam Parms{};

	Parms.Rate = Rate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StealthRate != nullptr)
		*StealthRate = Parms.StealthRate;

	if (BaseMatVanish != nullptr)
		*BaseMatVanish = Parms.BaseMatVanish;

	if (IsStealthMat != nullptr)
		*IsStealthMat = Parms.IsStealthMat;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthParamEnemy
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   StealthRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseMatVanish                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsStealthMat                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_MaterialUtility_C::GetMaterialStealthParamEnemy(float Rate, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthParamEnemy");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthParamEnemy Parms{};

	Parms.Rate = Rate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StealthRate != nullptr)
		*StealthRate = Parms.StealthRate;

	if (BaseMatVanish != nullptr)
		*BaseMatVanish = Parms.BaseMatVanish;

	if (IsStealthMat != nullptr)
		*IsStealthMat = Parms.IsStealthMat;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthParamEnemyFromTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   StealthRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseMatVanish                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsStealthMat                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_MaterialUtility_C::GetMaterialStealthParamEnemyFromTime(float Time, class UObject* __WorldContext, float* StealthRate, float* BaseMatVanish, bool* IsStealthMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthParamEnemyFromTime");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthParamEnemyFromTime Parms{};

	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StealthRate != nullptr)
		*StealthRate = Parms.StealthRate;

	if (BaseMatVanish != nullptr)
		*BaseMatVanish = Parms.BaseMatVanish;

	if (IsStealthMat != nullptr)
		*IsStealthMat = Parms.IsStealthMat;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthParamEnemyTimeMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TimeMax                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::GetMaterialStealthParamEnemyTimeMax(class UObject* __WorldContext, float* TimeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthParamEnemyTimeMax");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthParamEnemyTimeMax Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TimeMax != nullptr)
		*TimeMax = Parms.TimeMax;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthVelocityRate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  LocationHistory                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Opacity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::GetMaterialStealthVelocityRate(TArray<struct FVector>& LocationHistory, class UObject* __WorldContext, float* Opacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthVelocityRate");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthVelocityRate Parms{};

	Parms.LocationHistory = std::move(LocationHistory);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	LocationHistory = std::move(Parms.LocationHistory);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetMaterialStealthDataAsset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialStealthParam*            StealthParam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::GetMaterialStealthDataAsset(class UObject* __WorldContext, class UMaterialStealthParam** StealthParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetMaterialStealthDataAsset");

	Params::BPFL_MaterialUtility_C_GetMaterialStealthDataAsset Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StealthParam != nullptr)
		*StealthParam = Parms.StealthParam;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.GetTranslucecnyNeonWireMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkelMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasWireMaterial                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*               WireMaterial                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WireMaterialIndex                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::GetTranslucecnyNeonWireMaterial(class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext, bool* HasWireMaterial, class UMaterialInterface** WireMaterial, int32* WireMaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "GetTranslucecnyNeonWireMaterial");

	Params::BPFL_MaterialUtility_C_GetTranslucecnyNeonWireMaterial Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HasWireMaterial != nullptr)
		*HasWireMaterial = Parms.HasWireMaterial;

	if (WireMaterial != nullptr)
		*WireMaterial = Parms.WireMaterial;

	if (WireMaterialIndex != nullptr)
		*WireMaterialIndex = Parms.WireMaterialIndex;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.ChangeTranslucecnyNeonWireMaterialDofOFF
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkelMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasWireMaterial                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   WireMaterialIndex                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               BeforeMaterial                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         DofOFFWireMaterial                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::ChangeTranslucecnyNeonWireMaterialDofOFF(class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext, bool* HasWireMaterial, int32* WireMaterialIndex, class UMaterialInterface** BeforeMaterial, class UMaterialInstanceDynamic** DofOFFWireMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "ChangeTranslucecnyNeonWireMaterialDofOFF");

	Params::BPFL_MaterialUtility_C_ChangeTranslucecnyNeonWireMaterialDofOFF Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HasWireMaterial != nullptr)
		*HasWireMaterial = Parms.HasWireMaterial;

	if (WireMaterialIndex != nullptr)
		*WireMaterialIndex = Parms.WireMaterialIndex;

	if (BeforeMaterial != nullptr)
		*BeforeMaterial = Parms.BeforeMaterial;

	if (DofOFFWireMaterial != nullptr)
		*DofOFFWireMaterial = Parms.DofOFFWireMaterial;
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetDitherRateEm1400UpperBody
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkelMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetDitherRateEm1400UpperBody(class USkeletalMeshComponent* SkelMeshComp, float Rate, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetDitherRateEm1400UpperBody");

	Params::BPFL_MaterialUtility_C_SetDitherRateEm1400UpperBody Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rate = Rate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetupMaterialLocationParamFromMat
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*> MIDs                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetupMaterialLocationParamFromMat(class FName Key, TArray<class UMaterialInstanceDynamic*>& MIDs, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetupMaterialLocationParamFromMat");

	Params::BPFL_MaterialUtility_C_SetupMaterialLocationParamFromMat Parms{};

	Parms.Key = Key;
	Parms.MIDs = std::move(MIDs);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	MIDs = std::move(Parms.MIDs);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetupMaterialLocationParamFromMesh
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetupMaterialLocationParamFromMesh(class FName Key, class UMeshComponent* Mesh, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetupMaterialLocationParamFromMesh");

	Params::BPFL_MaterialUtility_C_SetupMaterialLocationParamFromMesh Parms{};

	Parms.Key = Key;
	Parms.Mesh = Mesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.ResetMeshMaterials
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::ResetMeshMaterials(class UMeshComponent* MeshComp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "ResetMeshMaterials");

	Params::BPFL_MaterialUtility_C_ResetMeshMaterials Parms{};

	Parms.MeshComp = MeshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.CopyParticleMaterialFromMesh
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   BaseMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BaseMaterialIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         TargetParticleSysComp                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           TargetMaterialIndexList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::CopyParticleMaterialFromMesh(class UMeshComponent* BaseMeshComp, int32 BaseMaterialIndex, class UParticleSystemComponent* TargetParticleSysComp, TArray<int32>& TargetMaterialIndexList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "CopyParticleMaterialFromMesh");

	Params::BPFL_MaterialUtility_C_CopyParticleMaterialFromMesh Parms{};

	Parms.BaseMeshComp = BaseMeshComp;
	Parms.BaseMaterialIndex = BaseMaterialIndex;
	Parms.TargetParticleSysComp = TargetParticleSysComp;
	Parms.TargetMaterialIndexList = std::move(TargetMaterialIndexList);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TargetMaterialIndexList = std::move(Parms.TargetMaterialIndexList);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetEm8310ArmTypeVisible
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SkeletonArm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           SkelMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetEm8310ArmTypeVisible(bool SkeletonArm, class USkeletalMeshComponent* SkelMeshComp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetEm8310ArmTypeVisible");

	Params::BPFL_MaterialUtility_C_SetEm8310ArmTypeVisible Parms{};

	Parms.SkeletonArm = SkeletonArm;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetStealthMaterialPlayerIDParameter
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*            SkinnedMeshComp                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPlayerID                               PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetStealthMaterialPlayerIDParameter(class USkinnedMeshComponent* SkinnedMeshComp, EPlayerID PlayerId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetStealthMaterialPlayerIDParameter");

	Params::BPFL_MaterialUtility_C_SetStealthMaterialPlayerIDParameter Parms{};

	Parms.SkinnedMeshComp = SkinnedMeshComp;
	Parms.PlayerId = PlayerId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_MaterialUtility.BPFL_MaterialUtility_C.SetStealthMaterialSkinMeshParameter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*            SkinnedMeshComp                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MaterialUtility_C::SetStealthMaterialSkinMeshParameter(class USkinnedMeshComponent* SkinnedMeshComp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_MaterialUtility_C", "SetStealthMaterialSkinMeshParameter");

	Params::BPFL_MaterialUtility_C_SetStealthMaterialSkinMeshParameter Parms{};

	Parms.SkinnedMeshComp = SkinnedMeshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}


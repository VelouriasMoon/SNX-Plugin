#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerCameraRotationComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerCameraRotationComponent.PlayerCameraRotationComponent_C
// 0x0038 (0x00F8 - 0x00C0)
class UPlayerCameraRotationComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bRotation;                                         // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_417F[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               End;                                               // 0x00CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Sec;                                               // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Start;                                             // 0x00DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APlayerController*                      Controller;                                        // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSec;                                            // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerCameraRotationComponent(int32 EntryPoint);
	void Update(float Delta);
	void ReceiveTick(float DeltaSeconds);
	void SetRotation(const struct FRotator& Param_End, float Param_Sec, class APlayerController* Param_Controller, const struct FRotator& Param_Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerCameraRotationComponent_C">();
	}
	static class UPlayerCameraRotationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerCameraRotationComponent_C>();
	}
};
static_assert(alignof(UPlayerCameraRotationComponent_C) == 0x000008, "Wrong alignment on UPlayerCameraRotationComponent_C");
static_assert(sizeof(UPlayerCameraRotationComponent_C) == 0x0000F8, "Wrong size on UPlayerCameraRotationComponent_C");
static_assert(offsetof(UPlayerCameraRotationComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UPlayerCameraRotationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, bRotation) == 0x0000C8, "Member 'UPlayerCameraRotationComponent_C::bRotation' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, End) == 0x0000CC, "Member 'UPlayerCameraRotationComponent_C::End' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, Sec) == 0x0000D8, "Member 'UPlayerCameraRotationComponent_C::Sec' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, Start) == 0x0000DC, "Member 'UPlayerCameraRotationComponent_C::Start' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, Controller) == 0x0000E8, "Member 'UPlayerCameraRotationComponent_C::Controller' has a wrong offset!");
static_assert(offsetof(UPlayerCameraRotationComponent_C, MaxSec) == 0x0000F0, "Member 'UPlayerCameraRotationComponent_C::MaxSec' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StealthWeakData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct StealthWeakData.StealthWeakData
// 0x0068 (0x0068 - 0x0000)
struct FStealthWeakData final
{
public:
	TSoftObjectPtr<class UParticleSystem>         Particle_18_751321C54681FBF8CEB756B70144F590;      // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   ParticleBoneName_20_51166C0E4713B163E5FD4C86140DB21B; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_15_3659E1EA44673D40DCCB99A0EAF83136;         // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotator_12_538097C24E59F228914677B4FC52D6B8;       // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FName>                           SphereBoneName_23_3C568F2F4A0E02DE3E91D58D5B7B96AF; // 0x0048(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<float>                                 WeakSphereScale_30_5C912F2E434777DF291F61964E43BC98; // 0x0058(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FStealthWeakData) == 0x000008, "Wrong alignment on FStealthWeakData");
static_assert(sizeof(FStealthWeakData) == 0x000068, "Wrong size on FStealthWeakData");
static_assert(offsetof(FStealthWeakData, Particle_18_751321C54681FBF8CEB756B70144F590) == 0x000000, "Member 'FStealthWeakData::Particle_18_751321C54681FBF8CEB756B70144F590' has a wrong offset!");
static_assert(offsetof(FStealthWeakData, ParticleBoneName_20_51166C0E4713B163E5FD4C86140DB21B) == 0x000028, "Member 'FStealthWeakData::ParticleBoneName_20_51166C0E4713B163E5FD4C86140DB21B' has a wrong offset!");
static_assert(offsetof(FStealthWeakData, Scale_15_3659E1EA44673D40DCCB99A0EAF83136) == 0x000030, "Member 'FStealthWeakData::Scale_15_3659E1EA44673D40DCCB99A0EAF83136' has a wrong offset!");
static_assert(offsetof(FStealthWeakData, Rotator_12_538097C24E59F228914677B4FC52D6B8) == 0x00003C, "Member 'FStealthWeakData::Rotator_12_538097C24E59F228914677B4FC52D6B8' has a wrong offset!");
static_assert(offsetof(FStealthWeakData, SphereBoneName_23_3C568F2F4A0E02DE3E91D58D5B7B96AF) == 0x000048, "Member 'FStealthWeakData::SphereBoneName_23_3C568F2F4A0E02DE3E91D58D5B7B96AF' has a wrong offset!");
static_assert(offsetof(FStealthWeakData, WeakSphereScale_30_5C912F2E434777DF291F61964E43BC98) == 0x000058, "Member 'FStealthWeakData::WeakSphereScale_30_5C912F2E434777DF291F61964E43BC98' has a wrong offset!");

}


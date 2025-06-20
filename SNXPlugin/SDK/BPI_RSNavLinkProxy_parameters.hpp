#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RSNavLinkProxy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_RSNavLinkProxy.BPI_RSNavLinkProxy_C.OnReachNavLinkPoint
// 0x000C (0x000C - 0x0000)
struct BPI_RSNavLinkProxy_C_OnReachNavLinkPoint final
{
public:
	struct FVector                                Destination;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_RSNavLinkProxy_C_OnReachNavLinkPoint) == 0x000004, "Wrong alignment on BPI_RSNavLinkProxy_C_OnReachNavLinkPoint");
static_assert(sizeof(BPI_RSNavLinkProxy_C_OnReachNavLinkPoint) == 0x00000C, "Wrong size on BPI_RSNavLinkProxy_C_OnReachNavLinkPoint");
static_assert(offsetof(BPI_RSNavLinkProxy_C_OnReachNavLinkPoint, Destination) == 0x000000, "Member 'BPI_RSNavLinkProxy_C_OnReachNavLinkPoint::Destination' has a wrong offset!");

}


#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ActiveRagdollActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos
struct ABP_ActiveRagdollActor_C_SetServerPos_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient
struct ABP_ActiveRagdollActor_C_InitClient_Params
{
	class USkeletalMeshComponent*                      MeshRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVelocity;                                               // (Parm, IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer
struct ABP_ActiveRagdollActor_C_InitServer_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript
struct ABP_ActiveRagdollActor_C_UserConstructionScript_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay
struct ABP_ActiveRagdollActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick
struct ABP_ActiveRagdollActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor
struct ABP_ActiveRagdollActor_C_ExecuteUbergraph_BP_ActiveRagdollActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

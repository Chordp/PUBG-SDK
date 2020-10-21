#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EasyAntiCheatCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.ActorComponent.ToggleActive
struct UEasyAntiCheatNetComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UEasyAntiCheatNetComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UEasyAntiCheatNetComponent_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UEasyAntiCheatNetComponent_SetIsReplicated_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UEasyAntiCheatNetComponent_SetComponentTickInterval_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UEasyAntiCheatNetComponent_SetComponentTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UEasyAntiCheatNetComponent_SetAutoActivate_Params
{
	bool                                               bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UEasyAntiCheatNetComponent_SetActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UEasyAntiCheatNetComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UEasyAntiCheatNetComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UEasyAntiCheatNetComponent_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UEasyAntiCheatNetComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UEasyAntiCheatNetComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UEasyAntiCheatNetComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UEasyAntiCheatNetComponent_K2_DestroyComponent_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UEasyAntiCheatNetComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UEasyAntiCheatNetComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UEasyAntiCheatNetComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UEasyAntiCheatNetComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UEasyAntiCheatNetComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UEasyAntiCheatNetComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UEasyAntiCheatNetComponent_ComponentHasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UEasyAntiCheatNetComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UEasyAntiCheatNetComponent_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UEasyAntiCheatNetComponent_Activate_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PrefabAsset_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrefabAsset.PrefabActor.SetPrefab
struct APrefabActor_SetPrefab_Params
{
	class UPrefabAsset*                                NewPrefab;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRevertEvenDisconnected;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.SetMobility
struct APrefabActor_SetMobility_Params
{
	TEnumAsByte<EComponentMobility>                    InMobility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.GetPrefab
struct APrefabActor_GetPrefab_Params
{
	class UPrefabAsset*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrefabAsset.PrefabActor.DestroyPrefabActor
struct APrefabActor_DestroyPrefabActor_Params
{
	bool                                               bDestroyAttachedChildren;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct APrefabActorHolder_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct APrefabActorHolder_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct APrefabActorHolder_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct APrefabActorHolder_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct APrefabActorHolder_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct APrefabActorHolder_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct APrefabActorHolder_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct APrefabActorHolder_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct APrefabActorHolder_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct APrefabActorHolder_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct APrefabActorHolder_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct APrefabActorHolder_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct APrefabActorHolder_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (Parm, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct APrefabActorHolder_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (Parm, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct APrefabActorHolder_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct APrefabActorHolder_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct APrefabActorHolder_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct APrefabActorHolder_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct APrefabActorHolder_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct APrefabActorHolder_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct APrefabActorHolder_ReceivePointDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct APrefabActorHolder_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct APrefabActorHolder_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct APrefabActorHolder_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct APrefabActorHolder_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct APrefabActorHolder_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct APrefabActorHolder_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct APrefabActorHolder_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct APrefabActorHolder_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct APrefabActorHolder_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct APrefabActorHolder_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct APrefabActorHolder_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct APrefabActorHolder_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct APrefabActorHolder_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct APrefabActorHolder_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct APrefabActorHolder_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct APrefabActorHolder_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct APrefabActorHolder_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct APrefabActorHolder_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct APrefabActorHolder_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct APrefabActorHolder_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct APrefabActorHolder_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct APrefabActorHolder_MakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct APrefabActorHolder_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct APrefabActorHolder_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct APrefabActorHolder_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct APrefabActorHolder_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct APrefabActorHolder_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct APrefabActorHolder_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct APrefabActorHolder_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct APrefabActorHolder_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct APrefabActorHolder_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct APrefabActorHolder_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct APrefabActorHolder_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct APrefabActorHolder_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct APrefabActorHolder_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct APrefabActorHolder_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct APrefabActorHolder_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct APrefabActorHolder_K2_DetachFromActor_Params
{
	EDetachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct APrefabActorHolder_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct APrefabActorHolder_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct APrefabActorHolder_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct APrefabActorHolder_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct APrefabActorHolder_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct APrefabActorHolder_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct APrefabActorHolder_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct APrefabActorHolder_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct APrefabActorHolder_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct APrefabActorHolder_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct APrefabActorHolder_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct APrefabActorHolder_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct APrefabActorHolder_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct APrefabActorHolder_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct APrefabActorHolder_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct APrefabActorHolder_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct APrefabActorHolder_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct APrefabActorHolder_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct APrefabActorHolder_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct APrefabActorHolder_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct APrefabActorHolder_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct APrefabActorHolder_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct APrefabActorHolder_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct APrefabActorHolder_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct APrefabActorHolder_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct APrefabActorHolder_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct APrefabActorHolder_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct APrefabActorHolder_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct APrefabActorHolder_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct APrefabActorHolder_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct APrefabActorHolder_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct APrefabActorHolder_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct APrefabActorHolder_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct APrefabActorHolder_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct APrefabActorHolder_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct APrefabActorHolder_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct APrefabActorHolder_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct APrefabActorHolder_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct APrefabActorHolder_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct APrefabActorHolder_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct APrefabActorHolder_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct APrefabActorHolder_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct APrefabActorHolder_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct APrefabActorHolder_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct APrefabActorHolder_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct APrefabActorHolder_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct APrefabActorHolder_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct APrefabActorHolder_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct APrefabActorHolder_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct APrefabActorHolder_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct APrefabActorHolder_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct APrefabActorHolder_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct APrefabActorHolder_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct APrefabActorHolder_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct APrefabActorHolder_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct APrefabActorHolder_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct APrefabActorHolder_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct APrefabActorHolder_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct APrefabActorHolder_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct APrefabActorHolder_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct APrefabActorHolder_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct APrefabActorHolder_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct APrefabActorHolder_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct APrefabActorHolder_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct APrefabActorHolder_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

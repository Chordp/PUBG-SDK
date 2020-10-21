#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Foliage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.Actor.WasRecentlyRendered
struct AInstancedFoliageActor_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct AInstancedFoliageActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct AInstancedFoliageActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct AInstancedFoliageActor_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct AInstancedFoliageActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct AInstancedFoliageActor_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct AInstancedFoliageActor_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct AInstancedFoliageActor_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct AInstancedFoliageActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct AInstancedFoliageActor_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct AInstancedFoliageActor_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct AInstancedFoliageActor_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct AInstancedFoliageActor_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (Parm, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct AInstancedFoliageActor_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (Parm, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct AInstancedFoliageActor_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct AInstancedFoliageActor_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct AInstancedFoliageActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct AInstancedFoliageActor_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct AInstancedFoliageActor_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct AInstancedFoliageActor_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct AInstancedFoliageActor_ReceivePointDamage_Params
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
struct AInstancedFoliageActor_ReceiveHit_Params
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
struct AInstancedFoliageActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct AInstancedFoliageActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct AInstancedFoliageActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct AInstancedFoliageActor_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct AInstancedFoliageActor_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct AInstancedFoliageActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct AInstancedFoliageActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct AInstancedFoliageActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct AInstancedFoliageActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct AInstancedFoliageActor_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct AInstancedFoliageActor_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct AInstancedFoliageActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct AInstancedFoliageActor_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct AInstancedFoliageActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct AInstancedFoliageActor_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct AInstancedFoliageActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct AInstancedFoliageActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct AInstancedFoliageActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct AInstancedFoliageActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct AInstancedFoliageActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct AInstancedFoliageActor_MakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct AInstancedFoliageActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct AInstancedFoliageActor_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct AInstancedFoliageActor_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct AInstancedFoliageActor_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct AInstancedFoliageActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct AInstancedFoliageActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct AInstancedFoliageActor_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct AInstancedFoliageActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct AInstancedFoliageActor_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct AInstancedFoliageActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct AInstancedFoliageActor_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct AInstancedFoliageActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct AInstancedFoliageActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct AInstancedFoliageActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct AInstancedFoliageActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct AInstancedFoliageActor_K2_DetachFromActor_Params
{
	EDetachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct AInstancedFoliageActor_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct AInstancedFoliageActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct AInstancedFoliageActor_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct AInstancedFoliageActor_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct AInstancedFoliageActor_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct AInstancedFoliageActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct AInstancedFoliageActor_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct AInstancedFoliageActor_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct AInstancedFoliageActor_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct AInstancedFoliageActor_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct AInstancedFoliageActor_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct AInstancedFoliageActor_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct AInstancedFoliageActor_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct AInstancedFoliageActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct AInstancedFoliageActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct AInstancedFoliageActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct AInstancedFoliageActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct AInstancedFoliageActor_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct AInstancedFoliageActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct AInstancedFoliageActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct AInstancedFoliageActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct AInstancedFoliageActor_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct AInstancedFoliageActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct AInstancedFoliageActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct AInstancedFoliageActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct AInstancedFoliageActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct AInstancedFoliageActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct AInstancedFoliageActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct AInstancedFoliageActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct AInstancedFoliageActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct AInstancedFoliageActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct AInstancedFoliageActor_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct AInstancedFoliageActor_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct AInstancedFoliageActor_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct AInstancedFoliageActor_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct AInstancedFoliageActor_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct AInstancedFoliageActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct AInstancedFoliageActor_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct AInstancedFoliageActor_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct AInstancedFoliageActor_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct AInstancedFoliageActor_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct AInstancedFoliageActor_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct AInstancedFoliageActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct AInstancedFoliageActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct AInstancedFoliageActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct AInstancedFoliageActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct AInstancedFoliageActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct AInstancedFoliageActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct AInstancedFoliageActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct AInstancedFoliageActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct AInstancedFoliageActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct AInstancedFoliageActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct AInstancedFoliageActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct AInstancedFoliageActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct AInstancedFoliageActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct AInstancedFoliageActor_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct AInstancedFoliageActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct AInstancedFoliageActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct AInstancedFoliageActor_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct AInstancedFoliageActor_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct AInstancedFoliageActor_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct AInstancedFoliageActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct AInstancedFoliageActor_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct AInstancedFoliageActor_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct AInstancedFoliageActor_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetStaticMesh
struct UInteractiveFoliageComponent_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetForcedLodModel
struct UInteractiveFoliageComponent_SetForcedLodModel_Params
{
	int                                                NewForcedLodModel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.OnRep_StaticMesh
struct UInteractiveFoliageComponent_OnRep_StaticMesh_Params
{
	class UStaticMesh*                                 OldStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.GetLocalBounds
struct UInteractiveFoliageComponent_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
	int                                                NumSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

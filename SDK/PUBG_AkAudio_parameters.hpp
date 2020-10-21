#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.IsCurrentlyPlaying
struct AAkAmbientSound_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseVolumesForRTPCs
struct UAkComponent_UseVolumesForRTPCs_Params
{
	bool                                               inUseVolumesForRTPCs;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseIndoorCheck
struct UAkComponent_UseIndoorCheck_Params
{
	bool                                               inUseIndoorCheck;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.StopPlayingID
struct UAkComponent_StopPlayingID_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.Stop
struct UAkComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SwitchState;                                              // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetMinVolumeRTPCUpdateInterval
struct UAkComponent_SetMinVolumeRTPCUpdateInterval_Params
{
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetActiveListeners
struct UAkComponent_SetActiveListeners_Params
{
	int                                                in_uListenerMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	struct FString                                     Trigger;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkComponent_PostAssociatedAkEvent_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkComponent_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.IsUsingVolumesForRTPCs
struct UAkComponent_IsUsingVolumesForRTPCs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.IsCurrentlyPlaying
struct UAkComponent_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.CalculateRelativeSpeed
struct UAkComponent_CalculateRelativeSpeed_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.ToggleVisibility
struct UAkSoundVolumeComponentBase_ToggleVisibility_Params
{
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SnapTo
struct UAkSoundVolumeComponentBase_SnapTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldScale3D
struct UAkSoundVolumeComponentBase_SetWorldScale3D_Params
{
	struct FVector                                     NewScale;                                                 // (Parm, IsPlainOldData)
};

// Function Engine.SceneComponent.SetVisibility
struct UAkSoundVolumeComponentBase_SetVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeScale3D
struct UAkSoundVolumeComponentBase_SetRelativeScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (Parm, IsPlainOldData)
};

// Function Engine.SceneComponent.SetIsAttachmentReplicated
struct UAkSoundVolumeComponentBase_SetIsAttachmentReplicated_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetIsAttachmentReferenceReplicated
struct UAkSoundVolumeComponentBase_SetIsAttachmentReferenceReplicated_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetHiddenInGame
struct UAkSoundVolumeComponentBase_SetHiddenInGame_Params
{
	bool                                               NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetAbsolute
struct UAkSoundVolumeComponentBase_SetAbsolute_Params
{
	bool                                               bNewAbsoluteLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewAbsoluteRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewAbsoluteScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.ResetRelativeTransform
struct UAkSoundVolumeComponentBase_ResetRelativeTransform_Params
{
};

// Function Engine.SceneComponent.OnRep_Visibility
struct UAkSoundVolumeComponentBase_OnRep_Visibility_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.OnRep_Transform
struct UAkSoundVolumeComponentBase_OnRep_Transform_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachSocketName
struct UAkSoundVolumeComponentBase_OnRep_AttachSocketName_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachParent
struct UAkSoundVolumeComponentBase_OnRep_AttachParent_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachChildren
struct UAkSoundVolumeComponentBase_OnRep_AttachChildren_Params
{
};

// Function Engine.SceneComponent.K2_SetWorldTransform
struct UAkSoundVolumeComponentBase_K2_SetWorldTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldRotation
struct UAkSoundVolumeComponentBase_K2_SetWorldRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
struct UAkSoundVolumeComponentBase_K2_SetWorldLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldLocation
struct UAkSoundVolumeComponentBase_K2_SetWorldLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeTransform
struct UAkSoundVolumeComponentBase_K2_SetRelativeTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeRotation
struct UAkSoundVolumeComponentBase_K2_SetRelativeRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
struct UAkSoundVolumeComponentBase_K2_SetRelativeLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeLocation
struct UAkSoundVolumeComponentBase_K2_SetRelativeLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentToWorld
struct UAkSoundVolumeComponentBase_K2_GetComponentToWorld_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentScale
struct UAkSoundVolumeComponentBase_K2_GetComponentScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentRotation
struct UAkSoundVolumeComponentBase_K2_GetComponentRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentLocation
struct UAkSoundVolumeComponentBase_K2_GetComponentLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_DetachFromComponent
struct UAkSoundVolumeComponentBase_K2_DetachFromComponent_Params
{
	EDetachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallModify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AttachToComponent
struct UAkSoundVolumeComponentBase_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AttachTo
struct UAkSoundVolumeComponentBase_K2_AttachTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldTransform
struct UAkSoundVolumeComponentBase_K2_AddWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldRotation
struct UAkSoundVolumeComponentBase_K2_AddWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldOffset
struct UAkSoundVolumeComponentBase_K2_AddWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddRelativeRotation
struct UAkSoundVolumeComponentBase_K2_AddRelativeRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddRelativeLocation
struct UAkSoundVolumeComponentBase_K2_AddRelativeLocation_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalTransform
struct UAkSoundVolumeComponentBase_K2_AddLocalTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalRotation
struct UAkSoundVolumeComponentBase_K2_AddLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalOffset
struct UAkSoundVolumeComponentBase_K2_AddLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.IsVisible
struct UAkSoundVolumeComponentBase_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsSimulatingPhysics
struct UAkSoundVolumeComponentBase_IsSimulatingPhysics_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsAnySimulatingPhysics
struct UAkSoundVolumeComponentBase_IsAnySimulatingPhysics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetUpVector
struct UAkSoundVolumeComponentBase_GetUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketTransform
struct UAkSoundVolumeComponentBase_GetSocketTransform_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketRotation
struct UAkSoundVolumeComponentBase_GetSocketRotation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketQuaternion
struct UAkSoundVolumeComponentBase_GetSocketQuaternion_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketLocation
struct UAkSoundVolumeComponentBase_GetSocketLocation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRightVector
struct UAkSoundVolumeComponentBase_GetRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRelativeTransform
struct UAkSoundVolumeComponentBase_GetRelativeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetPhysicsVolume
struct UAkSoundVolumeComponentBase_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetParentComponents
struct UAkSoundVolumeComponentBase_GetParentComponents_Params
{
	TArray<class USceneComponent*>                     Parents;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetNumChildrenComponents
struct UAkSoundVolumeComponentBase_GetNumChildrenComponents_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetForwardVector
struct UAkSoundVolumeComponentBase_GetForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetComponentVelocity
struct UAkSoundVolumeComponentBase_GetComponentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetChildrenComponents
struct UAkSoundVolumeComponentBase_GetChildrenComponents_Params
{
	bool                                               bIncludeAllDescendants;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetChildComponent
struct UAkSoundVolumeComponentBase_GetChildComponent_Params
{
	int                                                ChildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAttachSocketName
struct UAkSoundVolumeComponentBase_GetAttachSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAttachParent
struct UAkSoundVolumeComponentBase_GetAttachParent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAllSocketNames
struct UAkSoundVolumeComponentBase_GetAllSocketNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.SceneComponent.DoesSocketExist
struct UAkSoundVolumeComponentBase_DoesSocketExist_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.DetachFromParent
struct UAkSoundVolumeComponentBase_DetachFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallModify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

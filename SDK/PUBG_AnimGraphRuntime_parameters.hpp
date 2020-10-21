#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.AnimInstance.UnlockAIResources
struct UAnimSequencerInstance_UnlockAIResources_Params
{
	bool                                               bUnlockMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnlockAILogic;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.TryGetPawnOwner
struct UAnimSequencerInstance_TryGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.StopSlotAnimation
struct UAnimSequencerInstance_StopSlotAnimation_Params
{
	float                                              inBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SnapshotPose
struct UAnimSequencerInstance_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 // (Parm, OutParm, ReferenceParm)
};

// Function Engine.AnimInstance.SetRootMotionMode
struct UAnimSequencerInstance_SetRootMotionMode_Params
{
	TEnumAsByte<ERootMotionMode>                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SetMorphTarget
struct UAnimSequencerInstance_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SavePoseSnapshot
struct UAnimSequencerInstance_SavePoseSnapshot_Params
{
	struct FName                                       SnapshotName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
struct UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeToStartMontageAt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimation
struct UAnimSequencerInstance_PlaySlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Stop
struct UAnimSequencerInstance_Montage_Stop_Params
{
	float                                              inBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPosition
struct UAnimSequencerInstance_Montage_SetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPlayRate
struct UAnimSequencerInstance_Montage_SetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPlayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetNextSection
struct UAnimSequencerInstance_Montage_SetNextSection_Params
{
	struct FName                                       SectionNameToChange;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Resume
struct UAnimSequencerInstance_Montage_Resume_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Play
struct UAnimSequencerInstance_Montage_Play_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMontagePlayReturnType                             ReturnValueType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeToStartMontageAt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Pause
struct UAnimSequencerInstance_Montage_Pause_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
struct UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSection
struct UAnimSequencerInstance_Montage_JumpToSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsPlaying
struct UAnimSequencerInstance_Montage_IsPlaying_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsActive
struct UAnimSequencerInstance_Montage_IsActive_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPosition
struct UAnimSequencerInstance_Montage_GetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPlayRate
struct UAnimSequencerInstance_Montage_GetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetIsStopped
struct UAnimSequencerInstance_Montage_GetIsStopped_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetCurrentSection
struct UAnimSequencerInstance_Montage_GetCurrentSection_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetBlendTime
struct UAnimSequencerInstance_Montage_GetBlendTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.LockAIResources
struct UAnimSequencerInstance_LockAIResources_Params
{
	bool                                               bLockMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
struct UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params
{
	struct FName                                       InSyncGroupName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PreviousMarker;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextMarker;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRespectMarkerOrder;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.IsPlayingSlotAnimation
struct UAnimSequencerInstance_IsPlayingSlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.IsAnyMontagePlaying
struct UAnimSequencerInstance_IsAnyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
struct UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params
{
	struct FName                                       SyncGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MarkerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetTimeToClosestMarker
struct UAnimSequencerInstance_GetTimeToClosestMarker_Params
{
	struct FName                                       SyncGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MarkerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMarkerTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetSyncGroupPosition
struct UAnimSequencerInstance_GetSyncGroupPosition_Params
{
	struct FName                                       InSyncGroupName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMarkerSyncAnimPosition                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AnimInstance.GetStateWeight
struct UAnimSequencerInstance_GetStateWeight_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
struct UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
struct UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
struct UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTime
struct UAnimSequencerInstance_GetRelevantAnimTime_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimLength
struct UAnimSequencerInstance_GetRelevantAnimLength_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningComponent
struct UAnimSequencerInstance_GetOwningComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningActor
struct UAnimSequencerInstance_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
struct UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
struct UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
struct UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceStateWeight
struct UAnimSequencerInstance_GetInstanceStateWeight_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceMachineWeight
struct UAnimSequencerInstance_GetInstanceMachineWeight_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
struct UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params
{
	int                                                AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params
{
	int                                                AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params
{
	int                                                AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
struct UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params
{
	int                                                AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
struct UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params
{
	int                                                AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurveValue
struct UAnimSequencerInstance_GetCurveValue_Params
{
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateName
struct UAnimSequencerInstance_GetCurrentStateName_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateElapsedTime
struct UAnimSequencerInstance_GetCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentActiveMontage
struct UAnimSequencerInstance_GetCurrentActiveMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEndFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEnd_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerLength
struct UAnimSequencerInstance_GetAnimAssetPlayerLength_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.ClearMorphTargets
struct UAnimSequencerInstance_ClearMorphTargets_Params
{
};

// Function Engine.AnimInstance.CalculateDirection
struct UAnimSequencerInstance_CalculateDirection_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintUpdateAnimation
struct UAnimSequencerInstance_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
struct UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params
{
};

// Function Engine.AnimInstance.BlueprintInitializeAnimation
struct UAnimSequencerInstance_BlueprintInitializeAnimation_Params
{
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayMontageCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

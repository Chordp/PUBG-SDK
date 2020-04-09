#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimGraphRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x03A0 - 0x03A0)
class UAnimSequencerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimSequencerInstance"));

		return ptr;
	}


	void STATIC_UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_TryGetPawnOwner();
	void STATIC_StopSlotAnimation(float inBlendOutTime, const struct FName& SlotNodeName);
	void STATIC_SnapshotPose(struct FPoseSnapshot* Snapshot);
	void STATIC_SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);
	void STATIC_SetMorphTarget(const struct FName& MorphTargetName, float Value);
	void STATIC_SavePoseSnapshot(const struct FName& SnapshotName);
	class UAnimMontage* STATIC_PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	float STATIC_PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	void STATIC_Montage_Stop(float inBlendOutTime, class UAnimMontage* Montage);
	void STATIC_Montage_SetPosition(class UAnimMontage* Montage, float NewPosition);
	void STATIC_Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void STATIC_Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	void STATIC_Montage_Resume(class UAnimMontage* Montage);
	float STATIC_Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt);
	void STATIC_Montage_Pause(class UAnimMontage* Montage);
	void STATIC_Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void STATIC_Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool STATIC_Montage_IsPlaying(class UAnimMontage* Montage);
	bool STATIC_Montage_IsActive(class UAnimMontage* Montage);
	float STATIC_Montage_GetPosition(class UAnimMontage* Montage);
	float STATIC_Montage_GetPlayRate(class UAnimMontage* Montage);
	bool STATIC_Montage_GetIsStopped(class UAnimMontage* Montage);
	struct FName STATIC_Montage_GetCurrentSection(class UAnimMontage* Montage);
	float STATIC_Montage_GetBlendTime(class UAnimMontage* Montage);
	void STATIC_LockAIResources(bool bLockMovement, bool LockAILogic);
	bool STATIC_IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder);
	bool STATIC_IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	bool STATIC_IsAnyMontagePlaying();
	bool STATIC_HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName);
	bool STATIC_GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition STATIC_GetSyncGroupPosition(const struct FName& InSyncGroupName);
	float STATIC_GetStateWeight(int MachineIndex, int StateIndex);
	float STATIC_GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	float STATIC_GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	float STATIC_GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	float STATIC_GetRelevantAnimTime(int MachineIndex, int StateIndex);
	float STATIC_GetRelevantAnimLength(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* STATIC_GetOwningComponent();
	class AActor* STATIC_GetOwningActor();
	float STATIC_GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	float STATIC_GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	float STATIC_GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	float STATIC_GetInstanceStateWeight(int MachineIndex, int StateIndex);
	float STATIC_GetInstanceMachineWeight(int MachineIndex);
	float STATIC_GetInstanceCurrentStateElapsedTime(int MachineIndex);
	float STATIC_GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	float STATIC_GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	float STATIC_GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	float STATIC_GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	float STATIC_GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	float STATIC_GetCurveValue(const struct FName& CurveName);
	struct FName STATIC_GetCurrentStateName(int MachineIndex);
	float STATIC_GetCurrentStateElapsedTime(int MachineIndex);
	class UAnimMontage* STATIC_GetCurrentActiveMontage();
	float STATIC_GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset);
	void STATIC_ClearMorphTargets();
	float STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintPostEvaluateAnimation();
	void STATIC_BlueprintInitializeAnimation();
};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.KismetAnimationLibrary"));

		return ptr;
	}

};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x00E0 (0x0110 - 0x0030)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0080(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.PlayMontageCallbackProxy"));

		return ptr;
	}


	void STATIC_OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void STATIC_OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void STATIC_OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

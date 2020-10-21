#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0008 (0x0058 - 0x0050)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0050 - 0x0048)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x03B0 - 0x03B0)
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


	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float inBlendOutTime, const struct FName& SlotNodeName);
	void SnapshotPose(struct FPoseSnapshot* Snapshot);
	void SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	void SavePoseSnapshot(const struct FName& SnapshotName);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	void Montage_Stop(float inBlendOutTime, class UAnimMontage* Montage);
	void Montage_SetPosition(class UAnimMontage* Montage, float NewPosition);
	void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	void Montage_Resume(class UAnimMontage* Montage);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt);
	void Montage_Pause(class UAnimMontage* Montage);
	void Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool Montage_IsPlaying(class UAnimMontage* Montage);
	bool Montage_IsActive(class UAnimMontage* Montage);
	float Montage_GetPosition(class UAnimMontage* Montage);
	float Montage_GetPlayRate(class UAnimMontage* Montage);
	bool Montage_GetIsStopped(class UAnimMontage* Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	float Montage_GetBlendTime(class UAnimMontage* Montage);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	bool IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName);
	bool GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(const struct FName& InSyncGroupName);
	float GetStateWeight(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTime(int MachineIndex, int StateIndex);
	float GetRelevantAnimLength(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	float GetInstanceStateWeight(int MachineIndex, int StateIndex);
	float GetInstanceMachineWeight(int MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	float GetCurveValue(const struct FName& CurveName);
	struct FName GetCurrentStateName(int MachineIndex);
	float GetCurrentStateElapsedTime(int MachineIndex);
	class UAnimMontage* GetCurrentActiveMontage();
	float STATIC_GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset);
	void ClearMorphTargets();
	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0040 - 0x0040)
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
// 0x00E0 (0x0120 - 0x0040)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0090(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.PlayMontageCallbackProxy"));

		return ptr;
	}


	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

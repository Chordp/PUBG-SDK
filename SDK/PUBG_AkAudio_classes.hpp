#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAutoPlayInterface
// 0x0000 (0x0040 - 0x0040)
class UAkAutoPlayInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAutoPlayInterface"));

		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0020 (0x0430 - 0x0410)
class AAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class UAkComponent*                                AkComponent;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              AutoPlayDistance;                                         // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAmbientSound"));

		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
	bool IsCurrentlyPlaying();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0048 - 0x0040)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioBank"));

		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0058 - 0x0040)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0050 - 0x0040)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAuxBus"));

		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0210 (0x06B0 - 0x04A0)
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x04B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseDoppler;                                              // 0x04B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04B2(0x0002) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x04B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04D0(0x0004) MISSED OFFSET
	bool                                               bUseReverbVolumes;                                        // 0x04D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x87];                                      // 0x04D5(0x0087) MISSED OFFSET
	struct FAkOcclusionSettings                        OcclusionSettings;                                        // 0x055C(0x0010) (Edit)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x056C(0x00A8) MISSED OFFSET
	float                                              LastRelativeSpeed;                                        // 0x0614(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x98];                                      // 0x0618(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkComponent"));

		return ptr;
	}


	void UseVolumesForRTPCs(bool inUseVolumesForRTPCs);
	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseIndoorCheck(bool inUseIndoorCheck);
	void StopPlayingID(int PlayingID);
	void Stop();
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetMinVolumeRTPCUpdateInterval(float Interval);
	void SetAttenuationScalingFactor(float Value);
	void SetActiveListeners(int in_uListenerMask);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEvent();
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	bool IsUsingVolumesForRTPCs();
	bool IsCurrentlyPlaying();
	float GetAttenuationRadius();
	void CalculateRelativeSpeed(float DeltaTime);
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0040 - 0x0040)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkGameplayStatics"));

		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0480 - 0x0448)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0448(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkReverbVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0078 (0x00B8 - 0x0040)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0048(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0058(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0068(0x0010) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0078(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0079(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettings"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolume
// 0x0008 (0x0418 - 0x0410)
class AAkSoundVolume : public AActor
{
public:
	class UAkSoundVolumeComponent*                     SoundVolumeComponent;                                     // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeComponentBase
// 0x0010 (0x04B0 - 0x04A0)
class UAkSoundVolumeComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponentBase"));

		return ptr;
	}


	void ToggleVisibility(bool bPropagateToChildren);
	bool SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	void SetWorldScale3D(const struct FVector& NewScale);
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void SetRelativeScale3D(const struct FVector& NewScale3D);
	void SetIsAttachmentReplicated(bool ShouldReplicate);
	void SetIsAttachmentReferenceReplicated(bool ShouldReplicate);
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void ResetRelativeTransform();
	void OnRep_Visibility(bool OldValue);
	void OnRep_Transform();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void OnRep_AttachChildren();
	void K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
	bool K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	bool K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	void K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsVisible();
	bool IsSimulatingPhysics(const struct FName& BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	struct FRotator GetSocketRotation(const struct FName& InSocketName);
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	struct FVector GetSocketLocation(const struct FName& InSocketName);
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int ChildIndex);
	struct FName GetAttachSocketName();
	class USceneComponent* GetAttachParent();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(const struct FName& InSocketName);
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};


// Class AkAudio.AkSoundVolumeComponent
// 0x0150 (0x0600 - 0x04B0)
class UAkSoundVolumeComponent : public UAkSoundVolumeComponentBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x04B0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortalComponent
// 0x00F0 (0x05A0 - 0x04B0)
class UAkSoundVolumePortalComponent : public UAkSoundVolumeComponentBase
{
public:
	struct FAkReverbSoundVolumePortal                  Struct;                                                   // 0x04B0(0x00F0) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortalComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeManager
// 0x0160 (0x01A8 - 0x0048)
class UAkSoundVolumeManager : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0048(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeManager"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortal
// 0x0008 (0x0418 - 0x0410)
class AAkSoundVolumePortal : public AActor
{
public:
	class UAkSoundVolumePortalComponent*               SoundVolumePortalComponent;                               // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortal"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeRTPCs
// 0x0010 (0x0058 - 0x0048)
class UAkSoundVolumeRTPCs : public UDataAsset
{
public:
	TArray<struct FAkSoundVolumeRTPC>                  RTPCData;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeRTPCs"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumesContainerComponent
// 0x0060 (0x0270 - 0x0210)
class UAkSoundVolumesContainerComponent : public UActorComponent
{
public:
	TArray<struct FAkReverbSoundVolume>                Volumes;                                                  // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FAkReverbSoundVolumePortal>          Portals;                                                  // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FAkReverbSoundVolumeBakedData>       VolumesBakedData;                                         // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FAkReverbSoundPortalsBakedData>      PortalsBakedData;                                         // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumesContainerComponent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00C0 - 0x00A8)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00C0 - 0x00A8)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0048 - 0x0040)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0048 - 0x0040)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x0020 (0x0100 - 0x00E0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UAkAudioEvent*                               Event;                                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x00E8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x0170 - 0x00E0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00F8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x00D8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkTrack"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventTrack"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCTrack"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

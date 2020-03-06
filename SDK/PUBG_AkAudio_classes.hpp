#pragma once

// PUBG (7.1.6.5) SDK

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
// 0x0000 (0x0028 - 0x0028)
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
// 0x0020 (0x0420 - 0x0400)
class AAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET
	class UAkComponent*                                AkComponent;                                              // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              AutoPlayDistance;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
// 0x0008 (0x0030 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioBank"));

		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

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
	struct FAkOcclusionSettings                        OcclusionSettings;                                        // 0x055C(0x0014) (Edit)
	unsigned char                                      UnknownData04[0xA4];                                      // 0x0570(0x00A4) MISSED OFFSET
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
// 0x0000 (0x0028 - 0x0028)
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


	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_UnloadBankByName(const struct FString& BankName);
	void STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const struct FString& Filename);
	void STATIC_StartOutputCapture(const struct FString& Filename);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
	void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
	void STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, bool UseReverb);
	int STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, bool UseReverb);
	int STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const struct FString& BankName);
	void STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	void STATIC_ClearBanks();
	void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0470 - 0x0438)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0438(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkReverbVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0078 (0x00A0 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0060(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0061(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettings"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolume
// 0x0008 (0x0408 - 0x0400)
class AAkSoundVolume : public AActor
{
public:
	class UAkSoundVolumeComponent*                     SoundVolumeComponent;                                     // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeComponentBase
// 0x0030 (0x04D0 - 0x04A0)
class UAkSoundVolumeComponentBase : public USceneComponent
{
public:
	ESoundVolumeShape                                  Shape;                                                    // 0x04A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	struct FVector                                     BoxExtents;                                               // 0x04A4(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x04B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             ShapeComponent;                                           // 0x04B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponentBase"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeComponent
// 0x00D0 (0x05A0 - 0x04D0)
class UAkSoundVolumeComponent : public UAkSoundVolumeComponentBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x04D0(0x0048) MISSED OFFSET
	class UAkSoundVolumeRTPCs*                         RTPCs;                                                    // 0x0518(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RolloffDistance;                                          // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoVerticalRolloff;                                        // 0x0528(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              IndoorsAmount;                                            // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAkIgnoreRolloffDirection                          IgnoreRolloffDir;                                         // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6F];                                      // 0x0531(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortalComponent
// 0x0050 (0x0520 - 0x04D0)
class UAkSoundVolumePortalComponent : public UAkSoundVolumeComponentBase
{
public:
	float                                              RolloffDistance;                                          // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Directionality;                                           // 0x04D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x04D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortalComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortal
// 0x0008 (0x0408 - 0x0400)
class AAkSoundVolumePortal : public AActor
{
public:
	class UAkSoundVolumePortalComponent*               SoundVolumePortalComponent;                               // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortal"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeRTPCs
// 0x0010 (0x0040 - 0x0030)
class UAkSoundVolumeRTPCs : public UDataAsset
{
public:
	TArray<struct FAkSoundVolumeRTPC>                  RTPCData;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeRTPCs"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x0020 (0x00F0 - 0x00D0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UAkAudioEvent*                               Event;                                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x00D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x0160 - 0x00D0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x00C8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkTrack"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00D0 - 0x00D0)
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
// 0x0000 (0x00D0 - 0x00D0)
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

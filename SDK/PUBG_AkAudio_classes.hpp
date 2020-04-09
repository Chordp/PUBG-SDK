#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x0030 - 0x0030)
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
// 0x0020 (0x0408 - 0x03E8)
class AAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	class UAkComponent*                                AkComponent;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              AutoPlayDistance;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAmbientSound"));

		return ptr;
	}


	void STATIC_StopAmbientSound();
	void STATIC_StartAmbientSound();
	bool STATIC_IsCurrentlyPlaying();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0038 - 0x0030)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioBank"));

		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0048 - 0x0030)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0040 - 0x0030)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAuxBus"));

		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0210 (0x06C0 - 0x04B0)
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseDoppler;                                              // 0x04C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04C2(0x0002) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04E0(0x0004) MISSED OFFSET
	bool                                               bUseReverbVolumes;                                        // 0x04E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x87];                                      // 0x04E5(0x0087) MISSED OFFSET
	struct FAkOcclusionSettings                        OcclusionSettings;                                        // 0x056C(0x0014) (Edit)
	unsigned char                                      UnknownData04[0xA4];                                      // 0x0580(0x00A4) MISSED OFFSET
	float                                              LastRelativeSpeed;                                        // 0x0624(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x98];                                      // 0x0628(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkComponent"));

		return ptr;
	}


	void STATIC_UseVolumesForRTPCs(bool inUseVolumesForRTPCs);
	void STATIC_UseReverbVolumes(bool inUseReverbVolumes);
	void STATIC_UseIndoorCheck(bool inUseIndoorCheck);
	void STATIC_StopPlayingID(int PlayingID);
	void STATIC_Stop();
	void STATIC_SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void STATIC_SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void STATIC_SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void STATIC_SetOutputBusVolume(float BusVolume);
	void STATIC_SetMinVolumeRTPCUpdateInterval(float Interval);
	void STATIC_SetAttenuationScalingFactor(float Value);
	void STATIC_SetActiveListeners(int in_uListenerMask);
	void STATIC_PostTrigger(const struct FString& Trigger);
	int STATIC_PostAssociatedAkEvent();
	int STATIC_PostAkEventByName(const struct FString& in_EventName);
	int STATIC_PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	bool STATIC_IsUsingVolumesForRTPCs();
	bool STATIC_IsCurrentlyPlaying();
	float STATIC_GetAttenuationRadius();
	void STATIC_CalculateRelativeSpeed(float DeltaTime);
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0030 - 0x0030)
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
// 0x0038 (0x0458 - 0x0420)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x0450(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkReverbVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0078 (0x00A8 - 0x0030)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0038(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0048(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0058(0x0010) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0068(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0069(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettings"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolume
// 0x0008 (0x03F0 - 0x03E8)
class AAkSoundVolume : public AActor
{
public:
	class UAkSoundVolumeComponent*                     SoundVolumeComponent;                                     // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeComponentBase
// 0x0030 (0x04E0 - 0x04B0)
class UAkSoundVolumeComponentBase : public USceneComponent
{
public:
	ESoundVolumeShape                                  Shape;                                                    // 0x04B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FVector                                     BoxExtents;                                               // 0x04B4(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x04C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             ShapeComponent;                                           // 0x04C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponentBase"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeComponent
// 0x00D0 (0x05B0 - 0x04E0)
class UAkSoundVolumeComponent : public UAkSoundVolumeComponentBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x04E0(0x0048) MISSED OFFSET
	class UAkSoundVolumeRTPCs*                         RTPCs;                                                    // 0x0528(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RolloffDistance;                                          // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoVerticalRolloff;                                        // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	float                                              IndoorsAmount;                                            // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAkIgnoreRolloffDirection                          IgnoreRolloffDir;                                         // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6F];                                      // 0x0541(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortalComponent
// 0x0050 (0x0530 - 0x04E0)
class UAkSoundVolumePortalComponent : public UAkSoundVolumeComponentBase
{
public:
	float                                              RolloffDistance;                                          // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Directionality;                                           // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x04E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortalComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumePortal
// 0x0008 (0x03F0 - 0x03E8)
class AAkSoundVolumePortal : public AActor
{
public:
	class UAkSoundVolumePortalComponent*               SoundVolumePortalComponent;                               // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumePortal"));

		return ptr;
	}

};


// Class AkAudio.AkSoundVolumeRTPCs
// 0x0010 (0x0048 - 0x0038)
class UAkSoundVolumeRTPCs : public UDataAsset
{
public:
	TArray<struct FAkSoundVolumeRTPC>                  RTPCData;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSoundVolumeRTPCs"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

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

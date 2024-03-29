#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MovieSceneTracks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0020 (0x00F0 - 0x00D0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FString                                     PropertyPath;                                             // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00E0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertyTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (0x00F0 - 0x00E0)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             // 0x00E0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (0x0110 - 0x00F0)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainTx : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      bConstrainTy : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      bConstrainTz : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      bConstrainRx : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      bConstrainRy : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      bConstrainRz : 1;                                         // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0101(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (0x0170 - 0x00F0)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                              // 0x00F0(0x0070) (Edit)
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0162(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x0164(0x0001) (Edit)
	unsigned char                                      bReverse : 1;                                             // 0x0164(0x0001) (Edit)
	unsigned char                                      bForceUpright : 1;                                        // 0x0164(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0165(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0400 (0x04E0 - 0x00E0)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FRichCurve                                  Translation[0x3];                                         // 0x00E8(0x0070)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x0238(0x0070)
	struct FRichCurve                                  Scale[0x3];                                               // 0x0388(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x00A0 (0x0180 - 0x00E0)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0158(0x0010) MISSED OFFSET
	TArray<struct FString>                             ActorGuidStrings;                                         // 0x0168(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0130 (0x0210 - 0x00E0)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x00EC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x00F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioVolume;                                              // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FRichCurve                                  SoundVolume;                                              // 0x00F8(0x0070) (Edit)
	struct FRichCurve                                  PitchMultiplier;                                          // 0x0168(0x0070) (Edit)
	bool                                               bSuppressSubtitles;                                       // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x01E0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x01F0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   // 0x0200(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	bool                                               DefaultValue;                                             // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FIntegralCurve                              BoolCurve;                                                // 0x00F0(0x0070)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBoolSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0160 - 0x0160)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSpawnSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FIntegralCurve                              ByteCurve;                                                // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (0x0120 - 0x00E0)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                 // 0x00E0(0x0020) (Edit)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0118(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               // 0x00E0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (0x0120 - 0x00E0)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x00E0(0x0020) (Edit)
	class UClass*                                      ShakeClass;                                               // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0110(0x000C) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01D0 (0x02B0 - 0x00E0)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FRichCurve                                  RedCurve;                                                 // 0x00E8(0x0070)
	struct FRichCurve                                  GreenCurve;                                               // 0x0158(0x0070)
	struct FRichCurve                                  BlueCurve;                                                // 0x01C8(0x0070)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0238(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FIntegralCurve                              EnumCurve;                                                // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0110 (0x01F0 - 0x00E0)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x00E0(0x0068) (Deprecated)
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0148(0x0020)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0168(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x00F0 - 0x00D0)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FGuid                                       ObjectGuid;                                               // 0x00D8(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSpawnTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0020 (0x00F0 - 0x00D0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00E0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0010 (0x0170 - 0x0160)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	unsigned char                                      bFadeAudio : 1;                                           // 0x0168(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0169(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0160 - 0x0160)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FIntegralCurve                              IntegerCurve;                                             // 0x00E8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (0x0100 - 0x00E0)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	ELevelVisibility                                   Visibility;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x00E8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilitySection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (0x0110 - 0x00E0)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0100(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParameterSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentMaterialTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleParameterTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                             // 0x00E0(0x0070)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBoolTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVisibilityTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            // 0x00F0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00C0 (0x01A0 - 0x00E0)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   // 0x00E0(0x0090) (Edit)
	class UAnimSequence*                               AnimSequence;                                             // 0x0170(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x0178(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0180(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0184(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0188(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x018C(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x0190(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FStringCurve                                StringCurve;                                              // 0x00E8(0x0078)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00E0(0x0014) (Edit)
	float                                              StartOffset;                                              // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0108(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0138(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSubSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0010 (0x0160 - 0x0150)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotSection"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSubTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotTrack"));

		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01D0 (0x02B0 - 0x00E0)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FRichCurve                                  Curves[0x4];                                              // 0x00E8(0x0070)
	int                                                ChannelsUsed;                                             // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorSection"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

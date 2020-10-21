#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.EOcclusionCalculationMode
enum class EOcclusionCalculationMode : uint8_t
{
	SingleRaycast                  = 0,
	MultiRaycast                   = 1,
	EOcclusionCalculationMode_MAX  = 2
};


// Enum AkAudio.EOcclusionMode
enum class EOcclusionMode : uint8_t
{
	NoOcclusion                    = 0,
	OnPostEventWithRefresh         = 1,
	OnPostEvent                    = 2,
	OnlyRefresh                    = 3,
	EOcclusionMode_MAX             = 4
};


// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	ESoundVolumeShape_MAX          = 3
};


// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Front                          = 3,
	Back                           = 4,
	LeftAndRight                   = 5,
	LeftAndFront                   = 6,
	LeftAndBack                    = 7,
	RightAndFront                  = 8,
	RightAndBack                   = 9,
	BackAndFront                   = 10,
	EAkIgnoreRolloffDirection_MAX  = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkOcclusionSettings
// 0x0010
struct FAkOcclusionSettings
{
	EOcclusionMode                                     Mode;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EOcclusionCalculationMode                          CalculationMode;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              RefreshInterval;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOcclusionDistance;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkSoundVolumeBase
// 0x0080
struct FAkSoundVolumeBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (Edit, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (Edit, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0020(0x0009) MISSED OFFSET
	ESoundVolumeShape                                  Shape;                                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FVector                                     BoxExtents;                                               // 0x002C(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct AkAudio.AkReverbSoundVolume
// 0x00D8 (0x0158 - 0x0080)
struct FAkReverbSoundVolume : public FAkSoundVolumeBase
{
	TMap<class UAkAuxBus*, float>                      ReverbSends;                                              // 0x0080(0x0050) (Edit, ZeroConstructor)
	class UAkSoundVolumeRTPCs*                         RTPCs;                                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RolloffDistance;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNoVerticalRolloff;                                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              IndoorsAmount;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAkIgnoreRolloffDirection                          IgnoreRolloffDir;                                         // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x00E9(0x006F) MISSED OFFSET
};

// ScriptStruct AkAudio.AkReverbSoundVolumePortal
// 0x0070 (0x00F0 - 0x0080)
struct FAkReverbSoundVolumePortal : public FAkSoundVolumeBase
{
	float                                              Openness;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOpenness;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RolloffDistance;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Directionality;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0090(0x0060) MISSED OFFSET
};

// ScriptStruct AkAudio.AkSoundVolumeRTPC
// 0x0018
struct FAkSoundVolumeRTPC
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AkReverbSoundVolumeBakedData
// 0x0018
struct FAkReverbSoundVolumeBakedData
{
	TArray<int>                                        OverlappingVolumes;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               AreConnectedPortalsBaked;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkReverbSoundPortalsBakedData
// 0x0008
struct FAkReverbSoundPortalsBakedData
{
	int                                                FrontSideVolume;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BackSideVolume;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0020
struct FMovieSceneAkAudioEventTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0020
struct FMovieSceneAkAudioRTPCTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0080
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0070)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

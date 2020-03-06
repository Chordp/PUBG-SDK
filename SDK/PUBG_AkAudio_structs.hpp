#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_MovieScene_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_Engine_classes.hpp"

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
// 0x0014
struct FAkOcclusionSettings
{
	EOcclusionMode                                     Mode;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RefreshInterval;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOcclusionDistance;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EOcclusionCalculationMode                          CalculationMode;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkSoundVolumeRTPC
// 0x0018
struct FAkSoundVolumeRTPC
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
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

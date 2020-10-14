#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MovieSceneCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureInterface"));

		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings"));

		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x0220 (0x0260 - 0x0040)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	struct FCaptureProtocolID                          CaptureType;                                              // 0x0050(0x0008) (Edit, Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0060(0x0050) (Edit, Config)
	bool                                               bUseSeparateProcess;                                      // 0x00B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00B1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x00C8(0x0010) (Edit, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x188];                                     // 0x00D8(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCapture"));

		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x0260 - 0x0260)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.AutomatedLevelSequenceCapture"));

		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0280 - 0x0260)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0260(0x0004) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x0264(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.LevelCapture"));

		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.MovieSceneCaptureEnvironment"));

		return ptr;
	}


	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0048 - 0x0040)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.FrameGrabberProtocolSettings"));

		return ptr;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0040 - 0x0040)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.BmpImageCaptureSettings"));

		return ptr;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0050 - 0x0048)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.ImageCaptureSettings"));

		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0030 (0x0070 - 0x0040)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0040(0x0010) (Edit, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FStringAssetReference                       PostProcessingMaterial;                                   // 0x0060(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.CompositionGraphCaptureSettings"));

		return ptr;
	}

};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0060 - 0x0048)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                          // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VideoCodec;                                               // 0x0050(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneCapture.VideoCaptureSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

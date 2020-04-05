#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MK3DPublisher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MK3DPublisher.AudioCapturer
<<<<<<< HEAD
// 0x0080 (0x0460 - 0x03E0)
class AAudioCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E0(0x0080) MISSED OFFSET
=======
// 0x0080 (0x0480 - 0x0400)
class AAudioCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0400(0x0080) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.AudioCapturer"));

		return ptr;
	}

};


// Class MK3DPublisher.CaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.CaptureFunctionLibrary"));

		return ptr;
	}


<<<<<<< HEAD
	void STATIC_VideoSaveFileDialog(struct FString* TempPath, TArray<struct FString>* OutFiles);
	struct FString STATIC_TimeStampFileNameWebM();
	struct FString STATIC_TimeSecondsToStringHHMMDD(float* InSeconds);
	struct FString STATIC_TimeSecondsToStringAboutMinute(float* InSeconds);
	void STATIC_StopAudioCapture();
	void STATIC_StartRenderTake(int* Width, int* Height, int* Frame, int* VideoBitrate, struct FString* outputPath, bool* includeFileName);
	void STATIC_StartRender(int* Width, int* Height, int* Frame, int* VideoBitrate, struct FString* outputPath, bool* includeFileName);
	void STATIC_StartDefinedRender();
	void STATIC_StartAudioCapture();
	bool STATIC_SettingVideoResolutionByString(struct FString* Str, int* Width, int* Height, int* VideoBitrate);
	bool STATIC_SettingVideoResolutionByIndex(int* Index, int* Width, int* Height, int* VideoBitrate);
	void STATIC_SetRecordingTime(int* TotalTimeMS);
	void STATIC_SetNoCapture(bool* bNoCapture);
	void STATIC_ResumeAudio();
	void STATIC_PauseAudio();
	void STATIC_OnFixedFrameRateSetting(float* Fps);
=======
	void STATIC_VideoSaveFileDialog(const struct FString& TempPath, TArray<struct FString>* OutFiles);
	struct FString STATIC_TimeStampFileNameWebM();
	struct FString STATIC_TimeSecondsToStringHHMMDD(float InSeconds);
	struct FString STATIC_TimeSecondsToStringAboutMinute(float InSeconds);
	void STATIC_StopAudioCapture();
	void STATIC_StartRenderTake(int Width, int Height, int Frame, int VideoBitrate, const struct FString& outputPath, bool includeFileName);
	void STATIC_StartRender(int Width, int Height, int Frame, int VideoBitrate, const struct FString& outputPath, bool includeFileName);
	void STATIC_StartDefinedRender();
	void STATIC_StartAudioCapture();
	bool STATIC_SettingVideoResolutionByString(const struct FString& Str, int* Width, int* Height, int* VideoBitrate);
	bool STATIC_SettingVideoResolutionByIndex(int Index, int* Width, int* Height, int* VideoBitrate);
	void STATIC_SetRecordingTime(int TotalTimeMS);
	void STATIC_SetNoCapture(bool bNoCapture);
	void STATIC_ResumeAudio();
	void STATIC_PauseAudio();
	void STATIC_OnFixedFrameRateSetting(float Fps);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	void STATIC_OnConsoleVariableSetting();
	void STATIC_OffFixedFrameRateSetting();
	void STATIC_OffConsoleVariableSetting();
	bool STATIC_IsReplayJumpingByCaptureManager();
	bool STATIC_IsRecordingComplete();
	bool STATIC_IsCapturing();
<<<<<<< HEAD
	void STATIC_InputRenderTakes(TArray<float>* InArr);
=======
	void STATIC_InputRenderTakes(TArray<float> InArr);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	void STATIC_InitArrayVideoQualityString(TArray<struct FString>* Array);
	void STATIC_InitArrayResolutionString(TArray<struct FString>* Array);
	void STATIC_InitArrayFrameRateString(TArray<int>* Array);
	struct FString STATIC_GetVideoOutputPath();
	float STATIC_GetProgressPercentFloat();
	int STATIC_GetProgressPercent();
	int STATIC_GetCapturerModeToInt();
<<<<<<< HEAD
	struct FString STATIC_GetArrayItemVideoQualityString(int* inIdx, int* outIdx);
	float STATIC_GetArrayItemVideoQualityRatio(int* inIdx, int* outIdx);
	struct FString STATIC_GetArrayItemResolutions(int* inIdx, int* outIdx);
	int STATIC_GetArrayItemFrameRates(int* inIdx, int* outIdx);
	void STATIC_CancelRender();
	int STATIC_CalculateVideoQuality(int* InHeight);
	float STATIC_CalcProgressPercentFloat(int* TotalTimeMS);
	float STATIC_CalcProgressPercentEx();
	int STATIC_CalcProgressPercent(int* TotalTimeMS);
	void STATIC_CalcProgressCount(int* OutTotalCount, int* OutCurrentNum);
	int STATIC_CalcCaptureAboutMinute(int* Width, int* Height, int* pageCount);
	void STATIC_BindFunctionLibraryReturnCodeDelegate(struct FScriptDelegate* InDelegate);
	void STATIC_BindFunctionLibraryReplayJumpDelegate(struct FScriptDelegate* InDelegate);
	void STATIC_BindFunctionLibraryRederCompleteDelegate(struct FScriptDelegate* InDelegate);
	void STATIC_BindFunctionLibraryOnPauseDelegate(struct FScriptDelegate* InDelegate);
	bool STATIC_AddCaptureWidget(class UUserWidget** InWidget);
=======
	struct FString STATIC_GetArrayItemVideoQualityString(int inIdx, int* outIdx);
	float STATIC_GetArrayItemVideoQualityRatio(int inIdx, int* outIdx);
	struct FString STATIC_GetArrayItemResolutions(int inIdx, int* outIdx);
	int STATIC_GetArrayItemFrameRates(int inIdx, int* outIdx);
	void STATIC_CancelRender();
	int STATIC_CalculateVideoQuality(int InHeight);
	float STATIC_CalcProgressPercentFloat(int TotalTimeMS);
	float STATIC_CalcProgressPercentEx();
	int STATIC_CalcProgressPercent(int TotalTimeMS);
	void STATIC_CalcProgressCount(int* OutTotalCount, int* OutCurrentNum);
	int STATIC_CalcCaptureAboutMinute(int Width, int Height, int pageCount);
	void STATIC_BindFunctionLibraryReturnCodeDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_BindFunctionLibraryReplayJumpDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_BindFunctionLibraryRederCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_BindFunctionLibraryOnPauseDelegate(const struct FScriptDelegate& InDelegate);
	bool STATIC_AddCaptureWidget(class UUserWidget* InWidget);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};


// Class MK3DPublisher.ViewportCapturer
<<<<<<< HEAD
// 0x0098 (0x0478 - 0x03E0)
class AViewportCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03E0(0x0098) MISSED OFFSET
=======
// 0x0098 (0x0498 - 0x0400)
class AViewportCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0400(0x0098) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.ViewportCapturer"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

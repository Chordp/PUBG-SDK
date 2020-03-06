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
// 0x0080 (0x0480 - 0x0400)
class AAudioCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0400(0x0080) MISSED OFFSET

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
	void STATIC_OnConsoleVariableSetting();
	void STATIC_OffFixedFrameRateSetting();
	void STATIC_OffConsoleVariableSetting();
	bool STATIC_IsReplayJumpingByCaptureManager();
	bool STATIC_IsRecordingComplete();
	bool STATIC_IsCapturing();
	void STATIC_InputRenderTakes(TArray<float> InArr);
	void STATIC_InitArrayVideoQualityString(TArray<struct FString>* Array);
	void STATIC_InitArrayResolutionString(TArray<struct FString>* Array);
	void STATIC_InitArrayFrameRateString(TArray<int>* Array);
	struct FString STATIC_GetVideoOutputPath();
	float STATIC_GetProgressPercentFloat();
	int STATIC_GetProgressPercent();
	int STATIC_GetCapturerModeToInt();
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
};


// Class MK3DPublisher.ViewportCapturer
// 0x0098 (0x0498 - 0x0400)
class AViewportCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0400(0x0098) MISSED OFFSET

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

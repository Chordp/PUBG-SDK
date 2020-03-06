// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MK3DPublisher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MK3DPublisher.CaptureFunctionLibrary.VideoSaveFileDialog
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 TempPath                       (Parm, ZeroConstructor)
// TArray<struct FString>         OutFiles                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DACD4270              		 offset:4314270                       

void UCaptureFunctionLibrary::STATIC_VideoSaveFileDialog(const struct FString& TempPath, TArray<struct FString>* OutFiles)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.VideoSaveFileDialog"));

	UCaptureFunctionLibrary_VideoSaveFileDialog_Params params;
	params.TempPath = TempPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFiles != nullptr)
		*OutFiles = params.OutFiles;
}


// Function MK3DPublisher.CaptureFunctionLibrary.TimeStampFileNameWebM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD41E0              		 offset:43141e0                       

struct FString UCaptureFunctionLibrary::STATIC_TimeStampFileNameWebM()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.TimeStampFileNameWebM"));

	UCaptureFunctionLibrary_TimeStampFileNameWebM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringHHMMDD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InSeconds                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD4110              		 offset:4314110                       

struct FString UCaptureFunctionLibrary::STATIC_TimeSecondsToStringHHMMDD(float InSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringHHMMDD"));

	UCaptureFunctionLibrary_TimeSecondsToStringHHMMDD_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringAboutMinute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InSeconds                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD4040              		 offset:4314040                       

struct FString UCaptureFunctionLibrary::STATIC_TimeSecondsToStringAboutMinute(float InSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringAboutMinute"));

	UCaptureFunctionLibrary_TimeSecondsToStringAboutMinute_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.StopAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD4020              		 offset:4314020                       

void UCaptureFunctionLibrary::STATIC_StopAudioCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.StopAudioCapture"));

	UCaptureFunctionLibrary_StopAudioCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.StartRenderTake
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            VideoBitrate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 outputPath                     (Parm, ZeroConstructor)
// bool                           includeFileName                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3E00              		 offset:4313e00                       

void UCaptureFunctionLibrary::STATIC_StartRenderTake(int Width, int Height, int Frame, int VideoBitrate, const struct FString& outputPath, bool includeFileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.StartRenderTake"));

	UCaptureFunctionLibrary_StartRenderTake_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Frame = Frame;
	params.VideoBitrate = VideoBitrate;
	params.outputPath = outputPath;
	params.includeFileName = includeFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.StartRender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            VideoBitrate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 outputPath                     (Parm, ZeroConstructor)
// bool                           includeFileName                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3BE0              		 offset:4313be0                       

void UCaptureFunctionLibrary::STATIC_StartRender(int Width, int Height, int Frame, int VideoBitrate, const struct FString& outputPath, bool includeFileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.StartRender"));

	UCaptureFunctionLibrary_StartRender_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Frame = Frame;
	params.VideoBitrate = VideoBitrate;
	params.outputPath = outputPath;
	params.includeFileName = includeFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.StartDefinedRender
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3BC0              		 offset:4313bc0                       

void UCaptureFunctionLibrary::STATIC_StartDefinedRender()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.StartDefinedRender"));

	UCaptureFunctionLibrary_StartDefinedRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.StartAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3BA0              		 offset:4313ba0                       

void UCaptureFunctionLibrary::STATIC_StartAudioCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.StartAudioCapture"));

	UCaptureFunctionLibrary_StartAudioCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Str                            (Parm, ZeroConstructor)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            VideoBitrate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD39C0              		 offset:43139c0                       

bool UCaptureFunctionLibrary::STATIC_SettingVideoResolutionByString(const struct FString& Str, int* Width, int* Height, int* VideoBitrate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByString"));

	UCaptureFunctionLibrary_SettingVideoResolutionByString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (VideoBitrate != nullptr)
		*VideoBitrate = params.VideoBitrate;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            VideoBitrate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3850              		 offset:4313850                       

bool UCaptureFunctionLibrary::STATIC_SettingVideoResolutionByIndex(int Index, int* Width, int* Height, int* VideoBitrate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByIndex"));

	UCaptureFunctionLibrary_SettingVideoResolutionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (VideoBitrate != nullptr)
		*VideoBitrate = params.VideoBitrate;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.SetRecordingTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            TotalTimeMS                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD37E0              		 offset:43137e0                       

void UCaptureFunctionLibrary::STATIC_SetRecordingTime(int TotalTimeMS)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.SetRecordingTime"));

	UCaptureFunctionLibrary_SetRecordingTime_Params params;
	params.TotalTimeMS = TotalTimeMS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.SetNoCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bNoCapture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3760              		 offset:4313760                       

void UCaptureFunctionLibrary::STATIC_SetNoCapture(bool bNoCapture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.SetNoCapture"));

	UCaptureFunctionLibrary_SetNoCapture_Params params;
	params.bNoCapture = bNoCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.ResumeAudio
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3740              		 offset:4313740                       

void UCaptureFunctionLibrary::STATIC_ResumeAudio()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.ResumeAudio"));

	UCaptureFunctionLibrary_ResumeAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.PauseAudio
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3720              		 offset:4313720                       

void UCaptureFunctionLibrary::STATIC_PauseAudio()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.PauseAudio"));

	UCaptureFunctionLibrary_PauseAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.OnFixedFrameRateSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Fps                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD36B0              		 offset:43136b0                       

void UCaptureFunctionLibrary::STATIC_OnFixedFrameRateSetting(float Fps)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.OnFixedFrameRateSetting"));

	UCaptureFunctionLibrary_OnFixedFrameRateSetting_Params params;
	params.Fps = Fps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.OnConsoleVariableSetting
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3690              		 offset:4313690                       

void UCaptureFunctionLibrary::STATIC_OnConsoleVariableSetting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.OnConsoleVariableSetting"));

	UCaptureFunctionLibrary_OnConsoleVariableSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.OffFixedFrameRateSetting
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3670              		 offset:4313670                       

void UCaptureFunctionLibrary::STATIC_OffFixedFrameRateSetting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.OffFixedFrameRateSetting"));

	UCaptureFunctionLibrary_OffFixedFrameRateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.OffConsoleVariableSetting
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD3650              		 offset:4313650                       

void UCaptureFunctionLibrary::STATIC_OffConsoleVariableSetting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.OffConsoleVariableSetting"));

	UCaptureFunctionLibrary_OffConsoleVariableSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.IsReplayJumpingByCaptureManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3620              		 offset:4313620                       

bool UCaptureFunctionLibrary::STATIC_IsReplayJumpingByCaptureManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.IsReplayJumpingByCaptureManager"));

	UCaptureFunctionLibrary_IsReplayJumpingByCaptureManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.IsRecordingComplete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD35F0              		 offset:43135f0                       

bool UCaptureFunctionLibrary::STATIC_IsRecordingComplete()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.IsRecordingComplete"));

	UCaptureFunctionLibrary_IsRecordingComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.IsCapturing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD35C0              		 offset:43135c0                       

bool UCaptureFunctionLibrary::STATIC_IsCapturing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.IsCapturing"));

	UCaptureFunctionLibrary_IsCapturing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.InputRenderTakes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  InArr                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DACD34D0              		 offset:43134d0                       

void UCaptureFunctionLibrary::STATIC_InputRenderTakes(TArray<float> InArr)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.InputRenderTakes"));

	UCaptureFunctionLibrary_InputRenderTakes_Params params;
	params.InArr = InArr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayVideoQualityString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Array                          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DACD3400              		 offset:4313400                       

void UCaptureFunctionLibrary::STATIC_InitArrayVideoQualityString(TArray<struct FString>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.InitArrayVideoQualityString"));

	UCaptureFunctionLibrary_InitArrayVideoQualityString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayResolutionString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Array                          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DACD3330              		 offset:4313330                       

void UCaptureFunctionLibrary::STATIC_InitArrayResolutionString(TArray<struct FString>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.InitArrayResolutionString"));

	UCaptureFunctionLibrary_InitArrayResolutionString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayFrameRateString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Array                          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DACD3290              		 offset:4313290                       

void UCaptureFunctionLibrary::STATIC_InitArrayFrameRateString(TArray<int>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.InitArrayFrameRateString"));

	UCaptureFunctionLibrary_InitArrayFrameRateString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetVideoOutputPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD3200              		 offset:4313200                       

struct FString UCaptureFunctionLibrary::STATIC_GetVideoOutputPath()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetVideoOutputPath"));

	UCaptureFunctionLibrary_GetVideoOutputPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercentFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD31D0              		 offset:43131d0                       

float UCaptureFunctionLibrary::STATIC_GetProgressPercentFloat()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercentFloat"));

	UCaptureFunctionLibrary_GetProgressPercentFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD31A0              		 offset:43131a0                       

int UCaptureFunctionLibrary::STATIC_GetProgressPercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercent"));

	UCaptureFunctionLibrary_GetProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetCapturerModeToInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD3170              		 offset:4313170                       

int UCaptureFunctionLibrary::STATIC_GetCapturerModeToInt()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetCapturerModeToInt"));

	UCaptureFunctionLibrary_GetCapturerModeToInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            inIdx                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            outIdx                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD3050              		 offset:4313050                       

struct FString UCaptureFunctionLibrary::STATIC_GetArrayItemVideoQualityString(int inIdx, int* outIdx)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityString"));

	UCaptureFunctionLibrary_GetArrayItemVideoQualityString_Params params;
	params.inIdx = inIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outIdx != nullptr)
		*outIdx = params.outIdx;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityRatio
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            inIdx                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            outIdx                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2F80              		 offset:4312f80                       

float UCaptureFunctionLibrary::STATIC_GetArrayItemVideoQualityRatio(int inIdx, int* outIdx)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityRatio"));

	UCaptureFunctionLibrary_GetArrayItemVideoQualityRatio_Params params;
	params.inIdx = inIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outIdx != nullptr)
		*outIdx = params.outIdx;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemResolutions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            inIdx                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            outIdx                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DACD2E60              		 offset:4312e60                       

struct FString UCaptureFunctionLibrary::STATIC_GetArrayItemResolutions(int inIdx, int* outIdx)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemResolutions"));

	UCaptureFunctionLibrary_GetArrayItemResolutions_Params params;
	params.inIdx = inIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outIdx != nullptr)
		*outIdx = params.outIdx;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemFrameRates
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            inIdx                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            outIdx                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2D90              		 offset:4312d90                       

int UCaptureFunctionLibrary::STATIC_GetArrayItemFrameRates(int inIdx, int* outIdx)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemFrameRates"));

	UCaptureFunctionLibrary_GetArrayItemFrameRates_Params params;
	params.inIdx = inIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outIdx != nullptr)
		*outIdx = params.outIdx;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CancelRender
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DACD2D70              		 offset:4312d70                       

void UCaptureFunctionLibrary::STATIC_CancelRender()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CancelRender"));

	UCaptureFunctionLibrary_CancelRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalculateVideoQuality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InHeight                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2CF0              		 offset:4312cf0                       

int UCaptureFunctionLibrary::STATIC_CalculateVideoQuality(int InHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalculateVideoQuality"));

	UCaptureFunctionLibrary_CalculateVideoQuality_Params params;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            TotalTimeMS                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2C70              		 offset:4312c70                       

float UCaptureFunctionLibrary::STATIC_CalcProgressPercentFloat(int TotalTimeMS)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentFloat"));

	UCaptureFunctionLibrary_CalcProgressPercentFloat_Params params;
	params.TotalTimeMS = TotalTimeMS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2C40              		 offset:4312c40                       

float UCaptureFunctionLibrary::STATIC_CalcProgressPercentEx()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentEx"));

	UCaptureFunctionLibrary_CalcProgressPercentEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            TotalTimeMS                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2BC0              		 offset:4312bc0                       

int UCaptureFunctionLibrary::STATIC_CalcProgressPercent(int TotalTimeMS)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercent"));

	UCaptureFunctionLibrary_CalcProgressPercent_Params params;
	params.TotalTimeMS = TotalTimeMS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressCount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            OutTotalCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutCurrentNum                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD2AE0              		 offset:4312ae0                       

void UCaptureFunctionLibrary::STATIC_CalcProgressCount(int* OutTotalCount, int* OutCurrentNum)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressCount"));

	UCaptureFunctionLibrary_CalcProgressCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTotalCount != nullptr)
		*OutTotalCount = params.OutTotalCount;
	if (OutCurrentNum != nullptr)
		*OutCurrentNum = params.OutCurrentNum;
}


// Function MK3DPublisher.CaptureFunctionLibrary.CalcCaptureAboutMinute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            pageCount                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD29F0              		 offset:43129f0                       

int UCaptureFunctionLibrary::STATIC_CalcCaptureAboutMinute(int Width, int Height, int pageCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.CalcCaptureAboutMinute"));

	UCaptureFunctionLibrary_CalcCaptureAboutMinute_Params params;
	params.Width = Width;
	params.Height = Height;
	params.pageCount = pageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReturnCodeDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DACD2940              		 offset:4312940                       

void UCaptureFunctionLibrary::STATIC_BindFunctionLibraryReturnCodeDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReturnCodeDelegate"));

	UCaptureFunctionLibrary_BindFunctionLibraryReturnCodeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReplayJumpDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DACD2890              		 offset:4312890                       

void UCaptureFunctionLibrary::STATIC_BindFunctionLibraryReplayJumpDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReplayJumpDelegate"));

	UCaptureFunctionLibrary_BindFunctionLibraryReplayJumpDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryRederCompleteDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DACD27E0              		 offset:43127e0                       

void UCaptureFunctionLibrary::STATIC_BindFunctionLibraryRederCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryRederCompleteDelegate"));

	UCaptureFunctionLibrary_BindFunctionLibraryRederCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryOnPauseDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DACD2730              		 offset:4312730                       

void UCaptureFunctionLibrary::STATIC_BindFunctionLibraryOnPauseDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryOnPauseDelegate"));

	UCaptureFunctionLibrary_BindFunctionLibraryOnPauseDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MK3DPublisher.CaptureFunctionLibrary.AddCaptureWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DACD26B0              		 offset:43126b0                       

bool UCaptureFunctionLibrary::STATIC_AddCaptureWidget(class UUserWidget* InWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MK3DPublisher.CaptureFunctionLibrary.AddCaptureWidget"));

	UCaptureFunctionLibrary_AddCaptureWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// PUBG (8.3.5.39) SDK

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
// FunctionAddress:0x00007FF62B442D30              		 offset:2972d30                       

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
// FunctionAddress:0x00007FF62B442CA0              		 offset:2972ca0                       

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
// FunctionAddress:0x00007FF62B442BD0              		 offset:2972bd0                       

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
// FunctionAddress:0x00007FF62B442B00              		 offset:2972b00                       

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
// FunctionAddress:0x00007FF62B442AE0              		 offset:2972ae0                       

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
// FunctionAddress:0x00007FF62B4428C0              		 offset:29728c0                       

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
// FunctionAddress:0x00007FF62B4426A0              		 offset:29726a0                       

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
// FunctionAddress:0x00007FF62B442680              		 offset:2972680                       

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
// FunctionAddress:0x00007FF62B442660              		 offset:2972660                       

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
// FunctionAddress:0x00007FF62B442480              		 offset:2972480                       

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
// FunctionAddress:0x00007FF62B442310              		 offset:2972310                       

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
// FunctionAddress:0x00007FF62B4422A0              		 offset:29722a0                       

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
// FunctionAddress:0x00007FF62B442220              		 offset:2972220                       

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
// FunctionAddress:0x00007FF62B442200              		 offset:2972200                       

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
// FunctionAddress:0x00007FF62B4421E0              		 offset:29721e0                       

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
// FunctionAddress:0x00007FF62B442170              		 offset:2972170                       

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
// FunctionAddress:0x00007FF62B442150              		 offset:2972150                       

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
// FunctionAddress:0x00007FF62B442130              		 offset:2972130                       

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
// FunctionAddress:0x00007FF62B442110              		 offset:2972110                       

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
// FunctionAddress:0x00007FF62B4420E0              		 offset:29720e0                       

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
// FunctionAddress:0x00007FF62B4420B0              		 offset:29720b0                       

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
// FunctionAddress:0x00007FF62B442080              		 offset:2972080                       

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
// FunctionAddress:0x00007FF62B441F90              		 offset:2971f90                       

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
// FunctionAddress:0x00007FF62B441EC0              		 offset:2971ec0                       

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
// FunctionAddress:0x00007FF62B441DF0              		 offset:2971df0                       

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
// FunctionAddress:0x00007FF62B441D50              		 offset:2971d50                       

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
// FunctionAddress:0x00007FF62B441CC0              		 offset:2971cc0                       

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
// FunctionAddress:0x00007FF62B441C90              		 offset:2971c90                       

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
// FunctionAddress:0x00007FF62B441C60              		 offset:2971c60                       

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
// FunctionAddress:0x00007FF62B441C30              		 offset:2971c30                       

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
// FunctionAddress:0x00007FF62B441B10              		 offset:2971b10                       

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
// FunctionAddress:0x00007FF62B441A40              		 offset:2971a40                       

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
// FunctionAddress:0x00007FF62B441920              		 offset:2971920                       

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
// FunctionAddress:0x00007FF62B441850              		 offset:2971850                       

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
// FunctionAddress:0x00007FF62B441830              		 offset:2971830                       

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
// FunctionAddress:0x00007FF62B4417B0              		 offset:29717b0                       

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
// FunctionAddress:0x00007FF62B441730              		 offset:2971730                       

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
// FunctionAddress:0x00007FF62B441700              		 offset:2971700                       

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
// FunctionAddress:0x00007FF62B441680              		 offset:2971680                       

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
// FunctionAddress:0x00007FF62B4415A0              		 offset:29715a0                       

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
// FunctionAddress:0x00007FF62B4414B0              		 offset:29714b0                       

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
// FunctionAddress:0x00007FF62B441400              		 offset:2971400                       

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
// FunctionAddress:0x00007FF62B441350              		 offset:2971350                       

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
// FunctionAddress:0x00007FF62B4412A0              		 offset:29712a0                       

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
// FunctionAddress:0x00007FF62B4411F0              		 offset:29711f0                       

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
// FunctionAddress:0x00007FF62B441170              		 offset:2971170                       

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

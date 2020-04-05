#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MK3DPublisher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MK3DPublisher.CaptureFunctionLibrary.VideoSaveFileDialog
struct UCaptureFunctionLibrary_VideoSaveFileDialog_Params
{
<<<<<<< HEAD
	struct FString*                                    TempPath;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     TempPath;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<struct FString>                             OutFiles;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MK3DPublisher.CaptureFunctionLibrary.TimeStampFileNameWebM
struct UCaptureFunctionLibrary_TimeStampFileNameWebM_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringHHMMDD
struct UCaptureFunctionLibrary_TimeSecondsToStringHHMMDD_Params
{
<<<<<<< HEAD
	float*                                             InSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              InSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.TimeSecondsToStringAboutMinute
struct UCaptureFunctionLibrary_TimeSecondsToStringAboutMinute_Params
{
<<<<<<< HEAD
	float*                                             InSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              InSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.StopAudioCapture
struct UCaptureFunctionLibrary_StopAudioCapture_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.StartRenderTake
struct UCaptureFunctionLibrary_StartRenderTake_Params
{
<<<<<<< HEAD
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               VideoBitrate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    outputPath;                                               // (Parm, ZeroConstructor)
	bool*                                              includeFileName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VideoBitrate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     outputPath;                                               // (Parm, ZeroConstructor)
	bool                                               includeFileName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.StartRender
struct UCaptureFunctionLibrary_StartRender_Params
{
<<<<<<< HEAD
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               VideoBitrate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    outputPath;                                               // (Parm, ZeroConstructor)
	bool*                                              includeFileName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VideoBitrate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     outputPath;                                               // (Parm, ZeroConstructor)
	bool                                               includeFileName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.StartDefinedRender
struct UCaptureFunctionLibrary_StartDefinedRender_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.StartAudioCapture
struct UCaptureFunctionLibrary_StartAudioCapture_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByString
struct UCaptureFunctionLibrary_SettingVideoResolutionByString_Params
{
<<<<<<< HEAD
	struct FString*                                    Str;                                                      // (Parm, ZeroConstructor)
=======
	struct FString                                     Str;                                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                VideoBitrate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.SettingVideoResolutionByIndex
struct UCaptureFunctionLibrary_SettingVideoResolutionByIndex_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                VideoBitrate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.SetRecordingTime
struct UCaptureFunctionLibrary_SetRecordingTime_Params
{
<<<<<<< HEAD
	int*                                               TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.SetNoCapture
struct UCaptureFunctionLibrary_SetNoCapture_Params
{
<<<<<<< HEAD
	bool*                                              bNoCapture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNoCapture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.ResumeAudio
struct UCaptureFunctionLibrary_ResumeAudio_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.PauseAudio
struct UCaptureFunctionLibrary_PauseAudio_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.OnFixedFrameRateSetting
struct UCaptureFunctionLibrary_OnFixedFrameRateSetting_Params
{
<<<<<<< HEAD
	float*                                             Fps;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Fps;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.OnConsoleVariableSetting
struct UCaptureFunctionLibrary_OnConsoleVariableSetting_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.OffFixedFrameRateSetting
struct UCaptureFunctionLibrary_OffFixedFrameRateSetting_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.OffConsoleVariableSetting
struct UCaptureFunctionLibrary_OffConsoleVariableSetting_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.IsReplayJumpingByCaptureManager
struct UCaptureFunctionLibrary_IsReplayJumpingByCaptureManager_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.IsRecordingComplete
struct UCaptureFunctionLibrary_IsRecordingComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.IsCapturing
struct UCaptureFunctionLibrary_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.InputRenderTakes
struct UCaptureFunctionLibrary_InputRenderTakes_Params
{
<<<<<<< HEAD
	TArray<float>*                                     InArr;                                                    // (Parm, ZeroConstructor)
=======
	TArray<float>                                      InArr;                                                    // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayVideoQualityString
struct UCaptureFunctionLibrary_InitArrayVideoQualityString_Params
{
	TArray<struct FString>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayResolutionString
struct UCaptureFunctionLibrary_InitArrayResolutionString_Params
{
	TArray<struct FString>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MK3DPublisher.CaptureFunctionLibrary.InitArrayFrameRateString
struct UCaptureFunctionLibrary_InitArrayFrameRateString_Params
{
	TArray<int>                                        Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetVideoOutputPath
struct UCaptureFunctionLibrary_GetVideoOutputPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercentFloat
struct UCaptureFunctionLibrary_GetProgressPercentFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetProgressPercent
struct UCaptureFunctionLibrary_GetProgressPercent_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetCapturerModeToInt
struct UCaptureFunctionLibrary_GetCapturerModeToInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityString
struct UCaptureFunctionLibrary_GetArrayItemVideoQualityString_Params
{
<<<<<<< HEAD
	int*                                               inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                outIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemVideoQualityRatio
struct UCaptureFunctionLibrary_GetArrayItemVideoQualityRatio_Params
{
<<<<<<< HEAD
	int*                                               inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                outIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemResolutions
struct UCaptureFunctionLibrary_GetArrayItemResolutions_Params
{
<<<<<<< HEAD
	int*                                               inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                outIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MK3DPublisher.CaptureFunctionLibrary.GetArrayItemFrameRates
struct UCaptureFunctionLibrary_GetArrayItemFrameRates_Params
{
<<<<<<< HEAD
	int*                                               inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                inIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                outIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CancelRender
struct UCaptureFunctionLibrary_CancelRender_Params
{
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalculateVideoQuality
struct UCaptureFunctionLibrary_CalculateVideoQuality_Params
{
<<<<<<< HEAD
	int*                                               InHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                InHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentFloat
struct UCaptureFunctionLibrary_CalcProgressPercentFloat_Params
{
<<<<<<< HEAD
	int*                                               TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercentEx
struct UCaptureFunctionLibrary_CalcProgressPercentEx_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressPercent
struct UCaptureFunctionLibrary_CalcProgressPercent_Params
{
<<<<<<< HEAD
	int*                                               TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TotalTimeMS;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalcProgressCount
struct UCaptureFunctionLibrary_CalcProgressCount_Params
{
	int                                                OutTotalCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutCurrentNum;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.CalcCaptureAboutMinute
struct UCaptureFunctionLibrary_CalcCaptureAboutMinute_Params
{
<<<<<<< HEAD
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               pageCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pageCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReturnCodeDelegate
struct UCaptureFunctionLibrary_BindFunctionLibraryReturnCodeDelegate_Params
{
<<<<<<< HEAD
	struct FScriptDelegate*                            InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryReplayJumpDelegate
struct UCaptureFunctionLibrary_BindFunctionLibraryReplayJumpDelegate_Params
{
<<<<<<< HEAD
	struct FScriptDelegate*                            InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryRederCompleteDelegate
struct UCaptureFunctionLibrary_BindFunctionLibraryRederCompleteDelegate_Params
{
<<<<<<< HEAD
	struct FScriptDelegate*                            InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.BindFunctionLibraryOnPauseDelegate
struct UCaptureFunctionLibrary_BindFunctionLibraryOnPauseDelegate_Params
{
<<<<<<< HEAD
	struct FScriptDelegate*                            InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function MK3DPublisher.CaptureFunctionLibrary.AddCaptureWidget
struct UCaptureFunctionLibrary_AddCaptureWidget_Params
{
<<<<<<< HEAD
	class UUserWidget**                                InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UUserWidget*                                 InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

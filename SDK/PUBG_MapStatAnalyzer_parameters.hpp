#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapStatAnalyzer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray
struct AMapStatAnalyzer_C_EqualsFloatArray_Params
{
	TArray<float>                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      NewParam1;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             NewParam2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam3;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames
struct AMapStatAnalyzer_C_DelayTimeToDelayFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir
struct AMapStatAnalyzer_C_GetAltSharedPresetDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize
struct AMapStatAnalyzer_C_GetCurrentLevelSize_Params
{
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize
struct AMapStatAnalyzer_C_GetExpectedMapSize_Params
{
	float*                                             MapStride;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir
struct AMapStatAnalyzer_C_GetSharedPresetDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir
struct AMapStatAnalyzer_C_GetSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile
struct AMapStatAnalyzer_C_LoadStringFromFile_Params
{
	struct FString*                                    FullFilePath;                                             // (Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewVar;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL
struct AMapStatAnalyzer_C_GetCurrentLevelMinimapURL_Params
{
	struct FString*                                    PresetDir;                                                // (Parm, ZeroConstructor)
	struct FString                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString
struct AMapStatAnalyzer_C_FloatArrayToNewlinedString_Params
{
	TArray<float>                                      Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString*                                    NewLinedString;                                           // (Parm, ZeroConstructor)
	struct FString                                     NewVar;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString
struct AMapStatAnalyzer_C_StingArrayToNewlinedString_Params
{
	TArray<struct FString>                             Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString*                                    NewLinedString;                                           // (Parm, ZeroConstructor)
	struct FString                                     NewVar;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold
struct AMapStatAnalyzer_C_HitchFrameStatsThreshold_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray
struct AMapStatAnalyzer_C_GetAvgOnArray_Params
{
	TArray<float>                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              OutAvg;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMax;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString
struct AMapStatAnalyzer_C_DateTimeToString_Params
{
	struct FDateTime*                                  NewParam;                                                 // (Parm)
	struct FString                                     NewParam1;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
struct AMapStatAnalyzer_C_ComputeWorldSize_Params
{
	struct FVector*                                    Min;                                                      // (Parm, IsPlainOldData)
	struct FVector*                                    Max;                                                      // (Parm, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
struct AMapStatAnalyzer_C_UserConstructionScript_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
struct AMapStatAnalyzer_C_ReceiveBeginPlay_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay
struct AMapStatAnalyzer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
struct AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

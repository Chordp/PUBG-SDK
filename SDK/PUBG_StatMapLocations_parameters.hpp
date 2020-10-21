#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StatMapLocations_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames
struct AStatMapLocations_C_AppendStatDataToColumnNames_Params
{
	struct FString                                     Column_Names_as_String;                                   // (Parm, ZeroConstructor)
	TArray<struct FString>                             Stat_Data;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations
struct AStatMapLocations_C_GetCurrentLevelLocations_Params
{
};

// Function StatMapLocations.StatMapLocations_C.GetMapLocations
struct AStatMapLocations_C_GetMapLocations_Params
{
	struct FString                                     InSection;                                                // (Parm, ZeroConstructor)
	TArray<struct FTransform>                          MapTransformArray;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatMapLocations.StatMapLocations_C.CreateStatWidget
struct AStatMapLocations_C_CreateStatWidget_Params
{
};

// Function StatMapLocations.StatMapLocations_C.GatherStats
struct AStatMapLocations_C_GatherStats_Params
{
	TArray<struct FString>                             Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StatMapLocations.StatMapLocations_C.SetCurrentTransform
struct AStatMapLocations_C_SetCurrentTransform_Params
{
};

// Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform
struct AStatMapLocations_C_CheckPlayerTransform_Params
{
	bool                                               PlayerHasNotMoved;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation
struct AStatMapLocations_C_MoveToDebugLocation_Params
{
	int                                                PointNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMoveLocation;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function StatMapLocations.StatMapLocations_C.UserConstructionScript
struct AStatMapLocations_C_UserConstructionScript_Params
{
};

// Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay
struct AStatMapLocations_C_ReceiveBeginPlay_Params
{
};

// Function StatMapLocations.StatMapLocations_C.SetUp
struct AStatMapLocations_C_SetUp_Params
{
};

// Function StatMapLocations.StatMapLocations_C.StatMapLocations
struct AStatMapLocations_C_StatMapLocations_Params
{
};

// Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations
struct AStatMapLocations_C_ExecuteUbergraph_StatMapLocations_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

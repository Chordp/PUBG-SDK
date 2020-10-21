#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_SpeedUp1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.UserConstructionScript
struct ABuff_SpeedUp1_C_UserConstructionScript_Params
{
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StartBuffBlueprint
struct ABuff_SpeedUp1_C_StartBuffBlueprint_Params
{
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StopBuffBlueprint
struct ABuff_SpeedUp1_C_StopBuffBlueprint_Params
{
	bool                                               bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.ExecuteUbergraph_Buff_SpeedUp1
struct ABuff_SpeedUp1_C_ExecuteUbergraph_Buff_SpeedUp1_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_BoostHealOverTime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick
struct ABuff_BoostHealOverTime_C_SetHealPerTick_Params
{
	float                                              CurBoostGauge;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript
struct ABuff_BoostHealOverTime_C_UserConstructionScript_Params
{
};

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff
struct ABuff_BoostHealOverTime_C_TickBuff_Params
{
};

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint
struct ABuff_BoostHealOverTime_C_StartBuffBlueprint_Params
{
};

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint
struct ABuff_BoostHealOverTime_C_StopBuffBlueprint_Params
{
	bool                                               bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime
struct ABuff_BoostHealOverTime_C_ExecuteUbergraph_Buff_BoostHealOverTime_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

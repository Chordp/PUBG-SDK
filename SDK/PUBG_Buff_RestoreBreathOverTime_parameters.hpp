#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_RestoreBreathOverTime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff
struct ABuff_RestoreBreathOverTime_C_CanApplyBuff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript
struct ABuff_RestoreBreathOverTime_C_UserConstructionScript_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff
struct ABuff_RestoreBreathOverTime_C_TickBuff_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay
struct ABuff_RestoreBreathOverTime_C_AfterDelay_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay
struct ABuff_RestoreBreathOverTime_C_ReceiveBeginPlay_Params
{
};

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime
struct ABuff_RestoreBreathOverTime_C_ExecuteUbergraph_Buff_RestoreBreathOverTime_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

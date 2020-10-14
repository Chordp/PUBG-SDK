#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Med_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP
struct AGunImpact_Med_C_GetAdjustedDecalEffectDataSet_BP_Params
{
	struct FDecalEffectDataSet                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript
struct AGunImpact_Med_C_UserConstructionScript_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
struct AGunImpact_Med_C_PreWakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Med.GunImpact_Med_C.WakeUp_BP
struct AGunImpact_Med_C_WakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Med.GunImpact_Med_C.ReceiveBeginPlay
struct AGunImpact_Med_C_ReceiveBeginPlay_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
struct AGunImpact_Med_C_AdjustDecalEffectDataSet_BP_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med
struct AGunImpact_Med_C_ExecuteUbergraph_GunImpact_Med_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

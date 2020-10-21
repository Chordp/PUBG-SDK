#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Sniper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunImpact_Sniper.GunImpact_Sniper_C.GetAdjustedDecalEffectDataSet_BP
struct AGunImpact_Sniper_C_GetAdjustedDecalEffectDataSet_BP_Params
{
	struct FDecalEffectDataSet                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.UserConstructionScript
struct AGunImpact_Sniper_C_UserConstructionScript_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.PreWakeUp_BP
struct AGunImpact_Sniper_C_PreWakeUp_BP_Params
{
	struct FTransform                                  InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.AdjustDecalEffectDataSet_BP
struct AGunImpact_Sniper_C_AdjustDecalEffectDataSet_BP_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.ExecuteUbergraph_GunImpact_Sniper
struct AGunImpact_Sniper_C_ExecuteUbergraph_GunImpact_Sniper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

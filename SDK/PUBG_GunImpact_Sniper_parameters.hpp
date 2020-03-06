#pragma once

// PUBG (7.1.6.5) SDK

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

// Function GunImpact_Sniper.GunImpact_Sniper_C.Timeline_0__FinishedFunc
struct AGunImpact_Sniper_C_Timeline_0__FinishedFunc_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.Timeline_0__UpdateFunc
struct AGunImpact_Sniper_C_Timeline_0__UpdateFunc_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.Timeline_1__FinishedFunc
struct AGunImpact_Sniper_C_Timeline_1__FinishedFunc_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.Timeline_1__UpdateFunc
struct AGunImpact_Sniper_C_Timeline_1__UpdateFunc_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.PreWakeUp_BP
struct AGunImpact_Sniper_C_PreWakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.ReceiveEndPlay
struct AGunImpact_Sniper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.AdjustDecalEffectDataSet_BP
struct AGunImpact_Sniper_C_AdjustDecalEffectDataSet_BP_Params
{
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.OnSplatterDecalCreated
struct AGunImpact_Sniper_C_OnSplatterDecalCreated_Params
{
	EImpactType*                                       ImpactType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent**                            Decal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic**                   DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunImpact_Sniper.GunImpact_Sniper_C.ExecuteUbergraph_GunImpact_Sniper
struct AGunImpact_Sniper_C_ExecuteUbergraph_GunImpact_Sniper_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

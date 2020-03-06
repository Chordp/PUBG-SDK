#pragma once

// PUBG (7.1.6.5) SDK

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

// Function GunImpact_Med.GunImpact_Med_C.Timeline_0__FinishedFunc
struct AGunImpact_Med_C_Timeline_0__FinishedFunc_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.Timeline_0__UpdateFunc
struct AGunImpact_Med_C_Timeline_0__UpdateFunc_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.Timeline_1__FinishedFunc
struct AGunImpact_Med_C_Timeline_1__FinishedFunc_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.Timeline_1__UpdateFunc
struct AGunImpact_Med_C_Timeline_1__UpdateFunc_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
struct AGunImpact_Med_C_PreWakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Med.GunImpact_Med_C.ReceiveEndPlay
struct AGunImpact_Med_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
struct AGunImpact_Med_C_AdjustDecalEffectDataSet_BP_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.OnSplatterDecalCreated
struct AGunImpact_Med_C_OnSplatterDecalCreated_Params
{
	EImpactType*                                       ImpactType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent**                            Decal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic**                   DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
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

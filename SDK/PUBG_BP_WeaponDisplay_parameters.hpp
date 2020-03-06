#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_WeaponDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript
struct ABP_WeaponDisplay_C_UserConstructionScript_Params
{
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.AddStaticMeshAsyncEvent
struct ABP_WeaponDisplay_C_AddStaticMeshAsyncEvent_Params
{
	bool*                                              indexMatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay
struct ABP_WeaponDisplay_C_ExecuteUbergraph_BP_WeaponDisplay_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

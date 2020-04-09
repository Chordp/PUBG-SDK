#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapPlayerStartWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.MapPlayerStartWidget.OnRespawnButtonDown
struct UMapPlayerStartWidgetBP_C_OnRespawnButtonDown_Params
{
};

// Function TslGame.MapPlayerStartWidget.OnPlayerRespawnSpotChanged
struct UMapPlayerStartWidgetBP_C_OnPlayerRespawnSpotChanged_Params
{
	struct FName                                       RespawnSpotName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

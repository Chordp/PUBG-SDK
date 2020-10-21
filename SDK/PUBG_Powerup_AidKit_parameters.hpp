#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AidKit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Powerup_AidKit.Powerup_AidKit_C.UserConstructionScript
struct APowerup_AidKit_C_UserConstructionScript_Params
{
};

// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveBeginPlay
struct APowerup_AidKit_C_ReceiveBeginPlay_Params
{
};

// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveDestroyed
struct APowerup_AidKit_C_ReceiveDestroyed_Params
{
};

// Function Powerup_AidKit.Powerup_AidKit_C.CustomEvent
struct APowerup_AidKit_C_CustomEvent_Params
{
};

// Function Powerup_AidKit.Powerup_AidKit_C.ExecuteUbergraph_Powerup_AidKit
struct APowerup_AidKit_C_ExecuteUbergraph_Powerup_AidKit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

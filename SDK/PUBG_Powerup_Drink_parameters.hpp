#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Drink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Powerup_Drink.Powerup_Drink_C.UserConstructionScript
struct APowerup_Drink_C_UserConstructionScript_Params
{
};

// Function Powerup_Drink.Powerup_Drink_C.ReceiveBeginPlay
struct APowerup_Drink_C_ReceiveBeginPlay_Params
{
};

// Function Powerup_Drink.Powerup_Drink_C.ExecuteUbergraph_Powerup_Drink
struct APowerup_Drink_C_ExecuteUbergraph_Powerup_Drink_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

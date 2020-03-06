#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
struct ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
struct ULobbyNameTagHUD_C_SetupNameTagWidget_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
struct ULobbyNameTagHUD_C_GetNameTagWidget_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslLobbyNameTagWidget*                      Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslLobbyNameTagHudWidget.UpdateNameTagWidget_Internal
struct ULobbyNameTagHUD_C_UpdateNameTagWidget_Internal_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagHudWidget.SetNameTagWidget_Internal
struct ULobbyNameTagHUD_C_SetNameTagWidget_Internal_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagHudWidget.ResetNameTagWidget_Internal
struct ULobbyNameTagHUD_C_ResetNameTagWidget_Internal_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagHudWidget.GetNameTagWidget_Internal
struct ULobbyNameTagHUD_C_GetNameTagWidget_Internal_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTslLobbyNameTagWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

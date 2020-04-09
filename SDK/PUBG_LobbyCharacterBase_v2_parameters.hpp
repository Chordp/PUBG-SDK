#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterBase_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType
struct ALobbyCharacterBase_v2_C_SetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       NewLobbyCharacterAnimationType;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.RemoveCustomAnimation
struct ALobbyCharacterBase_v2_C_RemoveCustomAnimation_Params
{
};

// Function TslGame.LobbyCharacter.OnMontageEnded
struct ALobbyCharacterBase_v2_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsLogout
struct ALobbyCharacterBase_v2_C_IsLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsInCustomizationScene
struct ALobbyCharacterBase_v2_C_IsInCustomizationScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacterBase_v2_C_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetRankType
struct ALobbyCharacterBase_v2_C_GetRankType_Params
{
	ERatingRankType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacterBase_v2_C_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacterBase_v2_C_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType
struct ALobbyCharacterBase_v2_C_GetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetClanName
struct ALobbyCharacterBase_v2_C_GetClanName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetCharacterPlatform
struct ALobbyCharacterBase_v2_C_GetCharacterPlatform_Params
{
	EOutGamePlatformProvider                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.ApplyCustomAnimation
struct ALobbyCharacterBase_v2_C_ApplyCustomAnimation_Params
{
	class UAnimationAsset*                             Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

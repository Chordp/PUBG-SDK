#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterMale_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType
struct ALobbyCharacterMale_v2_C_SetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       NewLobbyCharacterAnimationType;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.RemoveCustomAnimation
struct ALobbyCharacterMale_v2_C_RemoveCustomAnimation_Params
{
};

// Function TslGame.LobbyCharacter.OnMontageEnded
struct ALobbyCharacterMale_v2_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsLogout
struct ALobbyCharacterMale_v2_C_IsLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsInCustomizationScene
struct ALobbyCharacterMale_v2_C_IsInCustomizationScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacterMale_v2_C_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetRankType
struct ALobbyCharacterMale_v2_C_GetRankType_Params
{
	ERatingRankType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacterMale_v2_C_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacterMale_v2_C_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType
struct ALobbyCharacterMale_v2_C_GetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetClanName
struct ALobbyCharacterMale_v2_C_GetClanName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetCharacterPlatform
struct ALobbyCharacterMale_v2_C_GetCharacterPlatform_Params
{
	EOutGamePlatformProvider                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.ApplyCustomAnimation
struct ALobbyCharacterMale_v2_C_ApplyCustomAnimation_Params
{
	class UAnimationAsset*                             Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

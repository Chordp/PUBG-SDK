#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterFemale_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType
struct ALobbyCharacterFemale_v2_C_SetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       NewLobbyCharacterAnimationType;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.RemoveCustomAnimation
struct ALobbyCharacterFemale_v2_C_RemoveCustomAnimation_Params
{
};

// Function TslGame.LobbyCharacter.OnMontageEnded
struct ALobbyCharacterFemale_v2_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsLogout
struct ALobbyCharacterFemale_v2_C_IsLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsInCustomizationScene
struct ALobbyCharacterFemale_v2_C_IsInCustomizationScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacterFemale_v2_C_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetRankType
struct ALobbyCharacterFemale_v2_C_GetRankType_Params
{
	ERankType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetRankDivision
struct ALobbyCharacterFemale_v2_C_GetRankDivision_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacterFemale_v2_C_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacterFemale_v2_C_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType
struct ALobbyCharacterFemale_v2_C_GetLobbyCharacterAnimationType_Params
{
	ELobbyCharacterAnimationType                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetClanName
struct ALobbyCharacterFemale_v2_C_GetClanName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TslGame.LobbyCharacter.GetCharacterPlatform
struct ALobbyCharacterFemale_v2_C_GetCharacterPlatform_Params
{
	EOutGamePlatformProvider                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.LobbyCharacter.ApplyCustomAnimation
struct ALobbyCharacterFemale_v2_C_ApplyCustomAnimation_Params
{
	class UAnimationAsset*                             Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

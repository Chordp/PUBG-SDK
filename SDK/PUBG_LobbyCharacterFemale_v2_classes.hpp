#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterFemale_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyCharacterFemale_v2.LobbyCharacterFemale_v2_C
// 0x0000 (0x09E0 - 0x09E0)
class ALobbyCharacterFemale_v2_C : public ALobbyCharacterBase_v2_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LobbyCharacterFemale_v2.LobbyCharacterFemale_v2_C"));

		return ptr;
	}


	void STATIC_SetLobbyCharacterAnimationType(ELobbyCharacterAnimationType NewLobbyCharacterAnimationType);
	void STATIC_RemoveCustomAnimation();
	void STATIC_OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	bool STATIC_IsLogout();
	bool STATIC_IsInCustomizationScene();
	int STATIC_GetSlotId();
	ERatingRankType STATIC_GetRankType();
	struct FString STATIC_GetNickName();
	struct FString STATIC_GetNetId();
	ELobbyCharacterAnimationType STATIC_GetLobbyCharacterAnimationType();
	struct FString STATIC_GetClanName();
	EOutGamePlatformProvider STATIC_GetCharacterPlatform();
	void STATIC_ApplyCustomAnimation(class UAnimationAsset* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

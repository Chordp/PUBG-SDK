#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterMale_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyCharacterMale_v2.LobbyCharacterMale_v2_C
// 0x0000 (0x0A60 - 0x0A60)
class ALobbyCharacterMale_v2_C : public ALobbyCharacterBase_v2_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LobbyCharacterMale_v2.LobbyCharacterMale_v2_C"));

		return ptr;
	}


	void SetLobbyCharacterAnimationType(ELobbyCharacterAnimationType NewLobbyCharacterAnimationType);
	void RemoveCustomAnimation();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	bool IsLogout();
	bool IsInCustomizationScene();
	int GetSlotId();
	ERankType GetRankType();
	int GetRankDivision();
	struct FString GetNickName();
	struct FString GetNetId();
	ELobbyCharacterAnimationType GetLobbyCharacterAnimationType();
	struct FString GetClanName();
	EOutGamePlatformProvider GetCharacterPlatform();
	void ApplyCustomAnimation(class UAnimationAsset* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0000 (0x0A40 - 0x0A40)
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

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

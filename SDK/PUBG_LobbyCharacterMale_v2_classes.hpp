#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0000 (0x0A40 - 0x0A40)
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

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

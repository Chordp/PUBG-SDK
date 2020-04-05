#pragma once

// PUBG (7.1.6.5) SDK

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
<<<<<<< HEAD
// 0x0000 (0x09D0 - 0x09D0)
=======
// 0x0000 (0x09E0 - 0x09E0)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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

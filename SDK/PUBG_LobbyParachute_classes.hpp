#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyParachute_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyParachute.LobbyParachute_C
<<<<<<< HEAD
// 0x0000 (0x0420 - 0x0420)
=======
// 0x0000 (0x0440 - 0x0440)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
class ALobbyParachute_C : public ALobbyParachute
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LobbyParachute.LobbyParachute_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

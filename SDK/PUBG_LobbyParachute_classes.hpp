#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0450 - 0x0450)
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


	void OnRep_ReplicatedSkinParam();
	void InitializeParachuteMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

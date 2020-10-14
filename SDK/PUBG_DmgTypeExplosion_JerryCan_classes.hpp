#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DmgTypeExplosion_JerryCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgTypeExplosion_JerryCan.DmgTypeExplosion_JerryCan_C
// 0x0000 (0x0108 - 0x0108)
class UDmgTypeExplosion_JerryCan_C : public UTslDamageType
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass DmgTypeExplosion_JerryCan.DmgTypeExplosion_JerryCan_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

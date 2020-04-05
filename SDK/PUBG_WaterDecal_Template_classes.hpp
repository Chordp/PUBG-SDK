#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WaterDecal_Template_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterDecal_Template.WaterDecal_Template_C
<<<<<<< HEAD
// 0x0000 (0x03E8 - 0x03E8)
=======
// 0x0000 (0x0408 - 0x0408)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
class AWaterDecal_Template_C : public AInstancedDecalActor_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass WaterDecal_Template.WaterDecal_Template_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

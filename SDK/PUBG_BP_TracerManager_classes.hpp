#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TracerManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TracerManager.BP_TracerManager_C
<<<<<<< HEAD
// 0x0000 (0x0520 - 0x0520)
=======
// 0x0000 (0x0540 - 0x0540)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
class ABP_TracerManager_C : public ATslTracerManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TracerManager.BP_TracerManager_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

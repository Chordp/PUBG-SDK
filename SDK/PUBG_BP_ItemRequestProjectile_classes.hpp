#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ItemRequestProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemRequestProjectile.BP_ItemRequestProjectile_C
<<<<<<< HEAD
// 0x0000 (0x05C8 - 0x05C8)
=======
// 0x0000 (0x05E8 - 0x05E8)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
class ABP_ItemRequestProjectile_C : public ATslItemRequestProjectile
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ItemRequestProjectile.BP_ItemRequestProjectile_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

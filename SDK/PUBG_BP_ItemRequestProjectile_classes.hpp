#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0610 - 0x0610)
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


	void OnRep_Target();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

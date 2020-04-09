#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x05D0 - 0x05D0)
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


	void STATIC_OnRep_Target();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

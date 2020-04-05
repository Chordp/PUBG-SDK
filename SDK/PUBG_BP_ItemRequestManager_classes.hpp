#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ItemRequestManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemRequestManager.BP_ItemRequestManager_C
// 0x0000 (0x0500 - 0x0500)
class UBP_ItemRequestManager_C : public UTslItemRequestManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ItemRequestManager.BP_ItemRequestManager_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

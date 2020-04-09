#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x0528 - 0x0528)
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


	void STATIC_Multi_AddInstance(const struct FTracerSimulationServerData& InTracerData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

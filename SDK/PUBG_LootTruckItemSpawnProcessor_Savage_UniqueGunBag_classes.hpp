#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LootTruckItemSpawnProcessor_Savage_UniqueGunBag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootTruckItemSpawnProcessor_Savage_UniqueGunBag.LootTruckItemSpawnProcessor_Savage_UniqueGunBag_C
// 0x0000 (0x0148 - 0x0148)
class ULootTruckItemSpawnProcessor_Savage_UniqueGunBag_C : public UModePresetItemSpawner
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LootTruckItemSpawnProcessor_Savage_UniqueGunBag.LootTruckItemSpawnProcessor_Savage_UniqueGunBag_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

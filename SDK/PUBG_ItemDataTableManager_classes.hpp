#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ItemDataTableManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ItemDataTableManager.ItemDataTableManager_C
<<<<<<< HEAD
// 0x0000 (0x02B8 - 0x02B8)
=======
// 0x0000 (0x0268 - 0x0268)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
class UItemDataTableManager_C : public UTslItemDataTableManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ItemDataTableManager.ItemDataTableManager_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

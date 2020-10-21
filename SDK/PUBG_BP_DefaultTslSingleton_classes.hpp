#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DefaultTslSingleton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DefaultTslSingleton.BP_DefaultTslSingleton_C
// 0x0000 (0x0240 - 0x0240)
class UBP_DefaultTslSingleton_C : public UTslSingleton
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DefaultTslSingleton.BP_DefaultTslSingleton_C"));

		return ptr;
	}


	void OnFinishLoadEmote();
	class UClass* GetCharmAnimInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

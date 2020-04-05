#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AvfMediaFactory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AvfMediaFactory.AvfMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UAvfMediaSettings : public UObject
{
public:
	bool                                               NativeAudioOut;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AvfMediaFactory.AvfMediaSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

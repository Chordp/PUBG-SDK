#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EasyAntiCheatCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0010 (0x0200 - 0x01F0)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent"));

		return ptr;
	}


	void ServerMessage(TArray<unsigned char> Message);
	void ClientMessage(TArray<unsigned char> Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

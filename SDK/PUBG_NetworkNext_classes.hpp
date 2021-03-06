#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NetworkNext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetworkNext.NetworkNextUtils
// 0x0000 (0x0040 - 0x0040)
class UNetworkNextUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkNext.NetworkNextUtils"));

		return ptr;
	}

};


// Class NetworkNext.NetworkNextNetDriver
// 0x0030 (0x0538 - 0x0508)
class UNetworkNextNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0508(0x0010) MISSED OFFSET
	struct FString                                     CustomerPublicKeyBase64;                                  // 0x0518(0x0010) (ZeroConstructor, Config)
	struct FString                                     CustomerPrivateKeyBase64;                                 // 0x0528(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NetworkNext.NetworkNextNetDriver"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

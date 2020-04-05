#pragma once

// PUBG (7.1.6.5) SDK

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
// 0x0000 (0x0028 - 0x0028)
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


<<<<<<< HEAD
	void STATIC_UpgradePlayer(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* UserId, ENetworkNextPlatformType* Platform, struct FString* Tag);
	void STATIC_SetServerConfig(struct FNetworkNextServerConfig* ServerConfig);
	void STATIC_SetConfig(struct FNetworkNextConfig* Config);
	struct FNetworkNextClientStats STATIC_GetClientStats(class UObject** WorldContextObject);
	struct FString STATIC_GetClientSessionId(class UObject** WorldContextObject);
=======
	void STATIC_UpgradePlayer(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserId, ENetworkNextPlatformType Platform, const struct FString& Tag);
	void STATIC_SetServerConfig(const struct FNetworkNextServerConfig& ServerConfig);
	void STATIC_SetConfig(const struct FNetworkNextConfig& Config);
	struct FNetworkNextClientStats STATIC_GetClientStats(class UObject* WorldContextObject);
	struct FString STATIC_GetClientSessionId(class UObject* WorldContextObject);
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};


// Class NetworkNext.NetworkNextNetDriver
<<<<<<< HEAD
// 0x0030 (0x0510 - 0x04E0)
class UNetworkNextNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET
	struct FString                                     CustomerPublicKeyBase64;                                  // 0x04F0(0x0010) (ZeroConstructor, Config)
	struct FString                                     CustomerPrivateKeyBase64;                                 // 0x0500(0x0010) (ZeroConstructor, Config)
=======
// 0x0030 (0x04C0 - 0x0490)
class UNetworkNextNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	struct FString                                     CustomerPublicKeyBase64;                                  // 0x04A0(0x0010) (ZeroConstructor, Config)
	struct FString                                     CustomerPrivateKeyBase64;                                 // 0x04B0(0x0010) (ZeroConstructor, Config)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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

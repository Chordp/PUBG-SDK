#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NetworkNext.ENetworkNextPlatformType
enum class ENetworkNextPlatformType : uint8_t
{
	PlatformType_Unknown           = 0,
	PlatformType_Windows           = 1,
	PlatformType_Mac               = 2,
	PlatformType_Linux             = 3,
	PlatformType_Switch            = 4,
	PlatformType_PS4               = 5,
	PlatformType_XboxOne           = 6,
	PlatformType_iOS               = 7,
	PlatformType_MAX               = 8
};


// Enum NetworkNext.ENetworkNextConnectionType
enum class ENetworkNextConnectionType : uint8_t
{
	ConnectionType_Unknown         = 0,
	ConnectionType_Wired           = 1,
	ConnectionType_Wifi            = 2,
	ConnectionType_Cellular        = 3,
	ConnectionType_MAX             = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetworkNext.NetworkNextServerConfig
// 0x0020
struct FNetworkNextServerConfig
{
	struct FString                                     ServerAddress;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Datacenter;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct NetworkNext.NetworkNextConfig
// 0x0030
struct FNetworkNextConfig
{
	struct FString                                     PublicKeyBase64;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PrivateKeyBase64;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SocketSendBufferSize;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SocketReceiveBufferSize;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTryBeforeYouBuy;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableHighPriorityServerThread;                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct NetworkNext.NetworkNextClientStats
// 0x0034
struct FNetworkNextClientStats
{
	ENetworkNextConnectionType                         ConnectionType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnNetworkNext;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              NetworkNextMinRtt;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkNextMeanRtt;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkNextMaxRtt;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkNextJitter;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkNextPacketLoss;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectMinRtt;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectMeanRtt;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectMaxRtt;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectJitter;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectPacketLoss;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KbpsUp;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KbpsDown;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NetworkNext_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NetworkNext.NetworkNextUtils.UpgradePlayer
struct UNetworkNextUtils_UpgradePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
	ENetworkNextPlatformType                           Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
};

// Function NetworkNext.NetworkNextUtils.SetServerConfig
struct UNetworkNextUtils_SetServerConfig_Params
{
	struct FNetworkNextServerConfig                    ServerConfig;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NetworkNext.NetworkNextUtils.SetConfig
struct UNetworkNextUtils_SetConfig_Params
{
	struct FNetworkNextConfig                          Config;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NetworkNext.NetworkNextUtils.GetClientStats
struct UNetworkNextUtils_GetClientStats_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNetworkNextClientStats                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NetworkNext.NetworkNextUtils.GetClientSessionId
struct UNetworkNextUtils_GetClientSessionId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

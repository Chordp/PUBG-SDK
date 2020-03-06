#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HTML5Networking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HTML5Networking.WebSocketConnection
// 0x0010 (0x65840 - 0x65830)
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x65830(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class HTML5Networking.WebSocketConnection"));

		return ptr;
	}

};


// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x0470 - 0x0460)
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                            // 0x0460(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0464(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class HTML5Networking.WebSocketNetDriver"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

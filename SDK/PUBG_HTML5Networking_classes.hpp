#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0010 (0x65858 - 0x65848)
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x65848(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class HTML5Networking.WebSocketConnection"));

		return ptr;
	}

};


// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x04E8 - 0x04D8)
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                            // 0x04D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04DC(0x000C) MISSED OFFSET

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

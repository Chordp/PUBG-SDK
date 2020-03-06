#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TslCommon.GameEventBase
// 0x0010
struct FGameEventBase
{
	int                                                _V;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       _T;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TslCommon.LogCommon
// 0x0028
struct FLogCommon
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (ZeroConstructor)
	float                                              IsGame;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct TslCommon.LogBase
// 0x0060
struct FLogBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FLogCommon                                  common;                                                   // 0x0008(0x0028)
	int                                                _V;                                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     _D;                                                       // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     _T;                                                       // 0x0048(0x0010) (ZeroConstructor)
	bool                                               _U;                                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

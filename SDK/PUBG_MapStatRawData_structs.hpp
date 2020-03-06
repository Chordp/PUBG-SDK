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

// UserDefinedStruct MapStatRawData.MapStatRawData
// 0x0030
struct FMapStatRawData
{
	TArray<int>                                        CallCounts_21_1E4A149C4ED100BE09F3B7A4DFAE2BF0;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      InclusiveAvg_16_915CDEF346F9BAE776076EBDFF05FA37;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      InclusiveMax_20_C56D7A7A46996139B7DC36A10A3FA276;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MobilePatchingUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (0x0060 - 0x0040)
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobileInstalledContent"));

		return ptr;
	}

};


// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (0x00A0 - 0x0060)
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePendingContent"));

		return ptr;
	}

};


// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (0x0040 - 0x0040)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePatchingLibrary"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

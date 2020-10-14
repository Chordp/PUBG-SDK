#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AndroidPermission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0050 (0x0090 - 0x0040)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                      // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AndroidPermission.AndroidPermissionCallbackProxy"));

		return ptr;
	}

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0040 - 0x0040)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AndroidPermission.AndroidPermissionFunctionLibrary"));

		return ptr;
	}


	bool STATIC_CheckPermission(const struct FString& permission);
	class UAndroidPermissionCallbackProxy* STATIC_AcquirePermissions(TArray<struct FString> Permissions);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

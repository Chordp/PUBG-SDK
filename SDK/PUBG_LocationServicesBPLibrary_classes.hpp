#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LocationServicesBPLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0040 - 0x0040)
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class LocationServicesBPLibrary.LocationServices"));

		return ptr;
	}

};


// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0050 - 0x0040)
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                        // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class LocationServicesBPLibrary.LocationServicesImpl"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

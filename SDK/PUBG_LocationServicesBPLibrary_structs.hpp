#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	LA_ThreeKilometers             = 0,
	LA_OneKilometer                = 1,
	LA_HundredMeters               = 2,
	LA_TenMeters                   = 3,
	LA_Best                        = 4,
	LA_Navigation                  = 5,
	LA_MAX                         = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// 0x0018
struct FLocationServicesData
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Longitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Latitude;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalAccuracy;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalAccuracy;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altitude;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

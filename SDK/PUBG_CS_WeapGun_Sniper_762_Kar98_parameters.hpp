#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Sniper_762_Kar98_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.CameraShake.ReceiveStopShake
struct UCS_WeapGun_Sniper_762_Kar98_C_ReceiveStopShake_Params
{
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceivePlayShake
struct UCS_WeapGun_Sniper_762_Kar98_C_ReceivePlayShake_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceiveIsFinished
struct UCS_WeapGun_Sniper_762_Kar98_C_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CameraShake.BlueprintUpdateCameraShake
struct UCS_WeapGun_Sniper_762_Kar98_C_BlueprintUpdateCameraShake_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ALPHA;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMinimalViewInfo                            ModifiedPOV;                                              // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

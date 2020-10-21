#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CameraShake_GrenadeDamage_Right_TPP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.CameraShake.ReceiveStopShake
struct UCameraShake_GrenadeDamage_Right_TPP_C_ReceiveStopShake_Params
{
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceivePlayShake
struct UCameraShake_GrenadeDamage_Right_TPP_C_ReceivePlayShake_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceiveIsFinished
struct UCameraShake_GrenadeDamage_Right_TPP_C_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CameraShake.BlueprintUpdateCameraShake
struct UCameraShake_GrenadeDamage_Right_TPP_C_BlueprintUpdateCameraShake_Params
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

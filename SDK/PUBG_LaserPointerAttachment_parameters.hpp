#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LaserPointerAttachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslLaserPointerAttachment.OnSpectatingChanged
struct ULaserPointerAttachment_C_OnSpectatingChanged_Params
{
	bool                                               bIsSpectating;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslLaserPointerAttachment.ActivateLaser
struct ULaserPointerAttachment_C_ActivateLaser_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

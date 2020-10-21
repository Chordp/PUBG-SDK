#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Pt_Immortal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslServerParticle.StopParticleMulticast
struct APt_Immortal_C_StopParticleMulticast_Params
{
};

// Function TslGame.TslServerParticle.OnParticleFinish
struct APt_Immortal_C_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DamageField_JerryCan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslDamageField.OnFieldDestroyed
struct ABP_DamageField_JerryCan_C_OnFieldDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslDamageField.OnCollision
struct ABP_DamageField_JerryCan_C_OnCollision_Params
{
	struct FSimpleCollisionEvent                       Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

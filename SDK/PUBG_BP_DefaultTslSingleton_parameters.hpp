#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DefaultTslSingleton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslSingleton.OnFinishLoadEmote
struct UBP_DefaultTslSingleton_C_OnFinishLoadEmote_Params
{
};

// Function TslGame.TslSingleton.GetCharmAnimInstance
struct UBP_DefaultTslSingleton_C_GetCharmAnimInstance_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

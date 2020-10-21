#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AIWeaponButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo
struct UW_AIWeaponButton_C_GiveWeaponAmmo_Params
{
	class APlayerPawn_v2_C*                            Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ATslNewBotCharacter*>                 aiCharacter;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType
struct UW_AIWeaponButton_C_SetMedType_Params
{
	struct FString                                     medTypeStr;                                               // (Parm, ZeroConstructor)
	ECastableItemType                                  MedType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed
struct UW_AIWeaponButton_C_AITakeMed_Params
{
};

// Function W_AIWeaponButton.W_AIWeaponButton_C.Construct
struct UW_AIWeaponButton_C_Construct_Params
{
};

// Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
struct UW_AIWeaponButton_C_BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton
struct UW_AIWeaponButton_C_ExecuteUbergraph_W_AIWeaponButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ItemRequestManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslItemRequestManager.OnRecvMsgNeedAmmo
struct UBP_ItemRequestManager_C_OnRecvMsgNeedAmmo_Params
{
	class ATslPlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AmmoItemID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslItemRequestManager.OnRecvMsg
struct UBP_ItemRequestManager_C_OnRecvMsg_Params
{
	class ATslPlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslItemRequestManager.OnInputReleased
struct UBP_ItemRequestManager_C_OnInputReleased_Params
{
};

// Function TslGame.TslItemRequestManager.OnInputPressed
struct UBP_ItemRequestManager_C_OnInputPressed_Params
{
};

// Function TslGame.TslItemRequestManager.OnHealItemSelectionChangedPad
struct UBP_ItemRequestManager_C_OnHealItemSelectionChangedPad_Params
{
	struct FName                                       ItemID;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

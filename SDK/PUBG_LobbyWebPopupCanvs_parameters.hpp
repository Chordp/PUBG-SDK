#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebPopupCanvs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren
struct ULobbyWebPopupCanvs_C_HasChildren_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel
struct ULobbyWebPopupCanvs_C_CreateWebPopupAndAddPanel_Params
{
	struct FWebPopupParam*                             Param;                                                    // (Parm)
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReuse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UWebPopup_C*                                 WebPopup;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl
struct ULobbyWebPopupCanvs_C_ShowWebPopupImpl_Params
{
	struct FWebPopupParam*                             PopupParam;                                               // (Parm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl
struct ULobbyWebPopupCanvs_C_OnPreloadWebPopupImpl_Params
{
	TArray<struct FWebPopupParam>                      Params;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId
struct ULobbyWebPopupCanvs_C_GetWebPopupFromPopupId_Params
{
	struct FString*                                    PopupId;                                                  // (Parm, ZeroConstructor)
	class UWebPopup_C*                                 WebPopup;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl
struct ULobbyWebPopupCanvs_C_ChangeWebPopupUriImpl_Params
{
	struct FString                                     PopupId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Uri;                                                      // (Parm, ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl
struct ULobbyWebPopupCanvs_C_OnCloseWebPopupImpl_Params
{
	struct FString*                                    PopupId;                                                  // (Parm, ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID
struct ULobbyWebPopupCanvs_C_CloseWebPopupByID_Params
{
	struct FString*                                    WebPopupID;                                               // (Parm, ZeroConstructor)
	bool*                                              bForceRemoveParent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup
struct ULobbyWebPopupCanvs_C_RemoveWebPopup_Params
{
	class UWebPopup_C**                                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup
struct ULobbyWebPopupCanvs_C_AddWebPopup_Params
{
	class UWebPopup_C**                                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup
struct ULobbyWebPopupCanvs_C_CanShowWebPopup_Params
{
	struct FString*                                    PopupId;                                                  // (Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl
struct ULobbyWebPopupCanvs_C_CreateWebPopupImpl_Params
{
	struct FWebPopupParam*                             Param;                                                    // (Parm)
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReuse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup
struct ULobbyWebPopupCanvs_C_CloseWebPopup_Params
{
	struct FString*                                    PopupId;                                                  // (Parm, ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup
struct ULobbyWebPopupCanvs_C_ShowWebPopup_Params
{
	struct FWebPopupParam*                             Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup
struct ULobbyWebPopupCanvs_C_PreloadWebPopup_Params
{
	TArray<struct FWebPopupParam>*                     WebPopupParams;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct
struct ULobbyWebPopupCanvs_C_Construct_Params
{
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs
struct ULobbyWebPopupCanvs_C_ExecuteUbergraph_LobbyWebPopupCanvs_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

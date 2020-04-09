// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebPopupCanvs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

bool ULobbyWebPopupCanvs_C::HasChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren"));

	ULobbyWebPopupCanvs_C_HasChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FWebPopupParam*         Param                          (Parm)
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReuse                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWebPopup_C*             WebPopup                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::CreateWebPopupAndAddPanel(struct FWebPopupParam* Param, bool* bShow, bool* bReuse, class UWebPopup_C** WebPopup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel"));

	ULobbyWebPopupCanvs_C_CreateWebPopupAndAddPanel_Params params;
	params.Param = Param;
	params.bShow = bShow;
	params.bReuse = bReuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WebPopup != nullptr)
		*WebPopup = params.WebPopup;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FWebPopupParam*         PopupParam                     (Parm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::ShowWebPopupImpl(struct FWebPopupParam* PopupParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl"));

	ULobbyWebPopupCanvs_C_ShowWebPopupImpl_Params params;
	params.PopupParam = PopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<struct FWebPopupParam>  Params                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::OnPreloadWebPopupImpl(TArray<struct FWebPopupParam>* Params)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl"));

	ULobbyWebPopupCanvs_C_OnPreloadWebPopupImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// class UWebPopup_C*             WebPopup                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::GetWebPopupFromPopupId(struct FString* PopupId, class UWebPopup_C** WebPopup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId"));

	ULobbyWebPopupCanvs_C_GetWebPopupFromPopupId_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WebPopup != nullptr)
		*WebPopup = params.WebPopup;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// struct FString*                Uri                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::ChangeWebPopupUriImpl(struct FString* PopupId, struct FString* Uri)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl"));

	ULobbyWebPopupCanvs_C_ChangeWebPopupUriImpl_Params params;
	params.PopupId = PopupId;
	params.Uri = Uri;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::OnCloseWebPopupImpl(struct FString* PopupId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl"));

	ULobbyWebPopupCanvs_C_OnCloseWebPopupImpl_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                WebPopupID                     (Parm, ZeroConstructor)
// bool*                          bForceRemoveParent             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::CloseWebPopupByID(struct FString* WebPopupID, bool* bForceRemoveParent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID"));

	ULobbyWebPopupCanvs_C_CloseWebPopupByID_Params params;
	params.WebPopupID = WebPopupID;
	params.bForceRemoveParent = bForceRemoveParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::RemoveWebPopup(class UWebPopup_C** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup"));

	ULobbyWebPopupCanvs_C_RemoveWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::AddWebPopup(class UWebPopup_C** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup"));

	ULobbyWebPopupCanvs_C_AddWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::CanShowWebPopup(struct FString* PopupId, bool* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup"));

	ULobbyWebPopupCanvs_C_CanShowWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FWebPopupParam*         Param                          (Parm)
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReuse                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::CreateWebPopupImpl(struct FWebPopupParam* Param, bool* bShow, bool* bReuse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl"));

	ULobbyWebPopupCanvs_C_CreateWebPopupImpl_Params params;
	params.Param = Param;
	params.bShow = bShow;
	params.bReuse = bReuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::CloseWebPopup(struct FString* PopupId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup"));

	ULobbyWebPopupCanvs_C_CloseWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FWebPopupParam*         Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::ShowWebPopup(struct FWebPopupParam* Param)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup"));

	ULobbyWebPopupCanvs_C_ShowWebPopup_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<struct FWebPopupParam>* WebPopupParams                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup"));

	ULobbyWebPopupCanvs_C_PreloadWebPopup_Params params;
	params.WebPopupParams = WebPopupParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct"));

	ULobbyWebPopupCanvs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ULobbyWebPopupCanvs_C::ExecuteUbergraph_LobbyWebPopupCanvs(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs"));

	ULobbyWebPopupCanvs_C_ExecuteUbergraph_LobbyWebPopupCanvs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

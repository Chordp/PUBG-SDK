// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyHUD_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyHUD_Default.LobbyHUD_Default_C.ChangeScene
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PoseId                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::ChangeScene(struct FString* PoseId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ChangeScene"));

	ALobbyHUD_Default_C_ChangeScene_Params params;
	params.PoseId = PoseId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ShowPoseActor
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                SourceString                   (Parm, ZeroConstructor)
// TArray<struct FString>         SkinIDs                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::ShowPoseActor(struct FString* SourceString, TArray<struct FString>* SkinIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ShowPoseActor"));

	ALobbyHUD_Default_C_ShowPoseActor_Params params;
	params.SourceString = SourceString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinIDs != nullptr)
		*SkinIDs = params.SkinIDs;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.DestroyPoseActor
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::DestroyPoseActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.DestroyPoseActor"));

	ALobbyHUD_Default_C_DestroyPoseActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.UserConstructionScript
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.UserConstructionScript"));

	ALobbyHUD_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.HideMasteryPose
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::HideMasteryPose()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.HideMasteryPose"));

	ALobbyHUD_Default_C_HideMasteryPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ShowMasteryPose
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                PoseId                         (Parm, ZeroConstructor)
// TArray<struct FString>*        ItemIds                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::ShowMasteryPose(struct FString* PoseId, TArray<struct FString>* ItemIds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ShowMasteryPose"));

	ALobbyHUD_Default_C_ShowMasteryPose_Params params;
	params.PoseId = PoseId;
	params.ItemIds = ItemIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::ReceivePostBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay"));

	ALobbyHUD_Default_C_ReceivePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ExecuteUbergraph_LobbyHUD_Default
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void ALobbyHUD_Default_C::ExecuteUbergraph_LobbyHUD_Default(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ExecuteUbergraph_LobbyHUD_Default"));

	ALobbyHUD_Default_C_ExecuteUbergraph_LobbyHUD_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

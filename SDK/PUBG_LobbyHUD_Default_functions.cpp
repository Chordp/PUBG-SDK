// PUBG (7.1.6.5) SDK

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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PoseId                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                SourceString                   (Parm, ZeroConstructor)
// TArray<struct FString>         SkinIDs                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString*                PoseId                         (Parm, ZeroConstructor)
// TArray<struct FString>*        ItemIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyHUD_Default_C::ShowMasteryPose(struct FString* PoseId, TArray<struct FString>* ItemIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyHUD_Default.LobbyHUD_Default_C.ShowMasteryPose"));

	ALobbyHUD_Default_C_ShowMasteryPose_Params params;
	params.PoseId = PoseId;
	params.ItemIDs = ItemIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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

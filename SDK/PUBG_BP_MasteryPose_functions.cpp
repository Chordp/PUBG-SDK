// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ClearEffects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects"));

	ABP_MasteryPose_C_ClearEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             LobbyCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::AttachObjects(class ACharacter** LobbyCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects"));

	ABP_MasteryPose_C_AttachObjects_Params params;
	params.LobbyCharacter = LobbyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ShowPlayerCardEffects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects"));

	ABP_MasteryPose_C_ShowPlayerCardEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ShowLobbyEffects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects"));

	ABP_MasteryPose_C_ShowLobbyEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript"));

	ABP_MasteryPose_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay"));

	ABP_MasteryPose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed"));

	ABP_MasteryPose_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::AttachObjectsEvent(class ACharacter** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent"));

	ABP_MasteryPose_C_AttachObjectsEvent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ClearEffectsEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent"));

	ABP_MasteryPose_C_ClearEffectsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ShowEffects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects"));

	ABP_MasteryPose_C_ShowEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_C::ExecuteUbergraph_BP_MasteryPose(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose"));

	ABP_MasteryPose_C_ExecuteUbergraph_BP_MasteryPose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

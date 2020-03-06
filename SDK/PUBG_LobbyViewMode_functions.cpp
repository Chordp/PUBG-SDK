// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyViewMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript"));

	ALobbyViewMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddYaw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::AddYaw(float* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.AddYaw"));

	ALobbyViewMode_C_AddYaw_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddPitch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::AddPitch(float* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.AddPitch"));

	ALobbyViewMode_C_AddPitch_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddRoll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::AddRoll(float* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.AddRoll"));

	ALobbyViewMode_C_AddRoll_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddViewDistance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::AddViewDistance(float* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.AddViewDistance"));

	ALobbyViewMode_C_AddViewDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.ReceiveTick"));

	ALobbyViewMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::SetViewModeAbleActor(class AActor** Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor"));

	ALobbyViewMode_C_SetViewModeAbleActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ALobbyViewMode_C::ExecuteUbergraph_LobbyViewMode(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode"));

	ALobbyViewMode_C_ExecuteUbergraph_LobbyViewMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

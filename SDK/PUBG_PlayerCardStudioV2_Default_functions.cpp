// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerCardStudioV2_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void APlayerCardStudioV2_Default_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.UserConstructionScript"));

	APlayerCardStudioV2_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void APlayerCardStudioV2_Default_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ReceiveBeginPlay"));

	APlayerCardStudioV2_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void APlayerCardStudioV2_Default_C::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ReceiveDestroyed"));

	APlayerCardStudioV2_Default_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ExecuteUbergraph_PlayerCardStudioV2_Default
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void APlayerCardStudioV2_Default_C::ExecuteUbergraph_PlayerCardStudioV2_Default(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C.ExecuteUbergraph_PlayerCardStudioV2_Default"));

	APlayerCardStudioV2_Default_C_ExecuteUbergraph_PlayerCardStudioV2_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

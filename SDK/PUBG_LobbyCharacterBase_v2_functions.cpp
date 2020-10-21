// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyCharacterBase_v2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELobbyCharacterAnimationType   NewLobbyCharacterAnimationType (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CDA3F70              		 offset:33a3f70                       

void ALobbyCharacterBase_v2_C::SetLobbyCharacterAnimationType(ELobbyCharacterAnimationType NewLobbyCharacterAnimationType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType"));

	ALobbyCharacterBase_v2_C_SetLobbyCharacterAnimationType_Params params;
	params.NewLobbyCharacterAnimationType = NewLobbyCharacterAnimationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyCharacter.RemoveCustomAnimation
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75E9178C0              		 offset:4f178c0                       

void ALobbyCharacterBase_v2_C::RemoveCustomAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.RemoveCustomAnimation"));

	ALobbyCharacterBase_v2_C_RemoveCustomAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyCharacter.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CBF05C0              		 offset:31f05c0                       

void ALobbyCharacterBase_v2_C::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.OnMontageEnded"));

	ALobbyCharacterBase_v2_C_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyCharacter.IsLogout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A64C8E0              		 offset:c4c8e0                        

bool ALobbyCharacterBase_v2_C::IsLogout()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.IsLogout"));

	ALobbyCharacterBase_v2_C_IsLogout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.IsInCustomizationScene
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DCA5FC0              		 offset:42a5fc0                       

bool ALobbyCharacterBase_v2_C::IsInCustomizationScene()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.IsInCustomizationScene"));

	ALobbyCharacterBase_v2_C_IsInCustomizationScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetSlotId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E2DA3D0              		 offset:48da3d0                       

int ALobbyCharacterBase_v2_C::GetSlotId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetSlotId"));

	ALobbyCharacterBase_v2_C_GetSlotId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetRankType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ERankType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A11EA60              		 offset:71ea60                        

ERankType ALobbyCharacterBase_v2_C::GetRankType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetRankType"));

	ALobbyCharacterBase_v2_C_GetRankType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetRankDivision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E7CF3C0              		 offset:4dcf3c0                       

int ALobbyCharacterBase_v2_C::GetRankDivision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetRankDivision"));

	ALobbyCharacterBase_v2_C_GetRankDivision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetNickName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75E24B040              		 offset:484b040                       

struct FString ALobbyCharacterBase_v2_C::GetNickName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetNickName"));

	ALobbyCharacterBase_v2_C_GetNickName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75AE36050              		 offset:1436050                       

struct FString ALobbyCharacterBase_v2_C::GetNetId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetNetId"));

	ALobbyCharacterBase_v2_C_GetNetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELobbyCharacterAnimationType   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AF86560              		 offset:1586560                       

ELobbyCharacterAnimationType ALobbyCharacterBase_v2_C::GetLobbyCharacterAnimationType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType"));

	ALobbyCharacterBase_v2_C_GetLobbyCharacterAnimationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetClanName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF759AD2920              		 offset:d2920                         

struct FString ALobbyCharacterBase_v2_C::GetClanName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetClanName"));

	ALobbyCharacterBase_v2_C_GetClanName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.GetCharacterPlatform
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOutGamePlatformProvider       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DD86A30              		 offset:4386a30                       

EOutGamePlatformProvider ALobbyCharacterBase_v2_C::GetCharacterPlatform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.GetCharacterPlatform"));

	ALobbyCharacterBase_v2_C_GetCharacterPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.LobbyCharacter.ApplyCustomAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimationAsset*         Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A7F6390              		 offset:df6390                        

void ALobbyCharacterBase_v2_C::ApplyCustomAnimation(class UAnimationAsset* Animation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyCharacter.ApplyCustomAnimation"));

	ALobbyCharacterBase_v2_C_ApplyCustomAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

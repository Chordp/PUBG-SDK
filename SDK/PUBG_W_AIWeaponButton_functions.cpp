// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AIWeaponButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_v2_C*        Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ATslNewBotCharacter*> aiCharacter                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WeaponIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::GiveWeaponAmmo(class APlayerPawn_v2_C* Pawn, TArray<class ATslNewBotCharacter*> aiCharacter, int WeaponIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo"));

	UW_AIWeaponButton_C_GiveWeaponAmmo_Params params;
	params.Pawn = Pawn;
	params.aiCharacter = aiCharacter;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 medTypeStr                     (Parm, ZeroConstructor)
// ECastableItemType              MedType                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::SetMedType(const struct FString& medTypeStr, ECastableItemType MedType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType"));

	UW_AIWeaponButton_C_SetMedType_Params params;
	params.medTypeStr = medTypeStr;
	params.MedType = MedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::AITakeMed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed"));

	UW_AIWeaponButton_C_AITakeMed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIWeaponButton.W_AIWeaponButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.Construct"));

	UW_AIWeaponButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature"));

	UW_AIWeaponButton_C_BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIWeaponButton_C::ExecuteUbergraph_W_AIWeaponButton(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton"));

	UW_AIWeaponButton_C_ExecuteUbergraph_W_AIWeaponButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

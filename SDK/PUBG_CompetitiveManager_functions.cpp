// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CompetitiveManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.CompetitiveManager.UpdateSmokeParticleColor
// (Final, Native, Public)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF75A203BA0              		 offset:803ba0                        

void ACompetitiveManager_C::UpdateSmokeParticleColor(const struct FString& Title)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.CompetitiveManager.UpdateSmokeParticleColor"));

	ACompetitiveManager_C_UpdateSmokeParticleColor_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CompetitiveManager.ApplySmokeColorHelper
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ColorVector                    (Parm, IsPlainOldData)
// class UTexture*                Tex                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D8622C0              		 offset:3e622c0                       

void ACompetitiveManager_C::ApplySmokeColorHelper(const struct FVector& ColorVector, class UTexture* Tex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.CompetitiveManager.ApplySmokeColorHelper"));

	ACompetitiveManager_C_ApplySmokeColorHelper_Params params;
	params.ColorVector = ColorVector;
	params.Tex = Tex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.CompetitiveManager.ApplySmokeColor
// (Final, Native, Public)
// FunctionAddress:0x00007FF75E106560              		 offset:4706560                       

void ACompetitiveManager_C::ApplySmokeColor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.CompetitiveManager.ApplySmokeColor"));

	ACompetitiveManager_C_ApplySmokeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HitNotifyWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::GetBloodSpotWidget(class UUserWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget"));

	UHitNotifyWidget_C_GetBloodSpotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::InitializeBloodSpotWidgets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets"));

	UHitNotifyWidget_C_InitializeBloodSpotWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::InitializeKoreanRating()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating"));

	UHitNotifyWidget_C_InitializeKoreanRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::InitializeChineseLicensing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing"));

	UHitNotifyWidget_C_InitializeChineseLicensing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DamagedPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::DamagedPercentToDamage(float* DamagedPercent, float* Damage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage"));

	UHitNotifyWidget_C_DamagedPercentToDamage_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          HealthPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::GetPlayerHealthPercent(float* HealthPercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent"));

	UHitNotifyWidget_C_GetPlayerHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::PostAkEvent(class UAkAudioEvent** AkEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent"));

	UHitNotifyWidget_C_PostAkEvent_Params params;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::SetRTPCValue(struct FString* RTPC, float* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue"));

	UHitNotifyWidget_C_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DamagedPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamagePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::DamagedPercentToDamagePercent(float* DamagedPercent, float* DamagePercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent"));

	UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::PlayHitNotifySound()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound"));

	UHitNotifyWidget_C_PlayHitNotifySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Scale                          (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::GetRandomScale(struct FVector2D* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale"));

	UHitNotifyWidget_C_GetRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Translation                    (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::GetRandomTranslation(struct FVector2D* Translation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation"));

	UHitNotifyWidget_C_GetRandomTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify_Temp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// EDamageTypeCategory            DamageTypeCategory             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::OnHitNotify_Temp(float DamagePercent, EDamageTypeCategory DamageTypeCategory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify_Temp"));

	UHitNotifyWidget_C_OnHitNotify_Temp_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.Construct"));

	UHitNotifyWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.OnPlayBloodSpot
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::OnPlayBloodSpot(class UUserWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.OnPlayBloodSpot"));

	UHitNotifyWidget_C_OnPlayBloodSpot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UHitNotifyWidget_C::ExecuteUbergraph_HitNotifyWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget"));

	UHitNotifyWidget_C_ExecuteUbergraph_HitNotifyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

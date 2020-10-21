// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FireEffectController_JerryCan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslEffectController.TickDamageFields
// (Final, Native, Public)
// FunctionAddress:0x00007FF75D8F80E0              		 offset:3ef80e0                       

void ABP_FireEffectController_JerryCan_C::TickDamageFields()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.TickDamageFields"));

	ABP_FireEffectController_JerryCan_C_TickDamageFields_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.OnTakeDamage
// (Final, Native, Public)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D507CF0              		 offset:3b07cf0                       

void ABP_FireEffectController_JerryCan_C::OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.OnTakeDamage"));

	ABP_FireEffectController_JerryCan_C_OnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.EndEffect
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75E1BD280              		 offset:47bd280                       

void ABP_FireEffectController_JerryCan_C::EndEffect()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.EndEffect"));

	ABP_FireEffectController_JerryCan_C_EndEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.Client_ShowDebugString
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)
// struct FString                 InText                         (Parm, ZeroConstructor)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  InColor                        (Parm, IsPlainOldData)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B962670              		 offset:1f62670                       

void ABP_FireEffectController_JerryCan_C::Client_ShowDebugString(const struct FVector& InLocation, const struct FString& InText, class AActor* InActor, const struct FColor& InColor, float InTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.Client_ShowDebugString"));

	ABP_FireEffectController_JerryCan_C_Client_ShowDebugString_Params params;
	params.InLocation = InLocation;
	params.InText = InText;
	params.InActor = InActor;
	params.InColor = InColor;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.Client_ShowDebugSphere
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  InColor                        (Parm, IsPlainOldData)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D243A40              		 offset:3843a40                       

void ABP_FireEffectController_JerryCan_C::Client_ShowDebugSphere(const struct FVector& InLocation, float InRadius, const struct FColor& InColor, float InTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.Client_ShowDebugSphere"));

	ABP_FireEffectController_JerryCan_C_Client_ShowDebugSphere_Params params;
	params.InLocation = InLocation;
	params.InRadius = InRadius;
	params.InColor = InColor;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.Client_ShowDebugLine
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 InStart                        (Parm, IsPlainOldData)
// struct FVector                 InEnd                          (Parm, IsPlainOldData)
// struct FColor                  InColor                        (Parm, IsPlainOldData)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A8AB870              		 offset:eab870                        

void ABP_FireEffectController_JerryCan_C::Client_ShowDebugLine(const struct FVector& InStart, const struct FVector& InEnd, const struct FColor& InColor, float InTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.Client_ShowDebugLine"));

	ABP_FireEffectController_JerryCan_C_Client_ShowDebugLine_Params params;
	params.InStart = InStart;
	params.InEnd = InEnd;
	params.InColor = InColor;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslEffectController.Client_ShowDebugCoordinateSystem
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 InStart                        (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FQuat                   InQuat                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSize                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B29DAD0              		 offset:189dad0                       

void ABP_FireEffectController_JerryCan_C::Client_ShowDebugCoordinateSystem(const struct FVector& InStart, const struct FQuat& InQuat, float InTime, float InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslEffectController.Client_ShowDebugCoordinateSystem"));

	ABP_FireEffectController_JerryCan_C_Client_ShowDebugCoordinateSystem_Params params;
	params.InStart = InStart;
	params.InQuat = InQuat;
	params.InTime = InTime;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

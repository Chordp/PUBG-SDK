// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DamageField_JerryCan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslDamageField.OnFieldDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D03F430              		 offset:363f430                       

void ABP_DamageField_JerryCan_C::OnFieldDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslDamageField.OnFieldDestroyed"));

	ABP_DamageField_JerryCan_C_OnFieldDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslDamageField.OnCollision
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FSimpleCollisionEvent   Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75CBD4C00              		 offset:31d4c00                       

void ABP_DamageField_JerryCan_C::OnCollision(const struct FSimpleCollisionEvent& Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslDamageField.OnCollision"));

	ABP_DamageField_JerryCan_C_OnCollision_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

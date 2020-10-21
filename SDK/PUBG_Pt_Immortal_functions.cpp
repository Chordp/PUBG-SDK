// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Pt_Immortal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslServerParticle.StopParticleMulticast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// FunctionAddress:0x00007FF759B1D0B0              		 offset:11d0b0                        

void APt_Immortal_C::StopParticleMulticast()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslServerParticle.StopParticleMulticast"));

	APt_Immortal_C_StopParticleMulticast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslServerParticle.OnParticleFinish
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75B33D510              		 offset:193d510                       

void APt_Immortal_C::OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslServerParticle.OnParticleFinish"));

	APt_Immortal_C_OnParticleFinish_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

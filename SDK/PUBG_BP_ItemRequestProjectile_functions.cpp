// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ItemRequestProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslItemRequestProjectile.OnRep_Target
// (Final, Native, Protected)
// FunctionAddress:0x00007FF75CF03810              		 offset:3503810                       

void ABP_ItemRequestProjectile_C::OnRep_Target()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslItemRequestProjectile.OnRep_Target"));

	ABP_ItemRequestProjectile_C_OnRep_Target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

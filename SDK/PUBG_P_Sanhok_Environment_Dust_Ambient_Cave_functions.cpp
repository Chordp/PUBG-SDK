// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Dust_Ambient_Cave_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_Sanhok_Environment_Dust_Ambient_Cave.P_Sanhok_Environment_Dust_Ambient_Cave_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AP_Sanhok_Environment_Dust_Ambient_Cave_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function P_Sanhok_Environment_Dust_Ambient_Cave.P_Sanhok_Environment_Dust_Ambient_Cave_C.UserConstructionScript"));

	AP_Sanhok_Environment_Dust_Ambient_Cave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

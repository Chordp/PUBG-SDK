// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Dust_Ambient_01_BP1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_Sanhok_Environment_Dust_Ambient_01_BP1.P_Sanhok_Environment_Dust_Ambient_01_BP1_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AP_Sanhok_Environment_Dust_Ambient_01_BP1_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function P_Sanhok_Environment_Dust_Ambient_01_BP1.P_Sanhok_Environment_Dust_Ambient_01_BP1_C.UserConstructionScript"));

	AP_Sanhok_Environment_Dust_Ambient_01_BP1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ITslMainUMGHUDInitializer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITslMainUMGHUDInitializer.ITslMainUMGHUDInitializer_C.InitializeMainUMGHUD
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UITslMainUMGHUDInitializer_C::InitializeMainUMGHUD()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ITslMainUMGHUDInitializer.ITslMainUMGHUDInitializer_C.InitializeMainUMGHUD"));

	UITslMainUMGHUDInitializer_C_InitializeMainUMGHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

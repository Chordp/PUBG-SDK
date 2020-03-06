// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadHelpInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadHelpInterface.GamepadHelpInterface_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UGamepadHelpInterface_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GamepadHelpInterface.GamepadHelpInterface_C.GetGamePadHelpWidgetClass"));

	UGamepadHelpInterface_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

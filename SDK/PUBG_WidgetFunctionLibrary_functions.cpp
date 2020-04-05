// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WidgetFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetOwningShooterCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            UserWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           ShooterCharacter               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UWidgetFunctionLibrary_C::STATIC_GetOwningShooterCharacter(class UUserWidget** UserWidget, class UObject** __WorldContext, class ATslCharacter** ShooterCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetOwningShooterCharacter"));

	UWidgetFunctionLibrary_C_GetOwningShooterCharacter_Params params;
	params.UserWidget = UserWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterCharacter != nullptr)
		*ShooterCharacter = params.ShooterCharacter;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlatoonCarePackageDropIndicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconType
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EPlatoonCarePackageType        Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UPlatoonCarePackageDropIndicator_C::BP_UpdateIconType(EPlatoonCarePackageType Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconType"));

	UPlatoonCarePackageDropIndicator_C_BP_UpdateIconType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconImage
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EPlatoonSupportRequestEventType IconType                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UPlatoonCarePackageDropIndicator_C::BP_UpdateIconImage(EPlatoonSupportRequestEventType IconType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconImage"));

	UPlatoonCarePackageDropIndicator_C_BP_UpdateIconImage_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.ExecuteUbergraph_PlatoonCarePackageDropIndicator
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UPlatoonCarePackageDropIndicator_C::ExecuteUbergraph_PlatoonCarePackageDropIndicator(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.ExecuteUbergraph_PlatoonCarePackageDropIndicator"));

	UPlatoonCarePackageDropIndicator_C_ExecuteUbergraph_PlatoonCarePackageDropIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

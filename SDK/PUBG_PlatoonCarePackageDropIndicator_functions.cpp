// PUBG (7.1.6.5) SDK

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
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlatoonCarePackageType*       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPlatoonCarePackageDropIndicator_C::BP_UpdateIconType(EPlatoonCarePackageType* Type)
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
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlatoonSupportRequestEventType* IconType                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPlatoonCarePackageDropIndicator_C::BP_UpdateIconImage(EPlatoonSupportRequestEventType* IconType)
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
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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

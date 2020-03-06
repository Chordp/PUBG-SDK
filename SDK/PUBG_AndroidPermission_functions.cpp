// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AndroidPermission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 permission                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE1FA00              		 offset:445fa00                       

bool UAndroidPermissionFunctionLibrary::STATIC_CheckPermission(const struct FString& permission)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission"));

	UAndroidPermissionFunctionLibrary_CheckPermission_Params params;
	params.permission = permission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Permissions                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAndroidPermissionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE1F920              		 offset:445f920                       

class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::STATIC_AcquirePermissions(TArray<struct FString> Permissions)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions"));

	UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params;
	params.Permissions = Permissions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

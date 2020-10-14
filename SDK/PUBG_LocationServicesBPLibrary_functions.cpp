// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LocationServicesBPLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B618480              		 offset:2b48480                       

bool ULocationServices::STATIC_StopLocationServices()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.StopLocationServices"));

	ULocationServices_StopLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B618450              		 offset:2b48450                       

bool ULocationServices::STATIC_StartLocationServices()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.StartLocationServices"));

	ULocationServices_StartLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B6183D0              		 offset:2b483d0                       

bool ULocationServices::STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable"));

	ULocationServices_IsLocationAccuracyAvailable_Params params;
	params.Accuracy = Accuracy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpdateFrequency                (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinDistanceFilter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B6182D0              		 offset:2b482d0                       

bool ULocationServices::STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.InitLocationServices"));

	ULocationServices_InitLocationServices_Params params;
	params.Accuracy = Accuracy;
	params.UpdateFrequency = UpdateFrequency;
	params.MinDistanceFilter = MinDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocationServicesImpl*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B6182B0              		 offset:2b482b0                       

class ULocationServicesImpl* ULocationServices::STATIC_GetLocationServicesImpl()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl"));

	ULocationServices_GetLocationServicesImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLocationServicesData   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B618270              		 offset:2b48270                       

struct FLocationServicesData ULocationServices::STATIC_GetLastKnownLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation"));

	ULocationServices_GetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B618240              		 offset:2b48240                       

bool ULocationServices::STATIC_AreLocationServicesEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled"));

	ULocationServices_AreLocationServicesEnabled_Params params;

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

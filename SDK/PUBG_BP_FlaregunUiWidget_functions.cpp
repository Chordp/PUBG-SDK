// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FlaregunUiWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsCarePackageComing            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsVehicleComing                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::IsCarePackageComming(bool* IsCarePackageComing, bool* IsVehicleComing)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming"));

	UBP_FlaregunUiWidget_C_IsCarePackageComming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCarePackageComing != nullptr)
		*IsCarePackageComing = params.IsCarePackageComing;
	if (IsVehicleComing != nullptr)
		*IsVehicleComing = params.IsVehicleComing;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::ShowTitle(bool bShow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle"));

	UBP_FlaregunUiWidget_C_ShowTitle_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsIn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::IsCharacterInWhiteZone(bool* IsIn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone"));

	UBP_FlaregunUiWidget_C_IsCharacterInWhiteZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           NumVehicle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanFire                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WaitingMine                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::SetVehicleNumber(int* NumVehicle, bool* CanFire, bool* WaitingMine)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber"));

	UBP_FlaregunUiWidget_C_SetVehicleNumber_Params params;
	params.NumVehicle = NumVehicle;
	params.CanFire = CanFire;
	params.WaitingMine = WaitingMine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           NumPackage                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanFire                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WaitingMine                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::SetPackageNumber(int* NumPackage, bool* CanFire, bool* WaitingMine)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber"));

	UBP_FlaregunUiWidget_C_SetPackageNumber_Params params;
	params.NumPackage = NumPackage;
	params.CanFire = CanFire;
	params.WaitingMine = WaitingMine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick"));

	UBP_FlaregunUiWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void UBP_FlaregunUiWidget_C::ExecuteUbergraph_BP_FlaregunUiWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget"));

	UBP_FlaregunUiWidget_C_ExecuteUbergraph_BP_FlaregunUiWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

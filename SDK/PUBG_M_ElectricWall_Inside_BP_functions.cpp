// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_ElectricWall_Inside_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript"));

	AM_ElectricWall_Inside_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.АР„З|·xЗ_
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::АР„З|·xЗ_()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.АР„З|·xЗ_"));

	AM_ElectricWall_Inside_BP_C_АР„З|·xЗ__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay"));

	AM_ElectricWall_Inside_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::Custom_Event()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event"));

	AM_ElectricWall_Inside_BP_C_Custom_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.OnSetEffectParameter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ParameterName                  (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::OnSetEffectParameter(const struct FString& ParameterName, float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.OnSetEffectParameter"));

	AM_ElectricWall_Inside_BP_C_OnSetEffectParameter_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AM_ElectricWall_Inside_BP_C::ExecuteUbergraph_M_ElectricWall_Inside_BP(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP"));

	AM_ElectricWall_Inside_BP_C_ExecuteUbergraph_M_ElectricWall_Inside_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

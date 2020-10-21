// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_CameraMan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CameraMan.BP_CameraMan_C.Init_Moto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslWheeledVehicle*      ParentRef                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::Init_Moto(class ATslWheeledVehicle* ParentRef)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.Init_Moto"));

	ABP_CameraMan_C_Init_Moto_Params params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           ParentRef                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::Init(class ATslCharacter* ParentRef)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.Init"));

	ABP_CameraMan_C_Init_Params params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript"));

	ABP_CameraMan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.ReceiveTick"));

	ABP_CameraMan_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed"));

	ABP_CameraMan_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_CameraMan_C::ExecuteUbergraph_BP_CameraMan(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan"));

	ABP_CameraMan_C_ExecuteUbergraph_BP_CameraMan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CableComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CableComponent.CableComponent.SetAttachEndTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C832EB0              		 offset:4a62eb0                       

void UCableComponent::SetAttachEndTo(class AActor** Actor, struct FName* ComponentProperty, struct FName* SocketName)
=======
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE26360              		 offset:4466360                       

void UCableComponent::SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.SetAttachEndTo"));

	UCableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CableComponent.CableComponent.GetCableParticleLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C832E00              		 offset:4a62e00                       
=======
// FunctionAddress:0x00007FF6DAE262B0              		 offset:44662b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetCableParticleLocations"));

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function CableComponent.CableComponent.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C832DD0              		 offset:4a62dd0                       
=======
// FunctionAddress:0x00007FF6DAE26280              		 offset:4466280                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetAttachedComponent"));

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CableComponent.CableComponent.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C832DA0              		 offset:4a62da0                       
=======
// FunctionAddress:0x00007FF6DAE26250              		 offset:4466250                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class AActor* UCableComponent::GetAttachedActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CableComponent.CableComponent.GetAttachedActor"));

	UCableComponent_GetAttachedActor_Params params;

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

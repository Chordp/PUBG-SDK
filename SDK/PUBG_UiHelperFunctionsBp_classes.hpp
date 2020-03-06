#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UiHelperFunctionsBp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UiHelperFunctionsBp.UiHelperFunctionsBp_C
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctionsBp_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass UiHelperFunctionsBp.UiHelperFunctionsBp_C"));

		return ptr;
	}


	void STATIC_InventoryFocusingColor(class UObject** __WorldContext, struct FLinearColor* NewParam);
	void STATIC_IsXboxOnePlatform(class UObject** __WorldContext, bool* NewParam);
	void STATIC_GetCharacterLook(class UUserWidget** Widget, class UObject** __WorldContext, struct FVector* Look);
	void STATIC_GetCharacterPosititon(class UUserWidget** Widget, class UObject** __WorldContext, struct FVector* Position);
	void STATIC_GetCharacterAngle(class UUserWidget** Widget, class UObject** __WorldContext, float* Angle);
	void STATIC_GetBluezoneWarningTimeBp(class UObject** WorldContextObject, class UObject** __WorldContext, float* WarningTime);
	void STATIC_GetBluezoneReleaseTimeBp(class UObject** WorldContextObject, class UObject** __WorldContext, float* ReleaseTime);
	void STATIC_GetDistanceColor(float* Distance, class UObject** __WorldContext, struct FLinearColor* Color);
	void STATIC_IsLastSpectatorTeam(class UUserWidget** Widget, class ATslCharacter** Character, class UObject** __WorldContext, bool* bIsTeam);
	void STATIC_GetTeamColor(class UObject** __WorldContext, struct FLinearColor* Color);
	void STATIC_IsSpectatorTeam(class UUserWidget** Widget, class ATslCharacter** Character, class UObject** __WorldContext, bool* bIsTeam);
	void STATIC_GetStateByTeam(class ATeam** Team, class UObject** __WorldContext, int* State);
	void STATIC_GetStateByCharacter(class ATslCharacter** Character, class UObject** __WorldContext, int* OutState);
	void STATIC_GetSpectatorColor(bool* bISpectator, class UObject** __WorldContext, struct FLinearColor* Color);
	void STATIC_GetCharacterStateIcon(int* State, class UObject** __WorldContext, class UTexture2D** NewParam);
	void STATIC_GetTslCharacters_Bp(class UObject** WorldContextObject, class UObject** __WorldContext, TArray<class ATslCharacter*>* OutActors);
	void STATIC_NotifyWidgetShowed(class UUserWidget* Widget, const struct FString& WidgetName, bool bShow, class UObject* __WorldContext);
	void STATIC_GetTeamMarkerColor(int* MemberNumber, class UObject** __WorldContext, struct FLinearColor* NewParam);
	void STATIC_CreateAndSetMaterial(class UWidget** Widget, class UMaterialInstance** Material, class UObject** __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial);
	void STATIC_GetDynamicMaterial(class UWidget** Widget, class UObject** __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial);
	TArray<TScriptInterface<class USlotInterface>> STATIC_SortItemBp(bool* bSort, class UObject** __WorldContext, TArray<TScriptInterface<class USlotInterface>>* InItemList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

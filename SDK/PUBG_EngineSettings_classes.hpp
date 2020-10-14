#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EngineSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0088 - 0x0040)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOrderTopToBottom;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FColor                                      InputColor;                                               // 0x0070(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x0074(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0078(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x007C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0080(0x0004) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.ConsoleSettings"));

		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x00A8 (0x00E8 - 0x0040)
class UGameMapsSettings : public UObject
{
public:
	struct FStringAssetReference                       EditorStartupMap;                                         // 0x0040(0x0010) (Edit, Config)
	struct FString                                     LocalMapOptions;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       TransitionMap;                                            // 0x0060(0x0010) (Edit, Config)
	bool                                               bUseSplitscreen;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0071(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x0072(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOffsetPlayerGamepadIds;                                  // 0x0073(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FStringClassReference                       GameInstanceClass;                                        // 0x0078(0x0010) (Edit, Config, NoClear)
	struct FStringAssetReference                       GameDefaultMap;                                           // 0x0088(0x0010) (Edit, Config)
	struct FStringAssetReference                       ServerDefaultMap;                                         // 0x0098(0x0010) (Edit, Config)
	struct FStringClassReference                       GlobalDefaultGameMode;                                    // 0x00A8(0x0010) (Edit, Config, NoClear)
	struct FStringClassReference                       GlobalDefaultServerGameMode;                              // 0x00B8(0x0010) (Edit, Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.GameMapsSettings"));

		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0070 - 0x0040)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0050(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.GameNetworkManagerSettings"));

		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0050 - 0x0040)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0048(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.GameSessionSettings"));

		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0040 - 0x0040)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.GeneralEngineSettings"));

		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0128 - 0x0040)
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CompanyDistinguishedName;                                 // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CopyrightNotice;                                          // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Description;                                              // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Homepage;                                                 // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     LicensingTerms;                                           // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     PrivacyPolicy;                                            // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)
	struct FGuid                                       ProjectID;                                                // 0x00B0(0x0010) (Edit, Config, IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ProjectVersion;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     SupportContact;                                           // 0x00E0(0x0010) (Edit, ZeroConstructor, Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00F0(0x0018) (Edit, Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x0108(0x0018) (Edit, Config)
	bool                                               bShouldWindowPreserveAspectRatio;                         // 0x0120(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseBorderlessWindow;                                     // 0x0121(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartInVR;                                               // 0x0122(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowWindowResize;                                       // 0x0123(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowClose;                                              // 0x0124(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMaximize;                                           // 0x0125(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMinimize;                                           // 0x0126(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0127(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.GeneralProjectSettings"));

		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0058 - 0x0040)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EngineSettings.HudSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

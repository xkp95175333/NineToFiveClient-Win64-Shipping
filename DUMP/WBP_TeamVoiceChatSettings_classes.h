// WidgetBlueprintGeneratedClass WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_TeamVoiceChatSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_PlayerVoiceChatSetting_C* WBP_Player1VoiceChatSetting; // 0x268(0x08)
	struct UWBP_PlayerVoiceChatSetting_C* WBP_Player2VoiceChatSetting; // 0x270(0x08)
	struct TArray<struct FString> PlayerIds; // 0x278(0x10)
	struct FString LocalPlayerId; // 0x288(0x10)

	void RemovePlayerInfo(struct FString ID); // Function WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C.RemovePlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddPlayerInfo(struct FString ID); // Function WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C.AddPlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerPresenceChanged(struct FString PlayerId, bool Value); // Function WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C.OnPlayerPresenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TeamVoiceChatSettings(int32_t EntryPoint); // Function WBP_TeamVoiceChatSettings.WBP_TeamVoiceChatSettings_C.ExecuteUbergraph_WBP_TeamVoiceChatSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


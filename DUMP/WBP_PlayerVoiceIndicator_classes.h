// WidgetBlueprintGeneratedClass WBP_PlayerVoiceIndicator.WBP_PlayerVoiceIndicator_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_PlayerVoiceIndicator_C : UUserWidget {
	struct UImage* bLocked; // 0x260(0x08)
	struct UImage* Enabled; // 0x268(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x270(0x08)
	struct UImage* Muted; // 0x278(0x08)
	struct UImage* Speaking; // 0x280(0x08)

	void OnPlayerStateChanged(struct UHWVoiceChatPlayer* Player, struct FHWVoiceChatPlayerState State); // Function WBP_PlayerVoiceIndicator.WBP_PlayerVoiceIndicator_C.OnPlayerStateChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayer(struct FString ID); // Function WBP_PlayerVoiceIndicator.WBP_PlayerVoiceIndicator_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


// WidgetBlueprintGeneratedClass WBP_VoiceOverlay_Player.WBP_VoiceOverlay_Player_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_VoiceOverlay_Player_C : UUserWidget {
	struct UImage* IMG_State_Bloked; // 0x260(0x08)
	struct UImage* IMG_State_Idle; // 0x268(0x08)
	struct UImage* IMG_State_Muted; // 0x270(0x08)
	struct UImage* IMG_State_Speaking; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* RTL_Playername__Muted; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* RTL_Playername_Blocked; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* RTL_Playername_Idle; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* RTL_Playername_Speaking; // 0x298(0x08)
	struct USizeBox* SB_Blocked; // 0x2a0(0x08)
	struct USizeBox* SB_Idle; // 0x2a8(0x08)
	struct USizeBox* SB_Muted; // 0x2b0(0x08)
	struct USizeBox* SB_Speaking; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_Status; // 0x2c0(0x08)
	struct FString BackendPlayerId; // 0x2c8(0x10)

	void OnPlayerStateChanged(struct UHWVoiceChatPlayer* Player, struct FHWVoiceChatPlayerState State); // Function WBP_VoiceOverlay_Player.WBP_VoiceOverlay_Player_C.OnPlayerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayerName(struct FText Name); // Function WBP_VoiceOverlay_Player.WBP_VoiceOverlay_Player_C.SetPlayerName // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Player(struct FString PlayerName, struct FString PlayerId); // Function WBP_VoiceOverlay_Player.WBP_VoiceOverlay_Player_C.Set Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


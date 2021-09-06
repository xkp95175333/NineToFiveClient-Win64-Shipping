// WidgetBlueprintGeneratedClass WBP_KeyPrompt.WBP_KeyPrompt_C
// Size: 0x2c8 (Inherited: 0x268)
struct UWBP_KeyPrompt_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BG; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct USizeBox* Image; // 0x280(0x08)
	struct UWidgetSwitcher* KeySwitcher; // 0x288(0x08)
	struct UGridPanel* Text; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x298(0x08)
	struct FLinearColor DisabledColor; // 0x2a0(0x10)
	struct FLinearColor EnabledColor; // 0x2b0(0x10)
	struct FName ActionName; // 0x2c0(0x08)

	void UpdateKeyBinding(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.UpdateKeyBinding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetAction(struct FName ActionName); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.SetAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetEnabled(bool Enabled); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshKeyBinding(); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.RefreshKeyBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_KeyPrompt(int32_t EntryPoint); // Function WBP_KeyPrompt.WBP_KeyPrompt_C.ExecuteUbergraph_WBP_KeyPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


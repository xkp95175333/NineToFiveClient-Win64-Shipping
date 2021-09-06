// WidgetBlueprintGeneratedClass WBP_VoiceOverlay.WBP_VoiceOverlay_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_VoiceOverlay_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* TitleLabel; // 0x270(0x08)
	struct UWBP_VoiceOverlay_Player_C* VOP_Player0; // 0x278(0x08)
	struct UWBP_VoiceOverlay_Player_C* VOP_Player1; // 0x280(0x08)
	struct UWBP_VoiceOverlay_Player_C* VOP_Player2; // 0x288(0x08)

	void OnAssistsUpdated(int32_t Assists); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateVoiceOverlayPlayers(struct TArray<struct FHWTeamPlayer> TeamPlayer); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.UpdateVoiceOverlayPlayers // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_VoiceOverlay(int32_t EntryPoint); // Function WBP_VoiceOverlay.WBP_VoiceOverlay_C.ExecuteUbergraph_WBP_VoiceOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


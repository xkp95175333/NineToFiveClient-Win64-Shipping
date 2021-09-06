// WidgetBlueprintGeneratedClass WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C
// Size: 0x2ac (Inherited: 0x268)
struct UWBP_EnemyTeamPanel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* ObjectiveBorder; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* ObjectiveText; // 0x278(0x08)
	struct UWBP_EnemyPanelEntry_C* Player1; // 0x280(0x08)
	struct UWBP_EnemyPanelEntry_C* Player2; // 0x288(0x08)
	struct UWBP_EnemyPanelEntry_C* Player3; // 0x290(0x08)
	struct UImage* TeamIcon; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* TeamName; // 0x2a0(0x08)
	int32_t MyTeam; // 0x2a8(0x04)

	void SetPlayerObjectiveImage(struct AHWPlayerState* PlayerState, struct UTexture2D* Texture); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.SetPlayerObjectiveImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTeamObjectiveStatus(struct FText InText); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.SetTeamObjectiveStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTeam(struct TArray<struct AHWPlayerState*> TeamStates); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.SetTeam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_EnemyTeamPanel(int32_t EntryPoint); // Function WBP_EnemyTeamPanel.WBP_EnemyTeamPanel_C.ExecuteUbergraph_WBP_EnemyTeamPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


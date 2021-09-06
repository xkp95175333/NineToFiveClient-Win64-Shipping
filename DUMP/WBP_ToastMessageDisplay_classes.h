// WidgetBlueprintGeneratedClass WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C
// Size: 0x298 (Inherited: 0x268)
struct UWBP_ToastMessageDisplay_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* Canvas; // 0x270(0x08)
	struct TArray<struct UWBP_ToastMessage_C*> ActiveMessages; // 0x278(0x10)
	int32_t MaxMessages; // 0x288(0x04)
	float YPushAmount; // 0x28c(0x04)
	struct FVector2D StartPosition; // 0x290(0x08)

	void IsSpamming(struct FHWToastMessageData ToastMessage, bool Spamming); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.IsSpamming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CanAppearOnScreen(struct FHWToastMessageData Data, bool HasSpace); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.CanAppearOnScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRequestedRemoval(struct UWidget* Widget); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnRequestedRemoval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddToastMessage(struct FHWToastMessageData Data); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.AddToastMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Test(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.Test // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInitialized(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ToastMessageDisplay(int32_t EntryPoint); // Function WBP_ToastMessageDisplay.WBP_ToastMessageDisplay_C.ExecuteUbergraph_WBP_ToastMessageDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


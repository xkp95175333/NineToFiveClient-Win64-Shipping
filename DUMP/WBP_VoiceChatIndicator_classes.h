// WidgetBlueprintGeneratedClass WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C
// Size: 0x2a8 (Inherited: 0x268)
struct UWBP_VoiceChatIndicator_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* p2t_key; // 0x270(0x08)
	struct UButton* p2tBtn; // 0x278(0x08)
	struct UWidgetSwitcher* statusSwitcher; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* voiceKey; // 0x288(0x08)
	struct UButton* voiceStatusBtn; // 0x290(0x08)
	bool Speaking; // 0x298(0x01)
	enum class EHWVoiceChatMode ChatMode; // 0x299(0x01)
	bool VoiceEnabled; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct UHWVoiceChatVivox* VoiceChat; // 0x2a0(0x08)

	void UpdateState(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__p2tBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.BndEvt__p2tBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__voiceModeBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.BndEvt__voiceModeBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__p2tBtn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.BndEvt__p2tBtn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_VoiceChatIndicator(int32_t EntryPoint); // Function WBP_VoiceChatIndicator.WBP_VoiceChatIndicator_C.ExecuteUbergraph_WBP_VoiceChatIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


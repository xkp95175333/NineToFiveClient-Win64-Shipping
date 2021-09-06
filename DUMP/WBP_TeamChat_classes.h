// WidgetBlueprintGeneratedClass WBP_TeamChat.WBP_TeamChat_C
// Size: 0x348 (Inherited: 0x268)
struct UWBP_TeamChat_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* NewMessage; // 0x270(0x08)
	struct UVerticalBox* ActualChat; // 0x278(0x08)
	struct UWidgetSwitcher* BarSwitcher; // 0x280(0x08)
	struct UWBP_Button_C* ChannelBtn; // 0x288(0x08)
	struct UScrollBox* ChatLog; // 0x290(0x08)
	struct UWBP_Button_C* ClearBtn; // 0x298(0x08)
	struct UCanvasPanel* CloseButtonWrapper; // 0x2a0(0x08)
	struct UWBP_Button_C* CloseChatBtn; // 0x2a8(0x08)
	struct USizeBox* Expander; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image_59; // 0x2c0(0x08)
	struct UWBP_Button_C* MuteBtn; // 0x2c8(0x08)
	struct UTextBlock* NewMessageNotif; // 0x2d0(0x08)
	struct UTextBlock* NewMessageNotif_2; // 0x2d8(0x08)
	struct UButton* OpenChatBtn; // 0x2e0(0x08)
	struct UImage* Outline; // 0x2e8(0x08)
	struct USizeBox* SB_ChatOffset; // 0x2f0(0x08)
	struct UEditableTextBox* TextEntry; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x308(0x08)
	struct UWBP_TeamChatEntry_C* WBP_TeamChatEntry; // 0x310(0x08)
	struct UWBP_TeamChatEntry_C* WBP_TeamChatEntry_2; // 0x318(0x08)
	struct UWBP_TeamChatEntry_C* WBP_TeamChatEntry_3; // 0x320(0x08)
	int32_t MaxChatEntries; // 0x328(0x04)
	bool HUDMode; // 0x32c(0x01)
	bool IsExpanded; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FMulticastInlineDelegate NewChatMessageReceived; // 0x330(0x10)
	struct FTimerHandle HoldShowTextChatTimerHandle; // 0x340(0x08)

	struct UWidget* Get_ChannelBtn_ToolTipWidget_1(); // Function WBP_TeamChat.WBP_TeamChat_C.Get_ChannelBtn_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* Get_MuteBtn_ToolTipWidget_1(); // Function WBP_TeamChat.WBP_TeamChat_C.Get_MuteBtn_ToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetExpanded(bool Value); // Function WBP_TeamChat.WBP_TeamChat_C.SetExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldDisplayHint(bool Result); // Function WBP_TeamChat.WBP_TeamChat_C.ShouldDisplayHint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnChannelTypeChanged(enum class EHWChatChannelType Type); // Function WBP_TeamChat.WBP_TeamChat_C.OnChannelTypeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DefocusChatInput(); // Function WBP_TeamChat.WBP_TeamChat_C.DefocusChatInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetVoiceChat(struct UHWVoiceChatVivox* VoiceChat); // Function WBP_TeamChat.WBP_TeamChat_C.GetVoiceChat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CopyPlacementFromWidget(struct UWidget* Widget); // Function WBP_TeamChat.WBP_TeamChat_C.CopyPlacementFromWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_TeamChat.WBP_TeamChat_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Deactivate(); // Function WBP_TeamChat.WBP_TeamChat_C.Deactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Activate(); // Function WBP_TeamChat.WBP_TeamChat_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendChatMessage(); // Function WBP_TeamChat.WBP_TeamChat_C.SendChatMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TrimChatLog(); // Function WBP_TeamChat.WBP_TeamChat_C.TrimChatLog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddChatMessage(struct FHWTextChatMessage ChatMessage, bool Highlight); // Function WBP_TeamChat.WBP_TeamChat_C.AddChatMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_TeamChat.WBP_TeamChat_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_TeamChat.WBP_TeamChat_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_TeamChat.WBP_TeamChat_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_TeamChat.WBP_TeamChat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_TeamChat.WBP_TeamChat_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnEscPressed(); // Function WBP_TeamChat.WBP_TeamChat_C.OnEscPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_TeamChat.WBP_TeamChat_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TextEntry_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_TeamChat.WBP_TeamChat_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ChatMessageReceived(struct FHWTextChatMessage Message); // Function WBP_TeamChat.WBP_TeamChat_C.ChatMessageReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoScrollToEnd(); // Function WBP_TeamChat.WBP_TeamChat_C.DoScrollToEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ChannelBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__ChannelBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseChatBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__CloseChatBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ClearBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__ClearBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MuteBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__MuteBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_TeamChat.WBP_TeamChat_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_TeamChat.WBP_TeamChat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_TeamChat.WBP_TeamChat_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenChatBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_TeamChat.WBP_TeamChat_C.BndEvt__OpenChatBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void NotifyInHud(struct FHWTextChatMessage TextMessage); // Function WBP_TeamChat.WBP_TeamChat_C.NotifyInHud // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_TeamChat.WBP_TeamChat_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_TeamChat.WBP_TeamChat_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BeginHoldShowTextChat(); // Function WBP_TeamChat.WBP_TeamChat_C.BeginHoldShowTextChat // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleTeamChat(); // Function WBP_TeamChat.WBP_TeamChat_C.ToggleTeamChat // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndHoldShowTextChat(); // Function WBP_TeamChat.WBP_TeamChat_C.EndHoldShowTextChat // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_TeamChat.WBP_TeamChat_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetListenForInput(bool Value); // Function WBP_TeamChat.WBP_TeamChat_C.SetListenForInput // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartListeningKeyboardInput(); // Function WBP_TeamChat.WBP_TeamChat_C.StartListeningKeyboardInput // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartListeningGamepadInput(); // Function WBP_TeamChat.WBP_TeamChat_C.StartListeningGamepadInput // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_TeamChat.WBP_TeamChat_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_TeamChat.WBP_TeamChat_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DelayKeyboardFocus(); // Function WBP_TeamChat.WBP_TeamChat_C.DelayKeyboardFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_TeamChat.WBP_TeamChat_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DelayKeyboardDefocus(); // Function WBP_TeamChat.WBP_TeamChat_C.DelayKeyboardDefocus // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_TeamChat.WBP_TeamChat_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TeamChat(int32_t EntryPoint); // Function WBP_TeamChat.WBP_TeamChat_C.ExecuteUbergraph_WBP_TeamChat // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void NewChatMessageReceived__DelegateSignature(struct FHWTextChatMessage Message); // Function WBP_TeamChat.WBP_TeamChat_C.NewChatMessageReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


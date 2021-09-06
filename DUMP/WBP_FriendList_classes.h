// WidgetBlueprintGeneratedClass WBP_FriendList.WBP_FriendList_C
// Size: 0x510 (Inherited: 0x268)
struct UWBP_FriendList_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FriendRequestSentAnimation; // 0x270(0x08)
	struct UButton* AddButton; // 0x278(0x08)
	struct UEditableTextBox* AddFriendHash; // 0x280(0x08)
	struct UEditableTextBox* AddFriendName; // 0x288(0x08)
	struct UImage* AddIcon; // 0x290(0x08)
	struct UWBP_MainButton_C* BackToNormalScreen; // 0x298(0x08)
	struct UVerticalBox* Block_BlockedPlayers; // 0x2a0(0x08)
	struct UVerticalBox* Block_Invites; // 0x2a8(0x08)
	struct UVerticalBox* Block_MyTeam; // 0x2b0(0x08)
	struct UVerticalBox* Block_Offline; // 0x2b8(0x08)
	struct UVerticalBox* Block_Online; // 0x2c0(0x08)
	struct UVerticalBox* Block_Platform_Online; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* BlockedHeading; // 0x2d0(0x08)
	struct UBorder* Border; // 0x2d8(0x08)
	struct UBorder* Border_1; // 0x2e0(0x08)
	struct UBorder* Border_2; // 0x2e8(0x08)
	struct UBorder* Border_3; // 0x2f0(0x08)
	struct UScaleBox* ClearSearchText; // 0x2f8(0x08)
	struct UWBP_ImageButton_C* ClearTextBoxButton; // 0x300(0x08)
	struct UWBP_MainButton_C* Close; // 0x308(0x08)
	struct USizeBox* Close_Box; // 0x310(0x08)
	struct UButton* CloseButton; // 0x318(0x08)
	struct UImage* CloseButtonIcon; // 0x320(0x08)
	struct UVerticalBox* ContactListBlocks; // 0x328(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* FriendRequest_NotificationBody; // 0x338(0x08)
	struct UWBP_RichTextLabel_C* FriendRequest_NotificationHeader; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* Hash; // 0x348(0x08)
	struct UImage* Icon; // 0x350(0x08)
	struct UImage* Img; // 0x358(0x08)
	struct UWBP_RichTextLabel_C* InviteHeading; // 0x360(0x08)
	struct UWBP_RichTextLabel_C* InviteHeading_2; // 0x368(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x370(0x08)
	struct UWBP_Label_C* MyContactsTitle; // 0x378(0x08)
	struct UWBP_RichTextLabel_C* OfflineHeading; // 0x380(0x08)
	struct UWBP_RichTextLabel_C* OnlineHeading; // 0x388(0x08)
	struct UWBP_RichTextLabel_C* OnlineText; // 0x390(0x08)
	struct UWBP_RichTextLabel_C* Platform_Online_header; // 0x398(0x08)
	struct UCanvasPanel* Screen_ContactNotFound; // 0x3a0(0x08)
	struct UScrollBox* Screen_Contacts; // 0x3a8(0x08)
	struct UCanvasPanel* Screen_NoContacts; // 0x3b0(0x08)
	struct UWBP_FriendList_Friend_C* SelfEntry; // 0x3b8(0x08)
	struct UVerticalBox* VB_BlockedPlayers; // 0x3c0(0x08)
	struct UVerticalBox* VB_MyTeamPlayers; // 0x3c8(0x08)
	struct UVerticalBox* VB_OfflinePlayers; // 0x3d0(0x08)
	struct UVerticalBox* VB_Online; // 0x3d8(0x08)
	struct UVerticalBox* VB_OnlinePlayers; // 0x3e0(0x08)
	struct UVerticalBox* VB_PendingInvites; // 0x3e8(0x08)
	struct UVerticalBox* VB_Platform_OnlinePlayers; // 0x3f0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x3f8(0x08)
	struct UWBP_InfoButton_C* WBP_InfoButton; // 0x400(0x08)
	struct UWBP_Label_C* WBP_Label; // 0x408(0x08)
	struct UWBP_Label_C* WBP_Label_2; // 0x410(0x08)
	struct UWBP_ScreenHeader_C* WBP_ScreenHeader; // 0x418(0x08)
	struct FString TeamId; // 0x420(0x10)
	struct UBP_FriendList_Entry_Data_C* SelectedFriendInPopup; // 0x430(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x438(0x10)
	struct TArray<struct FHWTeamPlayer> MyParty; // 0x448(0x10)
	int32_t CachedActiveWidgetIndex; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FText CachedFriendName; // 0x460(0x18)
	struct TMap<struct FString, struct UWBP_FriendList_Friend_C*> FriendItems; // 0x478(0x50)
	struct FString LastClickedFriendOptionsMenu; // 0x4c8(0x10)
	int32_t FriendsOnline; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct FMulticastInlineDelegate PlatformFriendsCountUpdated; // 0x4e0(0x10)
	struct FText LastEnteredHash; // 0x4f0(0x18)
	struct FTimerHandle OnEnterTimer; // 0x508(0x08)

	void Get Platform Friend InviteText(struct FString PlayerId, struct FString Name, struct FText DisplayName); // Function WBP_FriendList.WBP_FriendList_C.Get Platform Friend InviteText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* GetToolTipWidget_1(); // Function WBP_FriendList.WBP_FriendList_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FString GetFriendUsername(); // Function WBP_FriendList.WBP_FriendList_C.GetFriendUsername // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool ValidFriendUsername(); // Function WBP_FriendList.WBP_FriendList_C.ValidFriendUsername // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_FriendList.WBP_FriendList_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Hide Show UIBlocks(struct UWidget* WidgetRef, struct UPanelWidget* VisualBlock, int32_t MinEntries); // Function WBP_FriendList.WBP_FriendList_C.Hide Show UIBlocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveFriendItem(enum class EHW_Friendlist_EntryState ItemEntryState, struct FString ID); // Function WBP_FriendList.WBP_FriendList_C.RemoveFriendItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddPlatformFriend(struct FString DisplayName, struct FString PlayerId, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.AddPlatformFriend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandlePlatformFriendItem(enum class EHWPlatformFriendEventType EventType, struct FString PlatformId, struct FString FriendId); // Function WBP_FriendList.WBP_FriendList_C.HandlePlatformFriendItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFriendOptionsOnTeamMemberUpdate(struct FString ID); // Function WBP_FriendList.WBP_FriendList_C.UpdateFriendOptionsOnTeamMemberUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFriendStatusInOtherStates(struct FString ID, enum class EHWPlayerStatus Status); // Function WBP_FriendList.WBP_FriendList_C.UpdateFriendStatusInOtherStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFriendListItemUniqueIdentifier(struct FString ID, enum class EHW_Friendlist_EntryState State, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.GetFriendListItemUniqueIdentifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RemoveTeamMember(struct FHWTeamPlayer Player); // Function WBP_FriendList.WBP_FriendList_C.RemoveTeamMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddTeamMember(struct FHWTeamPlayer Player, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.AddTeamMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleTeamItem(enum class EHWTeamEventType EventType, struct FHWTeamPlayer Player, struct FString ItemUniqueId); // Function WBP_FriendList.WBP_FriendList_C.HandleTeamItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveTeamInvite(struct FHWTeamInvitation TeamInvite); // Function WBP_FriendList.WBP_FriendList_C.RemoveTeamInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddTeamInvite(struct FHWTeamInvitation TeamInvite, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.AddTeamInvite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleTeamInviteItem(struct FHWTeamInvitation TeamInvite, enum class EHWTeamInviteEventType InviteType, struct FString ItemUniqueId); // Function WBP_FriendList.WBP_FriendList_C.HandleTeamInviteItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Remove Friend Invite(struct FHWFriend Friend); // Function WBP_FriendList.WBP_FriendList_C.Remove Friend Invite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Friend(struct FHWFriend Friend, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.Update Friend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveFriend(struct FHWFriend Friend); // Function WBP_FriendList.WBP_FriendList_C.RemoveFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Add Friend Invite(struct FHWFriend Friend, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.Add Friend Invite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddFriend(struct FHWFriend Friend, struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.AddFriend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(); // Function WBP_FriendList.WBP_FriendList_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleFriendItem(enum class EHWFriendEventType FriendEvent, struct FHWFriend Friend, struct FString ItemUniqueId); // Function WBP_FriendList.WBP_FriendList_C.HandleFriendItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Open Options Panel(struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.Open Options Panel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply ToggleMyTeam(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_FriendList.WBP_FriendList_C.ToggleMyTeam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply ToggleInvites(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_FriendList.WBP_FriendList_C.ToggleInvites // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply ToggleOfflinePlayers(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_FriendList.WBP_FriendList_C.ToggleOfflinePlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply ToggleOnlinePlayers(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_FriendList.WBP_FriendList_C.ToggleOnlinePlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleBlock(struct UVerticalBox* bLock); // Function WBP_FriendList.WBP_FriendList_C.ToggleBlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasPendingPartyInviteFromPlayer(struct FString PlayerName, bool HasInvite, struct FString TeamId); // Function WBP_FriendList.WBP_FriendList_C.HasPendingPartyInviteFromPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsPlayerInParty(struct FString PlayerId, bool InParty); // Function WBP_FriendList.WBP_FriendList_C.IsPlayerInParty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateFriendsList(struct FHWFetchFriendsResponse Response); // Function WBP_FriendList.WBP_FriendList_C.UpdateFriendsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForInviteFromPlayer(struct FString DisplayName); // Function WBP_FriendList.WBP_FriendList_C.CheckForInviteFromPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamObjectiveStatusChanged(struct FText Text, int32_t Team); // Function WBP_FriendList.WBP_FriendList_C.OnTeamObjectiveStatusChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatActivated(); // Function WBP_FriendList.WBP_FriendList_C.OnTextChatActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTextChatDeactivated(); // Function WBP_FriendList.WBP_FriendList_C.OnTextChatDeactivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnToastMessageAdded(struct FHWToastMessageData Data); // Function WBP_FriendList.WBP_FriendList_C.OnToastMessageAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnVoiceChatToggled(bool Active); // Function WBP_FriendList.WBP_FriendList_C.OnVoiceChatToggled // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToMatch(); // Function WBP_FriendList.WBP_FriendList_C.OnCanReconnectToMatch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCanReconnectToQueue(); // Function WBP_FriendList.WBP_FriendList_C.OnCanReconnectToQueue // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfo(struct FHWWeekInfoResponse Response); // Function WBP_FriendList.WBP_FriendList_C.OnGetWeekInfo // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGetWeekInfoFailed(); // Function WBP_FriendList.WBP_FriendList_C.OnGetWeekInfoFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLogoutCompleted(); // Function WBP_FriendList.WBP_FriendList_C.OnLogoutCompleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoaded(); // Function WBP_FriendList.WBP_FriendList_C.OnMasterDataLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMasterDataLoadFailed(enum class EHWErrorMessage Error, struct FString Message); // Function WBP_FriendList.WBP_FriendList_C.OnMasterDataLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusMatched(); // Function WBP_FriendList.WBP_FriendList_C.OnMatchStatusMatched // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusOpen(); // Function WBP_FriendList.WBP_FriendList_C.OnMatchStatusOpen // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusStarted(); // Function WBP_FriendList.WBP_FriendList_C.OnMatchStatusStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMatchStatusWaiting(); // Function WBP_FriendList.WBP_FriendList_C.OnMatchStatusWaiting // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectableMatchLost(); // Function WBP_FriendList.WBP_FriendList_C.OnReconnectableMatchLost // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnServerPingsDone(); // Function WBP_FriendList.WBP_FriendList_C.OnServerPingsDone // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShopCampaignsLoaded(); // Function WBP_FriendList.WBP_FriendList_C.OnShopCampaignsLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAcceptProcessed(bool Success, enum class EHWErrorMessage ErrorMessage); // Function WBP_FriendList.WBP_FriendList_C.OnTeamInviteAcceptProcessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateRequired(); // Function WBP_FriendList.WBP_FriendList_C.OnUpdateRequired // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoaded(struct FString SessionIdLoadedUser); // Function WBP_FriendList.WBP_FriendList_C.OnUserLoaded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserLoadFailed(struct FString SessionIdLoadedUser); // Function WBP_FriendList.WBP_FriendList_C.OnUserLoadFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStored(); // Function WBP_FriendList.WBP_FriendList_C.OnUserStored // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUserStoreFailed(); // Function WBP_FriendList.WBP_FriendList_C.OnUserStoreFailed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWholePartyReady(); // Function WBP_FriendList.WBP_FriendList_C.OnWholePartyReady // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_FriendList.WBP_FriendList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendsListUpdated(bool Success, struct FHWFetchFriendsResponse Response); // Function WBP_FriendList.WBP_FriendList_C.OnFriendsListUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveCardUpdated(); // Function WBP_FriendList.WBP_FriendList_C.OnObjectiveCardUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendAdded(struct FHWResponseBase Response); // Function WBP_FriendList.WBP_FriendList_C.OnFriendAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendAddFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_FriendList.WBP_FriendList_C.OnFriendAddFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamMembersChanged(struct TArray<struct FHWTeamPlayer> MyTeamPlayers); // Function WBP_FriendList.WBP_FriendList_C.OnTeamMembersChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMyReadystateChanged(bool bNewValue); // Function WBP_FriendList.WBP_FriendList_C.OnMyReadystateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnKillsUpdated(int32_t Kills); // Function WBP_FriendList.WBP_FriendList_C.OnKillsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemUnlocked(bool WasSuccessful, struct FString Message); // Function WBP_FriendList.WBP_FriendList_C.OnItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void StartBackendPolling(); // Function WBP_FriendList.WBP_FriendList_C.StartBackendPolling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleFriendEvent(enum class EHWFriendEventType EventType, struct FHWFriend Friend); // Function WBP_FriendList.WBP_FriendList_C.HandleFriendEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnInputMappingsUpdated(); // Function WBP_FriendList.WBP_FriendList_C.OnInputMappingsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HandleTeamEvent(enum class EHWTeamEventType EventType, struct FHWTeamPlayer Player); // Function WBP_FriendList.WBP_FriendList_C.HandleTeamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleTeamInviteEvent(enum class EHWTeamInviteEventType EventType, struct FHWTeamInvitation Invite); // Function WBP_FriendList.WBP_FriendList_C.HandleTeamInviteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleFriendInviteAction(bool Result); // Function WBP_FriendList.WBP_FriendList_C.HandleFriendInviteAction // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHostileTeamChanged(enum class EHWHostileTeam NewHostileTeam); // Function WBP_FriendList.WBP_FriendList_C.OnHostileTeamChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInviteAction(bool Result); // Function WBP_FriendList.WBP_FriendList_C.OnTeamInviteAction // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_FriendList.WBP_FriendList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void StopBackendPolling(); // Function WBP_FriendList.WBP_FriendList_C.StopBackendPolling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGameplayEvent(enum class EHWGameplayEventType Event); // Function WBP_FriendList.WBP_FriendList_C.OnGameplayEvent // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCurrentObjectiveIndexUpdated(); // Function WBP_FriendList.WBP_FriendList_C.OnCurrentObjectiveIndexUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssistsUpdated(int32_t Assists); // Function WBP_FriendList.WBP_FriendList_C.OnAssistsUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ClearTextBoxButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__ClearTextBoxButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__AddFriendName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackToNormalScreen_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__BackToNormalScreen_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Empty Call back(bool Result); // Function WBP_FriendList.WBP_FriendList_C.Empty Call back // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OpenOptionsPanel(struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.OpenOptionsPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseOptionsPanelIfOpened(); // Function WBP_FriendList.WBP_FriendList_C.CloseOptionsPanelIfOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenOptionMenu(struct FString UniqueId); // Function WBP_FriendList.WBP_FriendList_C.OpenOptionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamInvitationsUpdated(struct TArray<struct FHWTeamInvitation> Invitations); // Function WBP_FriendList.WBP_FriendList_C.OnTeamInvitationsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundHeaderUpdated(); // Function WBP_FriendList.WBP_FriendList_C.OnRoundHeaderUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateAdded(struct APlayerState* PlayerState); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerStateAdded // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerReadyCountUpdated(int32_t NumReady, int32_t Total); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerReadyCountUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__AddFriendName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SendFriendRequest(); // Function WBP_FriendList.WBP_FriendList_C.SendFriendRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearFriendSearchText(); // Function WBP_FriendList.WBP_FriendList_C.ClearFriendSearchText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandlePlatformFriendEvent(enum class EHWPlatformFriendEventType Type, struct FString FriendPlatformId, struct FString FriendGameId); // Function WBP_FriendList.WBP_FriendList_C.HandlePlatformFriendEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerObjectveImageChanged(struct AHWPlayerState* InPlayerState, struct UTexture2D* Texture); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerObjectveImageChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ClearFriendsList(); // Function WBP_FriendList.WBP_FriendList_C.ClearFriendsList // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateMyTeamLeaderVisuals(); // Function WBP_FriendList.WBP_FriendList_C.UpdateMyTeamLeaderVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveTextUpdated(); // Function WBP_FriendList.WBP_FriendList_C.OnObjectiveTextUpdated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_FriendList_AddButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__WBP_FriendList_AddButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendHash_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__AddFriendHash_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnAddFriendTextCommitted(enum class ETextCommit CommitMethod); // Function WBP_FriendList.WBP_FriendList_C.OnAddFriendTextCommitted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckSearchButtonAvailability(); // Function WBP_FriendList.WBP_FriendList_C.CheckSearchButtonAvailability // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendHash_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_FriendList.WBP_FriendList_C.BndEvt__AddFriendHash_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Print Friend(struct FHWFriend Friend); // Function WBP_FriendList.WBP_FriendList_C.Print Friend // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_FriendList.WBP_FriendList_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void RequestDeclined(enum class EHW_Friendlist_EntryState EntryState, struct FString ID); // Function WBP_FriendList.WBP_FriendList_C.RequestDeclined // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFriendNameForegorundColor(); // Function WBP_FriendList.WBP_FriendList_C.SetFriendNameForegorundColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHashTextForegroundColor(); // Function WBP_FriendList.WBP_FriendList_C.SetHashTextForegroundColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetInputFieldsState(); // Function WBP_FriendList.WBP_FriendList_C.ResetInputFieldsState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Invalidate(); // Function WBP_FriendList.WBP_FriendList_C.Invalidate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_FriendList(int32_t EntryPoint); // Function WBP_FriendList.WBP_FriendList_C.ExecuteUbergraph_WBP_FriendList // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void PlatformFriendsCountUpdated__DelegateSignature(int32_t OnlineCount); // Function WBP_FriendList.WBP_FriendList_C.PlatformFriendsCountUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_FriendList.WBP_FriendList_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


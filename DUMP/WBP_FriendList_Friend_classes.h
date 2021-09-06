// WidgetBlueprintGeneratedClass WBP_FriendList_Friend.WBP_FriendList_Friend_C
// Size: 0x4b8 (Inherited: 0x268)
struct UWBP_FriendList_Friend_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* AcceptFriendInviteText; // 0x270(0x08)
	struct UBorder* AcceptRejectInvite_OptionsBorder_2; // 0x278(0x08)
	struct UWBP_ImageButton_C* AcceptRejectInvite_OptionsButton_2; // 0x280(0x08)
	struct UHorizontalBox* AcceptRejectInviteFriend; // 0x288(0x08)
	struct USizeBox* AddFriend; // 0x290(0x08)
	struct UButton* AddFriendButton; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* AddText; // 0x2a0(0x08)
	struct UHorizontalBox* BlockedFriend; // 0x2a8(0x08)
	struct UBorder* BlockedFriend_OptionsBorder; // 0x2b0(0x08)
	struct UWBP_ImageButton_C* BlockedFriend_OptionsButton; // 0x2b8(0x08)
	struct UBorder* Border_forHover; // 0x2c0(0x08)
	struct UWBP_ImageButton_C* Button_Decline; // 0x2c8(0x08)
	struct UWBP_ImageButton_C* Button_RemoveOnlineFriends; // 0x2d0(0x08)
	struct UWBP_ImageButton_C* Button_RemoveOnlineFriends_2; // 0x2d8(0x08)
	struct UButton* Button_row; // 0x2e0(0x08)
	struct UButton* ButtonAcceptFriend; // 0x2e8(0x08)
	struct UWBP_ImageButton_C* ButtonDeclineTeamParty; // 0x2f0(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x2f8(0x08)
	struct UButton* ButtonTeamParty; // 0x300(0x08)
	struct USizeBox* FirstNameBox; // 0x308(0x08)
	struct UWBP_RichTextLabel_C* InMyTeam; // 0x310(0x08)
	struct UButton* InviteButton; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* InviteText; // 0x320(0x08)
	struct UBorder* JoinAcceptReject_OptionsBorder; // 0x328(0x08)
	struct UWBP_ImageButton_C* JoinAcceptReject_OptionsButton; // 0x330(0x08)
	struct UHorizontalBox* JoinAcceptRejectTeam; // 0x338(0x08)
	struct UHorizontalBox* JoinTeamRequestSent_onHover; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* JoinTeamText; // 0x348(0x08)
	struct UButton* KickButton; // 0x350(0x08)
	struct UWBP_RichTextLabel_C* KickMemberText; // 0x358(0x08)
	struct UHorizontalBox* KickTeamMember_onHover; // 0x360(0x08)
	struct UBorder* KickTeamMember_OptionsBorder; // 0x368(0x08)
	struct UWBP_ImageButton_C* KickTeamMember_OptionsButton_2; // 0x370(0x08)
	struct UButton* LeaveButton; // 0x378(0x08)
	struct UHorizontalBox* LeaveTeam_onHover; // 0x380(0x08)
	struct UBorder* LeaveTeam_OptionsBorder; // 0x388(0x08)
	struct UWBP_ImageButton_C* LeaveTeam_OptionsButton; // 0x390(0x08)
	struct UWBP_RichTextLabel_C* LeaveTeamText; // 0x398(0x08)
	struct UMenuAnchor* MenuAnchor_138; // 0x3a0(0x08)
	struct UHorizontalBox* MyTeam; // 0x3a8(0x08)
	struct UOverlay* Overlay_1; // 0x3b0(0x08)
	struct UButton* PlatformFriendInviteButton; // 0x3b8(0x08)
	struct UWBP_RichTextLabel_C* PlatformFriendInviteText; // 0x3c0(0x08)
	struct UImage* PlatformIcon; // 0x3c8(0x08)
	struct UWBP_RichTextLabel_C* PlayerNameText; // 0x3d0(0x08)
	struct UWBP_Button_C* Removebutton; // 0x3d8(0x08)
	struct UHorizontalBox* RemoveFriend_onHover; // 0x3e0(0x08)
	struct UBorder* RemoveFriend_OptionsBorder_2; // 0x3e8(0x08)
	struct UWBP_ImageButton_C* RemoveFriend_OptionsButton_2; // 0x3f0(0x08)
	struct USizeBox* RemoveFriendButton; // 0x3f8(0x08)
	struct UWBP_Label_C* RequestSent; // 0x400(0x08)
	struct USizeBox* SecondNameBox; // 0x408(0x08)
	struct UWBP_RichTextLabel_C* SecondNameText; // 0x410(0x08)
	struct UHorizontalBox* SendInvite; // 0x418(0x08)
	struct UBorder* SendInvite_OptionsBorder; // 0x420(0x08)
	struct UBorder* SendInvite_OptionsBorder_2; // 0x428(0x08)
	struct UWBP_ImageButton_C* SendInvite_OptionsButton; // 0x430(0x08)
	struct UWBP_ImageButton_C* SendInvite_OptionsButton_2; // 0x438(0x08)
	struct USizeBox* SendInviteButton; // 0x440(0x08)
	struct UHorizontalBox* SendInvitePlatformFriend; // 0x448(0x08)
	struct USizeBox* SendPlatformFriendInvite; // 0x450(0x08)
	struct UImage* Status; // 0x458(0x08)
	struct UImage* TeamLeaderIcon; // 0x460(0x08)
	struct UImage* VoipIcon; // 0x468(0x08)
	struct UBP_FriendList_Entry_Data_C* Data; // 0x470(0x08)
	struct UHWGameInstance* HWGameInstanceRef; // 0x478(0x08)
	struct UWidget* ButtonWidget; // 0x480(0x08)
	struct UWidget* OldHoverWidget; // 0x488(0x08)
	struct FMulticastInlineDelegate OpenOptionsPanel; // 0x490(0x10)
	bool IsSelf; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FMulticastInlineDelegate OnInviteDeclined; // 0x4a8(0x10)

	void SetSelfInfo(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetSelfInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* OnGetUserMenuContent_1(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OnGetUserMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetAddFriendVisibility(enum class ESlateVisibility Visibility); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetAddFriendVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RequestDeclined(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.RequestDeclined // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsTeamMember(bool IsMember); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.IsTeamMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetVisibilityForInviteButton(enum class ESlateVisibility Visibility); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.GetVisibilityForInviteButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Update Status(enum class EHWPlayerStatus Status); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.Update Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleOptionsMenu(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.ToggleOptionsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOptionMenuIconColors(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetOptionMenuIconColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseOptionsMenu(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.CloseOptionsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonDeclineTeamParty_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonDeclineTeamParty_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Decline_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_Decline_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveFriendButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__RemoveFriendButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void HandleKickPlayerConfirm(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.HandleKickPlayerConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnDisband(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OnDisband // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLeave(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_RemoveOnlineFriends_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_RemoveOnlineFriends_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AcceptRejectInvite_OptionsButton_1_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__AcceptRejectInvite_OptionsButton_1_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__JoinAcceptReject_OptionsButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__JoinAcceptReject_OptionsButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveFriend_OptionsButton_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__RemoveFriend_OptionsButton_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetTeamInviteButtonVisibility(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetTeamInviteButtonVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAcceptFriend_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonAcceptFriend_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAcceptFriend_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonAcceptFriend_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__KickTeamMember_OptionsButton_1_K2Node_ComponentBoundEvent_27_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__KickTeamMember_OptionsButton_1_K2Node_ComponentBoundEvent_27_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LeaveTeam_OptionsButton_K2Node_ComponentBoundEvent_28_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__LeaveTeam_OptionsButton_K2Node_ComponentBoundEvent_28_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void InviteExpired(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.InviteExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowInviteSentNotification(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.ShowInviteSentNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Empty Call back(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.Empty Call back // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__ButtonTeamParty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void FriendRequestSent(struct FHWResponseBase Response); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.FriendRequestSent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopupShown(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.PopupShown // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowAddButton(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.ShowAddButton // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FriendRequestSendingFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.FriendRequestSendingFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__PlatformFriendInviteButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void EmptyCallBack(bool Result); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.EmptyCallBack // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMyTeamContent(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetMyTeamContent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTeamLeaderVisibility(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.UpdateTeamLeaderVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BlockedFriend_OptionsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BndEvt__BlockedFriend_OptionsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BlockFriend(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.BlockFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnblockPlayer(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.UnblockPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetInGameNameForPlatformFriend(); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.SetInGameNameForPlatformFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlatformFriendProfileLoadFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.PlatformFriendProfileLoadFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlatformFriendProfileLoaded(struct FHWLoadPublicProfileResponse Response); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.PlatformFriendProfileLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_FriendList_Friend(int32_t EntryPoint); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.ExecuteUbergraph_WBP_FriendList_Friend // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnInviteDeclined__DelegateSignature(enum class EHW_Friendlist_EntryState EntryState, struct FString ID); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OnInviteDeclined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenOptionsPanel__DelegateSignature(struct FString UniqueId); // Function WBP_FriendList_Friend.WBP_FriendList_Friend_C.OpenOptionsPanel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


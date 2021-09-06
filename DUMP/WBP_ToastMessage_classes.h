// WidgetBlueprintGeneratedClass WBP_ToastMessage.WBP_ToastMessage_C
// Size: 0x390 (Inherited: 0x268)
struct UWBP_ToastMessage_C : UHWWidgetBase {
	struct UWidgetAnimation* HighPriority_Anim; // 0x268(0x08)
	struct UWidgetAnimation* LowPriority_Disappear; // 0x270(0x08)
	struct UWidgetAnimation* LowPriority_PushedUp; // 0x278(0x08)
	struct UWidgetAnimation* LowPriority_Appear; // 0x280(0x08)
	struct UOverlay* Assist; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* AssistCount; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Assists; // 0x298(0x08)
	struct UImage* Background; // 0x2a0(0x08)
	struct UImage* Background_2; // 0x2a8(0x08)
	struct UImage* BottomDetail; // 0x2b0(0x08)
	struct UImage* Bottomline; // 0x2b8(0x08)
	struct UBorder* Container; // 0x2c0(0x08)
	struct UVerticalBox* HighPriority; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* KillCount; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* Kills; // 0x2d8(0x08)
	struct UBorder* LowPriority; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* MainText; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* MessageLabel; // 0x2f0(0x08)
	struct UWidgetSwitcher* MessageSwitcher; // 0x2f8(0x08)
	struct UImage* PlayerAvatar; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* PlayerName; // 0x308(0x08)
	struct UWidgetSwitcher* Switcher; // 0x310(0x08)
	struct UOverlay* Terminated; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x320(0x08)
	struct UImage* TopDetail; // 0x328(0x08)
	struct UImage* Topline; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x338(0x08)
	struct FMulticastInlineDelegate OnRequestedRemoval; // 0x340(0x10)
	struct FHWToastMessageData ToastData; // 0x350(0x40)

	void IsHighPriority(bool IsHigh); // Function WBP_ToastMessage.WBP_ToastMessage_C.IsHighPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RequestRemoval(); // Function WBP_ToastMessage.WBP_ToastMessage_C.RequestRemoval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDisappear(); // Function WBP_ToastMessage.WBP_ToastMessage_C.OnDisappear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPushedUp(); // Function WBP_ToastMessage.WBP_ToastMessage_C.OnPushedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnShown(); // Function WBP_ToastMessage.WBP_ToastMessage_C.OnShown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FHWToastMessageData Data); // Function WBP_ToastMessage.WBP_ToastMessage_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRequestedRemoval__DelegateSignature(struct UWidget* Widget); // Function WBP_ToastMessage.WBP_ToastMessage_C.OnRequestedRemoval__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


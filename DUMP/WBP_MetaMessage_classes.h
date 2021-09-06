// WidgetBlueprintGeneratedClass WBP_MetaMessage.WBP_MetaMessage_C
// Size: 0x3b0 (Inherited: 0x268)
struct UWBP_MetaMessage_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* CycleOldMessage; // 0x270(0x08)
	struct UWidgetAnimation* CycleNewMessage; // 0x278(0x08)
	struct UWidgetAnimation* Reveal; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UWidgetSwitcher* Bottom; // 0x290(0x08)
	struct UImage* BottomDetail; // 0x298(0x08)
	struct UImage* BottomDetailNegative; // 0x2a0(0x08)
	struct UImage* Bottomline; // 0x2a8(0x08)
	struct UBorder* MessageColor; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* MessageLabel; // 0x2b8(0x08)
	struct UWidgetSwitcher* Top; // 0x2c0(0x08)
	struct UImage* TopDetail; // 0x2c8(0x08)
	struct UImage* TopDetailNegative; // 0x2d0(0x08)
	struct UImage* Topline; // 0x2d8(0x08)
	struct FLinearColor NeutralColor; // 0x2e0(0x10)
	struct FLinearColor PositiveColor; // 0x2f0(0x10)
	struct FLinearColor NegativeColor; // 0x300(0x10)
	enum class EHWMetaMessagePriority MessagePriority; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FText Message; // 0x318(0x18)
	struct FMulticastInlineDelegate OnHidden; // 0x330(0x10)
	struct FMulticastInlineDelegate OnRemoved; // 0x340(0x10)
	bool MessageVisible; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FTimerHandle HideMessageTimer; // 0x358(0x08)
	struct FTimerHandle RemoveMessageTimer; // 0x360(0x08)
	struct FHWMetaMessageData NextMessageData; // 0x368(0x30)
	bool CyclingMessage; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TArray<struct FHWMetaMessageData> MessageQueue; // 0x3a0(0x10)

	void UpdateNewMessage(); // Function WBP_MetaMessage.WBP_MetaMessage_C.UpdateNewMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMessageTimer(float Duration); // Function WBP_MetaMessage.WBP_MetaMessage_C.SetMessageTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMessageAnimation(struct UWidgetAnimation* InAnimation); // Function WBP_MetaMessage.WBP_MetaMessage_C.ShowMessageAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayMessageSound(struct UAkAudioEvent* AkEvent); // Function WBP_MetaMessage.WBP_MetaMessage_C.PlayMessageSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMessageContent(enum class EHWMetaMessagePriority MessagePriority, enum class EHWMetaMessageAlignment Alignment, struct FText Message); // Function WBP_MetaMessage.WBP_MetaMessage_C.SetMessageContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveMessage(); // Function WBP_MetaMessage.WBP_MetaMessage_C.RemoveMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideMessage(); // Function WBP_MetaMessage.WBP_MetaMessage_C.HideMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMessage(struct FHWMetaMessageData Message, float Duration); // Function WBP_MetaMessage.WBP_MetaMessage_C.ShowMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NewMessage(struct FHWMetaMessageData Data, float Duration); // Function WBP_MetaMessage.WBP_MetaMessage_C.NewMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CycleNextMessage(); // Function WBP_MetaMessage.WBP_MetaMessage_C.CycleNextMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CyclingDone(); // Function WBP_MetaMessage.WBP_MetaMessage_C.CyclingDone // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MetaMessage(int32_t EntryPoint); // Function WBP_MetaMessage.WBP_MetaMessage_C.ExecuteUbergraph_WBP_MetaMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnRemoved__DelegateSignature(); // Function WBP_MetaMessage.WBP_MetaMessage_C.OnRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHidden__DelegateSignature(struct UWBP_MetaMessage_C* MessageWBP); // Function WBP_MetaMessage.WBP_MetaMessage_C.OnHidden__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


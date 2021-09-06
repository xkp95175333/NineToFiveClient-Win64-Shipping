// WidgetBlueprintGeneratedClass WBP_TextChat_Notification.WBP_TextChat_Notification_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_TextChat_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Pushdown; // 0x268(0x08)
	struct UWidgetAnimation* Reveal; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* MessageContent; // 0x278(0x08)
	struct UImage* Outline; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* PlayerName; // 0x288(0x08)

	void SetMessage(struct FHWTextChatMessage Message); // Function WBP_TextChat_Notification.WBP_TextChat_Notification_C.SetMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TextChat_Notification(int32_t EntryPoint); // Function WBP_TextChat_Notification.WBP_TextChat_Notification_C.ExecuteUbergraph_WBP_TextChat_Notification // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


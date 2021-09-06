// WidgetBlueprintGeneratedClass WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_InteractionIndicators_Message_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Reveal; // 0x268(0x08)
	struct UOverlay* KeyPrompt; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Message; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Message_2; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Message_3; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Message_5; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Message_6; // 0x298(0x08)
	struct UWidgetSwitcher* MessageType; // 0x2a0(0x08)
	struct UOverlay* Regular; // 0x2a8(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt; // 0x2b0(0x08)
	struct UOverlay* WithHighlight; // 0x2b8(0x08)

	void GetActionName(int32_t ItemSlot, struct FName ActionName); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.GetActionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText GetPromptFormat(float Duration); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.GetPromptFormat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText GetPrompt(enum class EHWItemUsageType ItemType, int32_t ItemSlot); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.GetPrompt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetKeyPromptMessage(int32_t InteractionSlot, float InterationDuration, struct FText InteractionText); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.SetKeyPromptMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRegularPromptMessage(struct FText Message); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.SetRegularPromptMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InteractionIndicators_Message(int32_t EntryPoint); // Function WBP_InteractionIndicators_Message.WBP_InteractionIndicators_Message_C.ExecuteUbergraph_WBP_InteractionIndicators_Message // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


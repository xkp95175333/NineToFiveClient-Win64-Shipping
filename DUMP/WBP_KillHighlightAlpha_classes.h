// WidgetBlueprintGeneratedClass WBP_KillHighlightAlpha.WBP_KillHighlightAlpha_C
// Size: 0x298 (Inherited: 0x268)
struct UWBP_KillHighlightAlpha_C : UHWWidgetBase {
	struct UWidgetAnimation* Disappear; // 0x268(0x08)
	struct UWidgetAnimation* Appear; // 0x270(0x08)
	struct UWBP_Label_C* Assists; // 0x278(0x08)
	struct UImage* Backgroundbar; // 0x280(0x08)
	struct UWBP_Label_C* Kills; // 0x288(0x08)
	struct FTimerHandle HideTimer; // 0x290(0x08)

	void OnDisappear(); // Function WBP_KillHighlightAlpha.WBP_KillHighlightAlpha_C.OnDisappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAppear(); // Function WBP_KillHighlightAlpha.WBP_KillHighlightAlpha_C.OnAppear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


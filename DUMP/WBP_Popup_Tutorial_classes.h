// WidgetBlueprintGeneratedClass WBP_Popup_Tutorial.WBP_Popup_Tutorial_C
// Size: 0x289 (Inherited: 0x268)
struct UWBP_Popup_Tutorial_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* Clicknuti; // 0x270(0x08)
	struct UImage* Video; // 0x278(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x280(0x08)
	enum class BPE_TutorialType TutorialType; // 0x288(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Popup_Tutorial.WBP_Popup_Tutorial_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_Popup_Tutorial.WBP_Popup_Tutorial_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Popup_Tutorial.WBP_Popup_Tutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CloseMe(); // Function WBP_Popup_Tutorial.WBP_Popup_Tutorial_C.CloseMe // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Popup_Tutorial(int32_t EntryPoint); // Function WBP_Popup_Tutorial.WBP_Popup_Tutorial_C.ExecuteUbergraph_WBP_Popup_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


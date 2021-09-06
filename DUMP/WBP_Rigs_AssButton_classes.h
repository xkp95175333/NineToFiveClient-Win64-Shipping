// WidgetBlueprintGeneratedClass WBP_Rigs_AssButton.WBP_Rigs_AssButton_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_Rigs_AssButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Ass; // 0x270(0x08)
	struct UOverlay* Overlay_ASS; // 0x278(0x08)
	enum class EHWArmorFeatureType AssType; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t Index; // 0x284(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	bool CanBeSet; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName AssId; // 0x29c(0x08)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FMulticastInlineDelegate OnHover; // 0x2a8(0x10)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FName AssId, int32_t SlotIdx, bool CanSet); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_AssButton(int32_t EntryPoint); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.ExecuteUbergraph_WBP_Rigs_AssButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName AssId); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(int32_t Index, enum class EHWArmorFeatureType AssType, struct FName AssId, struct UWBP_Rigs_AssButton_C* Button); // Function WBP_Rigs_AssButton.WBP_Rigs_AssButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


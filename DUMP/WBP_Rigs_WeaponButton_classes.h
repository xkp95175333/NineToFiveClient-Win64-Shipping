// WidgetBlueprintGeneratedClass WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Rigs_WeaponButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Icon; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Number; // 0x278(0x08)
	struct UWBP_Rigs_ButtonBackground_C* WBP_Rigs_ButtonBackground; // 0x280(0x08)
	struct FText WeaponName; // 0x288(0x18)
	int32_t WeaponNumber; // 0x2a0(0x04)
	enum class EHWWeaponType WeaponType; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2b8(0x10)

	void Update(); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FText WeaponName, int32_t WeaponNumber, enum class EHWWeaponType WeaponType); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_WeaponButton(int32_t EntryPoint); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.ExecuteUbergraph_WBP_Rigs_WeaponButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(bool IsHover); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_Rigs_WeaponButton_C* Button); // Function WBP_Rigs_WeaponButton.WBP_Rigs_WeaponButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


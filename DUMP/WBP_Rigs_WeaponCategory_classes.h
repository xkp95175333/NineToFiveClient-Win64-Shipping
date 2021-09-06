// WidgetBlueprintGeneratedClass WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C
// Size: 0x2a9 (Inherited: 0x260)
struct UWBP_Rigs_WeaponCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_167; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_CategoryDescription; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_CategoryName; // 0x280(0x08)
	struct UImage* WeaponIcon; // 0x288(0x08)
	enum class EHWWeaponType WeaponCategory; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	bool IsLast; // 0x2a8(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_WeaponCategory(int32_t EntryPoint); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.ExecuteUbergraph_WBP_Rigs_WeaponCategory // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(enum class EHWWeaponType WeaponType); // Function WBP_Rigs_WeaponCategory.WBP_Rigs_WeaponCategory_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


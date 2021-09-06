// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponSets_Info.WBP_Armory3_WeaponSets_Info_C
// Size: 0x368 (Inherited: 0x260)
struct UWBP_Armory3_WeaponSets_Info_C : UUserWidget {
	struct UWidgetAnimation* Fullset_Anim; // 0x260(0x08)
	struct UWBP_Armory3_WeaponSet_ActivePair_C* ActivePair1; // 0x268(0x08)
	struct UWBP_Armory3_WeaponSet_ActivePair_C* ActivePair2; // 0x270(0x08)
	struct UWBP_Armory3_WeaponSet_ActivePair_C* ActivePair3; // 0x278(0x08)
	struct UVerticalBox* ActivePairs; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UImage* Background_2; // 0x290(0x08)
	struct UVerticalBox* Benefits; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x2a0(0x08)
	struct UOverlay* FullSet; // 0x2a8(0x08)
	struct UWBP_WalletTooltipRow_C* FullSet_Instruction1; // 0x2b0(0x08)
	struct UWBP_WalletTooltipRow_C* FullSet_Instruction2; // 0x2b8(0x08)
	struct UWBP_Armory3_PartSetIcon_C* FullSet_PartIcon; // 0x2c0(0x08)
	struct UVerticalBox* FullSetBenefits; // 0x2c8(0x08)
	struct UImage* Image_145; // 0x2d0(0x08)
	struct UWidgetSwitcher* InfoSwitcher; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* Instruction+SetName; // 0x2e0(0x08)
	struct UWBP_WalletTooltipRow_C* Instruction1; // 0x2e8(0x08)
	struct UWBP_WalletTooltipRow_C* Instruction2; // 0x2f0(0x08)
	struct UHorizontalBox* NoActiveSet; // 0x2f8(0x08)
	struct UImage* NoSet_Icon; // 0x300(0x08)
	struct FHWWeaponPartSetBonusData NewVar_1; // 0x308(0x28)
	struct TArray<struct FName> ActiveSetIds; // 0x330(0x10)
	bool IsFullSet; // 0x340(0x01)
	enum class EHW_WeaponSetsInfo PreviouslyActiveSetsState; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FString PreviouslyOpenedVariationId; // 0x348(0x10)
	struct TArray<struct FName> PreviouslyActiveSetIds; // 0x358(0x10)

	void SetContentForActiveSets(); // Function WBP_Armory3_WeaponSets_Info.WBP_Armory3_WeaponSets_Info_C.SetContentForActiveSets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentForFullSet(); // Function WBP_Armory3_WeaponSets_Info.WBP_Armory3_WeaponSets_Info_C.SetContentForFullSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentForNoActiveSet(); // Function WBP_Armory3_WeaponSets_Info.WBP_Armory3_WeaponSets_Info_C.SetContentForNoActiveSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Content(struct FString WeaponID, bool IsWeaponAcquired); // Function WBP_Armory3_WeaponSets_Info.WBP_Armory3_WeaponSets_Info_C.Set Content // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


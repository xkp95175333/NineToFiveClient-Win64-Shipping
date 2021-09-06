// WidgetBlueprintGeneratedClass WBP_Map_PlayerDetails.WBP_Map_PlayerDetails_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Map_PlayerDetails_C : UUserWidget {
	struct UBorder* NameBorder; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* PlayerArmor; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* PlayerName; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* PlayerPrimary; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* PlayerSecondary; // 0x280(0x08)

	void SetData(struct FString PlayerName, int32_t PlayerNumber, struct FText PrimaryWeaponType, struct FText SecondaryWeaponType, struct FName Armor); // Function WBP_Map_PlayerDetails.WBP_Map_PlayerDetails_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


// WidgetBlueprintGeneratedClass WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Rigs_ArmorSetPopover_AssCount_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image1; // 0x268(0x08)
	struct UImage* Image2; // 0x270(0x08)
	struct UImage* Image3; // 0x278(0x08)
	int32_t Count; // 0x280(0x04)
	int32_t EquipedArmorCount; // 0x284(0x04)

	void SetComparison(); // Function WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C.SetComparison // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetNumItems(int32_t NumItems, int32_t EquipedArmorItems, bool IsComparision); // Function WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C.SetNumItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(bool IsComparison); // Function WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ArmorSetPopover_AssCount(int32_t EntryPoint); // Function WBP_Rigs_ArmorSetPopover_AssCount.WBP_Rigs_ArmorSetPopover_AssCount_C.ExecuteUbergraph_WBP_Rigs_ArmorSetPopover_AssCount // (Final|UbergraphFunction) // @ game+0x13c4ca0
};


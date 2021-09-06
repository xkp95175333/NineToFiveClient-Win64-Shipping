// BlueprintGeneratedClass BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C
// Size: 0x48 (Inherited: 0x28)
struct UBP_Tutorial_Sequence_Armory_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct UWBP_MenuTutorial_C* Parent; // 0x30(0x08)
	struct UWBP_Main_C* MainWidget; // 0x38(0x08)
	struct UWBP_Armory3_C* Armory3; // 0x40(0x08)

	void GetTutorialPart(enum class BPE_MenuTutorialPart Part); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.GetTutorialPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSequence(int32_t CurrentStep, bool IsCompleted); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.UpdateSequence // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Find Armory Item(struct FName PartId, struct UHWArmoryItem* Item); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.Find Armory Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FindWeaponPopup(struct UWBP_Armory2_Popup_Weapon_C* Weapon Popup); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.FindWeaponPopup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SequenceSkipped(); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.SequenceSkipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Tutorial_Sequence_Armory(int32_t EntryPoint); // Function BP_Tutorial_Sequence_Armory.BP_Tutorial_Sequence_Armory_C.ExecuteUbergraph_BP_Tutorial_Sequence_Armory // (Final|UbergraphFunction) // @ game+0x13c4ca0
};


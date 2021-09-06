// WidgetBlueprintGeneratedClass WBP_CharacterDamageState.WBP_CharacterDamageState_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_CharacterDamageState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_61; // 0x268(0x08)
	struct UWBP_Debug_HumanDamage_C* NewDamageSys; // 0x270(0x08)
	struct UOverlay* Overlay; // 0x278(0x08)
	struct AHWHumanCharacter* Human; // 0x280(0x08)
	bool BindToPlayer; // 0x288(0x01)

	void Set New Damage System(bool Index); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.Set New Damage System // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindHuman(); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.FindHuman // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHuman(struct AHWHumanCharacter* Human); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.SetHuman // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetTarget(struct AHWPlayerController* Controller, struct FHWDiagDamageDealt Value); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.SetTarget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CharacterDamageState(int32_t EntryPoint); // Function WBP_CharacterDamageState.WBP_CharacterDamageState_C.ExecuteUbergraph_WBP_CharacterDamageState // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};


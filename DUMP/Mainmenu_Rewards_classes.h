// BlueprintGeneratedClass Mainmenu_Rewards.Mainmenu_Rewards_C
// Size: 0x2c8 (Inherited: 0x228)
struct AMainmenu_Rewards_C : AHWLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ABP_RewardCrate_C* LootBox; // 0x230(0x08)
	struct TArray<struct FString> BoxSizes; // 0x238(0x10)
	struct TArray<struct ALight*> Lights; // 0x248(0x10)
	struct UParticleSystem* EffectParticleSystem; // 0x258(0x08)
	struct UParticleSystemComponent* ParticleRef; // 0x260(0x08)
	float ClickableSpotIntensity; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct ALevelSequenceActor* LS_RewardCrates_CameraMoveIn_ExecuteUbergraph_Mainmenu_Rewards_RefProperty; // 0x270(0x08)
	struct AEmitter* PS_Rewards_Clickable_2_ExecuteUbergraph_Mainmenu_Rewards_RefProperty; // 0x278(0x08)
	struct ASpotLight* SpotLight_Rewards_Fill_EdGraph_0_RefProperty; // 0x280(0x08)
	struct ARectLight* RectLight_Rewards_Key_EdGraph_0_RefProperty; // 0x288(0x08)
	struct ARectLight* RectLight_Rewards_FillLeft_EdGraph_0_RefProperty; // 0x290(0x08)
	struct ARectLight* RectLight_Rewards_FillRight_EdGraph_0_RefProperty; // 0x298(0x08)
	struct ALevelSequenceActor* LS_RewardCrates_CameraMoveIn_EdGraph_0_RefProperty; // 0x2a0(0x08)
	struct ASpotLight* Spotlight_Clickable_EdGraph_0_RefProperty; // 0x2a8(0x08)
	struct ARectLight* Rect_Front_EdGraph_0_RefProperty; // 0x2b0(0x08)
	struct AEmitter* PS_Rewards_Clickable_2_EdGraph_0_RefProperty; // 0x2b8(0x08)
	struct ATargetPoint* LootBoxPosition_EdGraph_0_RefProperty; // 0x2c0(0x08)

	void GetLootBox(struct ABP_RewardCrate_C* Box); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.GetLootBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowLootBox(enum class EHWFaction Corporation, enum class EHWRarity Rarity, int32_t Size, int32_t Stage, bool Achieved, bool Clickable, struct ABP_RewardCrate_C* Crate); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.ShowLootBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenLootBox(); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.OpenLootBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_Mainmenu_Rewards(int32_t EntryPoint); // Function Mainmenu_Rewards.Mainmenu_Rewards_C.ExecuteUbergraph_Mainmenu_Rewards // (Final|UbergraphFunction) // @ game+0x13c4ca0
};


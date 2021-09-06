// BlueprintGeneratedClass BPI_LootBoxRenderer.BPI_LootBoxRenderer_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_LootBoxRenderer_C : UInterface {

	void GetLootBox(struct ABP_RewardCrate_C* Box); // Function BPI_LootBoxRenderer.BPI_LootBoxRenderer_C.GetLootBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenLootBox(); // Function BPI_LootBoxRenderer.BPI_LootBoxRenderer_C.OpenLootBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowLootBox(enum class EHWFaction Corporation, enum class EHWRarity Rarity, int32_t Size, int32_t Stage, bool Achieved, bool Clickable, struct ABP_RewardCrate_C* Crate); // Function BPI_LootBoxRenderer.BPI_LootBoxRenderer_C.ShowLootBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


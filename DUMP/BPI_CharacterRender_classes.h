// BlueprintGeneratedClass BPI_CharacterRender.BPI_CharacterRender_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_CharacterRender_C : UInterface {

	void RenderLoadoutCard(struct FHWLoadoutData Loadout, struct FString ReceiverId); // Function BPI_CharacterRender.BPI_CharacterRender_C.RenderLoadoutCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderTeamFromLoadouts(int32_t Team, struct TArray<struct FHWLoadoutData> Loadouts); // Function BPI_CharacterRender.BPI_CharacterRender_C.RenderTeamFromLoadouts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderCharacter(struct FHWLoadoutData Loadout, struct FString ReceiverId); // Function BPI_CharacterRender.BPI_CharacterRender_C.RenderCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRenderTargetVisibilities(bool Loadout, bool Team1, bool Team2, bool Team3, bool Party); // Function BPI_CharacterRender.BPI_CharacterRender_C.SetRenderTargetVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderTeam(int32_t Team); // Function BPI_CharacterRender.BPI_CharacterRender_C.RenderTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderLoadout(struct FString Head, struct FString Chest, struct FString Legs, struct FString PrimaryWeapon); // Function BPI_CharacterRender.BPI_CharacterRender_C.RenderLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CharacterRenderLevelLoaded(); // Function BPI_CharacterRender.BPI_CharacterRender_C.CharacterRenderLevelLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};


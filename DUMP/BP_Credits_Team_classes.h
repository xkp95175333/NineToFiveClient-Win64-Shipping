// BlueprintGeneratedClass BP_Credits_Team.BP_Credits_Team_C
// Size: 0x40 (Inherited: 0x28)
struct UBP_Credits_Team_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct TArray<struct FDS_StaffCredits_TeamMember> Members; // 0x30(0x10)

	void AddToTeam(struct FDS_StaffCredits_TeamMember Member); // Function BP_Credits_Team.BP_Credits_Team_C.AddToTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Credits_Team(int32_t EntryPoint); // Function BP_Credits_Team.BP_Credits_Team_C.ExecuteUbergraph_BP_Credits_Team // (Final|UbergraphFunction) // @ game+0x13c4ca0
};


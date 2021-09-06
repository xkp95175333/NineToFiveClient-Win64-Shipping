// Enum DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8 {
	Off,
	Auto,
	UltraQuality,
	Quality,
	Balanced,
	Performance,
	UltraPerformance,
	UDLSSMode_MAX,
};

// Enum DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8 {
	Supported,
	NotSupported,
	NotSupportedIncompatibleHardware,
	NotSupportedDriverOutOfDate,
	NotSupportedOperatingSystemOutOfDate,
	NotSupportedByPlatformAtBuildTime,
	UDLSSSupport_MAX,
};


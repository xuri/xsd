// Code generated by xgen. DO NOT EDIT.

typedef PersistedToolchains Toolchains;

typedef struct {
	ToolchainModel Toolchain[];
} PersistedToolchains;

typedef struct {
} Provides;

typedef struct {
} Configuration;

typedef struct {
	char Type;
	Provides Provides;
	Configuration Configuration;
} ToolchainModel;

// Code generated by xgen. DO NOT EDIT.

typedef Assembly Assembly;

typedef struct {
	char Format[];
} Formats;

typedef struct {
	ContainerDescriptorHandlerConfig ContainerDescriptorHandler[];
} ContainerDescriptorHandlers;

typedef struct {
	ModuleSet ModuleSet[];
} ModuleSets;

typedef struct {
	FileSet FileSet[];
} FileSets;

typedef struct {
	FileItem File[];
} Files;

typedef struct {
	DependencySet DependencySet[];
} DependencySets;

typedef struct {
	Repository Repository[];
} Repositories;

typedef struct {
	char ComponentDescriptor[];
} ComponentDescriptors;

typedef struct {
	char Id;
	Formats Formats;
	bool IncludeBaseDirectory;
	char BaseDirectory;
	bool IncludeSiteDirectory;
	ContainerDescriptorHandlers ContainerDescriptorHandlers;
	ModuleSets ModuleSets;
	FileSets FileSets;
	Files Files;
	DependencySets DependencySets;
	Repositories Repositories;
	ComponentDescriptors ComponentDescriptors;
} Assembly;

typedef struct {
} Configuration;

typedef struct {
	char HandlerName;
	Configuration Configuration;
} ContainerDescriptorHandlerConfig;

typedef struct {
	GroupVersionAlignment GroupVersionAlignment[];
} GroupVersionAlignments;

typedef struct {
	char Include[];
} Includes;

typedef struct {
	char Exclude[];
} Excludes;

typedef struct {
	bool IncludeMetadata;
	GroupVersionAlignments GroupVersionAlignments;
	char Scope;
	bool UseStrictFiltering;
	bool UseDefaultExcludes;
	char OutputDirectory;
	Includes Includes;
	Excludes Excludes;
	char FileMode;
	char DirectoryMode;
} Repository;

typedef struct {
	char Id;
	char Version;
	Excludes Excludes;
} GroupVersionAlignment;

typedef struct {
	char Source;
	char OutputDirectory;
	char DestName;
	char FileMode;
	char LineEnding;
	bool Filtered;
} FileItem;

typedef struct {
	char Directory;
	char LineEnding;
	bool Filtered;
	bool UseStrictFiltering;
	bool UseDefaultExcludes;
	char OutputDirectory;
	Includes Includes;
	Excludes Excludes;
	char FileMode;
	char DirectoryMode;
} FileSet;

typedef struct {
	bool IncludeSubModules;
	Includes Includes;
	Excludes Excludes;
	ModuleSources Sources;
	ModuleBinaries Binaries;
} ModuleSet;

typedef struct {
	FileSets FileSets;
	bool IncludeModuleDirectory;
	bool ExcludeSubModuleDirectories;
	char OutputDirectoryMapping;
	bool UseStrictFiltering;
	bool UseDefaultExcludes;
	char OutputDirectory;
	Includes Includes;
	Excludes Excludes;
	char FileMode;
	char DirectoryMode;
} ModuleSources;

typedef struct {
	char AttachmentClassifier;
	bool IncludeDependencies;
	DependencySets DependencySets;
	bool Unpack;
	UnpackOptions UnpackOptions;
	char OutputFileNameMapping;
	bool UseStrictFiltering;
	bool UseDefaultExcludes;
	char OutputDirectory;
	Includes Includes;
	Excludes Excludes;
	char FileMode;
	char DirectoryMode;
} ModuleBinaries;

typedef struct {
	Includes Includes;
	Excludes Excludes;
	bool Filtered;
} UnpackOptions;

typedef struct {
	char OutputFileNameMapping;
	bool Unpack;
	UnpackOptions UnpackOptions;
	char Scope;
	bool UseProjectArtifact;
	bool UseProjectAttachments;
	bool UseTransitiveDependencies;
	bool UseTransitiveFiltering;
	bool UseStrictFiltering;
	bool UseDefaultExcludes;
	char OutputDirectory;
	Includes Includes;
	Excludes Excludes;
	char FileMode;
	char DirectoryMode;
} DependencySet;

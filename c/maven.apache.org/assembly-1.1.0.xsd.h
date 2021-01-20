// Code generated by xgen. DO NOT EDIT.

typedef Assembly Assembly;

// Formats ...
typedef struct {
	char Format[];
} Formats;

// ContainerDescriptorHandlers ...
typedef struct {
	ContainerDescriptorHandlerConfig ContainerDescriptorHandler[];
} ContainerDescriptorHandlers;

// ModuleSets ...
typedef struct {
	ModuleSet ModuleSet[];
} ModuleSets;

// FileSets ...
typedef struct {
	FileSet FileSet[];
} FileSets;

// Files ...
typedef struct {
	FileItem File[];
} Files;

// DependencySets ...
typedef struct {
	DependencySet DependencySet[];
} DependencySets;

// Repositories ...
typedef struct {
	Repository Repository[];
} Repositories;

// ComponentDescriptors ...
typedef struct {
	char ComponentDescriptor[];
} ComponentDescriptors;

// Assembly is Sets the id of this assembly. This is a symbolic name for a
//             particular assembly of files from this project. Also, aside from
//             being used to distinctly name the assembled package by attaching
//             its value to the generated archive, the id is used as your
//             artifact's classifier when deploying.
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

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
typedef struct {
	char HandlerName;
} ContainerDescriptorHandlerConfig;

// GroupVersionAlignments ...
typedef struct {
	GroupVersionAlignment GroupVersionAlignment[];
} GroupVersionAlignments;

// Includes ...
typedef struct {
	char Include[];
} Includes;

// Excludes ...
typedef struct {
	char Exclude[];
} Excludes;

// Repository is If set to true, this property will trigger the creation of repository
//             metadata which will allow the repository to be used as a functional remote
//             repository. Default value is false.
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

// GroupVersionAlignment is The version you want to align this group to.
typedef struct {
	char Id;
	char Version;
	Excludes Excludes;
} GroupVersionAlignment;

// FileItem is Sets whether to determine if the file is filtered.
typedef struct {
	char Source;
	char OutputDirectory;
	char DestName;
	char FileMode;
	char LineEnding;
	bool Filtered;
} FileItem;

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
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

// ModuleSet is If set to false, the plugin will exclude sub-modules from processing in this ModuleSet.
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules.
//           Default value is true. (Since 2.2)
typedef struct {
	bool IncludeSubModules;
	Includes Includes;
	Excludes Excludes;
	ModuleSources Sources;
	ModuleBinaries Binaries;
} ModuleSet;

// ModuleSources is Contains configuration options for including the source files of a
//         project module in an assembly.
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

// ModuleBinaries is If set to true, the plugin will include the direct and transitive dependencies of
//           of the project modules included here.  Otherwise, it will only include the module
//           packages only. Default value is true.
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

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2)
typedef struct {
	Includes Includes;
	Excludes Excludes;
	bool Filtered;
} UnpackOptions;

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
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

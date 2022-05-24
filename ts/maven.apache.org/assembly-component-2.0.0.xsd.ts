// Code generated by xgen. DO NOT EDIT.

// Component is Describes the component layout and packaging.
export type Component = Component;

// ModuleSets ...
export class ModuleSets {
	ModuleSet: Array<ModuleSet>;
}

// FileSets ...
export class FileSets {
	FileSet: Array<FileSet>;
}

// Files ...
export class Files {
	File: Array<FileItem>;
}

// DependencySets ...
export class DependencySets {
	DependencySet: Array<DependencySet>;
}

// Repositories ...
export class Repositories {
	Repository: Array<Repository>;
}

// ContainerDescriptorHandlers ...
export class ContainerDescriptorHandlers {
	ContainerDescriptorHandler: Array<ContainerDescriptorHandlerConfig>;
}

// Component2 is Describes the component layout and packaging.
export class Component2 {
	ModuleSets: ModuleSets;
	FileSets: FileSets;
	Files: Files;
	DependencySets: DependencySets;
	Repositories: Repositories;
	ContainerDescriptorHandlers: ContainerDescriptorHandlers;
}

// FileItem is Sets whether to determine if the file is filtered.
export class FileItem {
	Source: string;
	OutputDirectory: string;
	DestName: string;
	FileMode: string;
	LineEnding: string;
	Filtered: boolean;
}

// Configuration ...
export class Configuration {
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
export class ContainerDescriptorHandlerConfig {
	HandlerName: string;
	Configuration: Configuration;
}

// Includes ...
export class Includes {
	Include: string;
}

// Excludes ...
export class Excludes {
	Exclude: string;
}

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
export class FileSet {
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
	Directory: string;
	LineEnding: string;
	Filtered: boolean;
}

// ModuleSet is If set to false, the plugin will exclude sub-modules from processing in this ModuleSet.
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules.
//           Default value is true. (Since 2.2)
export class ModuleSet {
	UseAllReactorProjects: boolean;
	IncludeSubModules: boolean;
	Includes: Includes;
	Excludes: Excludes;
	Sources: ModuleSources;
	Binaries: ModuleBinaries;
}

// ModuleSources is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
export class ModuleSources {
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
	FileSets: FileSets;
	IncludeModuleDirectory: boolean;
	ExcludeSubModuleDirectories: boolean;
	OutputDirectoryMapping: string;
}

// ModuleBinaries is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
export class ModuleBinaries {
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
	AttachmentClassifier: string;
	IncludeDependencies: boolean;
	DependencySets: DependencySets;
	Unpack: boolean;
	UnpackOptions: UnpackOptions;
	OutputFileNameMapping: string;
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2)
export class UnpackOptions {
	Includes: Includes;
	Excludes: Excludes;
	Filtered: boolean;
	LineEnding: string;
	UseDefaultExcludes: boolean;
	Encoding: string;
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
export class DependencySet {
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
	UseStrictFiltering: boolean;
	OutputFileNameMapping: string;
	Unpack: boolean;
	UnpackOptions: UnpackOptions;
	Scope: string;
	UseProjectArtifact: boolean;
	UseProjectAttachments: boolean;
	UseTransitiveDependencies: boolean;
	UseTransitiveFiltering: boolean;
}

// GroupVersionAlignments ...
export class GroupVersionAlignments {
	GroupVersionAlignment: Array<GroupVersionAlignment>;
}

// Repository is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
export class Repository {
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
	IncludeMetadata: boolean;
	GroupVersionAlignments: GroupVersionAlignments;
	Scope: string;
}

// GroupVersionAlignment is The version you want to align this group to.
export class GroupVersionAlignment {
	Id: string;
	Version: string;
	Excludes: Excludes;
}

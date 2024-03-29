// Code generated by xgen. DO NOT EDIT.

// Component is Describes the component layout and packaging.
export type Component = Component;

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
	FileSets: FileSets;
	Files: Files;
	DependencySets: DependencySets;
	Repositories: Repositories;
	ContainerDescriptorHandlers: ContainerDescriptorHandlers;
}

// Configuration ...
export class Configuration {
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
export class ContainerDescriptorHandlerConfig {
	HandlerName: string;
	Configuration: Configuration;
}

// GroupVersionAlignments ...
export class GroupVersionAlignments {
	GroupVersionAlignment: Array<GroupVersionAlignment>;
}

// Includes ...
export class Includes {
	Include: string;
}

// Excludes ...
export class Excludes {
	Exclude: string;
}

// Repository is If set to true, this property will trigger the creation of repository
//             metadata which will allow the repository to be used as a functional remote
//             repository.
export class Repository {
	IncludeMetadata: boolean;
	GroupVersionAlignments: GroupVersionAlignments;
	Scope: string;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

// GroupVersionAlignment is The version you want to align this group to.
export class GroupVersionAlignment {
	Id: string;
	Version: string;
	Excludes: Excludes;
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

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
export class FileSet {
	Directory: string;
	LineEnding: string;
	Filtered: boolean;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
export class DependencySet {
	OutputFileNameMapping: string;
	Unpack: boolean;
	UnpackOptions: UnpackOptions;
	Scope: string;
	UseProjectArtifact: boolean;
	UseProjectAttachments: boolean;
	UseTransitiveDependencies: boolean;
	UseTransitiveFiltering: boolean;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive.
export class UnpackOptions {
	Includes: Includes;
	Excludes: Excludes;
	Filtered: boolean;
}

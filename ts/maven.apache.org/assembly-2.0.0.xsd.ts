// Code generated by xgen. DO NOT EDIT.

// Assembly is An assembly defines a collection of files usually distributed in an
//         archive format such as zip, tar, or tar.gz that is generated from a
//         project.  For example, a project could produce a ZIP assembly which
//         contains a project's JAR artifact in the root directory, the
//         runtime dependencies in a lib/ directory, and a shell script to launch
//         a stand-alone application.
export type Assembly = Assembly;

// Formats ...
export class Formats {
	Format: string;
}

// ContainerDescriptorHandlers ...
export class ContainerDescriptorHandlers {
	ContainerDescriptorHandler: Array<ContainerDescriptorHandlerConfig>;
}

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

// ComponentDescriptors ...
export class ComponentDescriptors {
	ComponentDescriptor: string;
}

// Assembly is Sets the id of this assembly. This is a symbolic name for a
//             particular assembly of files from this project. Also, aside from
//             being used to distinctly name the assembled package by attaching
//             its value to the generated archive, the id is used as your
//             artifact's classifier when deploying.
export class Assembly {
	Id: string;
	Formats: Formats;
	IncludeBaseDirectory: boolean;
	BaseDirectory: string;
	IncludeSiteDirectory: boolean;
	ContainerDescriptorHandlers: ContainerDescriptorHandlers;
	ModuleSets: ModuleSets;
	FileSets: FileSets;
	Files: Files;
	DependencySets: DependencySets;
	Repositories: Repositories;
	ComponentDescriptors: ComponentDescriptors;
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
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules. (Since 2.2-beta-1)
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

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2-beta-1)
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

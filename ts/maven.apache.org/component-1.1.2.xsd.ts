// Code generated by xgen. DO NOT EDIT.

// Component is Describes the component layout and packaging.
export type Component = Component;

// ModuleSets is Specifies which module files to include in the assembly. A moduleSet
//             is specified by providing one or more of &lt;moduleSet&gt;
//             subelements.
export class ModuleSets {
	ModuleSet: Array<ModuleSet>;
}

// FileSets is Specifies which groups of files to include in the assembly. A
//             fileSet is specified by providing one or more of &lt;fileSet&gt;
//             subelements.
export class FileSets {
	FileSet: Array<FileSet>;
}

// Files is Specifies which single files to include in the assembly. A file
//             is specified by providing one or more of &lt;file&gt;
//             subelements.
export class Files {
	File: Array<FileItem>;
}

// DependencySets is Specifies which dependencies to include in the assembly. A
//             dependencySet is specified by providing one or more of
//             &lt;dependencySet&gt; subelements.
export class DependencySets {
	DependencySet: Array<DependencySet>;
}

// Repositories is Specifies a set of repositories to include in the assembly. A
//             repository is specified by providing one or more of
//             &lt;repository&gt; subelements.
export class Repositories {
	Repository: Array<Repository>;
}

// ContainerDescriptorHandlers is Set of components which filter various container descriptors out of
//             the normal archive stream, so they can be aggregated then added.
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

// Includes is When &lt;include&gt; subelements are present, they define a set of
//             artifact coordinates to include. If none is present, then
//             &lt;includes&gt; represents all valid values.
// 
//             Artifact coordinates may be given in simple groupId:artifactId form,
//             or they may be fully qualified in the form groupId:artifactId:type[:classifier]:version.
//             Additionally, wildcards can be used, as in *:maven-*
export class Includes {
	Include: string;
}

// Excludes is When &lt;exclude&gt; subelements are present, they define a set of
//             dependency artifact coordinates to exclude. If none is present, then
//             &lt;excludes&gt; represents no exclusions.
// 
//             Artifact coordinates may be given in simple groupId:artifactId form,
//             or they may be fully qualified in the form groupId:artifactId:type[:classifier]:version.
//             Additionally, wildcards can be used, as in *:maven-*
export class Excludes {
	Exclude: string;
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

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2)
export class UnpackOptions {
	Includes: Includes;
	Excludes: Excludes;
	Filtered: boolean;
	LineEnding: string;
	UseDefaultExcludes: boolean;
}

// Configuration is Configuration options for the handler.
export class Configuration {
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
export class ContainerDescriptorHandlerConfig {
	HandlerName: string;
	Configuration: Configuration;
}

// GroupVersionAlignments is Specifies that you want to align a group of artifacts to a specified
//             version. A groupVersionAlignment is specified by providing one or
//             more of &lt;groupVersionAlignment&gt; subelements.
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

// FileItem is Sets whether to determine if the file is filtered.
export class FileItem {
	Source: string;
	OutputDirectory: string;
	DestName: string;
	FileMode: string;
	LineEnding: string;
	Filtered: boolean;
}

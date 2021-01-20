// Code generated by xgen. DO NOT EDIT.

package schema;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "component")
public class Component {
	protected Component Component;
}

// ModuleSets ...
public class ModuleSets {
	@XmlElement(required = true, name = "moduleSet")
	protected List<ModuleSet> ModuleSet;
}

// FileSets ...
public class FileSets {
	@XmlElement(required = true, name = "fileSet")
	protected List<FileSet> FileSet;
}

// Files ...
public class Files {
	@XmlElement(required = true, name = "file")
	protected List<FileItem> File;
}

// DependencySets ...
public class DependencySets {
	@XmlElement(required = true, name = "dependencySet")
	protected List<DependencySet> DependencySet;
}

// Repositories ...
public class Repositories {
	@XmlElement(required = true, name = "repository")
	protected List<Repository> Repository;
}

// ContainerDescriptorHandlers ...
public class ContainerDescriptorHandlers {
	@XmlElement(required = true, name = "containerDescriptorHandler")
	protected List<ContainerDescriptorHandlerConfig> ContainerDescriptorHandler;
}

// Component is Describes the component layout and packaging.
public class Component {
	@XmlElement(required = true, name = "moduleSets")
	protected ModuleSets ModuleSets;
	@XmlElement(required = true, name = "fileSets")
	protected FileSets FileSets;
	@XmlElement(required = true, name = "files")
	protected Files Files;
	@XmlElement(required = true, name = "dependencySets")
	protected DependencySets DependencySets;
	@XmlElement(required = true, name = "repositories")
	protected Repositories Repositories;
	@XmlElement(required = true, name = "containerDescriptorHandlers")
	protected ContainerDescriptorHandlers ContainerDescriptorHandlers;
}

// Includes ...
public class Includes {
	@XmlElement(required = true, name = "include")
	protected List<String> Include;
}

// Excludes ...
public class Excludes {
	@XmlElement(required = true, name = "exclude")
	protected List<String> Exclude;
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
public class DependencySet {
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "directoryMode")
	protected String DirectoryMode;
	@XmlElement(required = true, name = "useStrictFiltering")
	protected Boolean UseStrictFiltering;
	@XmlElement(required = true, name = "outputFileNameMapping")
	protected String OutputFileNameMapping;
	@XmlElement(required = true, name = "unpack")
	protected Boolean Unpack;
	@XmlElement(required = true, name = "unpackOptions")
	protected UnpackOptions UnpackOptions;
	@XmlElement(required = true, name = "scope")
	protected String Scope;
	@XmlElement(required = true, name = "useProjectArtifact")
	protected Boolean UseProjectArtifact;
	@XmlElement(required = true, name = "useProjectAttachments")
	protected Boolean UseProjectAttachments;
	@XmlElement(required = true, name = "useTransitiveDependencies")
	protected Boolean UseTransitiveDependencies;
	@XmlElement(required = true, name = "useTransitiveFiltering")
	protected Boolean UseTransitiveFiltering;
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2)
public class UnpackOptions {
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "filtered")
	protected Boolean Filtered;
	@XmlElement(required = true, name = "lineEnding")
	protected String LineEnding;
	@XmlElement(required = true, name = "useDefaultExcludes")
	protected Boolean UseDefaultExcludes;
}

// Configuration ...
public class Configuration {
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
public class ContainerDescriptorHandlerConfig {
	@XmlElement(required = true, name = "handlerName")
	protected String HandlerName;
	@XmlElement(required = true, name = "configuration")
	protected Configuration Configuration;
}

// GroupVersionAlignments ...
public class GroupVersionAlignments {
	@XmlElement(required = true, name = "groupVersionAlignment")
	protected List<GroupVersionAlignment> GroupVersionAlignment;
}

// Repository is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
public class Repository {
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "directoryMode")
	protected String DirectoryMode;
	@XmlElement(required = true, name = "includeMetadata")
	protected Boolean IncludeMetadata;
	@XmlElement(required = true, name = "groupVersionAlignments")
	protected GroupVersionAlignments GroupVersionAlignments;
	@XmlElement(required = true, name = "scope")
	protected String Scope;
}

// GroupVersionAlignment is The version you want to align this group to.
public class GroupVersionAlignment {
	@XmlElement(required = true, name = "id")
	protected String Id;
	@XmlElement(required = true, name = "version")
	protected String Version;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
}

// ModuleSet is If set to false, the plugin will exclude sub-modules from processing in this ModuleSet.
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules.
//           Default value is true. (Since 2.2)
public class ModuleSet {
	@XmlElement(required = true, name = "useAllReactorProjects")
	protected Boolean UseAllReactorProjects;
	@XmlElement(required = true, name = "includeSubModules")
	protected Boolean IncludeSubModules;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "sources")
	protected ModuleSources Sources;
	@XmlElement(required = true, name = "binaries")
	protected ModuleBinaries Binaries;
}

// ModuleBinaries is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
public class ModuleBinaries {
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "directoryMode")
	protected String DirectoryMode;
	@XmlElement(required = true, name = "attachmentClassifier")
	protected String AttachmentClassifier;
	@XmlElement(required = true, name = "includeDependencies")
	protected Boolean IncludeDependencies;
	@XmlElement(required = true, name = "dependencySets")
	protected DependencySets DependencySets;
	@XmlElement(required = true, name = "unpack")
	protected Boolean Unpack;
	@XmlElement(required = true, name = "unpackOptions")
	protected UnpackOptions UnpackOptions;
	@XmlElement(required = true, name = "outputFileNameMapping")
	protected String OutputFileNameMapping;
}

// ModuleSources is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
public class ModuleSources {
	@XmlElement(required = true, name = "useDefaultExcludes")
	protected Boolean UseDefaultExcludes;
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "directoryMode")
	protected String DirectoryMode;
	@XmlElement(required = true, name = "fileSets")
	protected FileSets FileSets;
	@XmlElement(required = true, name = "includeModuleDirectory")
	protected Boolean IncludeModuleDirectory;
	@XmlElement(required = true, name = "excludeSubModuleDirectories")
	protected Boolean ExcludeSubModuleDirectories;
	@XmlElement(required = true, name = "outputDirectoryMapping")
	protected String OutputDirectoryMapping;
}

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
public class FileSet {
	@XmlElement(required = true, name = "useDefaultExcludes")
	protected Boolean UseDefaultExcludes;
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "directoryMode")
	protected String DirectoryMode;
	@XmlElement(required = true, name = "directory")
	protected String Directory;
	@XmlElement(required = true, name = "lineEnding")
	protected String LineEnding;
	@XmlElement(required = true, name = "filtered")
	protected Boolean Filtered;
}

// FileItem is Sets whether to determine if the file is filtered.
public class FileItem {
	@XmlElement(required = true, name = "source")
	protected String Source;
	@XmlElement(required = true, name = "outputDirectory")
	protected String OutputDirectory;
	@XmlElement(required = true, name = "destName")
	protected String DestName;
	@XmlElement(required = true, name = "fileMode")
	protected String FileMode;
	@XmlElement(required = true, name = "lineEnding")
	protected String LineEnding;
	@XmlElement(required = true, name = "filtered")
	protected Boolean Filtered;
}

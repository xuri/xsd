// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Assembly is An assembly defines a collection of files usually distributed in an
//         archive format such as zip, tar, or tar.gz that is generated from a
//         project.  For example, a project could produce a ZIP assembly which
//         contains a project's JAR artifact in the root directory, the
//         runtime dependencies in a lib/ directory, and a shell script to launch
//         a stand-alone application.
type Assembly *Assembly

// Formats is Specifies the formats of the assembly.
//
//             It is often better to specify the formats via the goal parameter rather
//             than here. For example, that allows different profiles to generate
//             different types of archives.
//
//             Multiple formats can be
//             supplied and the Assembly Plugin will generate an archive for each
//             of the desired formats. When deploying your project, all file formats
//             specified will also be deployed. A format is specified by supplying
//             one of the following values in a &lt;format&gt; subelement:
//             <ul>
//               <li><b>"zip"</b> - Creates a ZIP file format</li>
//               <li><b>"tar"</b> - Creates a TAR format</li>
//               <li><b>"tar.gz"</b> - Creates a gzip'd TAR format</li>
//               <li><b>"tar.bz2"</b> - Creates a bzip'd TAR format</li>
//               <li><b>"jar"</b> - Creates a JAR format</li>
//               <li><b>"dir"</b> - Creates an exploded directory format</li>
//               <li><b>"war"</b> - Creates a WAR format</li>
//             </ul>
type Formats struct {
	XMLName xml.Name `xml:"formats"`
	Format  []string `xml:"format,omitempty"`
}

// ContainerDescriptorHandlers is Set of components which filter various container descriptors out of
//             the normal archive stream, so they can be aggregated then added.
type ContainerDescriptorHandlers struct {
	XMLName                    xml.Name                            `xml:"containerDescriptorHandlers"`
	ContainerDescriptorHandler []*ContainerDescriptorHandlerConfig `xml:"containerDescriptorHandler,omitempty"`
}

// ModuleSets is Specifies which module files to include in the assembly. A moduleSet
//             is specified by providing one or more of &lt;moduleSet&gt;
//             subelements.
type ModuleSets struct {
	XMLName   xml.Name     `xml:"moduleSets"`
	ModuleSet []*ModuleSet `xml:"moduleSet,omitempty"`
}

// FileSets is Specifies which groups of files to include in the assembly. A
//             fileSet is specified by providing one or more of &lt;fileSet&gt;
//             subelements.
type FileSets struct {
	XMLName xml.Name   `xml:"fileSets"`
	FileSet []*FileSet `xml:"fileSet,omitempty"`
}

// Files is Specifies which single files to include in the assembly. A file
//             is specified by providing one or more of &lt;file&gt;
//             subelements.
type Files struct {
	XMLName xml.Name    `xml:"files"`
	File    []*FileItem `xml:"file,omitempty"`
}

// DependencySets is Specifies which dependencies to include in the assembly. A
//             dependencySet is specified by providing one or more of
//             &lt;dependencySet&gt; subelements.
type DependencySets struct {
	XMLName       xml.Name         `xml:"dependencySets"`
	DependencySet []*DependencySet `xml:"dependencySet,omitempty"`
}

// Repositories is Specifies which repository files to include in the assembly. A
//             repository is specified by providing one or more of
//             &lt;repository&gt; subelements.
type Repositories struct {
	XMLName    xml.Name      `xml:"repositories"`
	Repository []*Repository `xml:"repository,omitempty"`
}

// ComponentDescriptors is Specifies the shared components xml file locations to include in the
//             assembly. The locations specified must be relative to the base location
//             of the descriptor. If the descriptor was found via a &lt;descriptorRef/&gt;
//             element in the
//             classpath, any components it specifies will also be found on the classpath.
//             If it is found by pathname via a &lt;descriptor/&gt; element
//             the value here will be interpreted
//             as a path relative to the project basedir.
//             When multiple componentDescriptors are found, their
//             contents are merged. Check out the <a href="component.html">
//             descriptor components</a> for more information. A
//             componentDescriptor is specified by providing one or more of
//             &lt;componentDescriptor&gt; subelements.
type ComponentDescriptors struct {
	XMLName             xml.Name `xml:"componentDescriptors"`
	ComponentDescriptor []string `xml:"componentDescriptor,omitempty"`
}

// Assembly is Sets the id of this assembly. This is a symbolic name for a
//             particular assembly of files from this project. Also, aside from
//             being used to distinctly name the assembled package by attaching
//             its value to the generated archive, the id is used as your
//             artifact's classifier when deploying.
type Assembly struct {
	Id                          string                       `xml:"id,omitempty"`
	Formats                     *Formats                     `xml:"formats,omitempty"`
	IncludeBaseDirectory        bool                         `xml:"includeBaseDirectory,omitempty"`
	BaseDirectory               string                       `xml:"baseDirectory,omitempty"`
	IncludeSiteDirectory        bool                         `xml:"includeSiteDirectory,omitempty"`
	ContainerDescriptorHandlers *ContainerDescriptorHandlers `xml:"containerDescriptorHandlers,omitempty"`
	ModuleSets                  *ModuleSets                  `xml:"moduleSets,omitempty"`
	FileSets                    *FileSets                    `xml:"fileSets,omitempty"`
	Files                       *Files                       `xml:"files,omitempty"`
	DependencySets              *DependencySets              `xml:"dependencySets,omitempty"`
	Repositories                *Repositories                `xml:"repositories,omitempty"`
	ComponentDescriptors        *ComponentDescriptors        `xml:"componentDescriptors,omitempty"`
}

// Includes is When &lt;include&gt; subelements are present, they define a set of
//             artifact coordinates to include. If none is present, then
//             &lt;includes&gt; represents all valid values.
//
//             Artifact coordinates may be given in simple groupId:artifactId form,
//             or they may be fully qualified in the form groupId:artifactId:type[:classifier]:version.
//             Additionally, wildcards can be used, as in *:maven-*
type Includes struct {
	XMLName xml.Name `xml:"includes"`
	Include []string `xml:"include,omitempty"`
}

// Excludes is When &lt;exclude&gt; subelements are present, they define a set of
//             dependency artifact coordinates to exclude. If none is present, then
//             &lt;excludes&gt; represents no exclusions.
//
//             Artifact coordinates may be given in simple groupId:artifactId form,
//             or they may be fully qualified in the form groupId:artifactId:type[:classifier]:version.
//             Additionally, wildcards can be used, as in *:maven-*
type Excludes struct {
	XMLName xml.Name `xml:"excludes"`
	Exclude []string `xml:"exclude,omitempty"`
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type DependencySet struct {
	OutputDirectory           string         `xml:"outputDirectory,omitempty"`
	Includes                  *Includes      `xml:"includes,omitempty"`
	Excludes                  *Excludes      `xml:"excludes,omitempty"`
	FileMode                  string         `xml:"fileMode,omitempty"`
	DirectoryMode             string         `xml:"directoryMode,omitempty"`
	UseStrictFiltering        bool           `xml:"useStrictFiltering,omitempty"`
	OutputFileNameMapping     string         `xml:"outputFileNameMapping,omitempty"`
	Unpack                    bool           `xml:"unpack,omitempty"`
	UnpackOptions             *UnpackOptions `xml:"unpackOptions,omitempty"`
	Scope                     string         `xml:"scope,omitempty"`
	UseProjectArtifact        bool           `xml:"useProjectArtifact,omitempty"`
	UseProjectAttachments     bool           `xml:"useProjectAttachments,omitempty"`
	UseTransitiveDependencies bool           `xml:"useTransitiveDependencies,omitempty"`
	UseTransitiveFiltering    bool           `xml:"useTransitiveFiltering,omitempty"`
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2-beta-1)
type UnpackOptions struct {
	Includes           *Includes `xml:"includes,omitempty"`
	Excludes           *Excludes `xml:"excludes,omitempty"`
	Filtered           bool      `xml:"filtered,omitempty"`
	LineEnding         string    `xml:"lineEnding,omitempty"`
	UseDefaultExcludes bool      `xml:"useDefaultExcludes,omitempty"`
}

// GroupVersionAlignments is Specifies that you want to align a group of artifacts to a specified
//             version. A groupVersionAlignment is specified by providing one or
//             more of &lt;groupVersionAlignment&gt; subelements.
type GroupVersionAlignments struct {
	XMLName               xml.Name                 `xml:"groupVersionAlignments"`
	GroupVersionAlignment []*GroupVersionAlignment `xml:"groupVersionAlignment,omitempty"`
}

// Repository is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type Repository struct {
	OutputDirectory        string                  `xml:"outputDirectory,omitempty"`
	Includes               *Includes               `xml:"includes,omitempty"`
	Excludes               *Excludes               `xml:"excludes,omitempty"`
	FileMode               string                  `xml:"fileMode,omitempty"`
	DirectoryMode          string                  `xml:"directoryMode,omitempty"`
	IncludeMetadata        bool                    `xml:"includeMetadata,omitempty"`
	GroupVersionAlignments *GroupVersionAlignments `xml:"groupVersionAlignments,omitempty"`
	Scope                  string                  `xml:"scope,omitempty"`
}

// GroupVersionAlignment is The version you want to align this group to.
type GroupVersionAlignment struct {
	Id       string    `xml:"id,omitempty"`
	Version  string    `xml:"version,omitempty"`
	Excludes *Excludes `xml:"excludes,omitempty"`
}

// Configuration is Configuration options for the handler.
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
type ContainerDescriptorHandlerConfig struct {
	HandlerName   string         `xml:"handlerName,omitempty"`
	Configuration *Configuration `xml:"configuration,omitempty"`
}

// ModuleSet is If set to false, the plugin will exclude sub-modules from processing in this ModuleSet.
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules. (Since 2.2-beta-1)
type ModuleSet struct {
	UseAllReactorProjects bool            `xml:"useAllReactorProjects,omitempty"`
	IncludeSubModules     bool            `xml:"includeSubModules,omitempty"`
	Includes              *Includes       `xml:"includes,omitempty"`
	Excludes              *Excludes       `xml:"excludes,omitempty"`
	Sources               *ModuleSources  `xml:"sources,omitempty"`
	Binaries              *ModuleBinaries `xml:"binaries,omitempty"`
}

// ModuleBinaries is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type ModuleBinaries struct {
	OutputDirectory       string          `xml:"outputDirectory,omitempty"`
	Includes              *Includes       `xml:"includes,omitempty"`
	Excludes              *Excludes       `xml:"excludes,omitempty"`
	FileMode              string          `xml:"fileMode,omitempty"`
	DirectoryMode         string          `xml:"directoryMode,omitempty"`
	AttachmentClassifier  string          `xml:"attachmentClassifier,omitempty"`
	IncludeDependencies   bool            `xml:"includeDependencies,omitempty"`
	DependencySets        *DependencySets `xml:"dependencySets,omitempty"`
	Unpack                bool            `xml:"unpack,omitempty"`
	UnpackOptions         *UnpackOptions  `xml:"unpackOptions,omitempty"`
	OutputFileNameMapping string          `xml:"outputFileNameMapping,omitempty"`
}

// ModuleSources is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type ModuleSources struct {
	UseDefaultExcludes          bool      `xml:"useDefaultExcludes,omitempty"`
	OutputDirectory             string    `xml:"outputDirectory,omitempty"`
	Includes                    *Includes `xml:"includes,omitempty"`
	Excludes                    *Excludes `xml:"excludes,omitempty"`
	FileMode                    string    `xml:"fileMode,omitempty"`
	DirectoryMode               string    `xml:"directoryMode,omitempty"`
	FileSets                    *FileSets `xml:"fileSets,omitempty"`
	IncludeModuleDirectory      bool      `xml:"includeModuleDirectory,omitempty"`
	ExcludeSubModuleDirectories bool      `xml:"excludeSubModuleDirectories,omitempty"`
	OutputDirectoryMapping      string    `xml:"outputDirectoryMapping,omitempty"`
}

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type FileSet struct {
	UseDefaultExcludes bool      `xml:"useDefaultExcludes,omitempty"`
	OutputDirectory    string    `xml:"outputDirectory,omitempty"`
	Includes           *Includes `xml:"includes,omitempty"`
	Excludes           *Excludes `xml:"excludes,omitempty"`
	FileMode           string    `xml:"fileMode,omitempty"`
	DirectoryMode      string    `xml:"directoryMode,omitempty"`
	Directory          string    `xml:"directory,omitempty"`
	LineEnding         string    `xml:"lineEnding,omitempty"`
	Filtered           bool      `xml:"filtered,omitempty"`
}

// FileItem is Sets whether to determine if the file is filtered.
type FileItem struct {
	Source          string `xml:"source,omitempty"`
	OutputDirectory string `xml:"outputDirectory,omitempty"`
	DestName        string `xml:"destName,omitempty"`
	FileMode        string `xml:"fileMode,omitempty"`
	LineEnding      string `xml:"lineEnding,omitempty"`
	Filtered        bool   `xml:"filtered,omitempty"`
}

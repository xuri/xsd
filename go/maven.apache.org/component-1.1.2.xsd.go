// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Component is Describes the component layout and packaging.
type Component *Component

// ModuleSets is Specifies which module files to include in the assembly. A moduleSet
//             is specified by providing one or more of &lt;moduleSet&gt;
//             subelements.
type ModuleSets struct {
	XMLName   xml.Name     `xml:"moduleSets"`
	ModuleSet []*ModuleSet `xml:"moduleSet"`
}

// FileSets is Specifies which groups of files to include in the assembly. A
//             fileSet is specified by providing one or more of &lt;fileSet&gt;
//             subelements.
type FileSets struct {
	XMLName xml.Name   `xml:"fileSets"`
	FileSet []*FileSet `xml:"fileSet"`
}

// Files is Specifies which single files to include in the assembly. A file
//             is specified by providing one or more of &lt;file&gt;
//             subelements.
type Files struct {
	XMLName xml.Name    `xml:"files"`
	File    []*FileItem `xml:"file"`
}

// DependencySets is Specifies which dependencies to include in the assembly. A
//             dependencySet is specified by providing one or more of
//             &lt;dependencySet&gt; subelements.
type DependencySets struct {
	XMLName       xml.Name         `xml:"dependencySets"`
	DependencySet []*DependencySet `xml:"dependencySet"`
}

// Repositories is Specifies a set of repositories to include in the assembly. A
//             repository is specified by providing one or more of
//             &lt;repository&gt; subelements.
type Repositories struct {
	XMLName    xml.Name      `xml:"repositories"`
	Repository []*Repository `xml:"repository"`
}

// ContainerDescriptorHandlers is Set of components which filter various container descriptors out of
//             the normal archive stream, so they can be aggregated then added.
type ContainerDescriptorHandlers struct {
	XMLName                    xml.Name                            `xml:"containerDescriptorHandlers"`
	ContainerDescriptorHandler []*ContainerDescriptorHandlerConfig `xml:"containerDescriptorHandler"`
}

// Component is Describes the component layout and packaging.
type Component struct {
	ModuleSets                  *ModuleSets                  `xml:"moduleSets"`
	FileSets                    *FileSets                    `xml:"fileSets"`
	Files                       *Files                       `xml:"files"`
	DependencySets              *DependencySets              `xml:"dependencySets"`
	Repositories                *Repositories                `xml:"repositories"`
	ContainerDescriptorHandlers *ContainerDescriptorHandlers `xml:"containerDescriptorHandlers"`
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
	Include []string `xml:"include"`
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
	Exclude []string `xml:"exclude"`
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type DependencySet struct {
	OutputDirectory           string         `xml:"outputDirectory"`
	Includes                  *Includes      `xml:"includes"`
	Excludes                  *Excludes      `xml:"excludes"`
	FileMode                  string         `xml:"fileMode"`
	DirectoryMode             string         `xml:"directoryMode"`
	UseStrictFiltering        bool           `xml:"useStrictFiltering"`
	OutputFileNameMapping     string         `xml:"outputFileNameMapping"`
	Unpack                    bool           `xml:"unpack"`
	UnpackOptions             *UnpackOptions `xml:"unpackOptions"`
	Scope                     string         `xml:"scope"`
	UseProjectArtifact        bool           `xml:"useProjectArtifact"`
	UseProjectAttachments     bool           `xml:"useProjectAttachments"`
	UseTransitiveDependencies bool           `xml:"useTransitiveDependencies"`
	UseTransitiveFiltering    bool           `xml:"useTransitiveFiltering"`
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive. (Since 2.2)
type UnpackOptions struct {
	Includes           *Includes `xml:"includes"`
	Excludes           *Excludes `xml:"excludes"`
	Filtered           bool      `xml:"filtered"`
	LineEnding         string    `xml:"lineEnding"`
	UseDefaultExcludes bool      `xml:"useDefaultExcludes"`
}

// Configuration is Configuration options for the handler.
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
type ContainerDescriptorHandlerConfig struct {
	HandlerName   string         `xml:"handlerName"`
	Configuration *Configuration `xml:"configuration"`
}

// GroupVersionAlignments is Specifies that you want to align a group of artifacts to a specified
//             version. A groupVersionAlignment is specified by providing one or
//             more of &lt;groupVersionAlignment&gt; subelements.
type GroupVersionAlignments struct {
	XMLName               xml.Name                 `xml:"groupVersionAlignments"`
	GroupVersionAlignment []*GroupVersionAlignment `xml:"groupVersionAlignment"`
}

// Repository is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type Repository struct {
	OutputDirectory        string                  `xml:"outputDirectory"`
	Includes               *Includes               `xml:"includes"`
	Excludes               *Excludes               `xml:"excludes"`
	FileMode               string                  `xml:"fileMode"`
	DirectoryMode          string                  `xml:"directoryMode"`
	IncludeMetadata        bool                    `xml:"includeMetadata"`
	GroupVersionAlignments *GroupVersionAlignments `xml:"groupVersionAlignments"`
	Scope                  string                  `xml:"scope"`
}

// GroupVersionAlignment is The version you want to align this group to.
type GroupVersionAlignment struct {
	Id       string    `xml:"id"`
	Version  string    `xml:"version"`
	Excludes *Excludes `xml:"excludes"`
}

// ModuleSet is If set to false, the plugin will exclude sub-modules from processing in this ModuleSet.
//           Otherwise, it will process all sub-modules, each subject to include/exclude rules.
//           Default value is true. (Since 2.2)
type ModuleSet struct {
	UseAllReactorProjects bool            `xml:"useAllReactorProjects"`
	IncludeSubModules     bool            `xml:"includeSubModules"`
	Includes              *Includes       `xml:"includes"`
	Excludes              *Excludes       `xml:"excludes"`
	Sources               *ModuleSources  `xml:"sources"`
	Binaries              *ModuleBinaries `xml:"binaries"`
}

// ModuleBinaries is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory,
//             directly beneath the root of the archive.
type ModuleBinaries struct {
	OutputDirectory       string          `xml:"outputDirectory"`
	Includes              *Includes       `xml:"includes"`
	Excludes              *Excludes       `xml:"excludes"`
	FileMode              string          `xml:"fileMode"`
	DirectoryMode         string          `xml:"directoryMode"`
	AttachmentClassifier  string          `xml:"attachmentClassifier"`
	IncludeDependencies   bool            `xml:"includeDependencies"`
	DependencySets        *DependencySets `xml:"dependencySets"`
	Unpack                bool            `xml:"unpack"`
	UnpackOptions         *UnpackOptions  `xml:"unpackOptions"`
	OutputFileNameMapping string          `xml:"outputFileNameMapping"`
}

// ModuleSources is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type ModuleSources struct {
	UseDefaultExcludes          bool      `xml:"useDefaultExcludes"`
	OutputDirectory             string    `xml:"outputDirectory"`
	Includes                    *Includes `xml:"includes"`
	Excludes                    *Excludes `xml:"excludes"`
	FileMode                    string    `xml:"fileMode"`
	DirectoryMode               string    `xml:"directoryMode"`
	FileSets                    *FileSets `xml:"fileSets"`
	IncludeModuleDirectory      bool      `xml:"includeModuleDirectory"`
	ExcludeSubModuleDirectories bool      `xml:"excludeSubModuleDirectories"`
	OutputDirectoryMapping      string    `xml:"outputDirectoryMapping"`
}

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type FileSet struct {
	UseDefaultExcludes bool      `xml:"useDefaultExcludes"`
	OutputDirectory    string    `xml:"outputDirectory"`
	Includes           *Includes `xml:"includes"`
	Excludes           *Excludes `xml:"excludes"`
	FileMode           string    `xml:"fileMode"`
	DirectoryMode      string    `xml:"directoryMode"`
	Directory          string    `xml:"directory"`
	LineEnding         string    `xml:"lineEnding"`
	Filtered           bool      `xml:"filtered"`
}

// FileItem is Sets whether to determine if the file is filtered.
type FileItem struct {
	Source          string `xml:"source"`
	OutputDirectory string `xml:"outputDirectory"`
	DestName        string `xml:"destName"`
	FileMode        string `xml:"fileMode"`
	LineEnding      string `xml:"lineEnding"`
	Filtered        bool   `xml:"filtered"`
}

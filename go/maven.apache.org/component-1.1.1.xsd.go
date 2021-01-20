// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Component is Describes the component layout and packaging.
type Component *Component

// FileSets ...
type FileSets struct {
	XMLName xml.Name   `xml:"fileSets"`
	FileSet []*FileSet `xml:"fileSet"`
}

// Files ...
type Files struct {
	XMLName xml.Name    `xml:"files"`
	File    []*FileItem `xml:"file"`
}

// DependencySets ...
type DependencySets struct {
	XMLName       xml.Name         `xml:"dependencySets"`
	DependencySet []*DependencySet `xml:"dependencySet"`
}

// Repositories ...
type Repositories struct {
	XMLName    xml.Name      `xml:"repositories"`
	Repository []*Repository `xml:"repository"`
}

// ContainerDescriptorHandlers ...
type ContainerDescriptorHandlers struct {
	XMLName                    xml.Name                            `xml:"containerDescriptorHandlers"`
	ContainerDescriptorHandler []*ContainerDescriptorHandlerConfig `xml:"containerDescriptorHandler"`
}

// Component is Describes the component layout and packaging.
type Component struct {
	FileSets                    *FileSets                    `xml:"fileSets"`
	Files                       *Files                       `xml:"files"`
	DependencySets              *DependencySets              `xml:"dependencySets"`
	Repositories                *Repositories                `xml:"repositories"`
	ContainerDescriptorHandlers *ContainerDescriptorHandlers `xml:"containerDescriptorHandlers"`
}

// Configuration ...
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ContainerDescriptorHandlerConfig is The handler's plexus role-hint, for lookup from the container.
type ContainerDescriptorHandlerConfig struct {
	HandlerName   string         `xml:"handlerName"`
	Configuration *Configuration `xml:"configuration"`
}

// GroupVersionAlignments ...
type GroupVersionAlignments struct {
	XMLName               xml.Name                 `xml:"groupVersionAlignments"`
	GroupVersionAlignment []*GroupVersionAlignment `xml:"groupVersionAlignment"`
}

// Includes ...
type Includes struct {
	XMLName xml.Name `xml:"includes"`
	Include []string `xml:"include"`
}

// Excludes ...
type Excludes struct {
	XMLName xml.Name `xml:"excludes"`
	Exclude []string `xml:"exclude"`
}

// Repository is If set to true, this property will trigger the creation of repository
//             metadata which will allow the repository to be used as a functional remote
//             repository.
type Repository struct {
	IncludeMetadata        bool                    `xml:"includeMetadata"`
	GroupVersionAlignments *GroupVersionAlignments `xml:"groupVersionAlignments"`
	Scope                  string                  `xml:"scope"`
	UseStrictFiltering     bool                    `xml:"useStrictFiltering"`
	UseDefaultExcludes     bool                    `xml:"useDefaultExcludes"`
	OutputDirectory        string                  `xml:"outputDirectory"`
	Includes               *Includes               `xml:"includes"`
	Excludes               *Excludes               `xml:"excludes"`
	FileMode               string                  `xml:"fileMode"`
	DirectoryMode          string                  `xml:"directoryMode"`
}

// GroupVersionAlignment is The version you want to align this group to.
type GroupVersionAlignment struct {
	Id       string    `xml:"id"`
	Version  string    `xml:"version"`
	Excludes *Excludes `xml:"excludes"`
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

// FileSet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type FileSet struct {
	Directory          string    `xml:"directory"`
	LineEnding         string    `xml:"lineEnding"`
	Filtered           bool      `xml:"filtered"`
	UseStrictFiltering bool      `xml:"useStrictFiltering"`
	UseDefaultExcludes bool      `xml:"useDefaultExcludes"`
	OutputDirectory    string    `xml:"outputDirectory"`
	Includes           *Includes `xml:"includes"`
	Excludes           *Excludes `xml:"excludes"`
	FileMode           string    `xml:"fileMode"`
	DirectoryMode      string    `xml:"directoryMode"`
}

// DependencySet is Sets the output directory relative to the root
//             of the root directory of the assembly. For example,
//             "log" will put the specified files in the log directory.
type DependencySet struct {
	OutputFileNameMapping     string         `xml:"outputFileNameMapping"`
	Unpack                    bool           `xml:"unpack"`
	UnpackOptions             *UnpackOptions `xml:"unpackOptions"`
	Scope                     string         `xml:"scope"`
	UseProjectArtifact        bool           `xml:"useProjectArtifact"`
	UseProjectAttachments     bool           `xml:"useProjectAttachments"`
	UseTransitiveDependencies bool           `xml:"useTransitiveDependencies"`
	UseTransitiveFiltering    bool           `xml:"useTransitiveFiltering"`
	UseStrictFiltering        bool           `xml:"useStrictFiltering"`
	UseDefaultExcludes        bool           `xml:"useDefaultExcludes"`
	OutputDirectory           string         `xml:"outputDirectory"`
	Includes                  *Includes      `xml:"includes"`
	Excludes                  *Excludes      `xml:"excludes"`
	FileMode                  string         `xml:"fileMode"`
	DirectoryMode             string         `xml:"directoryMode"`
}

// UnpackOptions is Specifies options for including/excluding/filtering items extracted from an archive.
type UnpackOptions struct {
	Includes *Includes `xml:"includes"`
	Excludes *Excludes `xml:"excludes"`
	Filtered bool      `xml:"filtered"`
}

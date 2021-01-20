// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Archetypedescriptor is 1.0.0+
type Archetypedescriptor *ArchetypeDescriptor

// RequiredProperties ...
type RequiredProperties struct {
	XMLName          xml.Name            `xml:"requiredProperties"`
	RequiredProperty []*RequiredProperty `xml:"requiredProperty"`
}

// FileSets ...
type FileSets struct {
	XMLName xml.Name   `xml:"fileSets"`
	FileSet []*FileSet `xml:"fileSet"`
}

// Modules ...
type Modules struct {
	XMLName xml.Name            `xml:"modules"`
	Module  []*ModuleDescriptor `xml:"module"`
}

// ArchetypeDescriptor is 1.0.0+
type ArchetypeDescriptor struct {
	NameAttr           string              `xml:"name,attr"`
	PartialAttr        bool                `xml:"partial,attr,omitempty"`
	RequiredProperties *RequiredProperties `xml:"requiredProperties"`
	FileSets           *FileSets           `xml:"fileSets"`
	Modules            *Modules            `xml:"modules"`
}

// RequiredProperty is A regular expression used to validate the property.
type RequiredProperty struct {
	KeyAttr         string `xml:"key,attr"`
	DefaultValue    string `xml:"defaultValue"`
	ValidationRegex string `xml:"validationRegex"`
}

// ModuleDescriptor is 1.0.0+
type ModuleDescriptor struct {
	IdAttr   string    `xml:"id,attr"`
	DirAttr  string    `xml:"dir,attr"`
	NameAttr string    `xml:"name,attr"`
	FileSets *FileSets `xml:"fileSets"`
	Modules  *Modules  `xml:"modules"`
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

// FileSet is The directory where the files will be searched for, which is also the directory where the
//            project's files will be generated.
type FileSet struct {
	FilteredAttr bool      `xml:"filtered,attr,omitempty"`
	PackagedAttr bool      `xml:"packaged,attr,omitempty"`
	EncodingAttr string    `xml:"encoding,attr,omitempty"`
	Directory    string    `xml:"directory"`
	Includes     *Includes `xml:"includes"`
	Excludes     *Excludes `xml:"excludes"`
}

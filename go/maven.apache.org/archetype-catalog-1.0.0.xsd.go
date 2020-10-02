// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Archetypecatalog ...
type Archetypecatalog *ArchetypeCatalog

// Archetypes ...
type Archetypes struct {
	XMLName   xml.Name     `xml:"archetypes"`
	Archetype []*Archetype `xml:"archetype"`
}

// ArchetypeCatalog ...
type ArchetypeCatalog struct {
	Archetypes *Archetypes `xml:"archetypes"`
}

// Archetype ...
type Archetype struct {
	GroupId     string `xml:"groupId"`
	ArtifactId  string `xml:"artifactId"`
	Version     string `xml:"version"`
	Repository  string `xml:"repository"`
	Description string `xml:"description"`
}

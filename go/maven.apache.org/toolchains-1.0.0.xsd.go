// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Toolchains ...
type Toolchains *PersistedToolchains

// PersistedToolchains ...
type PersistedToolchains struct {
	Toolchain []*ToolchainModel `xml:"toolchain"`
}

// Provides ...
type Provides struct {
	XMLName xml.Name `xml:"provides"`
}

// Configuration ...
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ToolchainModel ...
type ToolchainModel struct {
	Type          string         `xml:"type"`
	Provides      *Provides      `xml:"provides"`
	Configuration *Configuration `xml:"configuration"`
}

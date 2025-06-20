// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// ProfilesXml is Root element of the profiles.xml file.
type ProfilesXml *ProfilesRoot

// Profiles is Configuration of build profiles for adjusting the build
//             according to environmental parameters
type Profiles struct {
	XMLName xml.Name   `xml:"profiles"`
	Profile []*Profile `xml:"profile,omitempty"`
}

// ActiveProfiles is List of manually-activated build profiles, specified in the order in which
//             they should be applied.
type ActiveProfiles struct {
	XMLName       xml.Name `xml:"activeProfiles"`
	ActiveProfile []string `xml:"activeProfile,omitempty"`
}

// ProfilesRoot is Root element of the profiles.xml file.
type ProfilesRoot struct {
	Profiles       *Profiles       `xml:"profiles,omitempty"`
	ActiveProfiles *ActiveProfiles `xml:"activeProfiles,omitempty"`
}

// Properties is Extended configuration specific to this profile goes
//             here.
type Properties struct {
	XMLName xml.Name `xml:"properties"`
}

// Repositories is The lists of the remote repositories
type Repositories struct {
	XMLName    xml.Name      `xml:"repositories"`
	Repository []*Repository `xml:"repository,omitempty"`
}

// PluginRepositories is The lists of the remote repositories for discovering plugins
type PluginRepositories struct {
	XMLName          xml.Name      `xml:"pluginRepositories"`
	PluginRepository []*Repository `xml:"pluginRepository,omitempty"`
}

// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
type Profile struct {
	Id                 string              `xml:"id,omitempty"`
	Activation         *Activation         `xml:"activation,omitempty"`
	Properties         *Properties         `xml:"properties,omitempty"`
	Repositories       *Repositories       `xml:"repositories,omitempty"`
	PluginRepositories *PluginRepositories `xml:"pluginRepositories,omitempty"`
}

// Activation is Specifies that this profile will be activated based on existence of a file.
type Activation struct {
	ActiveByDefault bool                `xml:"activeByDefault,omitempty"`
	Jdk             string              `xml:"jdk,omitempty"`
	Os              *ActivationOS       `xml:"os,omitempty"`
	Property        *ActivationProperty `xml:"property,omitempty"`
	File            *ActivationFile     `xml:"file,omitempty"`
}

// ActivationOS is The version of the OS to be used to activate a profile
type ActivationOS struct {
	Name    string `xml:"name,omitempty"`
	Family  string `xml:"family,omitempty"`
	Arch    string `xml:"arch,omitempty"`
	Version string `xml:"version,omitempty"`
}

// ActivationProperty is The value of the property to be used to activate a profile
type ActivationProperty struct {
	Name  string `xml:"name,omitempty"`
	Value string `xml:"value,omitempty"`
}

// ActivationFile is The name of the file that should exist to activate a profile
type ActivationFile struct {
	Missing string `xml:"missing,omitempty"`
	Exists  string `xml:"exists,omitempty"`
}

// Repository is The type of layout this repository uses for locating and storing artifacts - can be "legacy" or
//             "default".
type Repository struct {
	Releases  *RepositoryPolicy `xml:"releases,omitempty"`
	Snapshots *RepositoryPolicy `xml:"snapshots,omitempty"`
	Id        string            `xml:"id,omitempty"`
	Name      string            `xml:"name,omitempty"`
	Url       string            `xml:"url,omitempty"`
	Layout    string            `xml:"layout,omitempty"`
}

// RepositoryPolicy is What to do when verification of an artifact checksum fails - warn, fail, etc. Valid values are
//             "fail" or "warn"
type RepositoryPolicy struct {
	Enabled        bool   `xml:"enabled,omitempty"`
	UpdatePolicy   string `xml:"updatePolicy,omitempty"`
	ChecksumPolicy string `xml:"checksumPolicy,omitempty"`
}

// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Settings is Root element of the user configuration file.
type Settings *Settings

// Proxies ...
type Proxies struct {
	XMLName xml.Name `xml:"proxies"`
	Proxy   []*Proxy `xml:"proxy"`
}

// Servers ...
type Servers struct {
	XMLName xml.Name  `xml:"servers"`
	Server  []*Server `xml:"server"`
}

// Mirrors ...
type Mirrors struct {
	XMLName xml.Name  `xml:"mirrors"`
	Mirror  []*Mirror `xml:"mirror"`
}

// Profiles ...
type Profiles struct {
	XMLName xml.Name   `xml:"profiles"`
	Profile []*Profile `xml:"profile"`
}

// ActiveProfiles ...
type ActiveProfiles struct {
	XMLName       xml.Name `xml:"activeProfiles"`
	ActiveProfile []string `xml:"activeProfile"`
}

// PluginGroups ...
type PluginGroups struct {
	XMLName     xml.Name `xml:"pluginGroups"`
	PluginGroup []string `xml:"pluginGroup"`
}

// Settings is Indicate whether maven should operate in offline mode full-time.
type Settings struct {
	LocalRepository   string          `xml:"localRepository"`
	InteractiveMode   bool            `xml:"interactiveMode"`
	UsePluginRegistry bool            `xml:"usePluginRegistry"`
	Offline           bool            `xml:"offline"`
	Proxies           *Proxies        `xml:"proxies"`
	Servers           *Servers        `xml:"servers"`
	Mirrors           *Mirrors        `xml:"mirrors"`
	Profiles          *Profiles       `xml:"profiles"`
	ActiveProfiles    *ActiveProfiles `xml:"activeProfiles"`
	PluginGroups      *PluginGroups   `xml:"pluginGroups"`
}

// Proxy is 1.0.0+
type Proxy struct {
	Active        bool   `xml:"active"`
	Protocol      string `xml:"protocol"`
	Username      string `xml:"username"`
	Password      string `xml:"password"`
	Port          int    `xml:"port"`
	Host          string `xml:"host"`
	NonProxyHosts string `xml:"nonProxyHosts"`
	Id            string `xml:"id"`
}

// Configuration ...
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// Server is The permissions for directories when they are created.
type Server struct {
	Username             string         `xml:"username"`
	Password             string         `xml:"password"`
	PrivateKey           string         `xml:"privateKey"`
	Passphrase           string         `xml:"passphrase"`
	FilePermissions      string         `xml:"filePermissions"`
	DirectoryPermissions string         `xml:"directoryPermissions"`
	Configuration        *Configuration `xml:"configuration"`
	Id                   string         `xml:"id"`
}

// Mirror is 1.0.0+
type Mirror struct {
	MirrorOf        string `xml:"mirrorOf"`
	Name            string `xml:"name"`
	Url             string `xml:"url"`
	Layout          string `xml:"layout"`
	MirrorOfLayouts string `xml:"mirrorOfLayouts"`
	Id              string `xml:"id"`
}

// Properties ...
type Properties struct {
	XMLName xml.Name `xml:"properties"`
}

// Repositories ...
type Repositories struct {
	XMLName    xml.Name      `xml:"repositories"`
	Repository []*Repository `xml:"repository"`
}

// PluginRepositories ...
type PluginRepositories struct {
	XMLName          xml.Name      `xml:"pluginRepositories"`
	PluginRepository []*Repository `xml:"pluginRepository"`
}

// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
type Profile struct {
	Activation         *Activation         `xml:"activation"`
	Properties         *Properties         `xml:"properties"`
	Repositories       *Repositories       `xml:"repositories"`
	PluginRepositories *PluginRepositories `xml:"pluginRepositories"`
	Id                 string              `xml:"id"`
}

// Repository is The type of layout this repository uses for locating and
//             storing artifacts - can be "legacy" or "default".
type Repository struct {
	Releases  *RepositoryPolicy `xml:"releases"`
	Snapshots *RepositoryPolicy `xml:"snapshots"`
	Id        string            `xml:"id"`
	Name      string            `xml:"name"`
	Url       string            `xml:"url"`
	Layout    string            `xml:"layout"`
}

// RepositoryPolicy is What to do when verification of an artifact checksum fails -
//             warn, fail, etc. Valid values are "fail" or "warn".
type RepositoryPolicy struct {
	Enabled        bool   `xml:"enabled"`
	UpdatePolicy   string `xml:"updatePolicy"`
	ChecksumPolicy string `xml:"checksumPolicy"`
}

// Activation is Specifies that this profile will be activated based on existence of a file.
type Activation struct {
	ActiveByDefault bool                `xml:"activeByDefault"`
	Jdk             string              `xml:"jdk"`
	Os              *ActivationOS       `xml:"os"`
	Property        *ActivationProperty `xml:"property"`
	File            *ActivationFile     `xml:"file"`
}

// ActivationOS is The version of the OS to be used to activate a profile.
type ActivationOS struct {
	Name    string `xml:"name"`
	Family  string `xml:"family"`
	Arch    string `xml:"arch"`
	Version string `xml:"version"`
}

// ActivationProperty is The value of the property to be used to activate a profile.
type ActivationProperty struct {
	Name  string `xml:"name"`
	Value string `xml:"value"`
}

// ActivationFile is The name of the file that should exist to activate a profile.
type ActivationFile struct {
	Missing string `xml:"missing"`
	Exists  string `xml:"exists"`
}

// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Project ...
type Project *Model

// MailingLists ...
type MailingLists struct {
	XMLName     xml.Name       `xml:"mailingLists"`
	MailingList []*MailingList `xml:"mailingList"`
}

// Developers ...
type Developers struct {
	XMLName   xml.Name     `xml:"developers"`
	Developer []*Developer `xml:"developer"`
}

// Contributors ...
type Contributors struct {
	XMLName     xml.Name       `xml:"contributors"`
	Contributor []*Contributor `xml:"contributor"`
}

// Licenses ...
type Licenses struct {
	XMLName xml.Name   `xml:"licenses"`
	License []*License `xml:"license"`
}

// Versions ...
type Versions struct {
	XMLName xml.Name   `xml:"versions"`
	Version []*Version `xml:"version"`
}

// Branches ...
type Branches struct {
	XMLName xml.Name  `xml:"branches"`
	Branch  []*Branch `xml:"branch"`
}

// PackageGroups ...
type PackageGroups struct {
	XMLName      xml.Name        `xml:"packageGroups"`
	PackageGroup []*PackageGroup `xml:"packageGroup"`
}

// Reports ...
type Reports struct {
	XMLName xml.Name `xml:"reports"`
	Report  []string `xml:"report"`
}

// Properties ...
type Properties struct {
	XMLName xml.Name `xml:"properties"`
}

// Dependencies ...
type Dependencies struct {
	XMLName    xml.Name      `xml:"dependencies"`
	Dependency []*Dependency `xml:"dependency"`
}

// Model ...
type Model struct {
	Extend                string         `xml:"extend"`
	PomVersion            string         `xml:"pomVersion"`
	Id                    string         `xml:"id"`
	GroupId               string         `xml:"groupId"`
	ArtifactId            string         `xml:"artifactId"`
	Name                  string         `xml:"name"`
	CurrentVersion        string         `xml:"currentVersion"`
	ShortDescription      string         `xml:"shortDescription"`
	Description           string         `xml:"description"`
	Url                   string         `xml:"url"`
	Logo                  string         `xml:"logo"`
	IssueTrackingUrl      string         `xml:"issueTrackingUrl"`
	InceptionYear         string         `xml:"inceptionYear"`
	GumpRepositoryId      string         `xml:"gumpRepositoryId"`
	SiteAddress           string         `xml:"siteAddress"`
	SiteDirectory         string         `xml:"siteDirectory"`
	DistributionSite      string         `xml:"distributionSite"`
	DistributionDirectory string         `xml:"distributionDirectory"`
	MailingLists          *MailingLists  `xml:"mailingLists"`
	Developers            *Developers    `xml:"developers"`
	Contributors          *Contributors  `xml:"contributors"`
	Licenses              *Licenses      `xml:"licenses"`
	Versions              *Versions      `xml:"versions"`
	Branches              *Branches      `xml:"branches"`
	PackageGroups         *PackageGroups `xml:"packageGroups"`
	Reports               *Reports       `xml:"reports"`
	Repository            *Repository    `xml:"repository"`
	Organization          *Organization  `xml:"organization"`
	Properties            *Properties    `xml:"properties"`
	Package               string         `xml:"package"`
	Build                 *Build         `xml:"build"`
	Dependencies          *Dependencies  `xml:"dependencies"`
}

// SourceModifications ...
type SourceModifications struct {
	XMLName            xml.Name              `xml:"sourceModifications"`
	SourceModification []*SourceModification `xml:"sourceModification"`
}

// Resources ...
type Resources struct {
	XMLName  xml.Name    `xml:"resources"`
	Resource []*Resource `xml:"resource"`
}

// Build ...
type Build struct {
	NagEmailAddress                    string               `xml:"nagEmailAddress"`
	SourceDirectory                    string               `xml:"sourceDirectory"`
	UnitTestSourceDirectory            string               `xml:"unitTestSourceDirectory"`
	AspectSourceDirectory              string               `xml:"aspectSourceDirectory"`
	IntegrationUnitTestSourceDirectory string               `xml:"integrationUnitTestSourceDirectory"`
	SourceModifications                *SourceModifications `xml:"sourceModifications"`
	UnitTest                           *UnitTest            `xml:"unitTest"`
	DefaultGoal                        string               `xml:"defaultGoal"`
	Resources                          *Resources           `xml:"resources"`
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

// UnitTest ...
type UnitTest struct {
	Resources *Resources `xml:"resources"`
	Includes  *Includes  `xml:"includes"`
	Excludes  *Excludes  `xml:"excludes"`
}

// Resource ...
type Resource struct {
	TargetPath string    `xml:"targetPath"`
	Filtering  bool      `xml:"filtering"`
	Directory  string    `xml:"directory"`
	Includes   *Includes `xml:"includes"`
	Excludes   *Excludes `xml:"excludes"`
}

// SourceModification ...
type SourceModification struct {
	ClassName string    `xml:"className"`
	Property  string    `xml:"property"`
	Directory string    `xml:"directory"`
	Includes  *Includes `xml:"includes"`
	Excludes  *Excludes `xml:"excludes"`
}

// Organization ...
type Organization struct {
	Name string `xml:"name"`
	Url  string `xml:"url"`
	Logo string `xml:"logo"`
}

// Roles ...
type Roles struct {
	XMLName xml.Name `xml:"roles"`
	Role    []string `xml:"role"`
}

// Developer ...
type Developer struct {
	Id              string      `xml:"id"`
	Name            string      `xml:"name"`
	Email           string      `xml:"email"`
	Url             string      `xml:"url"`
	Organization    string      `xml:"organization"`
	OrganizationUrl string      `xml:"organizationUrl"`
	Roles           *Roles      `xml:"roles"`
	Timezone        string      `xml:"timezone"`
	Properties      *Properties `xml:"properties"`
}

// Dependency ...
type Dependency struct {
	Id         string      `xml:"id"`
	GroupId    string      `xml:"groupId"`
	ArtifactId string      `xml:"artifactId"`
	Version    string      `xml:"version"`
	Url        string      `xml:"url"`
	Jar        string      `xml:"jar"`
	Type       string      `xml:"type"`
	Properties *Properties `xml:"properties"`
}

// Repository ...
type Repository struct {
	Connection          string `xml:"connection"`
	DeveloperConnection string `xml:"developerConnection"`
	Url                 string `xml:"url"`
}

// PackageGroup ...
type PackageGroup struct {
	Title    string `xml:"title"`
	Packages string `xml:"packages"`
}

// Version ...
type Version struct {
	Name string `xml:"name"`
	Tag  string `xml:"tag"`
	Id   string `xml:"id"`
}

// License ...
type License struct {
	Name         string `xml:"name"`
	Url          string `xml:"url"`
	Distribution string `xml:"distribution"`
	Comments     string `xml:"comments"`
}

// Contributor ...
type Contributor struct {
	Name            string      `xml:"name"`
	Email           string      `xml:"email"`
	Url             string      `xml:"url"`
	Organization    string      `xml:"organization"`
	OrganizationUrl string      `xml:"organizationUrl"`
	Roles           *Roles      `xml:"roles"`
	Timezone        string      `xml:"timezone"`
	Properties      *Properties `xml:"properties"`
}

// Branch ...
type Branch struct {
	Tag string `xml:"tag"`
}

// OtherArchives ...
type OtherArchives struct {
	XMLName      xml.Name `xml:"otherArchives"`
	OtherArchive []string `xml:"otherArchive"`
}

// MailingList ...
type MailingList struct {
	Name          string         `xml:"name"`
	Subscribe     string         `xml:"subscribe"`
	Unsubscribe   string         `xml:"unsubscribe"`
	Post          string         `xml:"post"`
	Archive       string         `xml:"archive"`
	OtherArchives *OtherArchives `xml:"otherArchives"`
}
// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// STSourceType ...
type STSourceType string

// CTNameListType ...
type CTNameListType struct {
	XMLName xml.Name        `xml:"CT_NameListType"`
	Person  []*CTPersonType `xml:"Person"`
}

// CTPersonType ...
type CTPersonType struct {
	XMLName xml.Name `xml:"CT_PersonType"`
	Last    []string `xml:"Last"`
	First   []string `xml:"First"`
	Middle  []string `xml:"Middle"`
}

// CTNameType ...
type CTNameType struct {
	XMLName  xml.Name        `xml:"CT_NameType"`
	NameList *CTNameListType `xml:"NameList"`
}

// CTNameOrCorporateType ...
type CTNameOrCorporateType struct {
	XMLName   xml.Name        `xml:"CT_NameOrCorporateType"`
	NameList  *CTNameListType `xml:"NameList"`
	Corporate string          `xml:"Corporate"`
}

// CTAuthorType ...
type CTAuthorType struct {
	XMLName      xml.Name                 `xml:"CT_AuthorType"`
	Artist       []*CTNameType            `xml:"Artist"`
	Author       []*CTNameOrCorporateType `xml:"Author"`
	BookAuthor   []*CTNameType            `xml:"BookAuthor"`
	Compiler     []*CTNameType            `xml:"Compiler"`
	Composer     []*CTNameType            `xml:"Composer"`
	Conductor    []*CTNameType            `xml:"Conductor"`
	Counsel      []*CTNameType            `xml:"Counsel"`
	Director     []*CTNameType            `xml:"Director"`
	Editor       []*CTNameType            `xml:"Editor"`
	Interviewee  []*CTNameType            `xml:"Interviewee"`
	Interviewer  []*CTNameType            `xml:"Interviewer"`
	Inventor     []*CTNameType            `xml:"Inventor"`
	Performer    []*CTNameOrCorporateType `xml:"Performer"`
	ProducerName []*CTNameType            `xml:"ProducerName"`
	Translator   []*CTNameType            `xml:"Translator"`
	Writer       []*CTNameType            `xml:"Writer"`
}

// CTSourceType ...
type CTSourceType struct {
	XMLName               xml.Name        `xml:"CT_SourceType"`
	AbbreviatedCaseNumber []string        `xml:"AbbreviatedCaseNumber"`
	AlbumTitle            []string        `xml:"AlbumTitle"`
	Author                []*CTAuthorType `xml:"Author"`
	BookTitle             []string        `xml:"BookTitle"`
	Broadcaster           []string        `xml:"Broadcaster"`
	BroadcastTitle        []string        `xml:"BroadcastTitle"`
	CaseNumber            []string        `xml:"CaseNumber"`
	ChapterNumber         []string        `xml:"ChapterNumber"`
	City                  []string        `xml:"City"`
	Comments              []string        `xml:"Comments"`
	ConferenceName        []string        `xml:"ConferenceName"`
	CountryRegion         []string        `xml:"CountryRegion"`
	Court                 []string        `xml:"Court"`
	Day                   []string        `xml:"Day"`
	DayAccessed           []string        `xml:"DayAccessed"`
	Department            []string        `xml:"Department"`
	Distributor           []string        `xml:"Distributor"`
	Edition               []string        `xml:"Edition"`
	Guid                  []string        `xml:"Guid"`
	Institution           []string        `xml:"Institution"`
	InternetSiteTitle     []string        `xml:"InternetSiteTitle"`
	Issue                 []string        `xml:"Issue"`
	JournalName           []string        `xml:"JournalName"`
	LCID                  []string        `xml:"LCID"`
	Medium                []string        `xml:"Medium"`
	Month                 []string        `xml:"Month"`
	MonthAccessed         []string        `xml:"MonthAccessed"`
	NumberVolumes         []string        `xml:"NumberVolumes"`
	Pages                 []string        `xml:"Pages"`
	PatentNumber          []string        `xml:"PatentNumber"`
	PeriodicalTitle       []string        `xml:"PeriodicalTitle"`
	ProductionCompany     []string        `xml:"ProductionCompany"`
	PublicationTitle      []string        `xml:"PublicationTitle"`
	Publisher             []string        `xml:"Publisher"`
	RecordingNumber       []string        `xml:"RecordingNumber"`
	RefOrder              []string        `xml:"RefOrder"`
	Reporter              []string        `xml:"Reporter"`
	SourceType            []string        `xml:"SourceType"`
	ShortTitle            []string        `xml:"ShortTitle"`
	StandardNumber        []string        `xml:"StandardNumber"`
	StateProvince         []string        `xml:"StateProvince"`
	Station               []string        `xml:"Station"`
	Tag                   []string        `xml:"Tag"`
	Theater               []string        `xml:"Theater"`
	ThesisType            []string        `xml:"ThesisType"`
	Title                 []string        `xml:"Title"`
	Type                  []string        `xml:"Type"`
	URL                   []string        `xml:"URL"`
	Version               []string        `xml:"Version"`
	Volume                []string        `xml:"Volume"`
	Year                  []string        `xml:"Year"`
	YearAccessed          []string        `xml:"YearAccessed"`
}

// Sources ...
type Sources *CTSources

// CTSources ...
type CTSources struct {
	XMLName           xml.Name        `xml:"CT_Sources"`
	SelectedStyleAttr string          `xml:"SelectedStyle,attr,omitempty"`
	StyleNameAttr     string          `xml:"StyleName,attr,omitempty"`
	URIAttr           string          `xml:"URI,attr,omitempty"`
	Source            []*CTSourceType `xml:"Source"`
}

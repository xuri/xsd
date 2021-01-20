// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
	"time"
)

// Document is Describes the overall document model.
type Document *DocumentModel

// DocumentModel is The meta data to construct a cover page for the document.
type DocumentModel struct {
	OutputNameAttr string         `xml:"outputName,attr,omitempty"`
	Meta           *DocumentMeta  `xml:"meta"`
	Toc            *DocumentTOC   `xml:"toc"`
	Cover          *DocumentCover `xml:"cover"`
}

// DocumentTOC is TOC item.
type DocumentTOC struct {
	NameAttr  string             `xml:"name,attr,omitempty"`
	DepthAttr int                `xml:"depth,attr,omitempty"`
	Item      []*DocumentTOCItem `xml:"item"`
}

// DocumentTOCItem is A table of content item containing sub-items.
type DocumentTOCItem struct {
	NameAttr     string             `xml:"name,attr,omitempty"`
	RefAttr      string             `xml:"ref,attr,omitempty"`
	CollapseAttr bool               `xml:"collapse,attr,omitempty"`
	Item         []*DocumentTOCItem `xml:"item"`
}

// DocumentCover is The location of an image file that represents the company logo.
type DocumentCover struct {
	CoverTitle    string            `xml:"coverTitle"`
	CoverSubTitle string            `xml:"coverSubTitle"`
	CoverVersion  string            `xml:"coverVersion"`
	CoverType     string            `xml:"coverType"`
	CoverDate     time.Time         `xml:"coverDate"`
	Author        []*DocumentAuthor `xml:"author"`
	ProjectName   string            `xml:"projectName"`
	ProjectLogo   string            `xml:"projectLogo"`
	CompanyName   string            `xml:"companyName"`
	CompanyLogo   string            `xml:"companyLogo"`
}

// DocumentAuthor is The state or province of the address of the author, if applicable.
type DocumentAuthor struct {
	FirstName   string `xml:"firstName"`
	LastName    string `xml:"lastName"`
	Initials    string `xml:"initials"`
	Title       string `xml:"title"`
	Position    string `xml:"position"`
	Email       string `xml:"email"`
	PhoneNumber string `xml:"phoneNumber"`
	FaxNumber   string `xml:"faxNumber"`
	CompanyName string `xml:"companyName"`
	Street      string `xml:"street"`
	City        string `xml:"city"`
	PostalCode  string `xml:"postalCode"`
	Country     string `xml:"country"`
	State       string `xml:"state"`
}

// Authors ...
type Authors struct {
	XMLName xml.Name          `xml:"authors"`
	Author  []*DocumentAuthor `xml:"author"`
}

// KeyWords ...
type KeyWords struct {
	XMLName xml.Name `xml:"keyWords"`
	KeyWord []string `xml:"keyWord"`
}

// DocumentMeta is A shortcut for the unique author of the document, usually as a String of "firstName lastName". For
//             more authors, you could use the <authors/> tag.
type DocumentMeta struct {
	Title              string                      `xml:"title"`
	Author             string                      `xml:"author"`
	Authors            *Authors                    `xml:"authors"`
	Subject            string                      `xml:"subject"`
	Keywords           string                      `xml:"keywords"`
	KeyWords           *KeyWords                   `xml:"keyWords"`
	PageSize           string                      `xml:"pageSize"`
	Generator          string                      `xml:"generator"`
	Description        string                      `xml:"description"`
	InitialCreator     string                      `xml:"initialCreator"`
	Creator            string                      `xml:"creator"`
	PrintedBy          string                      `xml:"printedBy"`
	CreationDate       time.Time                   `xml:"creationDate"`
	Date               time.Time                   `xml:"date"`
	PrintDate          time.Time                   `xml:"printDate"`
	Template           *DocumentTemplate           `xml:"template"`
	HyperlinkBehaviour *DocumentHyperlinkBehaviour `xml:"hyperlinkBehaviour"`
	Language           string                      `xml:"language"`
	EditingCycles      int64                       `xml:"editingCycles"`
	EditingDuration    int64                       `xml:"editingDuration"`
	DocumentStatistic  *DocumentStatistic          `xml:"documentStatistic"`
	Confidential       bool                        `xml:"confidential"`
	Draft              bool                        `xml:"draft"`
}

// DocumentTemplate is A template that was used to create the document.
type DocumentTemplate struct {
	HrefAttr  string    `xml:"href,attr,omitempty"`
	TitleAttr string    `xml:"title,attr,omitempty"`
	DateAttr  time.Time `xml:"date,attr,omitempty"`
}

// DocumentStatistic is Statistical attributes of the document.
type DocumentStatistic struct {
	PageCountAttr                   int64 `xml:"pageCount,attr,omitempty"`
	TableCountAttr                  int64 `xml:"tableCount,attr,omitempty"`
	DrawCountAttr                   int64 `xml:"drawCount,attr,omitempty"`
	ImageCountAttr                  int64 `xml:"imageCount,attr,omitempty"`
	ObjectCountAttr                 int64 `xml:"objectCount,attr,omitempty"`
	OleObjectCountAttr              int64 `xml:"oleObjectCount,attr,omitempty"`
	ParagraphCountAttr              int64 `xml:"paragraphCount,attr,omitempty"`
	WordCountAttr                   int64 `xml:"wordCount,attr,omitempty"`
	CharacterCountAttr              int64 `xml:"characterCount,attr,omitempty"`
	RowCountAttr                    int64 `xml:"rowCount,attr,omitempty"`
	FrameCountAttr                  int64 `xml:"frameCount,attr,omitempty"`
	SentenceCountAttr               int64 `xml:"sentenceCount,attr,omitempty"`
	SyllableCountAttr               int64 `xml:"syllableCount,attr,omitempty"`
	NonWhitespaceCharacterCountAttr int64 `xml:"nonWhitespaceCharacterCount,attr,omitempty"`
}

// DocumentHyperlinkBehaviour is Specifies the default behavior for hyperlinks in the document.
type DocumentHyperlinkBehaviour struct {
	TargetFrameAttr string `xml:"targetFrame,attr,omitempty"`
}

// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Project is The <code>&lt;project&gt;</code> element is the root of the site decoration descriptor.
type Project *DecorationModel

// PoweredBy ...
type PoweredBy struct {
	XMLName xml.Name `xml:"poweredBy"`
	Logo    []*Logo  `xml:"logo"`
}

// Custom ...
type Custom struct {
	XMLName xml.Name `xml:"custom"`
}

// DecorationModel is Modify the version published display properties.
type DecorationModel struct {
	NameAttr                 string       `xml:"name,attr,omitempty"`
	CombineSelfAttr          string       `xml:"combine.self,attr,omitempty"`
	BannerLeft               *Banner      `xml:"bannerLeft"`
	BannerRight              *Banner      `xml:"bannerRight"`
	GoogleAdSenseClient      string       `xml:"googleAdSenseClient"`
	GoogleAdSenseSlot        string       `xml:"googleAdSenseSlot"`
	GoogleAnalyticsAccountId string       `xml:"googleAnalyticsAccountId"`
	PublishDate              *PublishDate `xml:"publishDate"`
	Version                  *Version     `xml:"version"`
	PoweredBy                *PoweredBy   `xml:"poweredBy"`
	Skin                     *Skin        `xml:"skin"`
	Body                     *Body        `xml:"body"`
	Custom                   *Custom      `xml:"custom"`
}

// Version is Modify display properties for version published.
type Version struct {
	PositionAttr string `xml:"position,attr,omitempty"`
}

// Banner is The title for the banner image.
type Banner struct {
	Name   string `xml:"name"`
	Src    string `xml:"src"`
	Alt    string `xml:"alt"`
	Href   string `xml:"href"`
	Border string `xml:"border"`
	Width  string `xml:"width"`
	Height string `xml:"height"`
	Title  string `xml:"title"`
}

// Head ...
type Head struct {
	XMLName xml.Name `xml:"head"`
}

// Links ...
type Links struct {
	XMLName xml.Name    `xml:"links"`
	Item    []*LinkItem `xml:"item"`
}

// Breadcrumbs ...
type Breadcrumbs struct {
	XMLName xml.Name    `xml:"breadcrumbs"`
	Item    []*LinkItem `xml:"item"`
}

// Footer ...
type Footer struct {
	XMLName xml.Name `xml:"footer"`
}

// Body is The main content decoration.
type Body struct {
	Head        *Head        `xml:"head"`
	Links       *Links       `xml:"links"`
	Breadcrumbs *Breadcrumbs `xml:"breadcrumbs"`
	Menu        []*Menu      `xml:"menu"`
	Footer      *Footer      `xml:"footer"`
}

// LinkItem is A link in the navigation.
type LinkItem struct {
	NameAttr     string `xml:"name,attr,omitempty"`
	HrefAttr     string `xml:"href,attr,omitempty"`
	ImgAttr      string `xml:"img,attr,omitempty"`
	PositionAttr string `xml:"position,attr,omitempty"`
	AltAttr      string `xml:"alt,attr,omitempty"`
	BorderAttr   string `xml:"border,attr,omitempty"`
	WidthAttr    string `xml:"width,attr,omitempty"`
	HeightAttr   string `xml:"height,attr,omitempty"`
	TargetAttr   string `xml:"target,attr,omitempty"`
	TitleAttr    string `xml:"title,attr,omitempty"`
}

// Menu is A list of menu item.
type Menu struct {
	NameAttr         string      `xml:"name,attr,omitempty"`
	InheritAttr      string      `xml:"inherit,attr,omitempty"`
	InheritAsRefAttr bool        `xml:"inheritAsRef,attr,omitempty"`
	RefAttr          string      `xml:"ref,attr,omitempty"`
	ImgAttr          string      `xml:"img,attr,omitempty"`
	AltAttr          string      `xml:"alt,attr,omitempty"`
	PositionAttr     string      `xml:"position,attr,omitempty"`
	BorderAttr       string      `xml:"border,attr,omitempty"`
	WidthAttr        string      `xml:"width,attr,omitempty"`
	HeightAttr       string      `xml:"height,attr,omitempty"`
	TitleAttr        string      `xml:"title,attr,omitempty"`
	Item             []*MenuItem `xml:"item"`
}

// MenuItem is A list of menu item.
type MenuItem struct {
	CollapseAttr bool        `xml:"collapse,attr,omitempty"`
	RefAttr      string      `xml:"ref,attr,omitempty"`
	NameAttr     string      `xml:"name,attr,omitempty"`
	HrefAttr     string      `xml:"href,attr,omitempty"`
	ImgAttr      string      `xml:"img,attr,omitempty"`
	PositionAttr string      `xml:"position,attr,omitempty"`
	AltAttr      string      `xml:"alt,attr,omitempty"`
	BorderAttr   string      `xml:"border,attr,omitempty"`
	WidthAttr    string      `xml:"width,attr,omitempty"`
	HeightAttr   string      `xml:"height,attr,omitempty"`
	TargetAttr   string      `xml:"target,attr,omitempty"`
	TitleAttr    string      `xml:"title,attr,omitempty"`
	Description  string      `xml:"description"`
	Item         []*MenuItem `xml:"item"`
}

// Skin is The skin version.
type Skin struct {
	GroupId    string `xml:"groupId"`
	ArtifactId string `xml:"artifactId"`
	Version    string `xml:"version"`
}

// Logo is Power by logo on the navigation.
type Logo struct {
	NameAttr     string `xml:"name,attr,omitempty"`
	HrefAttr     string `xml:"href,attr,omitempty"`
	ImgAttr      string `xml:"img,attr,omitempty"`
	PositionAttr string `xml:"position,attr,omitempty"`
	AltAttr      string `xml:"alt,attr,omitempty"`
	BorderAttr   string `xml:"border,attr,omitempty"`
	WidthAttr    string `xml:"width,attr,omitempty"`
	HeightAttr   string `xml:"height,attr,omitempty"`
	TargetAttr   string `xml:"target,attr,omitempty"`
	TitleAttr    string `xml:"title,attr,omitempty"`
}

// PublishDate is Modify display properties for date published.
type PublishDate struct {
	PositionAttr string `xml:"position,attr,omitempty"`
	FormatAttr   string `xml:"format,attr,omitempty"`
}

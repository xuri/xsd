// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
	"time"
)

// ContentType ...
type ContentType string

// ContentTypes ...
type ContentTypes string

// Charset ...
type Charset string

// Charsets ...
type Charsets string

// LanguageCode ...
type LanguageCode string

// Character ...
type Character string

// Number ...
type Number int

// TabindexNumber ...
type TabindexNumber int

// LinkTypes ...
type LinkTypes []string

// MediaDesc ...
type MediaDesc string

// URI ...
type URI string

// UriList ...
type UriList string

// Datetime ...
type Datetime time.Time

// Script ...
type Script string

// StyleSheet ...
type StyleSheet string

// Text ...
type Text string

// FrameTarget ...
type FrameTarget string

// Length ...
type Length string

// MultiLength ...
type MultiLength string

// Pixels ...
type Pixels int

// Shape ...
type Shape string

// Coords ...
type Coords string

// ImgAlign ...
type ImgAlign string

// Color ...
type Color string

// Coreattrs ...
type Coreattrs struct {
	XMLName   xml.Name `xml:"coreattrs"`
	IdAttr    string   `xml:"id,attr,omitempty"`
	ClassAttr []string `xml:"class,attr,omitempty"`
	StyleAttr string   `xml:"style,attr,omitempty"`
	TitleAttr string   `xml:"title,attr,omitempty"`
}

// I18n ...
type I18n struct {
	XMLName     xml.Name `xml:"i18n"`
	LangAttr    string   `xml:"lang,attr,omitempty"`
	XmlLangAttr *Lang    `xml:"xml:lang,attr,omitempty"`
	DirAttr     string   `xml:"dir,attr,omitempty"`
}

// Events ...
type Events struct {
	XMLName         xml.Name `xml:"events"`
	OnclickAttr     string   `xml:"onclick,attr,omitempty"`
	OndblclickAttr  string   `xml:"ondblclick,attr,omitempty"`
	OnmousedownAttr string   `xml:"onmousedown,attr,omitempty"`
	OnmouseupAttr   string   `xml:"onmouseup,attr,omitempty"`
	OnmouseoverAttr string   `xml:"onmouseover,attr,omitempty"`
	OnmousemoveAttr string   `xml:"onmousemove,attr,omitempty"`
	OnmouseoutAttr  string   `xml:"onmouseout,attr,omitempty"`
	OnkeypressAttr  string   `xml:"onkeypress,attr,omitempty"`
	OnkeydownAttr   string   `xml:"onkeydown,attr,omitempty"`
	OnkeyupAttr     string   `xml:"onkeyup,attr,omitempty"`
}

// Focus ...
type Focus struct {
	XMLName       xml.Name `xml:"focus"`
	AccesskeyAttr string   `xml:"accesskey,attr,omitempty"`
	TabindexAttr  int      `xml:"tabindex,attr,omitempty"`
	OnfocusAttr   string   `xml:"onfocus,attr,omitempty"`
	OnblurAttr    string   `xml:"onblur,attr,omitempty"`
}

// Attrs ...
type Attrs struct {
	XMLName xml.Name `xml:"attrs"`
}

// TextAlign ...
type TextAlign struct {
	AlignAttr string `xml:"align,attr,omitempty"`
}

// SpecialExtra ...
type SpecialExtra struct {
	XMLName xml.Name `xml:"special.extra"`
	Object  string
	Applet  *Applet
	Img     string
	Map     *Map
	Iframe  string
	Source  *Source
	Macro   *Macro
}

// SpecialBasic ...
type SpecialBasic struct {
	XMLName xml.Name `xml:"special.basic"`
	Br      string
	Span    *Span
	Bdo     string
}

// Special ...
type Special struct {
	XMLName      xml.Name `xml:"special"`
	SpecialBasic *SpecialBasic
	SpecialExtra *SpecialExtra
}

// FontstyleExtra ...
type FontstyleExtra struct {
	XMLName  xml.Name `xml:"fontstyle.extra"`
	Big      *Big
	Small    *Small
	Font     *Font
	Basefont *Basefont
}

// FontstyleBasic ...
type FontstyleBasic struct {
	XMLName xml.Name `xml:"fontstyle.basic"`
	Tt      *Tt
	I       *I
	B       *B
	U       *U
	S       *S
	Strike  *Strike
}

// Fontstyle ...
type Fontstyle struct {
	XMLName        xml.Name `xml:"fontstyle"`
	FontstyleBasic *FontstyleBasic
	FontstyleExtra *FontstyleExtra
}

// PhraseExtra ...
type PhraseExtra struct {
	XMLName xml.Name `xml:"phrase.extra"`
	Sub     *Sub
	Sup     *Sup
}

// PhraseBasic ...
type PhraseBasic struct {
	XMLName xml.Name `xml:"phrase.basic"`
	Em      *Em
	Strong  *Strong
	Dfn     *Dfn
	Code    *Code
	Q       *Q
	Samp    *Samp
	Kbd     *Kbd
	Var     *Var
	Cite    *Cite
	Abbr    *Abbr
	Acronym *Acronym
}

// Phrase ...
type Phrase struct {
	XMLName     xml.Name `xml:"phrase"`
	PhraseBasic *PhraseBasic
	PhraseExtra *PhraseExtra
}

// InlineForms ...
type InlineForms struct {
	XMLName  xml.Name `xml:"inline.forms"`
	Input    string
	Select   string
	Textarea string
	Label    *Label
	Button   string
}

// MiscInline ...
type MiscInline struct {
	XMLName xml.Name `xml:"misc.inline"`
	Ins     *Ins
	Del     *Del
	Script  string
}

// Misc ...
type Misc struct {
	XMLName    xml.Name `xml:"misc"`
	Noscript   *Noscript
	MiscInline *MiscInline
}

// Inline ...
type Inline struct {
	XMLName     xml.Name `xml:"inline"`
	A           *A
	Special     *Special
	Fontstyle   *Fontstyle
	Phrase      *Phrase
	InlineForms *InlineForms
}

// Inline ...
type Inline struct {
	Inline     *Inline
	MiscInline *MiscInline
}

// Heading ...
type Heading struct {
	XMLName xml.Name `xml:"heading"`
	H1      *H1
	H2      *H2
	H3      *H3
	H4      *H4
	H5      *H5
	H6      *H6
}

// Lists ...
type Lists struct {
	XMLName xml.Name `xml:"lists"`
	Ul      string
	Ol      string
	Dl      string
	Menu    string
	Dir     string
}

// Blocktext ...
type Blocktext struct {
	XMLName    xml.Name `xml:"blocktext"`
	Pre        *Pre
	Hr         string
	Blockquote *Blockquote
	Address    *Address
	Center     *Center
	Noframes   *Noframes
}

// Block ...
type Block struct {
	XMLName   xml.Name `xml:"block"`
	P         *P
	Div       *Div
	Isindex   *Isindex
	Fieldset  *Fieldset
	Table     *Table
	Heading   *Heading
	Lists     *Lists
	Blocktext *Blocktext
}

// Flow ...
type Flow struct {
	Block  *Block
	Inline *Inline
	Misc   *Misc
	Form   string `xml:"form"`
}

// AContent ...
type AContent struct {
	XMLName     xml.Name `xml:"a.content"`
	Special     *Special
	Fontstyle   *Fontstyle
	Phrase      *Phrase
	InlineForms *InlineForms
	MiscInline  *MiscInline
}

// PreContent ...
type PreContent struct {
	XMLName        xml.Name `xml:"pre.content"`
	SpecialBasic   *SpecialBasic
	FontstyleBasic *FontstyleBasic
	PhraseBasic    *PhraseBasic
	InlineForms    *InlineForms
	MiscInline     *MiscInline
	A              *A `xml:"a"`
}

// FormContent ...
type FormContent struct {
	XMLName xml.Name `xml:"form.content"`
	Block   *Block
	Inline  *Inline
	Misc    *Misc
}

// ButtonContent ...
type ButtonContent struct {
	XMLName   xml.Name `xml:"button.content"`
	Heading   *Heading
	Lists     *Lists
	Blocktext *Blocktext
	Fontstyle *Fontstyle
	Phrase    *Phrase
	Misc      *Misc
	P         *P      `xml:"p"`
	Div       *Div    `xml:"div"`
	Table     *Table  `xml:"table"`
	Br        string  `xml:"br"`
	Span      *Span   `xml:"span"`
	Bdo       string  `xml:"bdo"`
	Object    string  `xml:"object"`
	Applet    *Applet `xml:"applet"`
	Img       string  `xml:"img"`
	Map       *Map    `xml:"map"`
}

// HeadMisc ...
type HeadMisc struct {
	XMLName xml.Name `xml:"head.misc"`
	Script  string
	Style   *Style
	Meta    *Meta
	Link    *Link
	Object  string
	Isindex *Isindex
}

// Head ...
type Head struct {
	XMLName     xml.Name `xml:"head"`
	I18n        *I18n
	IdAttr      string `xml:"id,attr,omitempty"`
	ProfileAttr string `xml:"profile,attr,omitempty"`
	HeadMisc    *HeadMisc
	Title       *Title `xml:"title"`
	Base        *Base  `xml:"base"`
}

// Title ...
type Title struct {
	XMLName xml.Name `xml:"title"`
	I18n    *I18n
	IdAttr  string `xml:"id,attr,omitempty"`
}

// Base ...
type Base struct {
	XMLName    xml.Name `xml:"base"`
	IdAttr     string   `xml:"id,attr,omitempty"`
	HrefAttr   string   `xml:"href,attr,omitempty"`
	TargetAttr string   `xml:"target,attr,omitempty"`
}

// Meta ...
type Meta struct {
	XMLName       xml.Name `xml:"meta"`
	I18n          *I18n
	IdAttr        string      `xml:"id,attr,omitempty"`
	HttpequivAttr interface{} `xml:"http-equiv,attr,omitempty"`
	NameAttr      interface{} `xml:"name,attr,omitempty"`
	ContentAttr   interface{} `xml:"content,attr"`
	SchemeAttr    interface{} `xml:"scheme,attr,omitempty"`
}

// Link ...
type Link struct {
	XMLName      xml.Name `xml:"link"`
	Attrs        *Attrs
	CharsetAttr  string   `xml:"charset,attr,omitempty"`
	HrefAttr     string   `xml:"href,attr,omitempty"`
	HreflangAttr string   `xml:"hreflang,attr,omitempty"`
	TypeAttr     string   `xml:"type,attr,omitempty"`
	RelAttr      []string `xml:"rel,attr,omitempty"`
	RevAttr      []string `xml:"rev,attr,omitempty"`
	MediaAttr    string   `xml:"media,attr,omitempty"`
	TargetAttr   string   `xml:"target,attr,omitempty"`
}

// Style ...
type Style struct {
	XMLName      xml.Name `xml:"style"`
	I18n         *I18n
	IdAttr       string `xml:"id,attr,omitempty"`
	TypeAttr     string `xml:"type,attr"`
	MediaAttr    string `xml:"media,attr,omitempty"`
	TitleAttr    string `xml:"title,attr,omitempty"`
	XmlSpaceAttr *Space `xml:"xml:space,attr,omitempty"`
}

// Script ...
type Script struct {
	XMLName      xml.Name    `xml:"script"`
	IdAttr       string      `xml:"id,attr,omitempty"`
	CharsetAttr  string      `xml:"charset,attr,omitempty"`
	TypeAttr     string      `xml:"type,attr"`
	LanguageAttr interface{} `xml:"language,attr,omitempty"`
	SrcAttr      string      `xml:"src,attr,omitempty"`
	DeferAttr    interface{} `xml:"defer,attr,omitempty"`
	XmlSpaceAttr *Space      `xml:"xml:space,attr,omitempty"`
}

// Noscript ...
type Noscript struct {
	XMLName xml.Name `xml:"noscript"`
	Attrs   *Attrs
}

// Iframe ...
type Iframe struct {
	XMLName          xml.Name `xml:"iframe"`
	Coreattrs        *Coreattrs
	LongdescAttr     string      `xml:"longdesc,attr,omitempty"`
	NameAttr         string      `xml:"name,attr,omitempty"`
	SrcAttr          string      `xml:"src,attr,omitempty"`
	FrameborderAttr  interface{} `xml:"frameborder,attr,omitempty"`
	MarginwidthAttr  int         `xml:"marginwidth,attr,omitempty"`
	MarginheightAttr int         `xml:"marginheight,attr,omitempty"`
	ScrollingAttr    interface{} `xml:"scrolling,attr,omitempty"`
	AlignAttr        string      `xml:"align,attr,omitempty"`
	HeightAttr       string      `xml:"height,attr,omitempty"`
	WidthAttr        string      `xml:"width,attr,omitempty"`
}

// Noframes ...
type Noframes struct {
	XMLName xml.Name `xml:"noframes"`
	Attrs   *Attrs
}

// Div ...
type Div struct {
	XMLName   xml.Name `xml:"div"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// P ...
type P struct {
	XMLName   xml.Name `xml:"p"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H1 ...
type H1 struct {
	XMLName   xml.Name `xml:"h1"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H2 ...
type H2 struct {
	XMLName   xml.Name `xml:"h2"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H3 ...
type H3 struct {
	XMLName   xml.Name `xml:"h3"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H4 ...
type H4 struct {
	XMLName   xml.Name `xml:"h4"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H5 ...
type H5 struct {
	XMLName   xml.Name `xml:"h5"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// H6 ...
type H6 struct {
	XMLName   xml.Name `xml:"h6"`
	Attrs     *Attrs
	TextAlign *TextAlign
}

// ULStyle ...
type ULStyle string

// Ul ...
type Ul struct {
	XMLName     xml.Name `xml:"ul"`
	Attrs       *Attrs
	TypeAttr    string      `xml:"type,attr,omitempty"`
	CompactAttr interface{} `xml:"compact,attr,omitempty"`
	Ul          string      `xml:"ul"`
}

// OLStyle ...
type OLStyle string

// Ol ...
type Ol struct {
	XMLName     xml.Name `xml:"ol"`
	Attrs       *Attrs
	TypeAttr    string      `xml:"type,attr,omitempty"`
	CompactAttr interface{} `xml:"compact,attr,omitempty"`
	StartAttr   int         `xml:"start,attr,omitempty"`
	Ol          string      `xml:"ol"`
}

// Menu ...
type Menu struct {
	XMLName     xml.Name `xml:"menu"`
	Attrs       *Attrs
	CompactAttr interface{} `xml:"compact,attr,omitempty"`
	Menu        string      `xml:"menu"`
}

// Dir ...
type Dir struct {
	XMLName     xml.Name `xml:"dir"`
	Attrs       *Attrs
	CompactAttr interface{} `xml:"compact,attr,omitempty"`
	Dir         string      `xml:"dir"`
}

// LIStyle ...
type LIStyle string

// Li ...
type Li struct {
	XMLName   xml.Name `xml:"li"`
	Attrs     *Attrs
	TypeAttr  string `xml:"type,attr,omitempty"`
	ValueAttr int    `xml:"value,attr,omitempty"`
}

// Dl ...
type Dl struct {
	XMLName     xml.Name `xml:"dl"`
	Attrs       *Attrs
	CompactAttr interface{} `xml:"compact,attr,omitempty"`
	Dt          *Dt         `xml:"dt"`
	Dl          string      `xml:"dl"`
}

// Dt ...
type Dt struct {
	XMLName xml.Name `xml:"dt"`
	Attrs   *Attrs
}

// Dd ...
type Dd struct {
	XMLName xml.Name `xml:"dd"`
	Attrs   *Attrs
}

// Address ...
type Address struct {
	XMLName    xml.Name `xml:"address"`
	Attrs      *Attrs
	Inline     *Inline
	MiscInline *MiscInline
	P          *P `xml:"p"`
}

// Hr ...
type Hr struct {
	XMLName     xml.Name `xml:"hr"`
	Attrs       *Attrs
	AlignAttr   interface{} `xml:"align,attr,omitempty"`
	NoshadeAttr interface{} `xml:"noshade,attr,omitempty"`
	SizeAttr    int         `xml:"size,attr,omitempty"`
	WidthAttr   string      `xml:"width,attr,omitempty"`
}

// Pre ...
type Pre struct {
	XMLName      xml.Name `xml:"pre"`
	Attrs        *Attrs
	WidthAttr    int    `xml:"width,attr,omitempty"`
	XmlSpaceAttr *Space `xml:"xml:space,attr,omitempty"`
}

// Blockquote ...
type Blockquote struct {
	XMLName  xml.Name `xml:"blockquote"`
	Attrs    *Attrs
	CiteAttr string `xml:"cite,attr,omitempty"`
}

// Center ...
type Center struct {
	XMLName xml.Name `xml:"center"`
	Attrs   *Attrs
}

// Ins ...
type Ins struct {
	XMLName      xml.Name `xml:"ins"`
	Attrs        *Attrs
	CiteAttr     string    `xml:"cite,attr,omitempty"`
	DatetimeAttr time.Time `xml:"datetime,attr,omitempty"`
}

// Del ...
type Del struct {
	XMLName      xml.Name `xml:"del"`
	Attrs        *Attrs
	CiteAttr     string    `xml:"cite,attr,omitempty"`
	DatetimeAttr time.Time `xml:"datetime,attr,omitempty"`
}

// A ...
type A struct {
	XMLName      xml.Name `xml:"a"`
	Attrs        *Attrs
	Focus        *Focus
	CharsetAttr  string   `xml:"charset,attr,omitempty"`
	TypeAttr     string   `xml:"type,attr,omitempty"`
	NameAttr     string   `xml:"name,attr,omitempty"`
	HrefAttr     string   `xml:"href,attr,omitempty"`
	HreflangAttr string   `xml:"hreflang,attr,omitempty"`
	RelAttr      []string `xml:"rel,attr,omitempty"`
	RevAttr      []string `xml:"rev,attr,omitempty"`
	ShapeAttr    string   `xml:"shape,attr,omitempty"`
	CoordsAttr   string   `xml:"coords,attr,omitempty"`
	TargetAttr   string   `xml:"target,attr,omitempty"`
}

// Span ...
type Span struct {
	XMLName xml.Name `xml:"span"`
	Attrs   *Attrs
}

// Bdo ...
type Bdo struct {
	XMLName     xml.Name `xml:"bdo"`
	Coreattrs   *Coreattrs
	Events      *Events
	LangAttr    string      `xml:"lang,attr,omitempty"`
	XmlLangAttr *Lang       `xml:"xml:lang,attr,omitempty"`
	DirAttr     interface{} `xml:"dir,attr"`
}

// Br ...
type Br struct {
	XMLName   xml.Name `xml:"br"`
	Coreattrs *Coreattrs
	ClearAttr interface{} `xml:"clear,attr,omitempty"`
}

// Em ...
type Em struct {
	XMLName xml.Name `xml:"em"`
	Attrs   *Attrs
}

// Strong ...
type Strong struct {
	XMLName xml.Name `xml:"strong"`
	Attrs   *Attrs
}

// Dfn ...
type Dfn struct {
	XMLName xml.Name `xml:"dfn"`
	Attrs   *Attrs
}

// Code ...
type Code struct {
	XMLName xml.Name `xml:"code"`
	Attrs   *Attrs
}

// Samp ...
type Samp struct {
	XMLName xml.Name `xml:"samp"`
	Attrs   *Attrs
}

// Kbd ...
type Kbd struct {
	XMLName xml.Name `xml:"kbd"`
	Attrs   *Attrs
}

// Var ...
type Var struct {
	XMLName xml.Name `xml:"var"`
	Attrs   *Attrs
}

// Cite ...
type Cite struct {
	XMLName xml.Name `xml:"cite"`
	Attrs   *Attrs
}

// Abbr ...
type Abbr struct {
	XMLName xml.Name `xml:"abbr"`
	Attrs   *Attrs
}

// Acronym ...
type Acronym struct {
	XMLName xml.Name `xml:"acronym"`
	Attrs   *Attrs
}

// Q ...
type Q struct {
	XMLName  xml.Name `xml:"q"`
	Attrs    *Attrs
	CiteAttr string `xml:"cite,attr,omitempty"`
}

// Sub ...
type Sub struct {
	XMLName xml.Name `xml:"sub"`
	Attrs   *Attrs
}

// Sup ...
type Sup struct {
	XMLName xml.Name `xml:"sup"`
	Attrs   *Attrs
}

// Tt ...
type Tt struct {
	XMLName xml.Name `xml:"tt"`
	Attrs   *Attrs
}

// I ...
type I struct {
	XMLName xml.Name `xml:"i"`
	Attrs   *Attrs
}

// B ...
type B struct {
	XMLName xml.Name `xml:"b"`
	Attrs   *Attrs
}

// Big ...
type Big struct {
	XMLName xml.Name `xml:"big"`
	Attrs   *Attrs
}

// Small ...
type Small struct {
	XMLName xml.Name `xml:"small"`
	Attrs   *Attrs
}

// U ...
type U struct {
	XMLName xml.Name `xml:"u"`
	Attrs   *Attrs
}

// S ...
type S struct {
	XMLName xml.Name `xml:"s"`
	Attrs   *Attrs
}

// Strike ...
type Strike struct {
	XMLName xml.Name `xml:"strike"`
	Attrs   *Attrs
}

// Basefont ...
type Basefont struct {
	XMLName   xml.Name    `xml:"basefont"`
	IdAttr    string      `xml:"id,attr,omitempty"`
	SizeAttr  interface{} `xml:"size,attr"`
	ColorAttr string      `xml:"color,attr,omitempty"`
	FaceAttr  interface{} `xml:"face,attr,omitempty"`
}

// Font ...
type Font struct {
	XMLName   xml.Name `xml:"font"`
	Coreattrs *Coreattrs
	I18n      *I18n
	SizeAttr  interface{} `xml:"size,attr,omitempty"`
	ColorAttr string      `xml:"color,attr,omitempty"`
	FaceAttr  interface{} `xml:"face,attr,omitempty"`
}

// Object ...
type Object struct {
	XMLName      xml.Name `xml:"object"`
	Attrs        *Attrs
	DeclareAttr  interface{} `xml:"declare,attr,omitempty"`
	ClassidAttr  string      `xml:"classid,attr,omitempty"`
	CodebaseAttr string      `xml:"codebase,attr,omitempty"`
	DataAttr     string      `xml:"data,attr,omitempty"`
	TypeAttr     string      `xml:"type,attr,omitempty"`
	CodetypeAttr string      `xml:"codetype,attr,omitempty"`
	ArchiveAttr  string      `xml:"archive,attr,omitempty"`
	StandbyAttr  string      `xml:"standby,attr,omitempty"`
	HeightAttr   string      `xml:"height,attr,omitempty"`
	WidthAttr    string      `xml:"width,attr,omitempty"`
	UsemapAttr   string      `xml:"usemap,attr,omitempty"`
	NameAttr     string      `xml:"name,attr,omitempty"`
	TabindexAttr int         `xml:"tabindex,attr,omitempty"`
	AlignAttr    string      `xml:"align,attr,omitempty"`
	BorderAttr   int         `xml:"border,attr,omitempty"`
	HspaceAttr   int         `xml:"hspace,attr,omitempty"`
	VspaceAttr   int         `xml:"vspace,attr,omitempty"`
	Block        *Block
	Inline       *Inline
	Misc         *Misc
	Param        string `xml:"param"`
	Object       string `xml:"object"`
}

// Param ...
type Param struct {
	XMLName       xml.Name    `xml:"param"`
	IdAttr        string      `xml:"id,attr,omitempty"`
	NameAttr      interface{} `xml:"name,attr"`
	ValueAttr     interface{} `xml:"value,attr,omitempty"`
	ValuetypeAttr interface{} `xml:"valuetype,attr,omitempty"`
	TypeAttr      string      `xml:"type,attr,omitempty"`
}

// Applet ...
type Applet struct {
	XMLName      xml.Name `xml:"applet"`
	Coreattrs    *Coreattrs
	CodebaseAttr string      `xml:"codebase,attr,omitempty"`
	ArchiveAttr  interface{} `xml:"archive,attr,omitempty"`
	CodeAttr     interface{} `xml:"code,attr,omitempty"`
	ObjectAttr   interface{} `xml:"object,attr,omitempty"`
	AltAttr      string      `xml:"alt,attr,omitempty"`
	NameAttr     string      `xml:"name,attr,omitempty"`
	WidthAttr    string      `xml:"width,attr"`
	HeightAttr   string      `xml:"height,attr"`
	AlignAttr    string      `xml:"align,attr,omitempty"`
	HspaceAttr   int         `xml:"hspace,attr,omitempty"`
	VspaceAttr   int         `xml:"vspace,attr,omitempty"`
	Block        *Block
	Inline       *Inline
	Misc         *Misc
	Param        string `xml:"param"`
	Form         string `xml:"form"`
}

// Img ...
type Img struct {
	XMLName      xml.Name `xml:"img"`
	Attrs        *Attrs
	SrcAttr      string      `xml:"src,attr"`
	AltAttr      string      `xml:"alt,attr"`
	NameAttr     string      `xml:"name,attr,omitempty"`
	LongdescAttr string      `xml:"longdesc,attr,omitempty"`
	HeightAttr   string      `xml:"height,attr,omitempty"`
	WidthAttr    string      `xml:"width,attr,omitempty"`
	UsemapAttr   string      `xml:"usemap,attr,omitempty"`
	IsmapAttr    interface{} `xml:"ismap,attr,omitempty"`
	AlignAttr    string      `xml:"align,attr,omitempty"`
	BorderAttr   string      `xml:"border,attr,omitempty"`
	HspaceAttr   int         `xml:"hspace,attr,omitempty"`
	VspaceAttr   int         `xml:"vspace,attr,omitempty"`
}

// Map ...
type Map struct {
	XMLName   xml.Name `xml:"map"`
	I18n      *I18n
	Events    *Events
	IdAttr    string      `xml:"id,attr"`
	ClassAttr interface{} `xml:"class,attr,omitempty"`
	StyleAttr string      `xml:"style,attr,omitempty"`
	TitleAttr string      `xml:"title,attr,omitempty"`
	NameAttr  interface{} `xml:"name,attr,omitempty"`
	Block     *Block
	Misc      *Misc
	Form      string   `xml:"form"`
	Area      []string `xml:"area"`
}

// Area ...
type Area struct {
	XMLName    xml.Name `xml:"area"`
	Attrs      *Attrs
	Focus      *Focus
	ShapeAttr  string      `xml:"shape,attr,omitempty"`
	CoordsAttr string      `xml:"coords,attr,omitempty"`
	HrefAttr   string      `xml:"href,attr,omitempty"`
	NohrefAttr interface{} `xml:"nohref,attr,omitempty"`
	AltAttr    string      `xml:"alt,attr"`
	TargetAttr string      `xml:"target,attr,omitempty"`
}

// Form ...
type Form struct {
	XMLName           xml.Name `xml:"form"`
	Attrs             *Attrs
	ActionAttr        string      `xml:"action,attr"`
	MethodAttr        interface{} `xml:"method,attr,omitempty"`
	EnctypeAttr       string      `xml:"enctype,attr,omitempty"`
	OnsubmitAttr      string      `xml:"onsubmit,attr,omitempty"`
	OnresetAttr       string      `xml:"onreset,attr,omitempty"`
	AcceptAttr        string      `xml:"accept,attr,omitempty"`
	AcceptcharsetAttr string      `xml:"accept-charset,attr,omitempty"`
	TargetAttr        string      `xml:"target,attr,omitempty"`
}

// Label ...
type Label struct {
	XMLName       xml.Name `xml:"label"`
	Attrs         *Attrs
	ForAttr       string `xml:"for,attr,omitempty"`
	AccesskeyAttr string `xml:"accesskey,attr,omitempty"`
	OnfocusAttr   string `xml:"onfocus,attr,omitempty"`
	OnblurAttr    string `xml:"onblur,attr,omitempty"`
}

// InputType ...
type InputType string

// Input ...
type Input struct {
	XMLName       xml.Name `xml:"input"`
	Attrs         *Attrs
	Focus         *Focus
	TypeAttr      string      `xml:"type,attr,omitempty"`
	NameAttr      interface{} `xml:"name,attr,omitempty"`
	ValueAttr     interface{} `xml:"value,attr,omitempty"`
	CheckedAttr   interface{} `xml:"checked,attr,omitempty"`
	DisabledAttr  interface{} `xml:"disabled,attr,omitempty"`
	ReadonlyAttr  interface{} `xml:"readonly,attr,omitempty"`
	SizeAttr      interface{} `xml:"size,attr,omitempty"`
	MaxlengthAttr int         `xml:"maxlength,attr,omitempty"`
	SrcAttr       string      `xml:"src,attr,omitempty"`
	AltAttr       interface{} `xml:"alt,attr,omitempty"`
	UsemapAttr    string      `xml:"usemap,attr,omitempty"`
	OnselectAttr  string      `xml:"onselect,attr,omitempty"`
	OnchangeAttr  string      `xml:"onchange,attr,omitempty"`
	AcceptAttr    string      `xml:"accept,attr,omitempty"`
	AlignAttr     string      `xml:"align,attr,omitempty"`
}

// Select ...
type Select struct {
	XMLName      xml.Name `xml:"select"`
	Attrs        *Attrs
	NameAttr     interface{} `xml:"name,attr,omitempty"`
	SizeAttr     int         `xml:"size,attr,omitempty"`
	MultipleAttr interface{} `xml:"multiple,attr,omitempty"`
	DisabledAttr interface{} `xml:"disabled,attr,omitempty"`
	TabindexAttr int         `xml:"tabindex,attr,omitempty"`
	OnfocusAttr  string      `xml:"onfocus,attr,omitempty"`
	OnblurAttr   string      `xml:"onblur,attr,omitempty"`
	OnchangeAttr string      `xml:"onchange,attr,omitempty"`
	Optgroup     string      `xml:"optgroup"`
	Select       string      `xml:"select"`
}

// Optgroup ...
type Optgroup struct {
	XMLName      xml.Name `xml:"optgroup"`
	Attrs        *Attrs
	DisabledAttr interface{} `xml:"disabled,attr,omitempty"`
	LabelAttr    string      `xml:"label,attr"`
	Optgroup     string      `xml:"optgroup"`
}

// Option ...
type Option struct {
	XMLName      xml.Name `xml:"option"`
	Attrs        *Attrs
	SelectedAttr interface{} `xml:"selected,attr,omitempty"`
	DisabledAttr interface{} `xml:"disabled,attr,omitempty"`
	LabelAttr    string      `xml:"label,attr,omitempty"`
	ValueAttr    interface{} `xml:"value,attr,omitempty"`
}

// Textarea ...
type Textarea struct {
	XMLName      xml.Name `xml:"textarea"`
	Attrs        *Attrs
	Focus        *Focus
	NameAttr     interface{} `xml:"name,attr,omitempty"`
	RowsAttr     int         `xml:"rows,attr"`
	ColsAttr     int         `xml:"cols,attr"`
	DisabledAttr interface{} `xml:"disabled,attr,omitempty"`
	ReadonlyAttr interface{} `xml:"readonly,attr,omitempty"`
	OnselectAttr string      `xml:"onselect,attr,omitempty"`
	OnchangeAttr string      `xml:"onchange,attr,omitempty"`
}

// Fieldset ...
type Fieldset struct {
	XMLName xml.Name `xml:"fieldset"`
	Attrs   *Attrs
	Block   *Block
	Inline  *Inline
	Misc    *Misc
	Legend  *Legend `xml:"legend"`
	Form    string  `xml:"form"`
}

// LAlign ...
type LAlign string

// Legend ...
type Legend struct {
	XMLName       xml.Name `xml:"legend"`
	Attrs         *Attrs
	AccesskeyAttr string `xml:"accesskey,attr,omitempty"`
	AlignAttr     string `xml:"align,attr,omitempty"`
}

// Button ...
type Button struct {
	XMLName      xml.Name `xml:"button"`
	Attrs        *Attrs
	Focus        *Focus
	NameAttr     interface{} `xml:"name,attr,omitempty"`
	ValueAttr    interface{} `xml:"value,attr,omitempty"`
	TypeAttr     interface{} `xml:"type,attr,omitempty"`
	DisabledAttr interface{} `xml:"disabled,attr,omitempty"`
}

// Isindex ...
type Isindex struct {
	XMLName    xml.Name `xml:"isindex"`
	Coreattrs  *Coreattrs
	I18n       *I18n
	PromptAttr string `xml:"prompt,attr,omitempty"`
}

// TFrame ...
type TFrame string

// TRules ...
type TRules string

// TAlign ...
type TAlign string

// Cellhalign ...
type Cellhalign struct {
	XMLName     xml.Name `xml:"cellhalign"`
	AlignAttr   string   `xml:"align,attr,omitempty"`
	CharAttr    string   `xml:"char,attr,omitempty"`
	CharoffAttr string   `xml:"charoff,attr,omitempty"`
}

// Cellvalign ...
type Cellvalign struct {
	XMLName    xml.Name `xml:"cellvalign"`
	ValignAttr string   `xml:"valign,attr,omitempty"`
}

// Table ...
type Table struct {
	XMLName         xml.Name `xml:"table"`
	Attrs           *Attrs
	SummaryAttr     string      `xml:"summary,attr,omitempty"`
	WidthAttr       string      `xml:"width,attr,omitempty"`
	BorderAttr      int         `xml:"border,attr,omitempty"`
	FrameAttr       string      `xml:"frame,attr,omitempty"`
	RulesAttr       string      `xml:"rules,attr,omitempty"`
	CellspacingAttr string      `xml:"cellspacing,attr,omitempty"`
	CellpaddingAttr string      `xml:"cellpadding,attr,omitempty"`
	AlignAttr       string      `xml:"align,attr,omitempty"`
	BgcolorAttr     string      `xml:"bgcolor,attr,omitempty"`
	Caption         *Caption    `xml:"caption"`
	Col             []*Col      `xml:"col"`
	Colgroup        []*Colgroup `xml:"colgroup"`
	Thead           *Thead      `xml:"thead"`
	Tfoot           *Tfoot      `xml:"tfoot"`
	Tbody           []*Tbody    `xml:"tbody"`
	Tr              []*Tr       `xml:"tr"`
}

// CAlign ...
type CAlign string

// Caption ...
type Caption struct {
	XMLName   xml.Name `xml:"caption"`
	Attrs     *Attrs
	AlignAttr string `xml:"align,attr,omitempty"`
}

// Thead ...
type Thead struct {
	XMLName    xml.Name `xml:"thead"`
	Attrs      *Attrs
	Cellhalign *Cellhalign
	Cellvalign *Cellvalign
	Tr         []*Tr `xml:"tr"`
}

// Tfoot ...
type Tfoot struct {
	XMLName    xml.Name `xml:"tfoot"`
	Attrs      *Attrs
	Cellhalign *Cellhalign
	Cellvalign *Cellvalign
	Tr         []*Tr `xml:"tr"`
}

// Tbody ...
type Tbody struct {
	XMLName    xml.Name `xml:"tbody"`
	Attrs      *Attrs
	Cellhalign *Cellhalign
	Cellvalign *Cellvalign
	Tr         []*Tr `xml:"tr"`
}

// Colgroup ...
type Colgroup struct {
	XMLName    xml.Name `xml:"colgroup"`
	Attrs      *Attrs
	Cellhalign *Cellhalign
	Cellvalign *Cellvalign
	SpanAttr   int    `xml:"span,attr,omitempty"`
	WidthAttr  string `xml:"width,attr,omitempty"`
	Col        []*Col `xml:"col"`
}

// Col ...
type Col struct {
	XMLName    xml.Name `xml:"col"`
	Attrs      *Attrs
	Cellhalign *Cellhalign
	Cellvalign *Cellvalign
	SpanAttr   int    `xml:"span,attr,omitempty"`
	WidthAttr  string `xml:"width,attr,omitempty"`
}

// Tr ...
type Tr struct {
	XMLName     xml.Name `xml:"tr"`
	Attrs       *Attrs
	Cellhalign  *Cellhalign
	Cellvalign  *Cellvalign
	BgcolorAttr string `xml:"bgcolor,attr,omitempty"`
	Th          string `xml:"th"`
	Td          string `xml:"td"`
}

// Scope ...
type Scope string

// Th ...
type Th struct {
	XMLName     xml.Name `xml:"th"`
	Attrs       *Attrs
	Cellhalign  *Cellhalign
	Cellvalign  *Cellvalign
	AbbrAttr    string      `xml:"abbr,attr,omitempty"`
	AxisAttr    interface{} `xml:"axis,attr,omitempty"`
	HeadersAttr []string    `xml:"headers,attr,omitempty"`
	ScopeAttr   string      `xml:"scope,attr,omitempty"`
	RowspanAttr int         `xml:"rowspan,attr,omitempty"`
	ColspanAttr int         `xml:"colspan,attr,omitempty"`
	NowrapAttr  interface{} `xml:"nowrap,attr,omitempty"`
	BgcolorAttr string      `xml:"bgcolor,attr,omitempty"`
	WidthAttr   string      `xml:"width,attr,omitempty"`
	HeightAttr  string      `xml:"height,attr,omitempty"`
}

// Td ...
type Td struct {
	XMLName     xml.Name `xml:"td"`
	Attrs       *Attrs
	Cellhalign  *Cellhalign
	Cellvalign  *Cellvalign
	AbbrAttr    string      `xml:"abbr,attr,omitempty"`
	AxisAttr    interface{} `xml:"axis,attr,omitempty"`
	HeadersAttr []string    `xml:"headers,attr,omitempty"`
	ScopeAttr   string      `xml:"scope,attr,omitempty"`
	RowspanAttr int         `xml:"rowspan,attr,omitempty"`
	ColspanAttr int         `xml:"colspan,attr,omitempty"`
	NowrapAttr  interface{} `xml:"nowrap,attr,omitempty"`
	BgcolorAttr string      `xml:"bgcolor,attr,omitempty"`
	WidthAttr   string      `xml:"width,attr,omitempty"`
	HeightAttr  string      `xml:"height,attr,omitempty"`
}

// Document ...
type Document struct {
	XMLName    xml.Name `xml:"document"`
	I18n       *I18n
	IdAttr     string        `xml:"id,attr,omitempty"`
	Properties []*Properties `xml:"properties"`
	Head       []*Head       `xml:"head"`
	Body       []*Body       `xml:"body"`
}

// Properties ...
type Properties struct {
	XMLName xml.Name    `xml:"properties"`
	Title   []*Title    `xml:"title"`
	Author  []*Author   `xml:"author"`
	Date    []time.Time `xml:"date"`
}

// Author ...
type Author struct {
	XMLName   xml.Name `xml:"author"`
	EmailAttr string   `xml:"email,attr,omitempty"`
}

// Date ...
type Date struct {
	XMLName xml.Name `xml:"date"`
}

// Body ...
type Body struct {
	XMLName xml.Name `xml:"body"`
	Attrs   *Attrs
	Section []*Section `xml:"section"`
}

// Section ...
type Section struct {
	XMLName    xml.Name `xml:"section"`
	Attrs      *Attrs
	NameAttr   string `xml:"name,attr"`
	Block      *Block
	Inline     *Inline
	Misc       *Misc
	Form       string      `xml:"form"`
	Subsection *Subsection `xml:"subsection"`
}

// Subsection ...
type Subsection struct {
	XMLName  xml.Name `xml:"subsection"`
	Attrs    *Attrs
	NameAttr string `xml:"name,attr"`
	Block    *Block
	Inline   *Inline
	Misc     *Misc
	Form     string `xml:"form"`
}

// Source ...
type Source struct {
	XMLName xml.Name `xml:"source"`
}

// Macro ...
type Macro struct {
	XMLName  xml.Name `xml:"macro"`
	NameAttr string   `xml:"name,attr"`
	Param    string   `xml:"param"`
}

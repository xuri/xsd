// Code generated by xgen. DO NOT EDIT.

// DateSimpleType is The date simple type unifies both date and time formats and allows
//             a date to be specified as either a day or a time in a day. This is
//             to allow situations where the law becomes effective based on another
//             time zone.
typedef struct {
	char DateTime;
	char Date;
} DateSimpleType;

// OccurrenceSimpleType is The occurrence simple type specifies which occurrence is affected
//             by an action when amending. An occurence can be either a positive
//             integer or a value from the choice enumeration such as "all" for
//             all occurrences or "last" for the last occurrence.
typedef struct {
	ChoiceEnum ChoiceEnum;
	int PositiveInteger;
} OccurrenceSimpleType;

// ShortStringSimpleType is A simple string with not more than 32 characters.
typedef char ShortStringSimpleType;

// MediumStringSimpleType is A simple string with not more than 128 characters.
typedef char MediumStringSimpleType;

// LongStringSimpleType is A simple string with not more than 1024 characters.
typedef char LongStringSimpleType;

// ChoiceEnum is The choice enumeration is used to enumerate some textual values for
//             use with the occurrence simple type defined above.
typedef char ChoiceEnum;

// PropertyTypeEnum is The property  type enumeration allows a property to be given a
//             type specification. If the @type attribute is not specified, then
//             the default type is "string".
typedef char PropertyTypeEnum;

// SetTypeEnum is A "res" is a resource, such as a person, place, or thing and
//                   the properties enclosed within the set describe it.
typedef char SetTypeEnum;

// StatusEnum is A "unknown" status indicates that the status is not known.
typedef char StatusEnum;

// ActionTypeEnum is The "delete" action removes text from a proposed provision to
//                   the law.
typedef char ActionTypeEnum;

// PositionEnum is The position enumeration is used with references found within
//             amendments when it is necessary to specify a position relative to an
//             item rather than when referencing the item itself.
typedef char PositionEnum;

// OrientationEnum is The orientation enumeration is used specify how an item should be
//             oriented in the printed form. The orientation can be specified
//             for any content item or for any appendix item, including a
//             schedule.
typedef char OrientationEnum;

// NoteTypeEnum is Notes can be placed inline, as footnotes at the end of the page,
//             as end notes as the end of document, or U.S. Code notes. By default,
//             notes are inline
typedef char NoteTypeEnum;

// IdentificationGroup is Use the @identifier attribute to specify the URL context of the
//                element. Typically, the @identifier will be established on the
//                root element or on any element, such as a <quotedStructure> or
//                <quotedText> element, that changes the context.
// 
//                The @identifier attribute is optional.
typedef struct {
	char IdAttr; // attr, optional
	char NameAttr; // attr, optional
	char TemporalIdAttr; // attr, optional
	char IdentifierAttr; // attr, optional
} IdentificationGroup;

// ClassificationGroup is The @style attribute is used to specify CSS attributes that
//                override the default styles defined for an element or an element
//                class. The current loose-leaf publication standards should be
//                specified using an external style sheet and the use of the @style
//                attribute should be reserved for exception cases where the
//                default presentation must be overridden.
typedef struct {
	char RoleAttr; // attr, optional
	char ClassAttr; // attr, optional
	char StyleAttr; // attr, optional
} ClassificationGroup;

// AnnotationGroup is The @codificationTip is for internal use by the OLRC.
typedef struct {
	char NoteAttr; // attr, optional
	char AltAttr; // attr, optional
	char MetaAttr; // attr, optional
	char MiscAttr; // attr, optional
	char DraftingTipAttr; // attr, optional
	char CodificationTipAttr; // attr, optional
} AnnotationGroup;

// DescriptionGroup is The @sortOrder attribute is used to specify a sorting order for
//                a list of items, when that sort order is not the document
//                sequence. The @sortOrder value must be specified as a positive
//                integer. This attribute should rarely be used.
typedef struct {
	char TitleAttr; // attr, optional
	char BriefAttr; // attr, optional
	int SortOrderAttr; // attr, optional
} DescriptionGroup;

// ReferenceGroup is The @portion attribute is used, in conjunction with the @idref
//                attribute, when only a portion of the referenced item is being
//                affected. The value of @portion is an additional part to append
//                to the URL, with a "/" separator to identify the item affected.
//                Do not include a leading "/" in the @portion value.
typedef struct {
	char HrefAttr; // attr, optional
	char IdrefAttr; // attr, optional
	char PortionAttr; // attr, optional
} ReferenceGroup;

// AmendingGroup is The @posCount attribute is used to specify the number of
//                occurrences of the @posText to seek out when establishing the
//                context.
typedef struct {
	char PosAttr; // attr, optional
	char PosTextAttr; // attr, optional
	int PosCountAttr; // attr, optional
} AmendingGroup;

// LinkGroup is The @src attribute is a URL that points to an item to be included
//                in the published document. Unlike an @href attribute, a @src
//                attribute can be any normal URL and can be relative or absolute.
typedef struct {
	char SrcAttr; // attr, optional
} LinkGroup;

// ValueGroup is The @endValue attribute is used for the upper end of a value
//             range.
typedef struct {
	char ValueAttr; // attr, optional
	char StartValueAttr; // attr, optional
	char EndValueAttr; // attr, optional
} ValueGroup;

// NoteGroup is Set the @topic attribute to a string value in order
//                      to categorize the note or group of notes. An open,
//                      but enumerated, list of string values should be used.
//                      Using a fixed list of values will better aid in
//                      categorization of notes later.
typedef struct {
	char TypeAttr; // attr, optional
	char TopicAttr; // attr, optional
} NoteGroup;

// DateGroup is The @endDate attribute is used for the ending date of a date
//                range.
typedef struct {
	DateSimpleType DateAttr; // attr, optional
	DateSimpleType StartDateAttr; // attr, optional
	DateSimpleType EndDateAttr; // attr, optional
} DateGroup;

// VersioningGroup is The @partial attribute is used, in conjunction with the
//                @status attribute to indicate that the status is not fully
//                applied.
typedef struct {
	DateSimpleType StartPeriodAttr; // attr, optional
	DateSimpleType EndPeriodAttr; // attr, optional
	char StatusAttr; // attr, optional
	bool PartialAttr; // attr, optional
} VersioningGroup;

// ActionGroup is The @commencementDate attribute specifies the date upon which the
//                action is to be applied.
typedef struct {
	char TypeAttr; // attr, optional
	OccurrenceSimpleType OccurrenceAttr; // attr, optional
	DateSimpleType CommencementDateAttr; // attr, optional
} ActionGroup;

// CellGroup is The @leaders attribute specifies whether leaders should be
//             shown either trailing or following the text content. The character
//             included as the value is the character used to render the leaders.
// 
//             Use the CSS text-align character to position the text. If you
//             align the text to the left, then the leaders will show to the
//             right and if you align the text to the right, then the leaders
//             will show to the left.
typedef struct {
	int ColspanAttr; // attr, optional
	int RowspanAttr; // attr, optional
	char LeadersAttr; // attr, optional
} CellGroup;

// BaseType is The base type defines the most general element, specifying the
//             attributes which can be found on all elements - specifically
//             attributes belonging to the identification, classification, and
//             annotation groups.
// 
//             The base type is defined as an abstract type and elements cannot
//             be declared based on it.
typedef struct {
	IdentificationGroup IdentificationGroup;
	ClassificationGroup ClassificationGroup;
	AnnotationGroup AnnotationGroup;
	VersioningGroup VersioningGroup;
} BaseType;

// BaseBlockType is The base block type is a variant of the base type, but having a
//             content structure to support block level children - elements
//             but no text.
typedef struct {
	IdentificationGroup IdentificationGroup;
	ClassificationGroup ClassificationGroup;
	AnnotationGroup AnnotationGroup;
	VersioningGroup VersioningGroup;
} BaseBlockType;

// BaseContentType is The base content type is a variant of the base type, but having
//             a very open content model including text.
typedef struct {
	IdentificationGroup IdentificationGroup;
	ClassificationGroup ClassificationGroup;
	AnnotationGroup AnnotationGroup;
	VersioningGroup VersioningGroup;
} BaseContentType;

// MarkerType is The marker type is a restriction of the base type to an element
//             without content.
typedef struct {
} MarkerType;

// InlineType is The inline type is a extension of the base type to text content or
//             other inline elements.
typedef struct {
	MarkerType Marker[];
	InlineType Inline[];
} InlineType;

// BlockType is The block type is a extension of the base type to content
//             consisting of only elements.
typedef struct {
} BlockType;

// TextType is The text type is a broad base type allowing any content.
typedef struct {
} TextType;

// ContentType is The content type is a broad base type allowing any content.
typedef struct {
	char OrientationAttr; // attr, optional
} ContentType;

typedef MarkerType Marker;

typedef InlineType Inline;

typedef BlockType Block;

typedef ContentType Content;

// LawDocType is In addition to the main part of the document, a document
//                         may have one or more appendices such as schedules or
//                         explanatory memorandums/notes. These appendices can
//                         either be inline documents or the can be external
//                         referenced documents.
typedef struct {
	MetaType Meta;
	MainType Main;
	BlockType Block[];
	AppendixType Appendix[];
} LawDocType;

// GenericDocType is In addition to the content part of the document, a document
//                         may have one or more appendices.
typedef struct {
	MetaType Meta;
	ContentType Content;
	AppendixType Appendix[];
} GenericDocType;

// MetaType is Properties can be grouped into sets. These set can
//                         be used to represent something like a series of events,
//                         a person, or another other object related to the
//                         document.
typedef struct {
	PropertyType Property[];
	SetType Set[];
} MetaType;

// PropertyType is A property can represent a pointer to either an external
//                   document or an element within the document.
// 
//                   You can use a ref to create a pointer to an endnote or a
//                   footnote. In that case, the ref text will be the endnote or
//                   footnote indicator as seen in "<ref idref="fn000001">†</ref>"
//                   where the dagger is the indicator. An endnote or footnote
//                   reference should always use the @idref attribute to point to
//                   an endnote or a footnote within the document.
typedef struct {
	DateGroup DateGroup;
	ValueGroup ValueGroup;
	ReferenceGroup ReferenceGroup;
	char TypeAttr; // attr, optional
} PropertyType;

// SetType is A set can contain 0 or more sets.
typedef struct {
	char TypeAttr; // attr, optional
	PropertyType Property[];
	SetType Set[];
} SetType;

// TocType is The items in a table of contents can be arranged in
//                         a tabular fashion by surrounding the items in a layout.
//                         When a layout is specified, use <column> elements
//                         within each <tocItem> to indicate specific columns.
typedef struct {
	bool GenerateAttr; // attr, optional
	HeadingStructure HeadingStructure;
	TocItemType TocItem[];
	LayoutType Layout[];
} TocType;

// TocItemType is Use the description group to record the number and title in the
//                   table of contents as metadata.
typedef struct {
	DescriptionGroup DescriptionGroup;
	HeadingStructure HeadingStructure;
	TocItemType TocItem[];
	ContentType Content[];
} TocItemType;

// MainType is The document is permitted to be empty to allow for the
//                         case when the document is newly created and still in a
//                         drafting state.
typedef struct {
	NoteStructure NoteStructure[];
	PreambleStructure PreambleStructure;
	LevelStructure LevelStructure;
	PropertyType Property[];
	BlockType Block[];
	StatementType Statement[];
	TocType Toc[];
} MainType;

// StatementType is The attributes of the description group can be used to
//                   record a number and title for a statement for use when
//                   generating a table of contents.
typedef struct {
	DescriptionGroup DescriptionGroup;
	MarkerType Marker[];
	InlineType Inline[];
	BlockType Block[];
	TextType Text[];
	ContentType Content[];
	LevelType Level[];
} StatementType;

// PreambleType is Attributes from the description group may be used to
//                      attach information to the preamble for use in generating
//                      a table of contents.
typedef struct {
	DescriptionGroup DescriptionGroup;
	HeadingStructure HeadingStructure;
	RecitalStructure RecitalStructure[];
	StatementType EnactingFormula;
} PreambleType;

// LevelType is Use the description group to record information in the
//                      attributes to be used when generating the table of contents.
typedef struct {
	DescriptionGroup DescriptionGroup;
	NumStructure NumStructure;
	HeadingStructure HeadingStructure;
	TocStructure TocStructure[];
	LevelStructure LevelStructure;
} LevelType;

// NumType is Use the @value attribute to record a normalized value of
//                      the <num> content. When the text content represents a
//                      range of values, use the @beginValue and @endValue
//                      attributes to record the range.
typedef struct {
	ValueGroup ValueGroup;
} NumType;

// HeadingType is The heading type is used to define heading and subheadings for
//             levels and other structured items. Often a heading will follow
//             a number.
typedef struct {
} HeadingType;

// InstructionType is A quoted structure may be associated with an
//                            action (by position) as part of the processing
//                            action.
typedef struct {
	RefType Ref;
	InlineType Inline[];
	MarkerType Marker[];
	ActionType Action[];
	LevelType Level[];
	QuotedTextType QuotedText;
	QuotedContentType QuotedContent;
} InstructionType;

// ActionType is Use the @action attribute to describe the action being taken.
typedef struct {
	ReferenceGroup ReferenceGroup;
	AmendingGroup AmendingGroup;
	ActionGroup ActionGroup;
} ActionType;

// NotesType is You can use the @type attribute to position the notes
//                      and the @topic attribute to categorize the notes.
typedef struct {
	NoteGroup NoteGroup;
	HeadingType Heading;
	HeadingType Subheading[];
	NoteType Note[];
	LayoutType Layout;
} NotesType;

// NoteType is You can use the @date to associate dates to your notes.
//                      This can be used to generate alerts.
typedef struct {
	NoteGroup NoteGroup;
	DateGroup DateGroup;
} NoteType;

// AppendixType is If an <appendix> is to be included by reference, use the
//                      @src attribute with a normal URL to point to the document
//                      to be included.
typedef struct {
	DescriptionGroup DescriptionGroup;
	LinkGroup LinkGroup;
	char OrientationAttr; // attr, optional
	NumStructure NumStructure;
	HeadingStructure HeadingStructure;
	TocStructure TocStructure;
	LevelStructure LevelStructure;
	BlockType Block;
} AppendixType;

// SignaturesType is Defines a block for a collection of signatures. An opening paragraph
//             is permitted as well as an ending date. In some cases, the date may
//             appear within the opening paragraph.
// 
//             The signatures may either be specified serially in a grid-like
//             layout.
typedef struct {
	PType P;
	SignatureType Signature[];
	LayoutType Layout;
	char Date;
} SignaturesType;

// Name ...
typedef struct {
} Name;

// Role ...
typedef struct {
} Role;

// Affiliation ...
typedef struct {
} Affiliation;

// SignatureType is Defines a basic signature element comprising a name and optionally
//             the person's role, their affiliation, and a date. All fields can be
//             defined to include either an @href or an @idref to point to an
//             identifying resource that describes the person, their role, and
//             their affiliation.
typedef struct {
	Name Name;
	Role Role;
	Affiliation Affiliation;
	char Date;
} SignatureType;

// RefType is Use the @pos and other attributes to describe
//                      what or where is being affected.
// 
//                      The attributes in the amending group should only be used
//                      for references or actions within an amending instruction.
typedef struct {
	AmendingGroup AmendingGroup;
} RefType;

// DateType is Use the @date attribute to record a normalized value of the
//                      date according to ISO 8601.
typedef struct {
	DateGroup DateGroup;
} DateType;

// QuotedTextType is A quoted text type is an extraction of simple text from another
//             source or origin. If the quoted text is to have literal quotes
//             surrounding it, then those characters must be included in the text
//             surrounding the quoted text and not within it.
// 
//             Quoted text is seen in amendments or modifications.
// 
//             Use the @identifier attribute to establish the referencing context
//             of the quoted text.
typedef struct {
	char OriginAttr; // attr, optional
} QuotedTextType;

// QuotedContentType is A quotedContentType is used for an extraction of potentially structured
//             text (text with XML elements) from another source or origin.
// 
//             Quoted content is seen in USC Notes, amendments, and modifications.
// 
//             Use the @identifier attribute to establish the referencing context
//             of the quoted structure
typedef struct {
	char OriginAttr; // attr, optional
} QuotedContentType;

// NoteStructure ...
typedef struct {
	NoteType Note;
	NotesType Notes;
} NoteStructure;

// NumStructure ...
typedef struct {
	NumType Num[];
	NoteStructure NoteStructure[];
} NumStructure;

// HeadingStructure ...
typedef struct {
	HeadingType Heading[];
	HeadingType Subheading[];
	NoteStructure NoteStructure[];
} HeadingStructure;

// TocStructure ...
typedef struct {
	TocType Toc;
	NoteStructure NoteStructure[];
} TocStructure;

// StatementStructure ...
typedef struct {
	StatementType Statement;
	NoteStructure NoteStructure[];
} StatementStructure;

// RecitalStructure ...
typedef struct {
	StatementType Recital;
	NoteStructure NoteStructure[];
} RecitalStructure;

// PreambleStructure ...
typedef struct {
	PreambleType Preamble;
	StatementType EnactingFormula;
	NoteStructure NoteStructure[];
} PreambleStructure;

// LevelStructure ...
typedef struct {
	InstructionType Instruction[];
	ContentType Content[];
	TextType Text;
	LevelType Level;
	HeadingType CrossHeading;
	NoteStructure NoteStructure[];
	NoteStructure NoteStructure[];
	NoteStructure NoteStructure[];
} LevelStructure;

typedef LawDocType LawDoc;

typedef GenericDocType Document;

typedef MetaType Meta;

typedef PropertyType Property;

typedef SetType Set;

typedef TocType Toc;

typedef TocItemType TocItem;

typedef MainType Main;

typedef StatementType Statement;

typedef PreambleType Preamble;

typedef StatementType Recital;

typedef StatementType EnactingFormula;

typedef LevelType Level;

typedef NumType Num;

typedef TextType Text;

typedef HeadingType Heading;

typedef HeadingType Subheading;

typedef HeadingType CrossHeading;

typedef InstructionType Instruction;

typedef ActionType Action;

typedef NotesType Notes;

typedef NoteType Note;

typedef AppendixType Appendix;

typedef SignaturesType Signatures;

typedef SignatureType Signature;

typedef RefType Ref;

typedef DateType Date;

typedef QuotedTextType QuotedText;

typedef QuotedContentType QuotedContent;

// LayoutType is A <layout> type can contain various types of elements
//                      as rows including headers, rows, TOC items, blocks,
//                      and contents. All elements, aside from <column> elements,
//                      are treated as rows when found directly within a layout
//                      structure.
typedef struct {
	char OrientationAttr; // attr, optional
	NoteStructure NoteStructure[];
	RowType Header[];
	RowType Row[];
	TocItemType TocItem[];
	BlockType Block[];
	ContentType Content[];
} LayoutType;

// RowType is A row contains one or more column cells.
typedef struct {
	ColumnType Column[];
} RowType;

// ColumnType is Use the elements of the cell group to specify
//                      the row and column spans.
typedef struct {
	CellGroup CellGroup;
} ColumnType;

// PType is A "P" type is a simple unnumbered paragraph. As a <content>
//             element, it can contain a wide range of text and elements.
typedef struct {
} PType;

// BrType is A break type is simple marker element denoting a line break.
typedef struct {
} BrType;

// ImgType is An image type is a simple marker element denoting where a graphic
//             image is to be inserted.
typedef struct {
	LinkGroup LinkGroup;
	char OrientationAttr; // attr, optional
} ImgType;

typedef LayoutType Layout;

typedef RowType Header;

typedef RowType Row;

typedef ColumnType Column;

typedef PType P;

typedef BrType Br;

typedef ImgType Img;

typedef ContentType Center;

typedef ContentType FillIn;

typedef ContentType CheckBox;

typedef InlineType B;

typedef InlineType I;

typedef InlineType Sub;

typedef InlineType Sup;

typedef InlineType Del;

typedef InlineType Ins;

typedef LawDocType Bill;

typedef LawDocType Statute;

typedef LawDocType Resolution;

typedef LawDocType Amendment;

typedef LawDocType UscDoc;

typedef PropertyType DocNumber;

typedef PropertyType DocPublicationName;

typedef PropertyType DocReleasePoint;

typedef StatementType DocTitle;

typedef StatementType LongTitle;

typedef InlineType ShortTitle;

typedef InlineType Term;

typedef LevelType Preliminary;

typedef LevelType Title;

typedef LevelType Subtitle;

typedef LevelType Part;

typedef LevelType Subpart;

typedef LevelType Division;

typedef LevelType Subdivision;

typedef LevelType Chapter;

typedef LevelType Subchapter;

typedef LevelType Article;

typedef LevelType Subarticle;

typedef LevelType Section;

typedef LevelType Subsection;

typedef LevelType Paragraph;

typedef LevelType Subparagraph;

typedef LevelType Clause;

typedef LevelType Subclause;

typedef LevelType Item;

typedef LevelType Subitem;

typedef LevelType Subsubitem;

typedef TextType Def;

typedef TextType Chapeau;

typedef TextType Continuation;

typedef TextType Proviso;

typedef InstructionType AmendingFormula;

typedef NoteType SourceCredit;

typedef NoteType StatutoryNote;

typedef NoteType EditorialNote;

typedef NoteType ChangeNote;

typedef SignaturesType Made;

typedef SignaturesType Approved;

typedef AppendixType Schedule;

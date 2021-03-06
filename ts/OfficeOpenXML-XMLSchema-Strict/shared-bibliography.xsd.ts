// Code generated by xgen. DO NOT EDIT.

// ST_SourceType ...
export enum ST_SourceType {
	ArticleInAPeriodical = 'ArticleInAPeriodical',
	Book = 'Book',
	BookSection = 'BookSection',
	JournalArticle = 'JournalArticle',
	ConferenceProceedings = 'ConferenceProceedings',
	Report = 'Report',
	SoundRecording = 'SoundRecording',
	Performance = 'Performance',
	Art = 'Art',
	DocumentFromInternetSite = 'DocumentFromInternetSite',
	InternetSite = 'InternetSite',
	Film = 'Film',
	Interview = 'Interview',
	Patent = 'Patent',
	ElectronicSource = 'ElectronicSource',
	Case = 'Case',
	Misc = 'Misc',
}

// CT_NameListType ...
export class CT_NameListType {
	Person: Array<CT_PersonType>;
}

// CT_PersonType ...
export class CT_PersonType {
	Last: string;
	First: string;
	Middle: string;
}

// CT_NameType ...
export class CT_NameType {
	NameList: CT_NameListType;
}

// CT_NameOrCorporateType ...
export class CT_NameOrCorporateType {
	NameList: CT_NameListType;
	Corporate: string;
}

// CT_AuthorType ...
export class CT_AuthorType {
	Artist: CT_NameType;
	Author: CT_NameOrCorporateType;
	BookAuthor: CT_NameType;
	Compiler: CT_NameType;
	Composer: CT_NameType;
	Conductor: CT_NameType;
	Counsel: CT_NameType;
	Director: CT_NameType;
	Editor: CT_NameType;
	Interviewee: CT_NameType;
	Interviewer: CT_NameType;
	Inventor: CT_NameType;
	Performer: CT_NameOrCorporateType;
	ProducerName: CT_NameType;
	Translator: CT_NameType;
	Writer: CT_NameType;
}

// CT_SourceType ...
export class CT_SourceType {
	AbbreviatedCaseNumber: string;
	AlbumTitle: string;
	Author: CT_AuthorType;
	BookTitle: string;
	Broadcaster: string;
	BroadcastTitle: string;
	CaseNumber: string;
	ChapterNumber: string;
	City: string;
	Comments: string;
	ConferenceName: string;
	CountryRegion: string;
	Court: string;
	Day: string;
	DayAccessed: string;
	Department: string;
	Distributor: string;
	Edition: string;
	Guid: string;
	Institution: string;
	InternetSiteTitle: string;
	Issue: string;
	JournalName: string;
	LCID: string;
	Medium: string;
	Month: string;
	MonthAccessed: string;
	NumberVolumes: string;
	Pages: string;
	PatentNumber: string;
	PeriodicalTitle: string;
	ProductionCompany: string;
	PublicationTitle: string;
	Publisher: string;
	RecordingNumber: string;
	RefOrder: string;
	Reporter: string;
	SourceType: string;
	ShortTitle: string;
	StandardNumber: string;
	StateProvince: string;
	Station: string;
	Tag: string;
	Theater: string;
	ThesisType: string;
	Title: string;
	Type: string;
	URL: string;
	Version: string;
	Volume: string;
	Year: string;
	YearAccessed: string;
}

// Sources ...
export type Sources = CT_Sources;

// CT_Sources ...
export class CT_Sources {
	SelectedStyleAttr: string | null;
	StyleNameAttr: string | null;
	URIAttr: string | null;
	Source: Array<CT_SourceType>;
}

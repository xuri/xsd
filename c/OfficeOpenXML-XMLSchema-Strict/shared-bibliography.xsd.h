// Code generated by xgen. DO NOT EDIT.

// ST_SourceType ...
typedef char ST_SourceType;

// CT_NameListType ...
typedef struct {
	CT_PersonType Person[];
} CT_NameListType;

// CT_PersonType ...
typedef struct {
	char Last[];
	char First[];
	char Middle[];
} CT_PersonType;

// CT_NameType ...
typedef struct {
	CT_NameListType NameList;
} CT_NameType;

// CT_NameOrCorporateType ...
typedef struct {
	CT_NameListType NameList;
	char Corporate;
} CT_NameOrCorporateType;

// CT_AuthorType ...
typedef struct {
	CT_NameType Artist[];
	CT_NameOrCorporateType Author[];
	CT_NameType BookAuthor[];
	CT_NameType Compiler[];
	CT_NameType Composer[];
	CT_NameType Conductor[];
	CT_NameType Counsel[];
	CT_NameType Director[];
	CT_NameType Editor[];
	CT_NameType Interviewee[];
	CT_NameType Interviewer[];
	CT_NameType Inventor[];
	CT_NameOrCorporateType Performer[];
	CT_NameType ProducerName[];
	CT_NameType Translator[];
	CT_NameType Writer[];
} CT_AuthorType;

// CT_SourceType ...
typedef struct {
	char AbbreviatedCaseNumber[];
	char AlbumTitle[];
	CT_AuthorType Author[];
	char BookTitle[];
	char Broadcaster[];
	char BroadcastTitle[];
	char CaseNumber[];
	char ChapterNumber[];
	char City[];
	char Comments[];
	char ConferenceName[];
	char CountryRegion[];
	char Court[];
	char Day[];
	char DayAccessed[];
	char Department[];
	char Distributor[];
	char Edition[];
	char Guid[];
	char Institution[];
	char InternetSiteTitle[];
	char Issue[];
	char JournalName[];
	char LCID[];
	char Medium[];
	char Month[];
	char MonthAccessed[];
	char NumberVolumes[];
	char Pages[];
	char PatentNumber[];
	char PeriodicalTitle[];
	char ProductionCompany[];
	char PublicationTitle[];
	char Publisher[];
	char RecordingNumber[];
	char RefOrder[];
	char Reporter[];
	char SourceType[];
	char ShortTitle[];
	char StandardNumber[];
	char StateProvince[];
	char Station[];
	char Tag[];
	char Theater[];
	char ThesisType[];
	char Title[];
	char Type[];
	char URL[];
	char Version[];
	char Volume[];
	char Year[];
	char YearAccessed[];
} CT_SourceType;

typedef CT_Sources Sources;

// CT_Sources ...
typedef struct {
	char SelectedStyleAttr; // attr, optional
	char StyleNameAttr; // attr, optional
	char URIAttr; // attr, optional
	CT_SourceType Source[];
} CT_Sources;

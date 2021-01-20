// Code generated by xgen. DO NOT EDIT.

// PublshInformation ...
typedef struct {
	char Publish_Date[];
	int Record_Count[];
} PublshInformation;

// ProgramList ...
typedef struct {
	char Program[];
} ProgramList;

// Id ...
typedef struct {
	int Uid;
	char IdType;
	char IdNumber;
	char IdCountry;
	char IssueDate;
	char ExpirationDate;
} Id;

// IdList ...
typedef struct {
	Id Id[];
} IdList;

// Aka ...
typedef struct {
	int Uid;
	char Type;
	char Category;
	char LastName;
	char FirstName;
} Aka;

// AkaList ...
typedef struct {
	Aka Aka[];
} AkaList;

// Address ...
typedef struct {
	int Uid;
	char Address1;
	char Address2;
	char Address3;
	char City;
	char StateOrProvince;
	char PostalCode;
	char Country;
} Address;

// AddressList ...
typedef struct {
	Address Address[];
} AddressList;

// Nationality ...
typedef struct {
	int Uid;
	char Country;
	bool MainEntry;
} Nationality;

// NationalityList ...
typedef struct {
	Nationality Nationality[];
} NationalityList;

// Citizenship ...
typedef struct {
	int Uid;
	char Country;
	bool MainEntry;
} Citizenship;

// CitizenshipList ...
typedef struct {
	Citizenship Citizenship[];
} CitizenshipList;

// DateOfBirthItem ...
typedef struct {
	int Uid;
	char DateOfBirth;
	bool MainEntry;
} DateOfBirthItem;

// DateOfBirthList ...
typedef struct {
	DateOfBirthItem DateOfBirthItem[];
} DateOfBirthList;

// PlaceOfBirthItem ...
typedef struct {
	int Uid;
	char PlaceOfBirth;
	bool MainEntry;
} PlaceOfBirthItem;

// PlaceOfBirthList ...
typedef struct {
	PlaceOfBirthItem PlaceOfBirthItem[];
} PlaceOfBirthList;

// VesselInfo ...
typedef struct {
	char CallSign;
	char VesselType;
	char VesselFlag;
	char VesselOwner;
	int Tonnage;
	int GrossRegisteredTonnage;
} VesselInfo;

// SdnEntry ...
typedef struct {
	int Uid;
	char FirstName;
	char LastName;
	char Title;
	char SdnType;
	char Remarks;
	ProgramList ProgramList[];
	IdList IdList[];
	AkaList AkaList[];
	AddressList AddressList[];
	NationalityList NationalityList[];
	CitizenshipList CitizenshipList[];
	DateOfBirthList DateOfBirthList[];
	PlaceOfBirthList PlaceOfBirthList[];
	VesselInfo VesselInfo[];
} SdnEntry;

// SdnList ...
typedef struct {
	PublshInformation PublshInformation[];
	SdnEntry SdnEntry[];
} SdnList;

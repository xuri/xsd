// Code generated by xgen. DO NOT EDIT.

// PublshInformation ...
export class PublshInformation {
	Publish_Date: string;
	Record_Count: number;
}

// ProgramList ...
export class ProgramList {
	Program: string;
}

// Id ...
export class Id {
	Uid: number;
	IdType: string;
	IdNumber: string;
	IdCountry: string;
	IssueDate: string;
	ExpirationDate: string;
}

// IdList ...
export class IdList {
	Id: Array<Id>;
}

// Aka ...
export class Aka {
	Uid: number;
	Type: string;
	Category: string;
	LastName: string;
	FirstName: string;
}

// AkaList ...
export class AkaList {
	Aka: Array<Aka>;
}

// Address ...
export class Address {
	Uid: number;
	Address1: string;
	Address2: string;
	Address3: string;
	City: string;
	StateOrProvince: string;
	PostalCode: string;
	Country: string;
}

// AddressList ...
export class AddressList {
	Address: Array<Address>;
}

// Nationality ...
export class Nationality {
	Uid: number;
	Country: string;
	MainEntry: boolean;
}

// NationalityList ...
export class NationalityList {
	Nationality: Array<Nationality>;
}

// Citizenship ...
export class Citizenship {
	Uid: number;
	Country: string;
	MainEntry: boolean;
}

// CitizenshipList ...
export class CitizenshipList {
	Citizenship: Array<Citizenship>;
}

// DateOfBirthItem ...
export class DateOfBirthItem {
	Uid: number;
	DateOfBirth: string;
	MainEntry: boolean;
}

// DateOfBirthList ...
export class DateOfBirthList {
	DateOfBirthItem: Array<DateOfBirthItem>;
}

// PlaceOfBirthItem ...
export class PlaceOfBirthItem {
	Uid: number;
	PlaceOfBirth: string;
	MainEntry: boolean;
}

// PlaceOfBirthList ...
export class PlaceOfBirthList {
	PlaceOfBirthItem: Array<PlaceOfBirthItem>;
}

// VesselInfo ...
export class VesselInfo {
	CallSign: string;
	VesselType: string;
	VesselFlag: string;
	VesselOwner: string;
	Tonnage: number;
	GrossRegisteredTonnage: number;
}

// SdnEntry ...
export class SdnEntry {
	Uid: number;
	FirstName: string;
	LastName: string;
	Title: string;
	SdnType: string;
	Remarks: string;
	ProgramList: ProgramList;
	IdList: IdList;
	AkaList: AkaList;
	AddressList: AddressList;
	NationalityList: NationalityList;
	CitizenshipList: CitizenshipList;
	DateOfBirthList: DateOfBirthList;
	PlaceOfBirthList: PlaceOfBirthList;
	VesselInfo: VesselInfo;
}

// SdnList ...
export class SdnList {
	PublshInformation: PublshInformation;
	SdnEntry: Array<SdnEntry>;
}

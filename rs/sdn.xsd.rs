// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// PublshInformation ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct PublshInformation {
	#[serde(rename = "Publish_Date")]
	pub publish_date: Option<String>,
	#[serde(rename = "Record_Count")]
	pub record_count: Option<i32>,
}


// ProgramList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ProgramList {
	#[serde(rename = "program")]
	pub program: Vec<String>,
}


// Id ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Id {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "idType")]
	pub id_type: Option<String>,
	#[serde(rename = "idNumber")]
	pub id_number: Option<String>,
	#[serde(rename = "idCountry")]
	pub id_country: Option<String>,
	#[serde(rename = "issueDate")]
	pub issue_date: Option<String>,
	#[serde(rename = "expirationDate")]
	pub expiration_date: Option<String>,
}


// IdList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct IdList {
	#[serde(rename = "id")]
	pub id: Vec<Id>,
}


// Aka ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Aka {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "type")]
	pub type_attr: String,
	#[serde(rename = "category")]
	pub category: String,
	#[serde(rename = "lastName")]
	pub last_name: Option<String>,
	#[serde(rename = "firstName")]
	pub first_name: Option<String>,
}


// AkaList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct AkaList {
	#[serde(rename = "aka")]
	pub aka: Vec<Aka>,
}


// Address ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Address {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "address1")]
	pub address1: Option<String>,
	#[serde(rename = "address2")]
	pub address2: Option<String>,
	#[serde(rename = "address3")]
	pub address3: Option<String>,
	#[serde(rename = "city")]
	pub city: Option<String>,
	#[serde(rename = "stateOrProvince")]
	pub state_or_province: Option<String>,
	#[serde(rename = "postalCode")]
	pub postal_code: Option<String>,
	#[serde(rename = "country")]
	pub country: Option<String>,
}


// AddressList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct AddressList {
	#[serde(rename = "address")]
	pub address: Vec<Address>,
}


// Nationality ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Nationality {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "country")]
	pub country: String,
	#[serde(rename = "mainEntry")]
	pub main_entry: bool,
}


// NationalityList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct NationalityList {
	#[serde(rename = "nationality")]
	pub nationality: Vec<Nationality>,
}


// Citizenship ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Citizenship {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "country")]
	pub country: String,
	#[serde(rename = "mainEntry")]
	pub main_entry: bool,
}


// CitizenshipList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CitizenshipList {
	#[serde(rename = "citizenship")]
	pub citizenship: Vec<Citizenship>,
}


// DateOfBirthItem ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DateOfBirthItem {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "dateOfBirth")]
	pub date_of_birth: String,
	#[serde(rename = "mainEntry")]
	pub main_entry: bool,
}


// DateOfBirthList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DateOfBirthList {
	#[serde(rename = "dateOfBirthItem")]
	pub date_of_birth_item: Vec<DateOfBirthItem>,
}


// PlaceOfBirthItem ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct PlaceOfBirthItem {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "placeOfBirth")]
	pub place_of_birth: String,
	#[serde(rename = "mainEntry")]
	pub main_entry: bool,
}


// PlaceOfBirthList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct PlaceOfBirthList {
	#[serde(rename = "placeOfBirthItem")]
	pub place_of_birth_item: Vec<PlaceOfBirthItem>,
}


// VesselInfo ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct VesselInfo {
	#[serde(rename = "callSign")]
	pub call_sign: Option<String>,
	#[serde(rename = "vesselType")]
	pub vessel_type: Option<String>,
	#[serde(rename = "vesselFlag")]
	pub vessel_flag: Option<String>,
	#[serde(rename = "vesselOwner")]
	pub vessel_owner: Option<String>,
	#[serde(rename = "tonnage")]
	pub tonnage: Option<i32>,
	#[serde(rename = "grossRegisteredTonnage")]
	pub gross_registered_tonnage: Option<i32>,
}


// SdnEntry ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SdnEntry {
	#[serde(rename = "uid")]
	pub uid: i32,
	#[serde(rename = "firstName")]
	pub first_name: Option<String>,
	#[serde(rename = "lastName")]
	pub last_name: String,
	#[serde(rename = "title")]
	pub title: Option<String>,
	#[serde(rename = "sdnType")]
	pub sdn_type: String,
	#[serde(rename = "remarks")]
	pub remarks: Option<String>,
	#[serde(rename = "programList")]
	pub program_list: ProgramList,
	#[serde(rename = "idList")]
	pub id_list: Option<IdList>,
	#[serde(rename = "akaList")]
	pub aka_list: Option<AkaList>,
	#[serde(rename = "addressList")]
	pub address_list: Option<AddressList>,
	#[serde(rename = "nationalityList")]
	pub nationality_list: Option<NationalityList>,
	#[serde(rename = "citizenshipList")]
	pub citizenship_list: Option<CitizenshipList>,
	#[serde(rename = "dateOfBirthList")]
	pub date_of_birth_list: Option<DateOfBirthList>,
	#[serde(rename = "placeOfBirthList")]
	pub place_of_birth_list: Option<PlaceOfBirthList>,
	#[serde(rename = "vesselInfo")]
	pub vessel_info: Option<VesselInfo>,
}


// SdnList ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SdnList {
	#[serde(rename = "publshInformation")]
	pub publsh_information: PublshInformation,
	#[serde(rename = "sdnEntry")]
	pub sdn_entry: Vec<SdnEntry>,
}

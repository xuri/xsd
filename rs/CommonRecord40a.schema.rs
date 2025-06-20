// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// Software ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Software {
	#[serde(rename = "SoftwareProvider")]
	pub software_provider: Option<char>,
	#[serde(rename = "SoftwareVersion")]
	pub software_version: Option<char>,
}


// TransmissionData ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct TransmissionData {
	#[serde(rename = "DocumentID")]
	pub document_id: char,
	#[serde(rename = "CreatedDateTime")]
	pub created_date_time: u8,
	#[serde(rename = "Software")]
	pub software: Option<char>,
	#[serde(rename = "FullResponseCode")]
	pub full_response_code: Option<char>,
}


// CommonRecordType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CommonRecordType {
	#[serde(rename = "TransmissionData")]
	pub transmission_data: char,
	#[serde(rename = "Receipt")]
	pub receipt: Option<u8>,
}

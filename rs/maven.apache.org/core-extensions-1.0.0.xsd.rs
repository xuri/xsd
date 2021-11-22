// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// extensions is Extensions to load.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct extensions {
	#[serde(rename = "extensions")]
	pub extensions: CoreExtensions,
}


// CoreExtensions is A set of build extensions to use from this project.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CoreExtensions {
	#[serde(rename = "extension")]
	pub extension: Vec<CoreExtension>,
}


// CoreExtension is The version of the extension.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CoreExtension {
	#[serde(rename = "groupId")]
	pub group_id: String,
	#[serde(rename = "artifactId")]
	pub artifact_id: String,
	#[serde(rename = "version")]
	pub version: String,
}

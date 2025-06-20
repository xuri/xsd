// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// supplemental_data_models is Root element of the supplemental-models.xml file.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct supplemental_data_models {
	#[serde(rename = "supplementalDataModels")]
	pub supplemental_data_models: SupplementalDataModel,
}


// SupplementalDataModel is Snippets of POM xml files used to supplement the data model.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SupplementalDataModel {
	#[serde(rename = "supplement")]
	pub supplement: Vec<Supplement>,
}


// Project is Snippets of POM xml files used to supplement the data model.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Project {
}


// Supplement is A single supplement
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Supplement {
	#[serde(rename = "project")]
	pub project: Option<Project>,
}

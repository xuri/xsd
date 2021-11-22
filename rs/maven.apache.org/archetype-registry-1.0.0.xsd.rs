// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// archetyperegistry is 0.0.0+
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct archetyperegistry {
	#[serde(rename = "archetype-registry")]
	pub archetyperegistry: ArchetypeRegistry,
}


// Languages ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Languages {
	#[serde(rename = "Language")]
	pub language: Vec<String>,
}


// FilteredExtensions ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct FilteredExtensions {
	#[serde(rename = "FilteredExtension")]
	pub filtered_extension: Vec<String>,
}


// ArchetypeRegistry is 0.0.0+
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ArchetypeRegistry {
	#[serde(rename = "Languages")]
	pub languages: Languages,
	#[serde(rename = "FilteredExtensions")]
	pub filtered_extensions: FilteredExtensions,
}

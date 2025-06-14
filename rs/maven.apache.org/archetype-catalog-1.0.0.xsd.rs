// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// archetypecatalog is 0.0.0+
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct archetypecatalog {
	#[serde(rename = "archetype-catalog")]
	pub archetypecatalog: ArchetypeCatalog,
}


// Archetypes is List of Acthetypes available in this catalog.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Archetypes {
	#[serde(rename = "archetype")]
	pub archetype: Vec<Archetype>,
}


// ArchetypeCatalog is 0.0.0+
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ArchetypeCatalog {
	#[serde(rename = "archetypes")]
	pub archetypes: Archetypes,
}


// Archetype is The description of the archetype.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Archetype {
	#[serde(rename = "groupId")]
	pub group_id: String,
	#[serde(rename = "artifactId")]
	pub artifact_id: String,
	#[serde(rename = "version")]
	pub version: String,
	#[serde(rename = "repository")]
	pub repository: String,
	#[serde(rename = "description")]
	pub description: String,
}

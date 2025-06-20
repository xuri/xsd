// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

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
	pub archetypes: Option<Archetypes>,
}


// Archetype is The description of the archetype.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Archetype {
	#[serde(rename = "groupId")]
	pub group_id: Option<String>,
	#[serde(rename = "artifactId")]
	pub artifact_id: Option<String>,
	#[serde(rename = "version")]
	pub version: Option<String>,
	#[serde(rename = "repository")]
	pub repository: Option<String>,
	#[serde(rename = "description")]
	pub description: Option<String>,
}

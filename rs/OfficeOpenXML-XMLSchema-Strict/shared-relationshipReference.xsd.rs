// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// STRelationshipId ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STRelationshipId {
	#[serde(rename = "ST_RelationshipId")]
	pub st_relationship_id: String,
}


// id ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct id {
	#[serde(rename = "id")]
	pub id: String,
}


// embed ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct embed {
	#[serde(rename = "embed")]
	pub embed: String,
}


// link ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct link {
	#[serde(rename = "link")]
	pub link: String,
}


// dm ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct dm {
	#[serde(rename = "dm")]
	pub dm: String,
}


// lo ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct lo {
	#[serde(rename = "lo")]
	pub lo: String,
}


// qs ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct qs {
	#[serde(rename = "qs")]
	pub qs: String,
}


// cs ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct cs {
	#[serde(rename = "cs")]
	pub cs: String,
}


// blip ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct blip {
	#[serde(rename = "blip")]
	pub blip: String,
}


// pict ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct pict {
	#[serde(rename = "pict")]
	pub pict: String,
}


// href ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct href {
	#[serde(rename = "href")]
	pub href: String,
}


// top_left ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct top_left {
	#[serde(rename = "topLeft")]
	pub top_left: String,
}


// top_right ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct top_right {
	#[serde(rename = "topRight")]
	pub top_right: String,
}


// bottom_left ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct bottom_left {
	#[serde(rename = "bottomLeft")]
	pub bottom_left: String,
}


// bottom_right ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct bottom_right {
	#[serde(rename = "bottomRight")]
	pub bottom_right: String,
}

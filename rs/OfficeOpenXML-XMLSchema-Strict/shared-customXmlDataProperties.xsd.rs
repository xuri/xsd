// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// CTDatastoreSchemaRef ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDatastoreSchemaRef {
	#[serde(rename = "uri")]
	pub uri: String,
}


// CTDatastoreSchemaRefs ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDatastoreSchemaRefs {
	#[serde(rename = "schemaRef")]
	pub schema_ref: Vec<CTDatastoreSchemaRef>,
}


// CTDatastoreItem ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDatastoreItem {
	#[serde(rename = "itemID")]
	pub item_id: String,
	#[serde(rename = "schemaRefs")]
	pub schema_refs: Option<CTDatastoreSchemaRefs>,
}


// datastore_item ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct datastore_item {
	#[serde(rename = "datastoreItem")]
	pub datastore_item: CTDatastoreItem,
}

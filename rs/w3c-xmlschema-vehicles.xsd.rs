// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// Vehicle ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Vehicle {
}


// Car ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Car {
	#[serde(flatten)]
	pub vehicle: Vehicle,
}


// Plane ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Plane {
	#[serde(flatten)]
	pub vehicle: Vehicle,
}


// transport ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct transport {
	#[serde(rename = "transport")]
	pub transport: Vehicle,
}

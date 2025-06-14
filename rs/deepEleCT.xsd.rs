// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// B ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct B {
	#[serde(rename = "C")]
	pub c: char,
}


// A ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct A {
	#[serde(rename = "B")]
	pub b: B,
}


// FileUpload ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct FileUpload {
	#[serde(rename = "A")]
	pub a: Vec<A>,
}

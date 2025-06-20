// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// properties ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct properties {
	#[serde(rename = "Properties")]
	pub properties: CTProperties,
}


// CTProperties ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTProperties {
	#[serde(rename = "Template")]
	pub template: Option<String>,
	#[serde(rename = "Manager")]
	pub manager: Option<String>,
	#[serde(rename = "Company")]
	pub company: Option<String>,
	#[serde(rename = "Pages")]
	pub pages: Option<i32>,
	#[serde(rename = "Words")]
	pub words: Option<i32>,
	#[serde(rename = "Characters")]
	pub characters: Option<i32>,
	#[serde(rename = "PresentationFormat")]
	pub presentation_format: Option<String>,
	#[serde(rename = "Lines")]
	pub lines: Option<i32>,
	#[serde(rename = "Paragraphs")]
	pub paragraphs: Option<i32>,
	#[serde(rename = "Slides")]
	pub slides: Option<i32>,
	#[serde(rename = "Notes")]
	pub notes: Option<i32>,
	#[serde(rename = "TotalTime")]
	pub total_time: Option<i32>,
	#[serde(rename = "HiddenSlides")]
	pub hidden_slides: Option<i32>,
	#[serde(rename = "MMClips")]
	pub mm_clips: Option<i32>,
	#[serde(rename = "ScaleCrop")]
	pub scale_crop: Option<bool>,
	#[serde(rename = "HeadingPairs")]
	pub heading_pairs: Option<CTVectorVariant>,
	#[serde(rename = "TitlesOfParts")]
	pub titles_of_parts: Option<CTVectorLpstr>,
	#[serde(rename = "LinksUpToDate")]
	pub links_up_to_date: Option<bool>,
	#[serde(rename = "CharactersWithSpaces")]
	pub characters_with_spaces: Option<i32>,
	#[serde(rename = "SharedDoc")]
	pub shared_doc: Option<bool>,
	#[serde(rename = "HyperlinkBase")]
	pub hyperlink_base: Option<String>,
	#[serde(rename = "HLinks")]
	pub h_links: Option<CTVectorVariant>,
	#[serde(rename = "HyperlinksChanged")]
	pub hyperlinks_changed: Option<bool>,
	#[serde(rename = "DigSig")]
	pub dig_sig: Option<CTDigSigBlob>,
	#[serde(rename = "Application")]
	pub application: Option<String>,
	#[serde(rename = "AppVersion")]
	pub app_version: Option<String>,
	#[serde(rename = "DocSecurity")]
	pub doc_security: Option<i32>,
}


// CTVectorVariant ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTVectorVariant {
	#[serde(rename = "vt:vector")]
	pub vt_vector: CTVector,
}


// CTVectorLpstr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTVectorLpstr {
	#[serde(rename = "vt:vector")]
	pub vt_vector: CTVector,
}


// CTDigSigBlob ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDigSigBlob {
	#[serde(rename = "vt:blob")]
	pub vt_blob: String,
}

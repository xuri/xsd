// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// document is Describes the overall document model.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct document {
	#[serde(rename = "document")]
	pub document: DocumentModel,
}


// DocumentModel is The meta data to construct a cover page for the document.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentModel {
	#[serde(rename = "outputName")]
	pub output_name: Option<String>,
	#[serde(rename = "meta")]
	pub meta: DocumentMeta,
	#[serde(rename = "toc")]
	pub toc: DocumentTOC,
	#[serde(rename = "cover")]
	pub cover: DocumentCover,
}


// DocumentTOC is TOC item.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentTOC {
	#[serde(rename = "name")]
	pub name: Option<String>,
	#[serde(rename = "depth")]
	pub depth: Option<i32>,
	#[serde(rename = "item")]
	pub item: Vec<DocumentTOCItem>,
}


// DocumentTOCItem is A table of content item containing sub-items.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentTOCItem {
	#[serde(rename = "name")]
	pub name: Option<String>,
	#[serde(rename = "ref")]
	pub ref_attr: Option<String>,
	#[serde(rename = "collapse")]
	pub collapse: Option<bool>,
	#[serde(rename = "item")]
	pub item: Vec<DocumentTOCItem>,
}


// DocumentCover is The location of an image file that represents the company logo.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentCover {
	#[serde(rename = "coverTitle")]
	pub cover_title: String,
	#[serde(rename = "coverSubTitle")]
	pub cover_sub_title: String,
	#[serde(rename = "coverVersion")]
	pub cover_version: String,
	#[serde(rename = "coverType")]
	pub cover_type: String,
	#[serde(rename = "coverDate")]
	pub cover_date: u8,
	#[serde(rename = "author")]
	pub author: Vec<DocumentAuthor>,
	#[serde(rename = "projectName")]
	pub project_name: String,
	#[serde(rename = "projectLogo")]
	pub project_logo: String,
	#[serde(rename = "companyName")]
	pub company_name: String,
	#[serde(rename = "companyLogo")]
	pub company_logo: String,
}


// DocumentAuthor is The state or province of the address of the author, if applicable.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentAuthor {
	#[serde(rename = "firstName")]
	pub first_name: String,
	#[serde(rename = "lastName")]
	pub last_name: String,
	#[serde(rename = "initials")]
	pub initials: String,
	#[serde(rename = "title")]
	pub title: String,
	#[serde(rename = "position")]
	pub position: String,
	#[serde(rename = "email")]
	pub email: String,
	#[serde(rename = "phoneNumber")]
	pub phone_number: String,
	#[serde(rename = "faxNumber")]
	pub fax_number: String,
	#[serde(rename = "companyName")]
	pub company_name: String,
	#[serde(rename = "street")]
	pub street: String,
	#[serde(rename = "city")]
	pub city: String,
	#[serde(rename = "postalCode")]
	pub postal_code: String,
	#[serde(rename = "country")]
	pub country: String,
	#[serde(rename = "state")]
	pub state: String,
}


// Authors ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Authors {
	#[serde(rename = "author")]
	pub author: Vec<DocumentAuthor>,
}


// KeyWords ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct KeyWords {
	#[serde(rename = "keyWord")]
	pub key_word: Vec<String>,
}


// DocumentMeta is A shortcut for the unique author of the document, usually as a String of "firstName lastName". For
//             more authors, you could use the <authors/> tag.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentMeta {
	#[serde(rename = "title")]
	pub title: String,
	#[serde(rename = "author")]
	pub author: String,
	#[serde(rename = "authors")]
	pub authors: Authors,
	#[serde(rename = "subject")]
	pub subject: String,
	#[serde(rename = "keywords")]
	pub keywords: String,
	#[serde(rename = "keyWords")]
	pub key_words: KeyWords,
	#[serde(rename = "pageSize")]
	pub page_size: String,
	#[serde(rename = "generator")]
	pub generator: String,
	#[serde(rename = "description")]
	pub description: String,
	#[serde(rename = "initialCreator")]
	pub initial_creator: String,
	#[serde(rename = "creator")]
	pub creator: String,
	#[serde(rename = "printedBy")]
	pub printed_by: String,
	#[serde(rename = "creationDate")]
	pub creation_date: u8,
	#[serde(rename = "date")]
	pub date: u8,
	#[serde(rename = "printDate")]
	pub print_date: u8,
	#[serde(rename = "template")]
	pub template: DocumentTemplate,
	#[serde(rename = "hyperlinkBehaviour")]
	pub hyperlink_behaviour: DocumentHyperlinkBehaviour,
	#[serde(rename = "language")]
	pub language: String,
	#[serde(rename = "editingCycles")]
	pub editing_cycles: i64,
	#[serde(rename = "editingDuration")]
	pub editing_duration: i64,
	#[serde(rename = "documentStatistic")]
	pub document_statistic: DocumentStatistic,
	#[serde(rename = "confidential")]
	pub confidential: bool,
	#[serde(rename = "draft")]
	pub draft: bool,
}


// DocumentTemplate is A template that was used to create the document.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentTemplate {
	#[serde(rename = "href")]
	pub href: Option<String>,
	#[serde(rename = "title")]
	pub title: Option<String>,
	#[serde(rename = "date")]
	pub date: Option<u8>,
}


// DocumentStatistic is Statistical attributes of the document.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentStatistic {
	#[serde(rename = "pageCount")]
	pub page_count: Option<i64>,
	#[serde(rename = "tableCount")]
	pub table_count: Option<i64>,
	#[serde(rename = "drawCount")]
	pub draw_count: Option<i64>,
	#[serde(rename = "imageCount")]
	pub image_count: Option<i64>,
	#[serde(rename = "objectCount")]
	pub object_count: Option<i64>,
	#[serde(rename = "oleObjectCount")]
	pub ole_object_count: Option<i64>,
	#[serde(rename = "paragraphCount")]
	pub paragraph_count: Option<i64>,
	#[serde(rename = "wordCount")]
	pub word_count: Option<i64>,
	#[serde(rename = "characterCount")]
	pub character_count: Option<i64>,
	#[serde(rename = "rowCount")]
	pub row_count: Option<i64>,
	#[serde(rename = "frameCount")]
	pub frame_count: Option<i64>,
	#[serde(rename = "sentenceCount")]
	pub sentence_count: Option<i64>,
	#[serde(rename = "syllableCount")]
	pub syllable_count: Option<i64>,
	#[serde(rename = "nonWhitespaceCharacterCount")]
	pub non_whitespace_character_count: Option<i64>,
}


// DocumentHyperlinkBehaviour is Specifies the default behavior for hyperlinks in the document.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DocumentHyperlinkBehaviour {
	#[serde(rename = "targetFrame")]
	pub target_frame: Option<String>,
}
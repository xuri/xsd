// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// SectorType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SectorType {
	#[serde(rename = "sectorType")]
	pub sector_type: String,
}


// UnitType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct UnitType {
	#[serde(rename = "unitType")]
	pub unit_type: String,
}


// FormatType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct FormatType {
	#[serde(rename = "formatType")]
	pub format_type: String,
}


// ProductType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ProductType {
	#[serde(rename = "productType")]
	pub product_type: String,
}


// LatLonPairType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct LatLonPairType {
	#[serde(rename = "latLonPairType")]
	pub lat_lon_pair_type: String,
}


// ListLatLonType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ListLatLonType {
	#[serde(rename = "listLatLonType")]
	pub list_lat_lon_type: String,
}


// ZipCodeType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ZipCodeType {
	#[serde(rename = "zipCodeType")]
	pub zip_code_type: String,
}


// ZipCodeListType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ZipCodeListType {
	#[serde(rename = "zipCodeListType")]
	pub zip_code_list_type: String,
}


// FeatureTypeType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct FeatureTypeType {
	#[serde(rename = "featureTypeType")]
	pub feature_type_type: String,
}


// CompTypeType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CompTypeType {
	#[serde(rename = "compTypeType")]
	pub comp_type_type: String,
}


// ListCityNamesType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ListCityNamesType {
	#[serde(rename = "listCityNamesType")]
	pub list_city_names_type: String,
}


// DisplayLevelType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct DisplayLevelType {
	#[serde(rename = "displayLevelType")]
	pub display_level_type: i32,
}


// WeatherParametersType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct WeatherParametersType {
	#[serde(rename = "maxt")]
	pub maxt: bool,
	#[serde(rename = "mint")]
	pub mint: bool,
	#[serde(rename = "temp")]
	pub temp: bool,
	#[serde(rename = "dew")]
	pub dew: bool,
	#[serde(rename = "pop12")]
	pub pop12: bool,
	#[serde(rename = "qpf")]
	pub qpf: bool,
	#[serde(rename = "sky")]
	pub sky: bool,
	#[serde(rename = "snow")]
	pub snow: bool,
	#[serde(rename = "wspd")]
	pub wspd: bool,
	#[serde(rename = "wdir")]
	pub wdir: bool,
	#[serde(rename = "wx")]
	pub wx: bool,
	#[serde(rename = "waveh")]
	pub waveh: bool,
	#[serde(rename = "icons")]
	pub icons: bool,
	#[serde(rename = "rh")]
	pub rh: bool,
	#[serde(rename = "appt")]
	pub appt: bool,
	#[serde(rename = "incw34")]
	pub incw34: bool,
	#[serde(rename = "incw50")]
	pub incw50: bool,
	#[serde(rename = "incw64")]
	pub incw64: bool,
	#[serde(rename = "cumw34")]
	pub cumw34: bool,
	#[serde(rename = "cumw50")]
	pub cumw50: bool,
	#[serde(rename = "cumw64")]
	pub cumw64: bool,
	#[serde(rename = "critfireo")]
	pub critfireo: bool,
	#[serde(rename = "dryfireo")]
	pub dryfireo: bool,
	#[serde(rename = "conhazo")]
	pub conhazo: bool,
	#[serde(rename = "ptornado")]
	pub ptornado: bool,
	#[serde(rename = "phail")]
	pub phail: bool,
	#[serde(rename = "ptstmwinds")]
	pub ptstmwinds: bool,
	#[serde(rename = "pxtornado")]
	pub pxtornado: bool,
	#[serde(rename = "pxhail")]
	pub pxhail: bool,
	#[serde(rename = "pxtstmwinds")]
	pub pxtstmwinds: bool,
	#[serde(rename = "ptotsvrtstm")]
	pub ptotsvrtstm: bool,
	#[serde(rename = "pxtotsvrtstm")]
	pub pxtotsvrtstm: bool,
	#[serde(rename = "tmpabv14d")]
	pub tmpabv14d: bool,
	#[serde(rename = "tmpblw14d")]
	pub tmpblw14d: bool,
	#[serde(rename = "tmpabv30d")]
	pub tmpabv30d: bool,
	#[serde(rename = "tmpblw30d")]
	pub tmpblw30d: bool,
	#[serde(rename = "tmpabv90d")]
	pub tmpabv90d: bool,
	#[serde(rename = "tmpblw90d")]
	pub tmpblw90d: bool,
	#[serde(rename = "prcpabv14d")]
	pub prcpabv14d: bool,
	#[serde(rename = "prcpblw14d")]
	pub prcpblw14d: bool,
	#[serde(rename = "prcpabv30d")]
	pub prcpabv30d: bool,
	#[serde(rename = "prcpblw30d")]
	pub prcpblw30d: bool,
	#[serde(rename = "prcpabv90d")]
	pub prcpabv90d: bool,
	#[serde(rename = "prcpblw90d")]
	pub prcpblw90d: bool,
	#[serde(rename = "precipa_r")]
	pub precipa_r: bool,
	#[serde(rename = "sky_r")]
	pub sky_r: bool,
	#[serde(rename = "td_r")]
	pub td_r: bool,
	#[serde(rename = "temp_r")]
	pub temp_r: bool,
	#[serde(rename = "wdir_r")]
	pub wdir_r: bool,
	#[serde(rename = "wspd_r")]
	pub wspd_r: bool,
	#[serde(rename = "wwa")]
	pub wwa: bool,
	#[serde(rename = "wgust")]
	pub wgust: bool,
	#[serde(rename = "iceaccum")]
	pub iceaccum: bool,
	#[serde(rename = "maxrh")]
	pub maxrh: bool,
	#[serde(rename = "minrh")]
	pub minrh: bool,
}

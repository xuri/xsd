// Code generated by xgen. DO NOT EDIT.

// SectorType ...
export enum SectorType {
	conus = 'conus',
	nhemi = 'nhemi',
	alaska = 'alaska',
	guam = 'guam',
	hawaii = 'hawaii',
	puertori = 'puertori',
	npacocn = 'npacocn',
}

// UnitType ...
export enum UnitType {
	e = 'e',
	m = 'm',
}

// FormatType ...
export enum FormatType {
	24 hourly = '24 hourly',
	12 hourly = '12 hourly',
}

// ProductType ...
export enum ProductType {
	time-series = 'time-series',
	glance = 'glance',
}

// LatLonPairType ...
export type LatLonPairType = string;

// ListLatLonType ...
export type ListLatLonType = string;

// ZipCodeType ...
export type ZipCodeType = string;

// ZipCodeListType ...
export type ZipCodeListType = string;

// FeatureTypeType ...
export enum FeatureTypeType {
	Forecast_Gml2Point = 'Forecast_Gml2Point',
	Forecast_Gml2AllWx = 'Forecast_Gml2AllWx',
	Forecast_GmlsfPoint = 'Forecast_GmlsfPoint',
	Forecast_GmlObs = 'Forecast_GmlObs',
	NdfdMultiPointCoverage = 'NdfdMultiPointCoverage',
	Ndfd_KmlPoint = 'Ndfd_KmlPoint',
}

// CompTypeType ...
export enum CompTypeType {
	IsEqual = 'IsEqual',
	Between = 'Between',
	GreaterThan = 'GreaterThan',
	GreaterThanEqualTo = 'GreaterThanEqualTo',
	LessThan = 'LessThan',
	LessThanEqualTo = 'LessThanEqualTo',
}

// ListCityNamesType ...
export type ListCityNamesType = string;

// DisplayLevelType ...
export enum DisplayLevelType {
	Enum1 = 1,
	Enum2 = 2,
	Enum3 = 3,
	Enum4 = 4,
	Enum12 = 12,
	Enum34 = 34,
	Enum1234 = 1234,
}

// WeatherParametersType ...
export class WeatherParametersType {
	Maxt: boolean;
	Mint: boolean;
	Temp: boolean;
	Dew: boolean;
	Pop12: boolean;
	Qpf: boolean;
	Sky: boolean;
	Snow: boolean;
	Wspd: boolean;
	Wdir: boolean;
	Wx: boolean;
	Waveh: boolean;
	Icons: boolean;
	Rh: boolean;
	Appt: boolean;
	Incw34: boolean;
	Incw50: boolean;
	Incw64: boolean;
	Cumw34: boolean;
	Cumw50: boolean;
	Cumw64: boolean;
	Critfireo: boolean;
	Dryfireo: boolean;
	Conhazo: boolean;
	Ptornado: boolean;
	Phail: boolean;
	Ptstmwinds: boolean;
	Pxtornado: boolean;
	Pxhail: boolean;
	Pxtstmwinds: boolean;
	Ptotsvrtstm: boolean;
	Pxtotsvrtstm: boolean;
	Tmpabv14d: boolean;
	Tmpblw14d: boolean;
	Tmpabv30d: boolean;
	Tmpblw30d: boolean;
	Tmpabv90d: boolean;
	Tmpblw90d: boolean;
	Prcpabv14d: boolean;
	Prcpblw14d: boolean;
	Prcpabv30d: boolean;
	Prcpblw30d: boolean;
	Prcpabv90d: boolean;
	Prcpblw90d: boolean;
	Precipa_r: boolean;
	Sky_r: boolean;
	Td_r: boolean;
	Temp_r: boolean;
	Wdir_r: boolean;
	Wspd_r: boolean;
	Wwa: boolean;
	Wgust: boolean;
	Iceaccum: boolean;
	Maxrh: boolean;
	Minrh: boolean;
}

// Code generated by xgen. DO NOT EDIT.

package schema

// DepthValueRecorded is An optional collection of elements relating to recorded sample depth.
type DepthValueRecorded struct {
	DepthValue      float64     `xml:"DepthValue"`
	DepthValueUnits interface{} `xml:"DepthValueUnits"`
	DepthRelativeTo interface{} `xml:"DepthRelativeTo"`
}

// PurgedVolumeRecorded is An optional collection of elements relating to recorded sample volume.
type PurgedVolumeRecorded struct {
	PurgedVolume      float64     `xml:"PurgedVolume"`
	PurgedVolumeUnits interface{} `xml:"PurgedVolumeUnits"`
}

// Measurement is This repeating element contains the structure of a Water Quality measurement.
type Measurement struct {
	DeterminandName interface{} `xml:"DeterminandName"`
	ResultType      interface{} `xml:"ResultType"`
	ResultValue     float64     `xml:"ResultValue,omitempty"`
	ResultUnits     interface{} `xml:"ResultUnits,omitempty"`
	Qualifier       interface{} `xml:"Qualifier,omitempty"`
	Comment         interface{} `xml:"Comment,omitempty"`
}

// Sample is This element contains the structure of a collection of samples.
type Sample struct {
	Sampler                        interface{}           `xml:"Sampler,omitempty"`
	SampleType                     interface{}           `xml:"SampleType"`
	CustomerSamplePointName        interface{}           `xml:"CustomerSamplePointName"`
	SampleDateTime                 string                `xml:"SampleDateTime"`
	PurposeTypeName                interface{}           `xml:"PurposeTypeName"`
	MaterialName                   interface{}           `xml:"MaterialName"`
	Mechanism                      interface{}           `xml:"Mechanism"`
	CustomersLabSampleRef          interface{}           `xml:"CustomersLabSampleRef"`
	CustomersLabSampleRefSecondary []interface{}         `xml:"CustomersLabSampleRefSecondary,omitempty"`
	Comment                        interface{}           `xml:"Comment,omitempty"`
	LabName                        interface{}           `xml:"LabName"`
	AnalysisCompleteDateTime       string                `xml:"AnalysisCompleteDateTime"`
	DepthValueRecorded             *DepthValueRecorded   `xml:"DepthValueRecorded,omitempty"`
	PurgedVolumeRecorded           *PurgedVolumeRecorded `xml:"PurgedVolumeRecorded,omitempty"`
	Measurement                    []*Measurement        `xml:"Measurement"`
}

// FileUpload ...
type FileUpload struct {
	Source                      interface{} `xml:"Source"`
	Sample                      []*Sample   `xml:"Sample"`
	RegulatedCustomerIdentifier interface{} `xml:"RegulatedCustomerIdentifier"`
	CustomerReference           interface{} `xml:"CustomerReference,omitempty"`
}

// MandatoryStringType ...
type MandatoryStringType string

// EmailFieldType ...
type EmailFieldType string

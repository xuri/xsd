// Code generated by xgen. DO NOT EDIT.

// DepthValueRecorded is An optional collection of elements relating to recorded sample depth.
typedef struct {
	float DepthValue;
	void DepthValueUnits;
	void DepthRelativeTo;
} DepthValueRecorded;

// PurgedVolumeRecorded is An optional collection of elements relating to recorded sample volume.
typedef struct {
	float PurgedVolume;
	void PurgedVolumeUnits;
} PurgedVolumeRecorded;

// Measurement is This repeating element contains the structure of a Water Quality measurement.
typedef struct {
	void DeterminandName;
	void ResultType;
	float ResultValue;
	void ResultUnits;
	void Qualifier;
	void Comment;
} Measurement;

// Sample is This element contains the structure of a collection of samples.
typedef struct {
	void Sampler;
	void SampleType;
	void CustomerSamplePointName;
	char SampleDateTime;
	void PurposeTypeName;
	void MaterialName;
	void Mechanism;
	void CustomersLabSampleRef;
	void CustomersLabSampleRefSecondary[];
	void Comment;
	void LabName;
	char AnalysisCompleteDateTime;
	DepthValueRecorded DepthValueRecorded;
	PurgedVolumeRecorded PurgedVolumeRecorded;
	Measurement Measurement[];
} Sample;

// FileUpload ...
typedef struct {
	void Source;
	Sample Sample[];
	void RegulatedCustomerIdentifier;
	void CustomerReference;
} FileUpload;

// MandatoryStringType ...
typedef char MandatoryStringType;

// EmailFieldType ...
typedef char EmailFieldType;

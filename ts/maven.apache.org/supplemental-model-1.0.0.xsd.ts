// Code generated by xgen. DO NOT EDIT.

// SupplementalDataModels is Root element of the supplemental-models.xml file.
export type SupplementalDataModels = SupplementalDataModel;

// SupplementalDataModel is Snippets of POM xml files used to supplement the data model.
export class SupplementalDataModel {
	Supplement: Array<Supplement>;
}

// Project is Snippets of POM xml files used to supplement the data model.
export class Project {
}

// Supplement is A single supplement
export class Supplement {
	Project: Project;
}

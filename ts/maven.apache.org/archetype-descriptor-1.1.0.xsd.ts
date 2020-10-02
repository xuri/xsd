// Code generated by xgen. DO NOT EDIT.

export type Archetypedescriptor = ArchetypeDescriptor;

export class RequiredProperties {
	RequiredProperty: Array<RequiredProperty>;
}

export class FileSets {
	FileSet: Array<FileSet>;
}

export class Modules {
	Module: Array<ModuleDescriptor>;
}

export class ArchetypeDescriptor {
	NameAttr: string;
	PartialAttr: boolean | null;
	RequiredProperties: RequiredProperties;
	FileSets: FileSets;
	Modules: Modules;
}

export class RequiredProperty {
	KeyAttr: string;
	DefaultValue: string;
	ValidationRegex: string;
}

export class ModuleDescriptor {
	IdAttr: string;
	DirAttr: string;
	NameAttr: string;
	FileSets: FileSets;
	Modules: Modules;
}

export class Includes {
	Include: string;
}

export class Excludes {
	Exclude: string;
}

export class FileSet {
	FilteredAttr: boolean | null;
	PackagedAttr: boolean | null;
	EncodingAttr: string | null;
	Directory: string;
	Includes: Includes;
	Excludes: Excludes;
}
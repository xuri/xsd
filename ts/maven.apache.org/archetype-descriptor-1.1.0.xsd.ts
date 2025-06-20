// Code generated by xgen. DO NOT EDIT.

// Archetypedescriptor is 1.0.0+
export type Archetypedescriptor = ArchetypeDescriptor;

// RequiredProperties is List of required properties to generate a project from this archetype.
export class RequiredProperties {
	RequiredProperty: Array<RequiredProperty>;
}

// FileSets is File sets definition.
export class FileSets {
	FileSet: Array<FileSet>;
}

// Modules is Modules definition.
export class Modules {
	Module: Array<ModuleDescriptor>;
}

// ArchetypeDescriptor is 1.0.0+
export class ArchetypeDescriptor {
	NameAttr: string;
	PartialAttr: boolean | null;
	RequiredProperties: RequiredProperties;
	FileSets: FileSets;
	Modules: Modules;
}

// RequiredProperty is A regular expression used to validate the property.
export class RequiredProperty {
	KeyAttr: string;
	DefaultValue: string;
	ValidationRegex: string;
}

// ModuleDescriptor is 1.0.0+
export class ModuleDescriptor {
	IdAttr: string;
	DirAttr: string;
	NameAttr: string;
	FileSets: FileSets;
	Modules: Modules;
}

// Includes is Inclusion definition "à la" Ant.
export class Includes {
	Include: string;
}

// Excludes is Exclusion definition "à la" Ant.
export class Excludes {
	Exclude: string;
}

// FileSet is The directory where the files will be searched for, which is also the directory where the
//            project's files will be generated.
export class FileSet {
	FilteredAttr: boolean | null;
	PackagedAttr: boolean | null;
	EncodingAttr: string | null;
	Directory: string;
	Includes: Includes;
	Excludes: Excludes;
}

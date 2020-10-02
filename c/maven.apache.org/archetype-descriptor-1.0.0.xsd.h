// Code generated by xgen. DO NOT EDIT.

typedef ArchetypeDescriptor Archetypedescriptor;

typedef struct {
	RequiredProperty RequiredProperty[];
} RequiredProperties;

typedef struct {
	FileSet FileSet[];
} FileSets;

typedef struct {
	ModuleDescriptor Module[];
} Modules;

typedef struct {
	char NameAttr; // attr, optional
	bool PartialAttr; // attr, optional
	RequiredProperties RequiredProperties;
	FileSets FileSets;
	Modules Modules;
} ArchetypeDescriptor;

typedef struct {
	char Include[];
} Includes;

typedef struct {
	char Exclude[];
} Excludes;

typedef struct {
	bool FilteredAttr; // attr, optional
	bool PackagedAttr; // attr, optional
	char EncodingAttr; // attr, optional
	char Directory;
	Includes Includes;
	Excludes Excludes;
} FileSet;

typedef struct {
	char KeyAttr; // attr, optional
	char DefaultValue;
} RequiredProperty;

typedef struct {
	char IdAttr; // attr, optional
	char DirAttr; // attr, optional
	char NameAttr; // attr, optional
	FileSets FileSets;
	Modules Modules;
} ModuleDescriptor;
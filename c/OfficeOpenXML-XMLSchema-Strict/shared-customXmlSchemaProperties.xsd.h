// Code generated by xgen. DO NOT EDIT.

typedef struct {
	char UriAttr; // attr, optional
	char ManifestLocationAttr; // attr, optional
	char SchemaLocationAttr; // attr, optional
	char SchemaLanguageAttr; // attr, optional
} CT_Schema;

typedef struct {
	CT_Schema Schema[];
} CT_SchemaLibrary;

typedef CT_SchemaLibrary SchemaLibrary;
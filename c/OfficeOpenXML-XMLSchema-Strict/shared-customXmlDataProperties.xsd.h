// Code generated by xgen. DO NOT EDIT.

// CT_DatastoreSchemaRef ...
typedef struct {
	char UriAttr; // attr
} CT_DatastoreSchemaRef;

// CT_DatastoreSchemaRefs ...
typedef struct {
	CT_DatastoreSchemaRef SchemaRef[];
} CT_DatastoreSchemaRefs;

// CT_DatastoreItem ...
typedef struct {
	char ItemIDAttr; // attr
	CT_DatastoreSchemaRefs SchemaRefs;
} CT_DatastoreItem;

typedef CT_DatastoreItem DatastoreItem;

// Code generated by xgen. DO NOT EDIT.

// CT_DatastoreSchemaRef ...
export class CT_DatastoreSchemaRef {
	UriAttr: string;
}

// CT_DatastoreSchemaRefs ...
export class CT_DatastoreSchemaRefs {
	SchemaRef: Array<CT_DatastoreSchemaRef>;
}

// CT_DatastoreItem ...
export class CT_DatastoreItem {
	ItemIDAttr: string;
	SchemaRefs: CT_DatastoreSchemaRefs;
}

// DatastoreItem ...
export type DatastoreItem = CT_DatastoreItem;

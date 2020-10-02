// Code generated by xgen. DO NOT EDIT.

package schema;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;

public class CT_DatastoreSchemaRef {
	@XmlAttribute(name = "uri", required = true)
	protected StringAttr Uri;
}

public class CT_DatastoreSchemaRefs {
	@XmlElement(required = true, name = "schemaRef")
	protected List<CT_DatastoreSchemaRef> SchemaRef;
}

public class CT_DatastoreItem {
	@XmlAttribute(name = "itemID", required = true)
	protected StringAttr ItemID;
	@XmlElement(required = true, name = "schemaRefs")
	protected CT_DatastoreSchemaRefs SchemaRefs;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "datastoreItem")
public class DatastoreItem {
	protected CT_DatastoreItem DatastoreItem;
}

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

// MyType1 ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "myType1")
public class MyType1 {
	protected List<Byte> MyType1;
}

// MyType2 ...
public class MyType2 {
	@XmlAttribute(name = "length")
	protected IntegerAttr Length;
}

// MyType3 ...
public class MyType3 {
	@XmlAttribute(name = "length")
	protected IntegerAttr Length;
}

// MyType4 ...
public class MyType4 {
	@XmlElement(required = true, name = "title")
	protected String Title;
	@XmlElement(required = true, name = "blob")
	protected List<Byte> Blob;
	@XmlElement(required = true, name = "timestamp")
	protected Byte Timestamp;
}

// MyType5 ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "myType5")
public class MyType5 {
	protected String MyType5;
}

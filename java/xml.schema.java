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

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "lang")
public class Lang {
	protected String Lang;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "space")
public class Space {
	protected String Space;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "base")
public class Base {
	protected QName Base;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "id")
public class Id {
	protected String Id;
}

// SpecialAttrs ...
public class SpecialAttrs {
	@XmlAttribute(name = "xml:base")
	protected QNameAttr XmlBase;
	@XmlAttribute(name = "xml:lang")
	protected StringAttr XmlLang;
	@XmlAttribute(name = "xml:space")
	protected StringAttr XmlSpace;
	@XmlAttribute(name = "xml:id")
	protected StringAttr XmlId;
}

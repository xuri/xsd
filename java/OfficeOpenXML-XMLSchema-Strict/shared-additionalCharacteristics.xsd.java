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
import javax.xml.bind.annotation.XmlValue;

// CT_AdditionalCharacteristics ...
public class CT_AdditionalCharacteristics {
	@XmlElement(required = true, name = "characteristic")
	protected List<CT_Characteristic> Characteristic;
}

// CT_Characteristic ...
public class CT_Characteristic {
	@XmlAttribute(name = "name", required = true)
	protected String NameAttr;
	@XmlAttribute(name = "relation", required = true)
	protected String RelationAttr;
	@XmlAttribute(name = "val", required = true)
	protected String ValAttr;
	@XmlAttribute(name = "vocabulary")
	protected QName VocabularyAttr;
}

// ST_Relation ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Relation")
public class ST_Relation {
	protected String ST_Relation;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "additionalCharacteristics")
public class AdditionalCharacteristics {
	protected CT_AdditionalCharacteristics AdditionalCharacteristics;
}

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

// FinancialAwards ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "FinancialAwards")
public class FinancialAwards {
	protected String FinancialAwards;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "StudentLevelCode")
public class StudentLevelCode {
	protected String StudentLevelCode;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "SchoolNoteMessage")
public class SchoolNoteMessage {
	protected Float SchoolNoteMessage;
}

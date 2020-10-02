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
@XmlAttribute(required = true, name = "ST_Lang")
public class ST_Lang {
	protected String ST_Lang;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_HexColorRGB")
public class ST_HexColorRGB {
	protected List<Byte> ST_HexColorRGB;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Panose")
public class ST_Panose {
	protected List<Byte> ST_Panose;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_CalendarType")
public class ST_CalendarType {
	protected String ST_CalendarType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Guid")
public class ST_Guid {
	protected String ST_Guid;
}

public class ST_OnOff {
	@XmlElement(required = true)
	protected Boolean Boolean;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_String")
public class ST_String {
	protected String ST_String;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_XmlName")
public class ST_XmlName {
	protected String ST_XmlName;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_UnsignedDecimalNumber")
public class ST_UnsignedDecimalNumber {
	protected Long ST_UnsignedDecimalNumber;
}

public class ST_TwipsMeasure {
	@XmlElement(required = true)
	protected Long ST_UnsignedDecimalNumber;
	@XmlElement(required = true)
	protected ST_PositiveUniversalMeasure ST_PositiveUniversalMeasure;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_VerticalAlignRun")
public class ST_VerticalAlignRun {
	protected String ST_VerticalAlignRun;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Xstring")
public class ST_Xstring {
	protected String ST_Xstring;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_XAlign")
public class ST_XAlign {
	protected String ST_XAlign;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_YAlign")
public class ST_YAlign {
	protected String ST_YAlign;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_ConformanceClass")
public class ST_ConformanceClass {
	protected String ST_ConformanceClass;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_UniversalMeasure")
public class ST_UniversalMeasure {
	protected String ST_UniversalMeasure;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_PositiveUniversalMeasure")
public class ST_PositiveUniversalMeasure {
	protected String ST_PositiveUniversalMeasure;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Percentage")
public class ST_Percentage {
	protected String ST_Percentage;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_FixedPercentage")
public class ST_FixedPercentage {
	protected String ST_FixedPercentage;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_PositivePercentage")
public class ST_PositivePercentage {
	protected String ST_PositivePercentage;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_PositiveFixedPercentage")
public class ST_PositiveFixedPercentage {
	protected String ST_PositiveFixedPercentage;
}

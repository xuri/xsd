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
@XmlElement(required = true, name = "skin")
public class Skin {
	protected SkinModel Skin;
}

public class SkinModel {
	@XmlElement(required = true, name = "prerequisites")
	protected Prerequisites Prerequisites;
	@XmlElement(required = true, name = "encoding")
	protected String Encoding;
}

public class Prerequisites {
	@XmlElement(required = true, name = "doxia-sitetools")
	protected String Doxiasitetools;
}

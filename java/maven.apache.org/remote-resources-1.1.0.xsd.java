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
@XmlElement(required = true, name = "remoteResourcesBundle")
public class RemoteResourcesBundle {
	protected RemoteResourcesBundle RemoteResourcesBundle;
}

public class RemoteResources {
	@XmlElement(required = true, name = "remoteResource")
	protected List<String> RemoteResource;
}

public class RemoteResourcesBundle {
	@XmlElement(required = true, name = "remoteResources")
	protected RemoteResources RemoteResources;
	@XmlElement(required = true, name = "sourceEncoding")
	protected String SourceEncoding;
}
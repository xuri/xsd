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
@XmlElement(required = true, name = "verifications")
public class Verifications {
	protected Verifications Verifications;
}

public class Files {
	@XmlElement(required = true, name = "file")
	protected List<File> File;
}

public class Verifications {
	@XmlElement(required = true, name = "files")
	protected Files Files;
}

public class File {
	@XmlElement(required = true, name = "location")
	protected String Location;
	@XmlElement(required = true, name = "contains")
	protected String Contains;
	@XmlElement(required = true, name = "exists")
	protected Boolean Exists;
}

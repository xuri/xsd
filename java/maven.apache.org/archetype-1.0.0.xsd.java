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

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "archetype")
public class Archetype {
	protected ArchetypeModel Archetype;
}

// Sources is Files that will go into <code>src/main/java</code>.
public class Sources {
	@XmlElement(required = true, name = "source")
	protected List<Source> Source;
}

// Resources is Files that will go into <code>src/main/resources</code>.
public class Resources {
	@XmlElement(required = true, name = "resource")
	protected List<Resource> Resource;
}

// TestSources is Files that will go into <code>src/test/java</code>.
public class TestSources {
	@XmlElement(required = true, name = "source")
	protected List<Source> Source;
}

// TestResources is Files that will go into <code>src/test/resources</code>.
public class TestResources {
	@XmlElement(required = true, name = "resource")
	protected List<Resource> Resource;
}

// SiteResources is Files that will go into <code>src/site</code>.
public class SiteResources {
	@XmlElement(required = true, name = "resource")
	protected List<Resource> Resource;
}

// ArchetypeModel is Setting this option to <code>true</code> makes it possible to run the
//             <code>archetype:create</code> even on existing projects.
public class ArchetypeModel {
	@XmlElement(required = true, name = "id")
	protected String Id;
	@XmlElement(required = true, name = "allowPartial")
	protected Boolean AllowPartial;
	@XmlElement(required = true, name = "sources")
	protected Sources Sources;
	@XmlElement(required = true, name = "resources")
	protected Resources Resources;
	@XmlElement(required = true, name = "testSources")
	protected TestSources TestSources;
	@XmlElement(required = true, name = "testResources")
	protected TestResources TestResources;
	@XmlElement(required = true, name = "siteResources")
	protected SiteResources SiteResources;
}

// Source is Describes a source file. Note that source files are always filtered, unlike resources that
//         can be non-filtered.
public class Source {
	@XmlAttribute(name = "encoding")
	protected String EncodingAttr;
	@XmlValue
	protected String value;
}

// Resource is Describes a resource file.
public class Resource {
	@XmlAttribute(name = "encoding")
	protected String EncodingAttr;
	@XmlAttribute(name = "filtered")
	protected Boolean FilteredAttr;
	@XmlValue
	protected String value;
}

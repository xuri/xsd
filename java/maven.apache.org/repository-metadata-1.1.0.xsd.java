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
@XmlElement(required = true, name = "metadata")
public class Metadata {
	protected Metadata Metadata;
}

// Plugins is The set of plugin mappings for the group represented by this directory
public class Plugins {
	@XmlElement(required = true, name = "plugin")
	protected List<Plugin> Plugin;
}

// Metadata2 is Versioning information for the artifact.
public class Metadata2 {
	@XmlAttribute(name = "modelVersion")
	protected String ModelVersionAttr;
	@XmlElement(required = true, name = "groupId")
	protected String GroupId;
	@XmlElement(required = true, name = "artifactId")
	protected String ArtifactId;
	@XmlElement(required = true, name = "version")
	protected String Version;
	@XmlElement(required = true, name = "versioning")
	protected Versioning Versioning;
	@XmlElement(required = true, name = "plugins")
	protected Plugins Plugins;
}

// Plugin is The plugin artifactId
public class Plugin {
	@XmlElement(required = true, name = "name")
	protected String Name;
	@XmlElement(required = true, name = "prefix")
	protected String Prefix;
	@XmlElement(required = true, name = "artifactId")
	protected String ArtifactId;
}

// Versions is Versions available of the artifact (both releases and snapshots)
public class Versions {
	@XmlElement(required = true, name = "version")
	protected List<String> Version;
}

// SnapshotVersions is Information for each sub-artifact available in this artifact snapshot.
public class SnapshotVersions {
	@XmlElement(required = true, name = "snapshotVersion")
	protected List<SnapshotVersion> SnapshotVersion;
}

// Versioning is The current snapshot data in use for this version (artifact snapshots only)
public class Versioning {
	@XmlElement(required = true, name = "latest")
	protected String Latest;
	@XmlElement(required = true, name = "release")
	protected String Release;
	@XmlElement(required = true, name = "snapshot")
	protected Snapshot Snapshot;
	@XmlElement(required = true, name = "versions")
	protected Versions Versions;
	@XmlElement(required = true, name = "lastUpdated")
	protected String LastUpdated;
	@XmlElement(required = true, name = "snapshotVersions")
	protected SnapshotVersions SnapshotVersions;
}

// SnapshotVersion is The timestamp when this version information was last updated. The timestamp is expressed using UTC in the format yyyyMMddHHmmss.
public class SnapshotVersion {
	@XmlElement(required = true, name = "classifier")
	protected String Classifier;
	@XmlElement(required = true, name = "extension")
	protected String Extension;
	@XmlElement(required = true, name = "value")
	protected String Value;
	@XmlElement(required = true, name = "updated")
	protected String Updated;
}

// Snapshot is Whether to use a local copy instead (with filename that includes the base version)
public class Snapshot {
	@XmlElement(required = true, name = "timestamp")
	protected String Timestamp;
	@XmlElement(required = true, name = "buildNumber")
	protected Integer BuildNumber;
	@XmlElement(required = true, name = "localCopy")
	protected Boolean LocalCopy;
}

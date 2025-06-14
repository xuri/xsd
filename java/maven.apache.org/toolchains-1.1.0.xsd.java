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
@XmlElement(required = true, name = "toolchains")
public class Toolchains {
	protected PersistedToolchains Toolchains;
}

// PersistedToolchains is The toolchain instance definition.
public class PersistedToolchains {
	@XmlElement(required = true, name = "toolchain")
	protected List<ToolchainModel> Toolchain;
}

// Provides is <p>Toolchain identification information, which will be matched against project requirements.</p>
//                     <p>For Maven 2.0.9 to 3.2.3, the actual content structure was completely open: each toolchain type would define its own format and semantics.
//                     In general, this was a properties format.</p>
//                     <p>Since Maven 3.2.4, the type for this field has been changed to Properties to match the de-facto format.</p>
//                     <p>Each toolchain defines its own properties names and semantics.</p>
public class Provides {
}

// Configuration is <p>Toolchain configuration information, like location or any information that is to be retrieved.</p>
//                     <p>Actual content structure is completely open: each toolchain type will define its own format and semantics.</p>
//                     <p>In general, this is a properties format: <code>&lt;name&gt;value&lt;/name&gt;</code> with
//                     per-toolchain defined properties names.</p>
public class Configuration {
}

// ToolchainModel is Type of toolchain:<ul>
//                     <li><code>jdk</code> for
//                     <a href="https://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/jdk.html">JDK Standard Toolchain</a>,</li>
//                     <li>other value for
//                     <a href="https://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/custom.html">Custom Toolchain</a></li>
//                     </ul>
public class ToolchainModel {
	@XmlElement(required = true, name = "type")
	protected String Type;
	@XmlElement(required = true, name = "provides")
	protected Provides Provides;
	@XmlElement(required = true, name = "configuration")
	protected Configuration Configuration;
}

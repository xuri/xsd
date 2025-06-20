// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Toolchains is The <code>&lt;toolchains&gt;</code> element is the root of the descriptor.
//          The following table lists all of the possible child elements.
type Toolchains *PersistedToolchains

// PersistedToolchains is The toolchain instance definition.
type PersistedToolchains struct {
	Toolchain []*ToolchainModel `xml:"toolchain,omitempty"`
}

// Provides is <p>Toolchain identification information, which will be matched against project requirements.</p>
//                     <p>For Maven 2.0.9 to 3.2.3, the actual content structure was completely open: each toolchain type would define its own format and semantics.
//                     In general, this was a properties format.</p>
//                     <p>Since Maven 3.2.4, the type for this field has been changed to Properties to match the de-facto format.</p>
//                     <p>Each toolchain defines its own properties names and semantics.</p>
type Provides struct {
	XMLName xml.Name `xml:"provides"`
}

// Configuration is <p>Toolchain configuration information, like location or any information that is to be retrieved.</p>
//                     <p>Actual content structure is completely open: each toolchain type will define its own format and semantics.</p>
//                     <p>In general, this is a properties format: <code>&lt;name&gt;value&lt;/name&gt;</code> with
//                     per-toolchain defined properties names.</p>
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ToolchainModel is Type of toolchain:<ul>
//                     <li><code>jdk</code> for
//                     <a href="https://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/jdk.html">JDK Standard Toolchain</a>,</li>
//                     <li>other value for
//                     <a href="https://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/custom.html">Custom Toolchain</a></li>
//                     </ul>
type ToolchainModel struct {
	Type          string         `xml:"type,omitempty"`
	Provides      *Provides      `xml:"provides,omitempty"`
	Configuration *Configuration `xml:"configuration,omitempty"`
}

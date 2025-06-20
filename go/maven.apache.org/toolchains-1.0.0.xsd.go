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
//                     <p>Actual content structure is completely open: each toochain type will define its own format and semantics.</p>
//                     <p>In general, this is a properties format: <code>&lt;name&gt;value&lt;/name&gt;</code> with
//                     predefined properties names.</p>
type Provides struct {
	XMLName xml.Name `xml:"provides"`
}

// Configuration is <p>Toolchain configuration information, like location or any information that is to be retrieved.</p>
//                     <p>Actual content structure is completely open: each toochain type will define its own format and semantics.</p>
//                     <p>In general, this is a properties format: <code>&lt;name&gt;value&lt;/name&gt;</code> wih
//                     predefined properties names.</p>
type Configuration struct {
	XMLName xml.Name `xml:"configuration"`
}

// ToolchainModel is Type of toolchain:<ul>
//                     <li><code>jdk</code> for
//                     <a href="http://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/jdk.html">JDK Standard Toolchain</a>,</li>
//                     <li>...</li>
//                     </ul>
type ToolchainModel struct {
	Type          string         `xml:"type,omitempty"`
	Provides      *Provides      `xml:"provides,omitempty"`
	Configuration *Configuration `xml:"configuration,omitempty"`
}

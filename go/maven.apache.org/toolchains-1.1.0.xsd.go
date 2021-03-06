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
	Toolchain []*ToolchainModel `xml:"toolchain"`
}

// Provides ...
type Provides struct {
	XMLName xml.Name `xml:"provides"`
}

// Configuration ...
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
	Type          string         `xml:"type"`
	Provides      *Provides      `xml:"provides"`
	Configuration *Configuration `xml:"configuration"`
}

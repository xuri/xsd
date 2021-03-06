// Code generated by xgen. DO NOT EDIT.

// Toolchains is The <code>&lt;toolchains&gt;</code> element is the root of the descriptor.
//          The following table lists all of the possible child elements.
export type Toolchains = PersistedToolchains;

// PersistedToolchains is The toolchain instance definition.
export class PersistedToolchains {
	Toolchain: Array<ToolchainModel>;
}

// Provides ...
export class Provides {
}

// Configuration ...
export class Configuration {
}

// ToolchainModel is Type of toolchain:<ul>
//                     <li><code>jdk</code> for
//                     <a href="http://maven.apache.org/plugins/maven-toolchains-plugin/toolchains/jdk.html">JDK Standard Toolchain</a>,</li>
//                     <li>...</li>
//                     </ul>
export class ToolchainModel {
	Type: string;
	Provides: Provides;
	Configuration: Configuration;
}

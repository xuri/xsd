// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// settings is Root element of the user configuration file.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct settings {
	#[serde(rename = "settings")]
	pub settings: Settings,
}


// Proxies is Configuration for different proxy profiles. Multiple proxy profiles
//             might come in handy for anyone working from a notebook or other
//             mobile platform, to enable easy switching of entire proxy
//             configurations by simply specifying the profile id, again either from
//             the command line or from the defaults section below.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Proxies {
	#[serde(rename = "proxy")]
	pub proxy: Vec<Proxy>,
}


// Servers is Configuration of server-specific settings, mainly authentication
//             method. This allows configuration of authentication on a per-server
//             basis.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Servers {
	#[serde(rename = "server")]
	pub server: Vec<Server>,
}


// Mirrors is Configuration of download mirrors for repositories.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Mirrors {
	#[serde(rename = "mirror")]
	pub mirror: Vec<Mirror>,
}


// Profiles is Configuration of build profiles for adjusting the build
//             according to environmental parameters.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Profiles {
	#[serde(rename = "profile")]
	pub profile: Vec<Profile>,
}


// ActiveProfiles is List of manually-activated build profiles, specified in the order in which
//             they should be applied.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ActiveProfiles {
	#[serde(rename = "activeProfile")]
	pub active_profile: Vec<String>,
}


// PluginGroups is List of groupIds to search for a plugin when that plugin
//             groupId is not explicitly provided.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct PluginGroups {
	#[serde(rename = "pluginGroup")]
	pub plugin_group: Vec<String>,
}


// Settings is Indicate whether maven should operate in offline mode full-time.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Settings {
	#[serde(rename = "localRepository")]
	pub local_repository: String,
	#[serde(rename = "interactiveMode")]
	pub interactive_mode: bool,
	#[serde(rename = "usePluginRegistry")]
	pub use_plugin_registry: bool,
	#[serde(rename = "offline")]
	pub offline: bool,
	#[serde(rename = "proxies")]
	pub proxies: Proxies,
	#[serde(rename = "servers")]
	pub servers: Servers,
	#[serde(rename = "mirrors")]
	pub mirrors: Mirrors,
	#[serde(rename = "profiles")]
	pub profiles: Profiles,
	#[serde(rename = "activeProfiles")]
	pub active_profiles: ActiveProfiles,
	#[serde(rename = "pluginGroups")]
	pub plugin_groups: PluginGroups,
}


// Mirror is 1.0.0
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Mirror {
	#[serde(rename = "mirrorOf")]
	pub mirror_of: String,
	#[serde(rename = "name")]
	pub name: String,
	#[serde(rename = "url")]
	pub url: String,
	#[serde(rename = "id")]
	pub id: String,
}


// Proxy is 1.0.0
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Proxy {
	#[serde(rename = "active")]
	pub active: bool,
	#[serde(rename = "protocol")]
	pub protocol: String,
	#[serde(rename = "username")]
	pub username: String,
	#[serde(rename = "password")]
	pub password: String,
	#[serde(rename = "port")]
	pub port: i32,
	#[serde(rename = "host")]
	pub host: String,
	#[serde(rename = "nonProxyHosts")]
	pub non_proxy_hosts: String,
	#[serde(rename = "id")]
	pub id: String,
}


// Configuration is Extra configuration for the transport layer.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Configuration {
}


// Server is The permissions for directories when they are created.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Server {
	#[serde(rename = "username")]
	pub username: String,
	#[serde(rename = "password")]
	pub password: String,
	#[serde(rename = "privateKey")]
	pub private_key: String,
	#[serde(rename = "passphrase")]
	pub passphrase: String,
	#[serde(rename = "filePermissions")]
	pub file_permissions: String,
	#[serde(rename = "directoryPermissions")]
	pub directory_permissions: String,
	#[serde(rename = "configuration")]
	pub configuration: Configuration,
	#[serde(rename = "id")]
	pub id: String,
}


// Properties is Extended configuration specific to this profile goes here.
//             Contents take the form of
//             <property.name>property.value</property.name>
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Properties {
}


// Repositories is The lists of the remote repositories.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Repositories {
	#[serde(rename = "repository")]
	pub repository: Vec<Repository>,
}


// PluginRepositories is The lists of the remote repositories for discovering plugins.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct PluginRepositories {
	#[serde(rename = "pluginRepository")]
	pub plugin_repository: Vec<Repository>,
}


// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Profile {
	#[serde(rename = "activation")]
	pub activation: Activation,
	#[serde(rename = "properties")]
	pub properties: Properties,
	#[serde(rename = "repositories")]
	pub repositories: Repositories,
	#[serde(rename = "pluginRepositories")]
	pub plugin_repositories: PluginRepositories,
	#[serde(rename = "id")]
	pub id: String,
}


// Repository is The type of layout this repository uses for locating and
//             storing artifacts - can be "legacy" or "default".
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Repository {
	#[serde(rename = "releases")]
	pub releases: RepositoryPolicy,
	#[serde(rename = "snapshots")]
	pub snapshots: RepositoryPolicy,
	#[serde(rename = "id")]
	pub id: String,
	#[serde(rename = "name")]
	pub name: String,
	#[serde(rename = "url")]
	pub url: String,
	#[serde(rename = "layout")]
	pub layout: String,
}


// RepositoryPolicy is What to do when verification of an artifact checksum fails -
//             warn, fail, etc. Valid values are "fail" or "warn".
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct RepositoryPolicy {
	#[serde(rename = "enabled")]
	pub enabled: bool,
	#[serde(rename = "updatePolicy")]
	pub update_policy: String,
	#[serde(rename = "checksumPolicy")]
	pub checksum_policy: String,
}


// Activation is Specifies that this profile will be activated based on existence of a file.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Activation {
	#[serde(rename = "activeByDefault")]
	pub active_by_default: bool,
	#[serde(rename = "jdk")]
	pub jdk: String,
	#[serde(rename = "os")]
	pub os: ActivationOS,
	#[serde(rename = "property")]
	pub property: ActivationProperty,
	#[serde(rename = "file")]
	pub file: ActivationFile,
}


// ActivationFile is The name of the file that should exist to activate a profile.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ActivationFile {
	#[serde(rename = "missing")]
	pub missing: String,
	#[serde(rename = "exists")]
	pub exists: String,
}


// ActivationOS is The version of the OS to be used to activate a profile.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ActivationOS {
	#[serde(rename = "name")]
	pub name: String,
	#[serde(rename = "family")]
	pub family: String,
	#[serde(rename = "arch")]
	pub arch: String,
	#[serde(rename = "version")]
	pub version: String,
}


// ActivationProperty is The value of the property to be used to activate a profile.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct ActivationProperty {
	#[serde(rename = "name")]
	pub name: String,
	#[serde(rename = "value")]
	pub value: String,
}

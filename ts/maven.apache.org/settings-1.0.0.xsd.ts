// Code generated by xgen. DO NOT EDIT.

// Settings is Root element of the user configuration file.
export type Settings = Settings;

// Proxies ...
export class Proxies {
	Proxy: Array<Proxy>;
}

// Servers ...
export class Servers {
	Server: Array<Server>;
}

// Mirrors ...
export class Mirrors {
	Mirror: Array<Mirror>;
}

// Profiles ...
export class Profiles {
	Profile: Array<Profile>;
}

// ActiveProfiles ...
export class ActiveProfiles {
	ActiveProfile: string;
}

// PluginGroups ...
export class PluginGroups {
	PluginGroup: string;
}

// Settings is Indicate whether maven should operate in offline mode full-time.
export class Settings {
	LocalRepository: string;
	InteractiveMode: boolean;
	UsePluginRegistry: boolean;
	Offline: boolean;
	Proxies: Proxies;
	Servers: Servers;
	Mirrors: Mirrors;
	Profiles: Profiles;
	ActiveProfiles: ActiveProfiles;
	PluginGroups: PluginGroups;
}

// Mirror is 1.0.0
export class Mirror {
	MirrorOf: string;
	Name: string;
	Url: string;
	Id: string;
}

// Proxy is 1.0.0
export class Proxy {
	Active: boolean;
	Protocol: string;
	Username: string;
	Password: string;
	Port: number;
	Host: string;
	NonProxyHosts: string;
	Id: string;
}

// Configuration ...
export class Configuration {
}

// Server is The permissions for directories when they are created.
export class Server {
	Username: string;
	Password: string;
	PrivateKey: string;
	Passphrase: string;
	FilePermissions: string;
	DirectoryPermissions: string;
	Configuration: Configuration;
	Id: string;
}

// Properties ...
export class Properties {
}

// Repositories ...
export class Repositories {
	Repository: Array<Repository>;
}

// PluginRepositories ...
export class PluginRepositories {
	PluginRepository: Array<Repository>;
}

// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
export class Profile {
	Activation: Activation;
	Properties: Properties;
	Repositories: Repositories;
	PluginRepositories: PluginRepositories;
	Id: string;
}

// Repository is The type of layout this repository uses for locating and
//             storing artifacts - can be "legacy" or "default".
export class Repository {
	Releases: RepositoryPolicy;
	Snapshots: RepositoryPolicy;
	Id: string;
	Name: string;
	Url: string;
	Layout: string;
}

// RepositoryPolicy is What to do when verification of an artifact checksum fails -
//             warn, fail, etc. Valid values are "fail" or "warn".
export class RepositoryPolicy {
	Enabled: boolean;
	UpdatePolicy: string;
	ChecksumPolicy: string;
}

// Activation is Specifies that this profile will be activated based on existence of a file.
export class Activation {
	ActiveByDefault: boolean;
	Jdk: string;
	Os: ActivationOS;
	Property: ActivationProperty;
	File: ActivationFile;
}

// ActivationFile is The name of the file that should exist to activate a profile.
export class ActivationFile {
	Missing: string;
	Exists: string;
}

// ActivationOS is The version of the OS to be used to activate a profile.
export class ActivationOS {
	Name: string;
	Family: string;
	Arch: string;
	Version: string;
}

// ActivationProperty is The value of the property to be used to activate a profile.
export class ActivationProperty {
	Name: string;
	Value: string;
}

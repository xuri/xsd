// Code generated by xgen. DO NOT EDIT.

typedef Settings Settings;

// Proxies is Configuration for different proxy profiles. Multiple proxy profiles
//             might come in handy for anyone working from a notebook or other
//             mobile platform, to enable easy switching of entire proxy
//             configurations by simply specifying the profile id, again either from
//             the command line or from the defaults section below.
typedef struct {
	Proxy Proxy[];
} Proxies;

// Servers is Configuration of server-specific settings, mainly authentication
//             method. This allows configuration of authentication on a per-server
//             basis.
typedef struct {
	Server Server[];
} Servers;

// Mirrors is Configuration of download mirrors for repositories.
typedef struct {
	Mirror Mirror[];
} Mirrors;

// Profiles is Configuration of build profiles for adjusting the build
//             according to environmental parameters.
typedef struct {
	Profile Profile[];
} Profiles;

// ActiveProfiles is List of manually-activated build profiles, specified in the order in which
//             they should be applied.
typedef struct {
	char ActiveProfile[];
} ActiveProfiles;

// PluginGroups is List of groupIds to search for a plugin when that plugin
//             groupId is not explicitly provided.
typedef struct {
	char PluginGroup[];
} PluginGroups;

// Settings is Indicate whether maven should operate in offline mode full-time.
typedef struct {
	char LocalRepository;
	bool InteractiveMode;
	bool UsePluginRegistry;
	bool Offline;
	Proxies Proxies;
	Servers Servers;
	Mirrors Mirrors;
	Profiles Profiles;
	ActiveProfiles ActiveProfiles;
	PluginGroups PluginGroups;
} Settings;

// Mirror is 1.0.0
typedef struct {
	char MirrorOf;
	char Name;
	char Url;
	char Id;
} Mirror;

// Proxy is 1.0.0
typedef struct {
	bool Active;
	char Protocol;
	char Username;
	char Password;
	int Port;
	char Host;
	char NonProxyHosts;
	char Id;
} Proxy;

// Configuration is Extra configuration for the transport layer.
typedef struct {
} Configuration;

// Server is The permissions for directories when they are created.
typedef struct {
	char Username;
	char Password;
	char PrivateKey;
	char Passphrase;
	char FilePermissions;
	char DirectoryPermissions;
	Configuration Configuration;
	char Id;
} Server;

// Properties is Extended configuration specific to this profile goes here.
//             Contents take the form of
//             <property.name>property.value</property.name>
typedef struct {
} Properties;

// Repositories is The lists of the remote repositories.
typedef struct {
	Repository Repository[];
} Repositories;

// PluginRepositories is The lists of the remote repositories for discovering plugins.
typedef struct {
	Repository PluginRepository[];
} PluginRepositories;

// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
typedef struct {
	Activation Activation;
	Properties Properties;
	Repositories Repositories;
	PluginRepositories PluginRepositories;
	char Id;
} Profile;

// Repository is The type of layout this repository uses for locating and
//             storing artifacts - can be "legacy" or "default".
typedef struct {
	RepositoryPolicy Releases;
	RepositoryPolicy Snapshots;
	char Id;
	char Name;
	char Url;
	char Layout;
} Repository;

// RepositoryPolicy is What to do when verification of an artifact checksum fails -
//             warn, fail, etc. Valid values are "fail" or "warn".
typedef struct {
	bool Enabled;
	char UpdatePolicy;
	char ChecksumPolicy;
} RepositoryPolicy;

// Activation is Specifies that this profile will be activated based on existence of a file.
typedef struct {
	bool ActiveByDefault;
	char Jdk;
	ActivationOS Os;
	ActivationProperty Property;
	ActivationFile File;
} Activation;

// ActivationFile is The name of the file that should exist to activate a profile.
typedef struct {
	char Missing;
	char Exists;
} ActivationFile;

// ActivationOS is The version of the OS to be used to activate a profile.
typedef struct {
	char Name;
	char Family;
	char Arch;
	char Version;
} ActivationOS;

// ActivationProperty is The value of the property to be used to activate a profile.
typedef struct {
	char Name;
	char Value;
} ActivationProperty;

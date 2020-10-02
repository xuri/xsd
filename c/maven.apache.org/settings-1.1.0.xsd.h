// Code generated by xgen. DO NOT EDIT.

typedef Settings Settings;

typedef struct {
	Proxy Proxy[];
} Proxies;

typedef struct {
	Server Server[];
} Servers;

typedef struct {
	Mirror Mirror[];
} Mirrors;

typedef struct {
	Profile Profile[];
} Profiles;

typedef struct {
	char ActiveProfile[];
} ActiveProfiles;

typedef struct {
	char PluginGroup[];
} PluginGroups;

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

typedef struct {
} Configuration;

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

typedef struct {
	char MirrorOf;
	char Name;
	char Url;
	char Layout;
	char MirrorOfLayouts;
	char Id;
} Mirror;

typedef struct {
} Properties;

typedef struct {
	Repository Repository[];
} Repositories;

typedef struct {
	Repository PluginRepository[];
} PluginRepositories;

typedef struct {
	Activation Activation;
	Properties Properties;
	Repositories Repositories;
	PluginRepositories PluginRepositories;
	char Id;
} Profile;

typedef struct {
	RepositoryPolicy Releases;
	RepositoryPolicy Snapshots;
	char Id;
	char Name;
	char Url;
	char Layout;
} Repository;

typedef struct {
	bool Enabled;
	char UpdatePolicy;
	char ChecksumPolicy;
} RepositoryPolicy;

typedef struct {
	bool ActiveByDefault;
	char Jdk;
	ActivationOS Os;
	ActivationProperty Property;
	ActivationFile File;
} Activation;

typedef struct {
	char Name;
	char Family;
	char Arch;
	char Version;
} ActivationOS;

typedef struct {
	char Name;
	char Value;
} ActivationProperty;

typedef struct {
	char Missing;
	char Exists;
} ActivationFile;

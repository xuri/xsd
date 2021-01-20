// Code generated by xgen. DO NOT EDIT.

typedef ProfilesRoot ProfilesXml;

// Profiles ...
typedef struct {
	Profile Profile[];
} Profiles;

// ActiveProfiles ...
typedef struct {
	char ActiveProfile[];
} ActiveProfiles;

// ProfilesRoot is Root element of the profiles.xml file.
typedef struct {
	Profiles Profiles;
	ActiveProfiles ActiveProfiles;
} ProfilesRoot;

// Properties ...
typedef struct {
} Properties;

// Repositories ...
typedef struct {
	Repository Repository[];
} Repositories;

// PluginRepositories ...
typedef struct {
	Repository PluginRepository[];
} PluginRepositories;

// Profile is The conditional logic which will automatically
//             trigger the inclusion of this profile.
typedef struct {
	char Id;
	Activation Activation;
	Properties Properties;
	Repositories Repositories;
	PluginRepositories PluginRepositories;
} Profile;

// Activation is Specifies that this profile will be activated based on existence of a file.
typedef struct {
	bool ActiveByDefault;
	char Jdk;
	ActivationOS Os;
	ActivationProperty Property;
	ActivationFile File;
} Activation;

// ActivationOS is The version of the OS to be used to activate a profile
typedef struct {
	char Name;
	char Family;
	char Arch;
	char Version;
} ActivationOS;

// ActivationProperty is The value of the property to be used to activate a profile
typedef struct {
	char Name;
	char Value;
} ActivationProperty;

// ActivationFile is The name of the file that should exist to activate a profile
typedef struct {
	char Missing;
	char Exists;
} ActivationFile;

// Repository is The type of layout this repository uses for locating and storing artifacts - can be "legacy" or
//             "default".
typedef struct {
	RepositoryPolicy Releases;
	RepositoryPolicy Snapshots;
	char Id;
	char Name;
	char Url;
	char Layout;
} Repository;

// RepositoryPolicy is What to do when verification of an artifact checksum fails - warn, fail, etc. Valid values are
//             "fail" or "warn"
typedef struct {
	bool Enabled;
	char UpdatePolicy;
	char ChecksumPolicy;
} RepositoryPolicy;

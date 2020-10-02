// Code generated by xgen. DO NOT EDIT.

typedef Metadata Metadata;

typedef struct {
	Plugin Plugin[];
} Plugins;

typedef struct {
	char ModelVersionAttr; // attr, optional
	char GroupId;
	char ArtifactId;
	char Version;
	Versioning Versioning;
	Plugins Plugins;
} Metadata;

typedef struct {
	char Name;
	char Prefix;
	char ArtifactId;
} Plugin;

typedef struct {
	char Version[];
} Versions;

typedef struct {
	SnapshotVersion SnapshotVersion[];
} SnapshotVersions;

typedef struct {
	char Latest;
	char Release;
	Snapshot Snapshot;
	Versions Versions;
	char LastUpdated;
	SnapshotVersions SnapshotVersions;
} Versioning;

typedef struct {
	char Classifier;
	char Extension;
	char Value;
	char Updated;
} SnapshotVersion;

typedef struct {
	char Timestamp;
	int BuildNumber;
	bool LocalCopy;
} Snapshot;

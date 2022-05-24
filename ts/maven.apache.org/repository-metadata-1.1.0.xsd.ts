// Code generated by xgen. DO NOT EDIT.

// Metadata is 1.0.0+
export type Metadata = Metadata;

// Plugins ...
export class Plugins {
	Plugin: Array<Plugin>;
}

// Metadata2 is Versioning information for the artifact.
export class Metadata2 {
	ModelVersionAttr: string | null;
	GroupId: string;
	ArtifactId: string;
	Version: string;
	Versioning: Versioning;
	Plugins: Plugins;
}

// Plugin is The plugin artifactId
export class Plugin {
	Name: string;
	Prefix: string;
	ArtifactId: string;
}

// Versions ...
export class Versions {
	Version: string;
}

// SnapshotVersions ...
export class SnapshotVersions {
	SnapshotVersion: Array<SnapshotVersion>;
}

// Versioning is The current snapshot data in use for this version (artifact snapshots only)
export class Versioning {
	Latest: string;
	Release: string;
	Snapshot: Snapshot;
	Versions: Versions;
	LastUpdated: string;
	SnapshotVersions: SnapshotVersions;
}

// SnapshotVersion is The timestamp when this version information was last updated. The timestamp is expressed using UTC in the format yyyyMMddHHmmss.
export class SnapshotVersion {
	Classifier: string;
	Extension: string;
	Value: string;
	Updated: string;
}

// Snapshot is Whether to use a local copy instead (with filename that includes the base version)
export class Snapshot {
	Timestamp: string;
	BuildNumber: number;
	LocalCopy: boolean;
}

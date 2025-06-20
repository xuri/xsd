// Code generated by xgen. DO NOT EDIT.

typedef DecorationModel Project;

// PoweredBy is Powered by logos list.
typedef struct {
	Logo Logo[];
} PoweredBy;

// Custom is Custom configuration for use with customised Velocity templates.
typedef struct {
} Custom;

// DecorationModel is Modify the version published display properties.
typedef struct {
	char NameAttr; // attr, optional
	Banner BannerLeft;
	Banner BannerRight;
	PublishDate PublishDate;
	Version Version;
	PoweredBy PoweredBy;
	Skin Skin;
	Body Body;
	Custom Custom;
} DecorationModel;

// Banner is The href of a link to be used for the banner image.
typedef struct {
	char Name;
	char Src;
	char Alt;
	char Href;
} Banner;

// Head is Additional content (like Javascript) to include in the HEAD block of the generated pages.
typedef struct {
} Head;

// Links is A list of links to display in the navigation.
typedef struct {
	LinkItem Item[];
} Links;

// Breadcrumbs is A list of breadcrumbs to display in the navigation.
typedef struct {
	LinkItem Item[];
} Breadcrumbs;

// Body is The main content decoration.
typedef struct {
	Head Head;
	Links Links;
	Breadcrumbs Breadcrumbs;
	Menu Menu[];
} Body;

// LinkItem is A link in the navigation.
typedef struct {
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
} LinkItem;

// Menu is A list of menu item.
typedef struct {
	char NameAttr; // attr, optional
	char InheritAttr; // attr, optional
	bool InheritAsRefAttr; // attr, optional
	char RefAttr; // attr, optional
	char ImgAttr; // attr, optional
	MenuItem Item[];
} Menu;

// MenuItem is Menu item.
typedef struct {
	bool CollapseAttr; // attr, optional
	char RefAttr; // attr, optional
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
	char Description;
	MenuItem Item[];
} MenuItem;

// Skin is The skin version.
typedef struct {
	char GroupId;
	char ArtifactId;
	char Version;
} Skin;

// Version is Modify display properties for version published.
typedef struct {
	char PositionAttr; // attr, optional
} Version;

// PublishDate is Modify display properties for date published.
typedef struct {
	char PositionAttr; // attr, optional
	char FormatAttr; // attr, optional
} PublishDate;

// Logo is Power by logo on the navigation.
typedef struct {
	char ImgAttr; // attr, optional
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
} Logo;

// Code generated by xgen. DO NOT EDIT.

typedef DecorationModel Project;

// PoweredBy ...
typedef struct {
	Logo Logo[];
} PoweredBy;

// Custom ...
typedef struct {
} Custom;

// DecorationModel is Modify the version published display properties.
typedef struct {
	char NameAttr; // attr, optional
	Banner BannerLeft;
	Banner BannerRight;
	char GoogleAnalyticsAccountId;
	PublishDate PublishDate;
	Version Version;
	PoweredBy PoweredBy;
	Skin Skin;
	Body Body;
	Custom Custom;
} DecorationModel;

// Banner is The height to use for the banner image.
typedef struct {
	char Name;
	char Src;
	char Alt;
	char Href;
	char Border;
	char Width;
	char Height;
} Banner;

// Head ...
typedef struct {
} Head;

// Links ...
typedef struct {
	LinkItem Item[];
} Links;

// Breadcrumbs ...
typedef struct {
	LinkItem Item[];
} Breadcrumbs;

// Footer ...
typedef struct {
} Footer;

// Body is The main content decoration.
typedef struct {
	Head Head;
	Links Links;
	Breadcrumbs Breadcrumbs;
	Menu Menu[];
	Footer Footer;
} Body;

// LinkItem is A link in the navigation.
typedef struct {
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
	char ImgAttr; // attr, optional
	char PositionAttr; // attr, optional
	char AltAttr; // attr, optional
	char BorderAttr; // attr, optional
	char WidthAttr; // attr, optional
	char HeightAttr; // attr, optional
	char TargetAttr; // attr, optional
} LinkItem;

// Menu is A list of menu item.
typedef struct {
	char NameAttr; // attr, optional
	char InheritAttr; // attr, optional
	bool InheritAsRefAttr; // attr, optional
	char RefAttr; // attr, optional
	char ImgAttr; // attr, optional
	char AltAttr; // attr, optional
	char PositionAttr; // attr, optional
	char BorderAttr; // attr, optional
	char WidthAttr; // attr, optional
	char HeightAttr; // attr, optional
	MenuItem Item[];
} Menu;

// MenuItem is A list of menu item.
typedef struct {
	bool CollapseAttr; // attr, optional
	char RefAttr; // attr, optional
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
	char ImgAttr; // attr, optional
	char PositionAttr; // attr, optional
	char AltAttr; // attr, optional
	char BorderAttr; // attr, optional
	char WidthAttr; // attr, optional
	char HeightAttr; // attr, optional
	char TargetAttr; // attr, optional
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
	char NameAttr; // attr, optional
	char HrefAttr; // attr, optional
	char ImgAttr; // attr, optional
	char PositionAttr; // attr, optional
	char AltAttr; // attr, optional
	char BorderAttr; // attr, optional
	char WidthAttr; // attr, optional
	char HeightAttr; // attr, optional
	char TargetAttr; // attr, optional
} Logo;

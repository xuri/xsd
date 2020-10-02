// Code generated by xgen. DO NOT EDIT.

export type Project = DecorationModel;

export class PoweredBy {
	Logo: Array<Logo>;
}

export class Custom {
}

export class DecorationModel {
	NameAttr: string | null;
	BannerLeft: Banner;
	BannerRight: Banner;
	PublishDate: PublishDate;
	Version: Version;
	PoweredBy: PoweredBy;
	Skin: Skin;
	Body: Body;
	Custom: Custom;
}

export class Banner {
	Name: string;
	Src: string;
	Alt: string;
	Href: string;
	Border: string;
	Width: string;
	Height: string;
}

export class Head {
}

export class Links {
	Item: Array<LinkItem>;
}

export class Breadcrumbs {
	Item: Array<LinkItem>;
}

export class Body {
	Head: Head;
	Links: Links;
	Breadcrumbs: Breadcrumbs;
	Menu: Array<Menu>;
}

export class LinkItem {
	NameAttr: string | null;
	HrefAttr: string | null;
	ImgAttr: string | null;
	PositionAttr: string | null;
	AltAttr: string | null;
	BorderAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
	TargetAttr: string | null;
}

export class Menu {
	NameAttr: string | null;
	InheritAttr: string | null;
	InheritAsRefAttr: boolean | null;
	RefAttr: string | null;
	ImgAttr: string | null;
	AltAttr: string | null;
	PositionAttr: string | null;
	BorderAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
	Item: Array<MenuItem>;
}

export class MenuItem {
	CollapseAttr: boolean | null;
	RefAttr: string | null;
	NameAttr: string | null;
	HrefAttr: string | null;
	ImgAttr: string | null;
	PositionAttr: string | null;
	AltAttr: string | null;
	BorderAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
	TargetAttr: string | null;
	Description: string;
	Item: Array<MenuItem>;
}

export class Skin {
	GroupId: string;
	ArtifactId: string;
	Version: string;
}

export class Version {
	PositionAttr: string | null;
}

export class PublishDate {
	PositionAttr: string | null;
	FormatAttr: string | null;
}

export class Logo {
	NameAttr: string | null;
	HrefAttr: string | null;
	ImgAttr: string | null;
	PositionAttr: string | null;
	AltAttr: string | null;
	BorderAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
	TargetAttr: string | null;
}
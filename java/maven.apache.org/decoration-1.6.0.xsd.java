// Code generated by xgen. DO NOT EDIT.

package schema;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "project")
public class Project {
	protected DecorationModel Project;
}

// PoweredBy ...
public class PoweredBy {
	@XmlElement(required = true, name = "logo")
	protected List<Logo> Logo;
}

// Custom ...
public class Custom {
}

// DecorationModel is Modify the version published display properties.
public class DecorationModel {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "combine.self")
	protected StringAttr CombineSelf;
	@XmlElement(required = true, name = "bannerLeft")
	protected Banner BannerLeft;
	@XmlElement(required = true, name = "bannerRight")
	protected Banner BannerRight;
	@XmlElement(required = true, name = "googleAdSenseClient")
	protected String GoogleAdSenseClient;
	@XmlElement(required = true, name = "googleAdSenseSlot")
	protected String GoogleAdSenseSlot;
	@XmlElement(required = true, name = "googleAnalyticsAccountId")
	protected String GoogleAnalyticsAccountId;
	@XmlElement(required = true, name = "publishDate")
	protected PublishDate PublishDate;
	@XmlElement(required = true, name = "version")
	protected Version Version;
	@XmlElement(required = true, name = "poweredBy")
	protected PoweredBy PoweredBy;
	@XmlElement(required = true, name = "skin")
	protected Skin Skin;
	@XmlElement(required = true, name = "body")
	protected Body Body;
	@XmlElement(required = true, name = "custom")
	protected Custom Custom;
}

// Version is Modify display properties for version published.
public class Version {
	@XmlAttribute(name = "position")
	protected StringAttr Position;
}

// Banner is The title for the banner image.
public class Banner {
	@XmlElement(required = true, name = "name")
	protected String Name;
	@XmlElement(required = true, name = "src")
	protected String Src;
	@XmlElement(required = true, name = "alt")
	protected String Alt;
	@XmlElement(required = true, name = "href")
	protected String Href;
	@XmlElement(required = true, name = "border")
	protected String Border;
	@XmlElement(required = true, name = "width")
	protected String Width;
	@XmlElement(required = true, name = "height")
	protected String Height;
	@XmlElement(required = true, name = "title")
	protected String Title;
}

// Head ...
public class Head {
}

// Links ...
public class Links {
	@XmlElement(required = true, name = "item")
	protected List<LinkItem> Item;
}

// Breadcrumbs ...
public class Breadcrumbs {
	@XmlElement(required = true, name = "item")
	protected List<LinkItem> Item;
}

// Footer ...
public class Footer {
}

// Body is The main content decoration.
public class Body {
	@XmlElement(required = true, name = "head")
	protected Head Head;
	@XmlElement(required = true, name = "links")
	protected Links Links;
	@XmlElement(required = true, name = "breadcrumbs")
	protected Breadcrumbs Breadcrumbs;
	@XmlElement(required = true, name = "menu")
	protected List<Menu> Menu;
	@XmlElement(required = true, name = "footer")
	protected Footer Footer;
}

// LinkItem is A link in the navigation.
public class LinkItem {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "href")
	protected StringAttr Href;
	@XmlAttribute(name = "img")
	protected StringAttr Img;
	@XmlAttribute(name = "position")
	protected StringAttr Position;
	@XmlAttribute(name = "alt")
	protected StringAttr Alt;
	@XmlAttribute(name = "border")
	protected StringAttr Border;
	@XmlAttribute(name = "width")
	protected StringAttr Width;
	@XmlAttribute(name = "height")
	protected StringAttr Height;
	@XmlAttribute(name = "target")
	protected StringAttr Target;
	@XmlAttribute(name = "title")
	protected StringAttr Title;
}

// Menu is A list of menu item.
public class Menu {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "inherit")
	protected StringAttr Inherit;
	@XmlAttribute(name = "inheritAsRef")
	protected BooleanAttr InheritAsRef;
	@XmlAttribute(name = "ref")
	protected StringAttr Ref;
	@XmlAttribute(name = "img")
	protected StringAttr Img;
	@XmlAttribute(name = "alt")
	protected StringAttr Alt;
	@XmlAttribute(name = "position")
	protected StringAttr Position;
	@XmlAttribute(name = "border")
	protected StringAttr Border;
	@XmlAttribute(name = "width")
	protected StringAttr Width;
	@XmlAttribute(name = "height")
	protected StringAttr Height;
	@XmlAttribute(name = "title")
	protected StringAttr Title;
	@XmlElement(required = true, name = "item")
	protected List<MenuItem> Item;
}

// MenuItem is A list of menu item.
public class MenuItem {
	@XmlAttribute(name = "collapse")
	protected BooleanAttr Collapse;
	@XmlAttribute(name = "ref")
	protected StringAttr Ref;
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "href")
	protected StringAttr Href;
	@XmlAttribute(name = "img")
	protected StringAttr Img;
	@XmlAttribute(name = "position")
	protected StringAttr Position;
	@XmlAttribute(name = "alt")
	protected StringAttr Alt;
	@XmlAttribute(name = "border")
	protected StringAttr Border;
	@XmlAttribute(name = "width")
	protected StringAttr Width;
	@XmlAttribute(name = "height")
	protected StringAttr Height;
	@XmlAttribute(name = "target")
	protected StringAttr Target;
	@XmlAttribute(name = "title")
	protected StringAttr Title;
	@XmlElement(required = true, name = "description")
	protected String Description;
	@XmlElement(required = true, name = "item")
	protected List<MenuItem> Item;
}

// Skin is The skin version.
public class Skin {
	@XmlElement(required = true, name = "groupId")
	protected String GroupId;
	@XmlElement(required = true, name = "artifactId")
	protected String ArtifactId;
	@XmlElement(required = true, name = "version")
	protected String Version;
}

// Logo is Power by logo on the navigation.
public class Logo {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "href")
	protected StringAttr Href;
	@XmlAttribute(name = "img")
	protected StringAttr Img;
	@XmlAttribute(name = "position")
	protected StringAttr Position;
	@XmlAttribute(name = "alt")
	protected StringAttr Alt;
	@XmlAttribute(name = "border")
	protected StringAttr Border;
	@XmlAttribute(name = "width")
	protected StringAttr Width;
	@XmlAttribute(name = "height")
	protected StringAttr Height;
	@XmlAttribute(name = "target")
	protected StringAttr Target;
	@XmlAttribute(name = "title")
	protected StringAttr Title;
}

// PublishDate is Modify display properties for date published.
public class PublishDate {
	@XmlAttribute(name = "position")
	protected StringAttr Position;
	@XmlAttribute(name = "format")
	protected StringAttr Format;
}

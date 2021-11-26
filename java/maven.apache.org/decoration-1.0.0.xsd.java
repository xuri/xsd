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
import javax.xml.bind.annotation.XmlValue;

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
	protected String NameAttr;
	@XmlElement(required = true, name = "bannerLeft")
	protected Banner BannerLeft;
	@XmlElement(required = true, name = "bannerRight")
	protected Banner BannerRight;
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

// Banner is The href of a link to be used for the banner image.
public class Banner {
	@XmlElement(required = true, name = "name")
	protected String Name;
	@XmlElement(required = true, name = "src")
	protected String Src;
	@XmlElement(required = true, name = "alt")
	protected String Alt;
	@XmlElement(required = true, name = "href")
	protected String Href;
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
}

// LinkItem is A link in the navigation.
public class LinkItem {
	@XmlAttribute(name = "name")
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
}

// Menu is A list of menu item.
public class Menu {
	@XmlAttribute(name = "name")
	protected String NameAttr;
	@XmlAttribute(name = "inherit")
	protected String InheritAttr;
	@XmlAttribute(name = "inheritAsRef")
	protected Boolean InheritAsRefAttr;
	@XmlAttribute(name = "ref")
	protected String RefAttr;
	@XmlAttribute(name = "img")
	protected String ImgAttr;
	@XmlElement(required = true, name = "item")
	protected List<MenuItem> Item;
}

// MenuItem is Menu item.
public class MenuItem {
	@XmlAttribute(name = "collapse")
	protected Boolean CollapseAttr;
	@XmlAttribute(name = "ref")
	protected String RefAttr;
	@XmlAttribute(name = "name")
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
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

// Version is Modify display properties for version published.
public class Version {
	@XmlAttribute(name = "position")
	protected String PositionAttr;
}

// PublishDate is Modify display properties for date published.
public class PublishDate {
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "format")
	protected String FormatAttr;
}

// Logo is Power by logo on the navigation.
public class Logo {
	@XmlAttribute(name = "img")
	protected String ImgAttr;
	@XmlAttribute(name = "name")
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
}

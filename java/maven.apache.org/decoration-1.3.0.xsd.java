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

// PoweredBy is Powered by logos list.
public class PoweredBy {
	@XmlElement(required = true, name = "logo")
	protected List<Logo> Logo;
}

// Custom is Custom configuration for use with customized Velocity templates. Data from this field are
//             accessible in Velocity template from <code>$decoration.custom</code> variable as DOM content.
//             Example: <code>$decoration.custom.getChild( 'customElement' ).getValue()</code>
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
	protected String PositionAttr;
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

// Head is Additional content (like Javascript) to include in the HEAD block of the generated pages.
public class Head {
}

// Links is A list of links to display in the navigation.
public class Links {
	@XmlElement(required = true, name = "item")
	protected List<LinkItem> Item;
}

// Breadcrumbs is A list of breadcrumbs to display in the navigation.
public class Breadcrumbs {
	@XmlElement(required = true, name = "item")
	protected List<LinkItem> Item;
}

// Footer is If present, the contained text will be used instead of the generated copyright text.
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
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
	@XmlAttribute(name = "img")
	protected String ImgAttr;
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "alt")
	protected String AltAttr;
	@XmlAttribute(name = "border")
	protected String BorderAttr;
	@XmlAttribute(name = "width")
	protected String WidthAttr;
	@XmlAttribute(name = "height")
	protected String HeightAttr;
	@XmlAttribute(name = "target")
	protected String TargetAttr;
	@XmlAttribute(name = "title")
	protected String TitleAttr;
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
	@XmlAttribute(name = "alt")
	protected String AltAttr;
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "border")
	protected String BorderAttr;
	@XmlAttribute(name = "width")
	protected String WidthAttr;
	@XmlAttribute(name = "height")
	protected String HeightAttr;
	@XmlAttribute(name = "title")
	protected String TitleAttr;
	@XmlElement(required = true, name = "item")
	protected List<MenuItem> Item;
}

// MenuItem is A list of menu item.
public class MenuItem {
	@XmlAttribute(name = "collapse")
	protected Boolean CollapseAttr;
	@XmlAttribute(name = "ref")
	protected String RefAttr;
	@XmlAttribute(name = "name")
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
	@XmlAttribute(name = "img")
	protected String ImgAttr;
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "alt")
	protected String AltAttr;
	@XmlAttribute(name = "border")
	protected String BorderAttr;
	@XmlAttribute(name = "width")
	protected String WidthAttr;
	@XmlAttribute(name = "height")
	protected String HeightAttr;
	@XmlAttribute(name = "target")
	protected String TargetAttr;
	@XmlAttribute(name = "title")
	protected String TitleAttr;
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
	protected String NameAttr;
	@XmlAttribute(name = "href")
	protected String HrefAttr;
	@XmlAttribute(name = "img")
	protected String ImgAttr;
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "alt")
	protected String AltAttr;
	@XmlAttribute(name = "border")
	protected String BorderAttr;
	@XmlAttribute(name = "width")
	protected String WidthAttr;
	@XmlAttribute(name = "height")
	protected String HeightAttr;
	@XmlAttribute(name = "target")
	protected String TargetAttr;
	@XmlAttribute(name = "title")
	protected String TitleAttr;
}

// PublishDate is Modify display properties for date published.
public class PublishDate {
	@XmlAttribute(name = "position")
	protected String PositionAttr;
	@XmlAttribute(name = "format")
	protected String FormatAttr;
}

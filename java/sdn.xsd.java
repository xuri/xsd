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

// PublshInformation ...
public class PublshInformation {
	@XmlElement(required = true, name = "Publish_Date")
	protected String Publish_Date;
	@XmlElement(required = true, name = "Record_Count")
	protected Integer Record_Count;
}

// ProgramList ...
public class ProgramList {
	@XmlElement(required = true, name = "program")
	protected List<String> Program;
}

// Id ...
public class Id {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "idType")
	protected String IdType;
	@XmlElement(required = true, name = "idNumber")
	protected String IdNumber;
	@XmlElement(required = true, name = "idCountry")
	protected String IdCountry;
	@XmlElement(required = true, name = "issueDate")
	protected String IssueDate;
	@XmlElement(required = true, name = "expirationDate")
	protected String ExpirationDate;
}

// IdList ...
public class IdList {
	@XmlElement(required = true, name = "id")
	protected List<Id> Id;
}

// Aka ...
public class Aka {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "type")
	protected String Type;
	@XmlElement(required = true, name = "category")
	protected String Category;
	@XmlElement(required = true, name = "lastName")
	protected String LastName;
	@XmlElement(required = true, name = "firstName")
	protected String FirstName;
}

// AkaList ...
public class AkaList {
	@XmlElement(required = true, name = "aka")
	protected List<Aka> Aka;
}

// Address ...
public class Address {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "address1")
	protected String Address1;
	@XmlElement(required = true, name = "address2")
	protected String Address2;
	@XmlElement(required = true, name = "address3")
	protected String Address3;
	@XmlElement(required = true, name = "city")
	protected String City;
	@XmlElement(required = true, name = "stateOrProvince")
	protected String StateOrProvince;
	@XmlElement(required = true, name = "postalCode")
	protected String PostalCode;
	@XmlElement(required = true, name = "country")
	protected String Country;
}

// AddressList ...
public class AddressList {
	@XmlElement(required = true, name = "address")
	protected List<Address> Address;
}

// Nationality ...
public class Nationality {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "country")
	protected String Country;
	@XmlElement(required = true, name = "mainEntry")
	protected Boolean MainEntry;
}

// NationalityList ...
public class NationalityList {
	@XmlElement(required = true, name = "nationality")
	protected List<Nationality> Nationality;
}

// Citizenship ...
public class Citizenship {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "country")
	protected String Country;
	@XmlElement(required = true, name = "mainEntry")
	protected Boolean MainEntry;
}

// CitizenshipList ...
public class CitizenshipList {
	@XmlElement(required = true, name = "citizenship")
	protected List<Citizenship> Citizenship;
}

// DateOfBirthItem ...
public class DateOfBirthItem {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "dateOfBirth")
	protected String DateOfBirth;
	@XmlElement(required = true, name = "mainEntry")
	protected Boolean MainEntry;
}

// DateOfBirthList ...
public class DateOfBirthList {
	@XmlElement(required = true, name = "dateOfBirthItem")
	protected List<DateOfBirthItem> DateOfBirthItem;
}

// PlaceOfBirthItem ...
public class PlaceOfBirthItem {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "placeOfBirth")
	protected String PlaceOfBirth;
	@XmlElement(required = true, name = "mainEntry")
	protected Boolean MainEntry;
}

// PlaceOfBirthList ...
public class PlaceOfBirthList {
	@XmlElement(required = true, name = "placeOfBirthItem")
	protected List<PlaceOfBirthItem> PlaceOfBirthItem;
}

// VesselInfo ...
public class VesselInfo {
	@XmlElement(required = true, name = "callSign")
	protected String CallSign;
	@XmlElement(required = true, name = "vesselType")
	protected String VesselType;
	@XmlElement(required = true, name = "vesselFlag")
	protected String VesselFlag;
	@XmlElement(required = true, name = "vesselOwner")
	protected String VesselOwner;
	@XmlElement(required = true, name = "tonnage")
	protected Integer Tonnage;
	@XmlElement(required = true, name = "grossRegisteredTonnage")
	protected Integer GrossRegisteredTonnage;
}

// SdnEntry ...
public class SdnEntry {
	@XmlElement(required = true, name = "uid")
	protected Integer Uid;
	@XmlElement(required = true, name = "firstName")
	protected String FirstName;
	@XmlElement(required = true, name = "lastName")
	protected String LastName;
	@XmlElement(required = true, name = "title")
	protected String Title;
	@XmlElement(required = true, name = "sdnType")
	protected String SdnType;
	@XmlElement(required = true, name = "remarks")
	protected String Remarks;
	@XmlElement(required = true, name = "programList")
	protected ProgramList ProgramList;
	@XmlElement(required = true, name = "idList")
	protected IdList IdList;
	@XmlElement(required = true, name = "akaList")
	protected AkaList AkaList;
	@XmlElement(required = true, name = "addressList")
	protected AddressList AddressList;
	@XmlElement(required = true, name = "nationalityList")
	protected NationalityList NationalityList;
	@XmlElement(required = true, name = "citizenshipList")
	protected CitizenshipList CitizenshipList;
	@XmlElement(required = true, name = "dateOfBirthList")
	protected DateOfBirthList DateOfBirthList;
	@XmlElement(required = true, name = "placeOfBirthList")
	protected PlaceOfBirthList PlaceOfBirthList;
	@XmlElement(required = true, name = "vesselInfo")
	protected VesselInfo VesselInfo;
}

// SdnList ...
public class SdnList {
	@XmlElement(required = true, name = "publshInformation")
	protected PublshInformation PublshInformation;
	@XmlElement(required = true, name = "sdnEntry")
	protected List<SdnEntry> SdnEntry;
}

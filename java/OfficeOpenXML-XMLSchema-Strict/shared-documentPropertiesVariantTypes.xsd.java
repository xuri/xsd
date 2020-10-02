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
@XmlAttribute(required = true, name = "ST_VectorBaseType")
public class ST_VectorBaseType {
	protected String ST_VectorBaseType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_ArrayBaseType")
public class ST_ArrayBaseType {
	protected String ST_ArrayBaseType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Cy")
public class ST_Cy {
	protected String ST_Cy;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_Error")
public class ST_Error {
	protected String ST_Error;
}

public class CT_Empty {
}

public class CT_Null {
}

public class CT_Vector {
	@XmlAttribute(name = "baseType", required = true)
	protected StringAttr BaseType;
	@XmlAttribute(name = "size", required = true)
	protected IntegerAttr Size;
	@XmlElement(required = true, name = "variant")
	protected CT_Variant Variant;
	@XmlElement(required = true, name = "i1")
	protected Byte I1;
	@XmlElement(required = true, name = "i2")
	protected Integer I2;
	@XmlElement(required = true, name = "i4")
	protected Integer I4;
	@XmlElement(required = true, name = "i8")
	protected Long I8;
	@XmlElement(required = true, name = "ui1")
	protected Byte Ui1;
	@XmlElement(required = true, name = "ui2")
	protected Short Ui2;
	@XmlElement(required = true, name = "ui4")
	protected Integer Ui4;
	@XmlElement(required = true, name = "ui8")
	protected Long Ui8;
	@XmlElement(required = true, name = "r4")
	protected Float R4;
	@XmlElement(required = true, name = "r8")
	protected Float R8;
	@XmlElement(required = true, name = "lpstr")
	protected String Lpstr;
	@XmlElement(required = true, name = "lpwstr")
	protected String Lpwstr;
	@XmlElement(required = true, name = "bstr")
	protected String Bstr;
	@XmlElement(required = true, name = "date")
	protected Byte Date;
	@XmlElement(required = true, name = "filetime")
	protected Byte Filetime;
	@XmlElement(required = true, name = "bool")
	protected Boolean Bool;
	@XmlElement(required = true, name = "cy")
	protected String Cy;
	@XmlElement(required = true, name = "error")
	protected String Error;
	@XmlElement(required = true, name = "clsid")
	protected String Clsid;
}

public class CT_Array {
	@XmlAttribute(name = "lBounds", required = true)
	protected IntegerAttr LBounds;
	@XmlAttribute(name = "uBounds", required = true)
	protected IntegerAttr UBounds;
	@XmlAttribute(name = "baseType", required = true)
	protected StringAttr BaseType;
	@XmlElement(required = true, name = "variant")
	protected CT_Variant Variant;
	@XmlElement(required = true, name = "i1")
	protected Byte I1;
	@XmlElement(required = true, name = "i2")
	protected Integer I2;
	@XmlElement(required = true, name = "i4")
	protected Integer I4;
	@XmlElement(required = true, name = "int")
	protected Integer Int;
	@XmlElement(required = true, name = "ui1")
	protected Byte Ui1;
	@XmlElement(required = true, name = "ui2")
	protected Short Ui2;
	@XmlElement(required = true, name = "ui4")
	protected Integer Ui4;
	@XmlElement(required = true, name = "uint")
	protected Integer Uint;
	@XmlElement(required = true, name = "r4")
	protected Float R4;
	@XmlElement(required = true, name = "r8")
	protected Float R8;
	@XmlElement(required = true, name = "decimal")
	protected Float Decimal;
	@XmlElement(required = true, name = "bstr")
	protected String Bstr;
	@XmlElement(required = true, name = "date")
	protected Byte Date;
	@XmlElement(required = true, name = "bool")
	protected Boolean Bool;
	@XmlElement(required = true, name = "error")
	protected String Error;
	@XmlElement(required = true, name = "cy")
	protected String Cy;
}

public class CT_Variant {
	@XmlElement(required = true, name = "variant")
	protected CT_Variant Variant;
	@XmlElement(required = true, name = "vector")
	protected CT_Vector Vector;
	@XmlElement(required = true, name = "array")
	protected CT_Array Array;
	@XmlElement(required = true, name = "blob")
	protected List<Byte> Blob;
	@XmlElement(required = true, name = "oblob")
	protected List<Byte> Oblob;
	@XmlElement(required = true, name = "empty")
	protected CT_Empty Empty;
	@XmlElement(required = true, name = "null")
	protected CT_Null Null;
	@XmlElement(required = true, name = "i1")
	protected Byte I1;
	@XmlElement(required = true, name = "i2")
	protected Integer I2;
	@XmlElement(required = true, name = "i4")
	protected Integer I4;
	@XmlElement(required = true, name = "i8")
	protected Long I8;
	@XmlElement(required = true, name = "int")
	protected Integer Int;
	@XmlElement(required = true, name = "ui1")
	protected Byte Ui1;
	@XmlElement(required = true, name = "ui2")
	protected Short Ui2;
	@XmlElement(required = true, name = "ui4")
	protected Integer Ui4;
	@XmlElement(required = true, name = "ui8")
	protected Long Ui8;
	@XmlElement(required = true, name = "uint")
	protected Integer Uint;
	@XmlElement(required = true, name = "r4")
	protected Float R4;
	@XmlElement(required = true, name = "r8")
	protected Float R8;
	@XmlElement(required = true, name = "decimal")
	protected Float Decimal;
	@XmlElement(required = true, name = "lpstr")
	protected String Lpstr;
	@XmlElement(required = true, name = "lpwstr")
	protected String Lpwstr;
	@XmlElement(required = true, name = "bstr")
	protected String Bstr;
	@XmlElement(required = true, name = "date")
	protected Byte Date;
	@XmlElement(required = true, name = "filetime")
	protected Byte Filetime;
	@XmlElement(required = true, name = "bool")
	protected Boolean Bool;
	@XmlElement(required = true, name = "cy")
	protected String Cy;
	@XmlElement(required = true, name = "error")
	protected String Error;
	@XmlElement(required = true, name = "stream")
	protected List<Byte> Stream;
	@XmlElement(required = true, name = "ostream")
	protected List<Byte> Ostream;
	@XmlElement(required = true, name = "storage")
	protected List<Byte> Storage;
	@XmlElement(required = true, name = "ostorage")
	protected List<Byte> Ostorage;
	@XmlElement(required = true, name = "vstream")
	protected CT_Vstream Vstream;
	@XmlElement(required = true, name = "clsid")
	protected String Clsid;
}

public class CT_Vstream {
	@XmlAttribute(name = "version")
	protected StringAttr Version;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "variant")
public class Variant {
	protected CT_Variant Variant;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "vector")
public class Vector {
	protected CT_Vector Vector;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "array")
public class Array {
	protected CT_Array Array;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "blob")
public class Blob {
	protected List<Byte> Blob;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "oblob")
public class Oblob {
	protected List<Byte> Oblob;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "empty")
public class Empty {
	protected CT_Empty Empty;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "null")
public class Null {
	protected CT_Null Null;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "i1")
public class I1 {
	protected Byte I1;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "i2")
public class I2 {
	protected Integer I2;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "i4")
public class I4 {
	protected Integer I4;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "i8")
public class I8 {
	protected Long I8;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "int")
public class Int {
	protected Integer Int;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ui1")
public class Ui1 {
	protected Byte Ui1;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ui2")
public class Ui2 {
	protected Short Ui2;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ui4")
public class Ui4 {
	protected Integer Ui4;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ui8")
public class Ui8 {
	protected Long Ui8;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "uint")
public class Uint {
	protected Integer Uint;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "r4")
public class R4 {
	protected Float R4;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "r8")
public class R8 {
	protected Float R8;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "decimal")
public class Decimal {
	protected Float Decimal;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "lpstr")
public class Lpstr {
	protected String Lpstr;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "lpwstr")
public class Lpwstr {
	protected String Lpwstr;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "bstr")
public class Bstr {
	protected String Bstr;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "date")
public class Date {
	protected Byte Date;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "filetime")
public class Filetime {
	protected Byte Filetime;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "bool")
public class Bool {
	protected Boolean Bool;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "cy")
public class Cy {
	protected String Cy;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "error")
public class Error {
	protected String Error;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "stream")
public class Stream {
	protected List<Byte> Stream;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ostream")
public class Ostream {
	protected List<Byte> Ostream;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "storage")
public class Storage {
	protected List<Byte> Storage;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ostorage")
public class Ostorage {
	protected List<Byte> Ostorage;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "vstream")
public class Vstream {
	protected CT_Vstream Vstream;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "clsid")
public class Clsid {
	protected String Clsid;
}

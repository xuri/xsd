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

public class TDocumentation {
}

public class TDocumented {
	@XmlElement(required = true, name = "documentation")
	protected TDocumentation Documentation;
}

public class TExtensibleAttributesDocumented {
}

public class TExtensibleDocumented {
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "definitions")
public class Definitions {
	protected TDefinitions Definitions;
}

public class AnyTopLevelOptionalElement {
	@XmlElement(required = true, name = "import")
	protected TImport Import;
	@XmlElement(required = true, name = "types")
	protected TTypes Types;
	@XmlElement(required = true, name = "message")
	protected TMessage Message;
	@XmlElement(required = true, name = "portType")
	protected TPortType PortType;
	@XmlElement(required = true, name = "binding")
	protected TBinding Binding;
	@XmlElement(required = true, name = "service")
	protected TService Service;
}

public class TDefinitions {
	@XmlAttribute(name = "targetNamespace")
	protected QNameAttr TargetNamespace;
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	protected List<AnyTopLevelOptionalElement> WsdlAnyTopLevelOptionalElement;
}

public class TImport {
	@XmlAttribute(name = "namespace", required = true)
	protected QNameAttr Namespace;
	@XmlAttribute(name = "location", required = true)
	protected QNameAttr Location;
}

public class TTypes {
}

public class TMessage {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlElement(required = true, name = "part")
	protected List<TPart> Part;
}

public class TPart {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "element")
	protected StringAttr Element;
	@XmlAttribute(name = "type")
	protected StringAttr Type;
}

public class TPortType {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlElement(required = true, name = "operation")
	protected List<TOperation> Operation;
}

public class TOperation {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "parameterOrder")
	protected List<String>Attr ParameterOrder;
	protected Requestresponseoronewayoperation WsdlRequestresponseoronewayoperation;
	protected Solicitresponseornotificationoperation WsdlSolicitresponseornotificationoperation;
}

public class Requestresponseoronewayoperation {
	@XmlElement(required = true, name = "input")
	protected TParam Input;
	@XmlElement(required = true, name = "output")
	protected TParam Output;
	@XmlElement(required = true, name = "fault")
	protected List<TFault> Fault;
}

public class Solicitresponseornotificationoperation {
	@XmlElement(required = true, name = "output")
	protected TParam Output;
	@XmlElement(required = true, name = "input")
	protected TParam Input;
	@XmlElement(required = true, name = "fault")
	protected List<TFault> Fault;
}

public class TParam {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "message", required = true)
	protected StringAttr Message;
}

public class TFault {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "message", required = true)
	protected StringAttr Message;
}

public class TBinding {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "type", required = true)
	protected StringAttr Type;
	@XmlElement(required = true, name = "operation")
	protected List<TBindingOperation> Operation;
}

public class TBindingOperationMessage {
	@XmlAttribute(name = "name")
	protected StringAttr Name;
}

public class TBindingOperationFault {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
}

public class TBindingOperation {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlElement(required = true, name = "input")
	protected TBindingOperationMessage Input;
	@XmlElement(required = true, name = "output")
	protected TBindingOperationMessage Output;
	@XmlElement(required = true, name = "fault")
	protected List<TBindingOperationFault> Fault;
}

public class TService {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlElement(required = true, name = "port")
	protected List<TPort> Port;
}

public class TPort {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "binding", required = true)
	protected StringAttr Binding;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "arrayType")
public class ArrayType {
	protected String ArrayType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "required")
public class Required {
	protected Boolean Required;
}

public class TExtensibilityElement {
	@XmlAttribute(name = "wsdl:required")
	protected BooleanAttr WsdlRequired;
}

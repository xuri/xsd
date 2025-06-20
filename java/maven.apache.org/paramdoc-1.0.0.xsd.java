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
@XmlElement(required = true, name = "paramdoc")
public class Paramdoc {
	protected ExpressionDocumentation Paramdoc;
}

// Expressions is The list of plugin parameter expressions described by this
//             document.
public class Expressions {
	@XmlElement(required = true, name = "expression")
	protected List<Expression> Expression;
}

// ExpressionDocumentation is The root of a parameter plugin expression document.
public class ExpressionDocumentation {
	@XmlElement(required = true, name = "expressions")
	protected Expressions Expressions;
}

// CliOptions is The command-line switches used to change the value of this expression.
public class CliOptions {
}

// ApiMethods is The programmatic methods used to change the value of this expression.
public class ApiMethods {
}

// Expression is The place and syntax used to change the value of this expression.
public class Expression {
	@XmlElement(required = true, name = "syntax")
	protected String Syntax;
	@XmlElement(required = true, name = "description")
	protected String Description;
	@XmlElement(required = true, name = "configuration")
	protected String Configuration;
	@XmlElement(required = true, name = "cliOptions")
	protected CliOptions CliOptions;
	@XmlElement(required = true, name = "apiMethods")
	protected ApiMethods ApiMethods;
	@XmlElement(required = true, name = "deprecation")
	protected String Deprecation;
	@XmlElement(required = true, name = "ban")
	protected String Ban;
	@XmlElement(required = true, name = "editable")
	protected Boolean Editable;
}

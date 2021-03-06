// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Paramdoc is The root of a parameter plugin expression document.
type Paramdoc *ExpressionDocumentation

// Expressions ...
type Expressions struct {
	XMLName    xml.Name      `xml:"expressions"`
	Expression []*Expression `xml:"expression"`
}

// ExpressionDocumentation is The root of a parameter plugin expression document.
type ExpressionDocumentation struct {
	Expressions *Expressions `xml:"expressions"`
}

// CliOptions ...
type CliOptions struct {
	XMLName xml.Name `xml:"cliOptions"`
}

// ApiMethods ...
type ApiMethods struct {
	XMLName xml.Name `xml:"apiMethods"`
}

// Expression is The place and syntax used to change the value of this expression.
type Expression struct {
	Syntax        string      `xml:"syntax"`
	Description   string      `xml:"description"`
	Configuration string      `xml:"configuration"`
	CliOptions    *CliOptions `xml:"cliOptions"`
	ApiMethods    *ApiMethods `xml:"apiMethods"`
	Deprecation   string      `xml:"deprecation"`
	Ban           string      `xml:"ban"`
	Editable      bool        `xml:"editable"`
}

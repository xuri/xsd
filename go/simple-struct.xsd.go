// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// ComplexFoo ...
type ComplexFoo struct {
	XMLName  xml.Name        `xml:"complexFoo"`
	Element1 *NonEmptyString `xml:"element1"`
}

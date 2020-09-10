// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// CTAdditionalCharacteristics ...
type CTAdditionalCharacteristics struct {
	XMLName        xml.Name            `xml:"CT_AdditionalCharacteristics"`
	Characteristic []*CTCharacteristic `xml:"characteristic"`
}

// CTCharacteristic ...
type CTCharacteristic struct {
	XMLName        xml.Name `xml:"CT_Characteristic"`
	NameAttr       string   `xml:"name,attr"`
	RelationAttr   string   `xml:"relation,attr"`
	ValAttr        string   `xml:"val,attr"`
	VocabularyAttr string   `xml:"vocabulary,attr,omitempty"`
}

// STRelation ...
type STRelation string

// AdditionalCharacteristics ...
type AdditionalCharacteristics *CTAdditionalCharacteristics

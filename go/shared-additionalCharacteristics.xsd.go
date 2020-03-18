// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package schema

// CTAdditionalCharacteristics ...
type CTAdditionalCharacteristics struct {
	Characteristic []*CTCharacteristic `xml:"characteristic"`
}

// CTCharacteristic ...
type CTCharacteristic struct {
	NameAttr       string `xml:"name,attr"`
	RelationAttr   string `xml:"relation,attr"`
	ValAttr        string `xml:"val,attr"`
	VocabularyAttr string `xml:"vocabulary,attr,omitempty"`
}

// STRelation ...
type STRelation string

// AdditionalCharacteristics ...
type AdditionalCharacteristics *CTAdditionalCharacteristics
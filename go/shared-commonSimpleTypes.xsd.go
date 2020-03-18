// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package schema

// STLang ...
type STLang string

// STHexColorRGB ...
type STHexColorRGB []byte

// STPanose ...
type STPanose []byte

// STCalendarType ...
type STCalendarType string

// STGuid ...
type STGuid string

// STOnOff ...
type STOnOff struct {
	Boolean bool
}

// STString ...
type STString string

// STXmlName ...
type STXmlName string

// STUnsignedDecimalNumber ...
type STUnsignedDecimalNumber uint64

// STTwipsMeasure ...
type STTwipsMeasure struct {
	STUnsignedDecimalNumber    uint64
	STPositiveUniversalMeasure *STPositiveUniversalMeasure
}

// STVerticalAlignRun ...
type STVerticalAlignRun string

// STXstring ...
type STXstring string

// STXAlign ...
type STXAlign string

// STYAlign ...
type STYAlign string

// STConformanceClass ...
type STConformanceClass string

// STUniversalMeasure ...
type STUniversalMeasure string

// STPositiveUniversalMeasure ...
type STPositiveUniversalMeasure string

// STPercentage ...
type STPercentage string

// STFixedPercentage ...
type STFixedPercentage string

// STPositivePercentage ...
type STPositivePercentage string

// STPositiveFixedPercentage ...
type STPositiveFixedPercentage string
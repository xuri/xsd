// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

typedef CT_Properties Properties;

typedef struct {
	CT_Property Property[];
} CT_Properties;

typedef struct {
	char FmtidAttr; // attr
	int PidAttr; // attr
	char NameAttr; // attr, optional
	char LinkTargetAttr; // attr, optional
	CT_Vector VtVector;
	CT_Array VtArray;
	char VtBlob[];
	char VtOblob[];
	CT_Empty VtEmpty;
	CT_Null VtNull;
	char VtI1[];
	int VtI2;
	int VtI4;
	int VtI8;
	int VtInt;
	char VtUi1;
	unsigned int VtUi2;
	unsigned int VtUi4;
	unsigned int VtUi8;
	unsigned int VtUint;
	float VtR4;
	float VtR8;
	float VtDecimal;
	char VtLpstr;
	char VtLpwstr;
	char VtBstr;
	char VtDate;
	char VtFiletime;
	bool VtBool;
	char VtCy;
	char VtError;
	char VtStream[];
	char VtOstream[];
	char VtStorage[];
	char VtOstorage[];
	CT_Vstream VtVstream;
	char VtClsid;
} CT_Property;
// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

export class B {
	C: Array<string>;
}

export class A {
	B: Array<B>;
}

export class FileUpload {
	A: Array<A>;
}

export type C = string;
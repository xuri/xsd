// Code generated by xgen. DO NOT EDIT.

// Properties ...
export type Properties = CT_Properties;

// CT_Properties ...
export class CT_Properties {
	Template: string;
	Manager: string;
	Company: string;
	Pages: number;
	Words: number;
	Characters: number;
	PresentationFormat: string;
	Lines: number;
	Paragraphs: number;
	Slides: number;
	Notes: number;
	TotalTime: number;
	HiddenSlides: number;
	MMClips: number;
	ScaleCrop: boolean;
	HeadingPairs: CT_VectorVariant;
	TitlesOfParts: CT_VectorLpstr;
	LinksUpToDate: boolean;
	CharactersWithSpaces: number;
	SharedDoc: boolean;
	HyperlinkBase: string;
	HLinks: CT_VectorVariant;
	HyperlinksChanged: boolean;
	DigSig: CT_DigSigBlob;
	Application: string;
	AppVersion: string;
	DocSecurity: number;
}

// CT_VectorVariant ...
export class CT_VectorVariant {
	VtVector: CT_Vector;
}

// CT_VectorLpstr ...
export class CT_VectorLpstr {
	VtVector: CT_Vector;
}

// CT_DigSigBlob ...
export class CT_DigSigBlob {
	VtBlob: Uint8Array;
}

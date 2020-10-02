// Code generated by xgen. DO NOT EDIT.

export type Properties = CT_Properties;

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
	HeadingPairs: Array<CT_VectorVariant>;
	TitlesOfParts: Array<CT_VectorLpstr>;
	LinksUpToDate: boolean;
	CharactersWithSpaces: number;
	SharedDoc: boolean;
	HyperlinkBase: string;
	HLinks: Array<CT_VectorVariant>;
	HyperlinksChanged: boolean;
	DigSig: Array<CT_DigSigBlob>;
	Application: string;
	AppVersion: string;
	DocSecurity: number;
}

export class CT_VectorVariant {
	VtVector: CT_Vector;
}

export class CT_VectorLpstr {
	VtVector: CT_Vector;
}

export class CT_DigSigBlob {
	VtBlob: Array<any>;
}

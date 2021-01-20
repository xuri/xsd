// Code generated by xgen. DO NOT EDIT.

// Document is Describes the overall document model.
export type Document = DocumentModel;

// DocumentModel is The meta data to construct a cover page for the document.
export class DocumentModel {
	OutputNameAttr: string | null;
	Meta: DocumentMeta;
	Toc: DocumentTOC;
	Cover: DocumentCover;
}

// DocumentTOC is TOC item.
export class DocumentTOC {
	NameAttr: string | null;
	DepthAttr: number | null;
	Item: Array<DocumentTOCItem>;
}

// DocumentTOCItem is A table of content item containing sub-items.
export class DocumentTOCItem {
	NameAttr: string | null;
	RefAttr: string | null;
	CollapseAttr: boolean | null;
	Item: Array<DocumentTOCItem>;
}

// Authors ...
export class Authors {
	Author: Array<DocumentAuthor>;
}

// DocumentCover is The date as String (recommended format is ISO 8601) to appear on the cover.
//             Only used if <code>coverDate</code> is not set.
//             @since 1.1.1
export class DocumentCover {
	CoverTitle: string;
	CoverSubTitle: string;
	CoverVersion: string;
	CoverType: string;
	CoverDate: string;
	Coverdate: string;
	Authors: Authors;
	Author: string;
	ProjectName: string;
	ProjectLogo: string;
	CompanyName: string;
	CompanyLogo: string;
}

// DocumentAuthor is The state or province of the address of the author, if applicable.
export class DocumentAuthor {
	FirstName: string;
	LastName: string;
	Name: string;
	Initials: string;
	Title: string;
	Position: string;
	Email: string;
	PhoneNumber: string;
	FaxNumber: string;
	CompanyName: string;
	Street: string;
	City: string;
	PostalCode: string;
	Country: string;
	State: string;
}

// KeyWords ...
export class KeyWords {
	KeyWord: string;
}

// DocumentMeta is The unique author of the document, usually as a String of "firstName lastName". For
//             more authors, you could use the &lt;authors/&gt; tag.
export class DocumentMeta {
	Title: string;
	Author: string;
	Authors: Authors;
	Subject: string;
	Keywords: string;
	KeyWords: KeyWords;
	PageSize: string;
	Generator: string;
	Description: string;
	InitialCreator: string;
	Creator: string;
	PrintedBy: string;
	CreationDate: string;
	Creationdate: string;
	Date: string;
	Modifydate: string;
	PrintDate: string;
	Printdate: string;
	Template: DocumentTemplate;
	HyperlinkBehaviour: DocumentHyperlinkBehaviour;
	Language: string;
	EditingCycles: number;
	EditingDuration: number;
	DocumentStatistic: DocumentStatistic;
	Confidential: boolean;
	Draft: boolean;
}

// DocumentTemplate is A template that was used to create the document.
export class DocumentTemplate {
	HrefAttr: string | null;
	TitleAttr: string | null;
	DateAttr: string | null;
	ModifydateAttr: string | null;
}

// DocumentStatistic is Statistical attributes of the document.
export class DocumentStatistic {
	PageCountAttr: number | null;
	TableCountAttr: number | null;
	DrawCountAttr: number | null;
	ImageCountAttr: number | null;
	ObjectCountAttr: number | null;
	OleObjectCountAttr: number | null;
	ParagraphCountAttr: number | null;
	WordCountAttr: number | null;
	CharacterCountAttr: number | null;
	RowCountAttr: number | null;
	FrameCountAttr: number | null;
	SentenceCountAttr: number | null;
	SyllableCountAttr: number | null;
	NonWhitespaceCharacterCountAttr: number | null;
}

// DocumentHyperlinkBehaviour is Specifies the default behavior for hyperlinks in the document.
export class DocumentHyperlinkBehaviour {
	TargetFrameAttr: string | null;
}

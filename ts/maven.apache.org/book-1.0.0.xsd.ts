// Code generated by xgen. DO NOT EDIT.

export type Book = BookModel;

export class Chapters {
	Chapter: Array<Chapter>;
}

export class BookModel {
	Id: string;
	Title: string;
	Author: string;
	Date: string;
	Chapters: Chapters;
}

export class Sections {
	Section: Array<Section>;
}

export class Chapter {
	Id: string;
	Title: string;
	Sections: Sections;
}

export class Section {
	Id: string;
	Title: string;
	File: string;
}

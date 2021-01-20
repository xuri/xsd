// Code generated by xgen. DO NOT EDIT.

// Book is Describes the book layout and packaging.
export type Book = BookModel;

// Chapters ...
export class Chapters {
	Chapter: Array<Chapter>;
}

// BookModel is Specifies the date of this book.
export class BookModel {
	Id: string;
	Title: string;
	Author: string;
	Date: string;
	Chapters: Chapters;
}

// Sections ...
export class Sections {
	Section: Array<Section>;
}

// Chapter is Specifies the title of this chapter.
export class Chapter {
	Id: string;
	Title: string;
	Sections: Sections;
}

// Section is Specifies the file of this section.
export class Section {
	Id: string;
	Title: string;
	File: string;
}

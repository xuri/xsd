// Code generated by xgen. DO NOT EDIT.

export class Library {
	Book: Array<BookType>;
}

export class Person {
	IdAttr: string;
	Name: Array<string>;
	Born: Array<string>;
	Dead: Array<string>;
	Qualification: Array<string>;
}

export class Authors {
	LibPerson: Array<Person>;
}

export class Characters {
	LibPerson: Array<Person>;
}

export class BookType {
	IdAttr: string;
	AvailableAttr: string;
	Isbn: Array<string>;
	Title: Array<string>;
	Authors: Array<Authors>;
	Characters: Array<Characters>;
}

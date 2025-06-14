// Code generated by xgen. DO NOT EDIT.

typedef BookModel Book;

// Chapters is Specifies a collection of chapters.
typedef struct {
	Chapter Chapter[];
} Chapters;

// BookModel is Specifies the date of this book.
typedef struct {
	char Id;
	char Title;
	char Author;
	char Date;
	Chapters Chapters;
} BookModel;

// Sections is Specifies a collection of sections.
typedef struct {
	Section Section[];
} Sections;

// Chapter is Specifies the title of this chapter.
typedef struct {
	char Id;
	char Title;
	Sections Sections;
} Chapter;

// Section is Specifies the file of this section.
typedef struct {
	char Id;
	char Title;
	char File;
} Section;

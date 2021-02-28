// Code generated by xgen. DO NOT EDIT.

typedef CT_Properties Properties;

// CT_Properties ...
typedef struct {
	char Template;
	char Manager;
	char Company;
	int Pages;
	int Words;
	int Characters;
	char PresentationFormat;
	int Lines;
	int Paragraphs;
	int Slides;
	int Notes;
	int TotalTime;
	int HiddenSlides;
	int MMClips;
	bool ScaleCrop;
	CT_VectorVariant HeadingPairs;
	CT_VectorLpstr TitlesOfParts;
	bool LinksUpToDate;
	int CharactersWithSpaces;
	bool SharedDoc;
	char HyperlinkBase;
	CT_VectorVariant HLinks;
	bool HyperlinksChanged;
	CT_DigSigBlob DigSig;
	char Application;
	char AppVersion;
	int DocSecurity;
} CT_Properties;

// CT_VectorVariant ...
typedef struct {
	CT_Vector VtVector;
} CT_VectorVariant;

// CT_VectorLpstr ...
typedef struct {
	CT_Vector VtVector;
} CT_VectorLpstr;

// CT_DigSigBlob ...
typedef struct {
	char VtBlob[];
} CT_DigSigBlob;

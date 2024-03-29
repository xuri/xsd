// Code generated by xgen. DO NOT EDIT.

// CT_EffectExtent ...
typedef struct {
	ST_Coordinate LAttr; // attr
	ST_Coordinate TAttr; // attr
	ST_Coordinate RAttr; // attr
	ST_Coordinate BAttr; // attr
} CT_EffectExtent;

// ST_WrapDistance ...
typedef unsigned int ST_WrapDistance;

// CT_Inline ...
typedef struct {
	unsigned int DistTAttr; // attr, optional
	unsigned int DistBAttr; // attr, optional
	unsigned int DistLAttr; // attr, optional
	unsigned int DistRAttr; // attr, optional
	CT_PositiveSize2D Extent;
	CT_EffectExtent EffectExtent;
	CT_NonVisualDrawingProps DocPr;
	CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
	CT_GraphicalObject AGraphic;
} CT_Inline;

// ST_WrapText ...
typedef char ST_WrapText;

// CT_WrapPath ...
typedef struct {
	bool EditedAttr; // attr, optional
	CT_Point2D Start;
	CT_Point2D LineTo[];
} CT_WrapPath;

// CT_WrapNone ...
typedef struct {
} CT_WrapNone;

// CT_WrapSquare ...
typedef struct {
	char WrapTextAttr; // attr
	unsigned int DistTAttr; // attr, optional
	unsigned int DistBAttr; // attr, optional
	unsigned int DistLAttr; // attr, optional
	unsigned int DistRAttr; // attr, optional
	CT_EffectExtent EffectExtent;
} CT_WrapSquare;

// CT_WrapTight ...
typedef struct {
	char WrapTextAttr; // attr
	unsigned int DistLAttr; // attr, optional
	unsigned int DistRAttr; // attr, optional
	CT_WrapPath WrapPolygon;
} CT_WrapTight;

// CT_WrapThrough ...
typedef struct {
	char WrapTextAttr; // attr
	unsigned int DistLAttr; // attr, optional
	unsigned int DistRAttr; // attr, optional
	CT_WrapPath WrapPolygon;
} CT_WrapThrough;

// CT_WrapTopBottom ...
typedef struct {
	unsigned int DistTAttr; // attr, optional
	unsigned int DistBAttr; // attr, optional
	CT_EffectExtent EffectExtent;
} CT_WrapTopBottom;

// EG_WrapType ...
typedef struct {
	CT_WrapNone WrapNone;
	CT_WrapSquare WrapSquare;
	CT_WrapTight WrapTight;
	CT_WrapThrough WrapThrough;
	CT_WrapTopBottom WrapTopAndBottom;
} EG_WrapType;

// ST_PositionOffset ...
typedef int ST_PositionOffset;

// ST_AlignH ...
typedef char ST_AlignH;

// ST_RelFromH ...
typedef char ST_RelFromH;

// CT_PosH ...
typedef struct {
	char RelativeFromAttr; // attr
	char Align;
	int PosOffset;
} CT_PosH;

// ST_AlignV ...
typedef char ST_AlignV;

// ST_RelFromV ...
typedef char ST_RelFromV;

// CT_PosV ...
typedef struct {
	char RelativeFromAttr; // attr
	char Align;
	int PosOffset;
} CT_PosV;

// CT_Anchor ...
typedef struct {
	unsigned int DistTAttr; // attr, optional
	unsigned int DistBAttr; // attr, optional
	unsigned int DistLAttr; // attr, optional
	unsigned int DistRAttr; // attr, optional
	bool SimplePosAttr; // attr, optional
	unsigned int RelativeHeightAttr; // attr
	bool BehindDocAttr; // attr
	bool LockedAttr; // attr
	bool LayoutInCellAttr; // attr
	bool HiddenAttr; // attr, optional
	bool AllowOverlapAttr; // attr
	EG_WrapType EG_WrapType;
	CT_Point2D SimplePos;
	CT_PosH PositionH;
	CT_PosV PositionV;
	CT_PositiveSize2D Extent;
	CT_EffectExtent EffectExtent;
	CT_NonVisualDrawingProps DocPr;
	CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
	CT_GraphicalObject AGraphic;
} CT_Anchor;

// CT_TxbxContent ...
typedef struct {
	EG_BlockLevelElts WEG_BlockLevelElts[];
} CT_TxbxContent;

// CT_TextboxInfo ...
typedef struct {
	unsigned int IdAttr; // attr, optional
	CT_TxbxContent TxbxContent;
	CT_OfficeArtExtensionList ExtLst;
} CT_TextboxInfo;

// CT_LinkedTextboxInformation ...
typedef struct {
	unsigned int IdAttr; // attr
	unsigned int SeqAttr; // attr
	CT_OfficeArtExtensionList ExtLst;
} CT_LinkedTextboxInformation;

// CT_WordprocessingShape ...
typedef struct {
	bool NormalEastAsianFlowAttr; // attr, optional
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualDrawingShapeProps CNvSpPr;
	CT_NonVisualConnectorProperties CNvCnPr;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
	CT_OfficeArtExtensionList ExtLst;
	CT_TextboxInfo Txbx;
	CT_LinkedTextboxInformation LinkedTxbx;
	CT_TextBodyProperties BodyPr;
} CT_WordprocessingShape;

// CT_GraphicFrame ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGraphicFrameProperties CNvFrPr;
	CT_Transform2D Xfrm;
	CT_GraphicalObject AGraphic;
	CT_OfficeArtExtensionList ExtLst;
} CT_GraphicFrame;

// CT_WordprocessingContentPartNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualContentPartProperties CNvContentPartPr;
} CT_WordprocessingContentPartNonVisual;

// CT_WordprocessingContentPart ...
typedef struct {
	char BwModeAttr; // attr, optional
	char RIdAttr; // attr
	CT_WordprocessingContentPartNonVisual NvContentPartPr;
	CT_Transform2D Xfrm;
	CT_OfficeArtExtensionList ExtLst;
} CT_WordprocessingContentPart;

// CT_WordprocessingGroup ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGroupDrawingShapeProps CNvGrpSpPr;
	CT_GroupShapeProperties GrpSpPr;
	CT_WordprocessingShape Wsp[];
	CT_WordprocessingGroup GrpSp[];
	CT_GraphicFrame GraphicFrame[];
	CT_Picture DpctPic[];
	CT_WordprocessingContentPart ContentPart[];
	CT_OfficeArtExtensionList ExtLst;
} CT_WordprocessingGroup;

// CT_WordprocessingCanvas ...
typedef struct {
	CT_BackgroundFormatting Bg;
	CT_WholeE2oFormatting Whole;
	CT_WordprocessingShape Wsp[];
	CT_Picture DpctPic[];
	CT_WordprocessingContentPart ContentPart[];
	CT_WordprocessingGroup Wgp[];
	CT_GraphicFrame GraphicFrame[];
	CT_OfficeArtExtensionList ExtLst;
} CT_WordprocessingCanvas;

typedef CT_WordprocessingCanvas Wpc;

typedef CT_WordprocessingGroup Wgp;

typedef CT_WordprocessingShape Wsp;

typedef CT_Inline Inline;

typedef CT_Anchor Anchor;

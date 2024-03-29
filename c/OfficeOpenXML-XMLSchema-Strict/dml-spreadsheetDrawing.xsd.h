// Code generated by xgen. DO NOT EDIT.

typedef CT_Marker From;

typedef CT_Marker To;

// CT_AnchorClientData ...
typedef struct {
	bool FLocksWithSheetAttr; // attr, optional
	bool FPrintsWithSheetAttr; // attr, optional
} CT_AnchorClientData;

// CT_ShapeNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualDrawingShapeProps CNvSpPr;
} CT_ShapeNonVisual;

// CT_Shape ...
typedef struct {
	char MacroAttr; // attr, optional
	char TextlinkAttr; // attr, optional
	bool FLocksTextAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_ShapeNonVisual NvSpPr;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
	CT_TextBody TxBody;
} CT_Shape;

// CT_ConnectorNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualConnectorProperties CNvCxnSpPr;
} CT_ConnectorNonVisual;

// CT_Connector ...
typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_ConnectorNonVisual NvCxnSpPr;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
} CT_Connector;

// CT_PictureNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualPictureProperties CNvPicPr;
} CT_PictureNonVisual;

// CT_Picture ...
typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_PictureNonVisual NvPicPr;
	CT_BlipFillProperties BlipFill;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
} CT_Picture;

// CT_GraphicalObjectFrameNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
} CT_GraphicalObjectFrameNonVisual;

// CT_GraphicalObjectFrame ...
typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_GraphicalObjectFrameNonVisual NvGraphicFramePr;
	CT_Transform2D Xfrm;
	CT_GraphicalObject AGraphic;
} CT_GraphicalObjectFrame;

// CT_GroupShapeNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGroupDrawingShapeProps CNvGrpSpPr;
} CT_GroupShapeNonVisual;

// CT_GroupShape ...
typedef struct {
	CT_GroupShapeNonVisual NvGrpSpPr;
	CT_GroupShapeProperties GrpSpPr;
	CT_Shape Sp[];
	CT_GroupShape GrpSp[];
	CT_GraphicalObjectFrame GraphicFrame[];
	CT_Connector CxnSp[];
	CT_Picture Pic[];
} CT_GroupShape;

// EG_ObjectChoices ...
typedef struct {
	CT_Shape Sp;
	CT_GroupShape GrpSp;
	CT_GraphicalObjectFrame GraphicFrame;
	CT_Connector CxnSp;
	CT_Picture Pic;
	CT_Rel ContentPart;
} EG_ObjectChoices;

// CT_Rel ...
typedef struct {
	char RIdAttr; // attr
} CT_Rel;

// ST_ColID ...
typedef int ST_ColID;

// ST_RowID ...
typedef int ST_RowID;

// CT_Marker ...
typedef struct {
	int Col;
	ST_Coordinate ColOff;
	int Row;
	ST_Coordinate RowOff;
} CT_Marker;

// ST_EditAs ...
typedef char ST_EditAs;

// CT_TwoCellAnchor ...
typedef struct {
	char EditAsAttr; // attr, optional
	EG_ObjectChoices EG_ObjectChoices;
	CT_Marker From;
	CT_Marker To;
	CT_AnchorClientData ClientData;
} CT_TwoCellAnchor;

// CT_OneCellAnchor ...
typedef struct {
	EG_ObjectChoices EG_ObjectChoices;
	CT_Marker From;
	CT_PositiveSize2D Ext;
	CT_AnchorClientData ClientData;
} CT_OneCellAnchor;

// CT_AbsoluteAnchor ...
typedef struct {
	EG_ObjectChoices EG_ObjectChoices;
	CT_Point2D Pos;
	CT_PositiveSize2D Ext;
	CT_AnchorClientData ClientData;
} CT_AbsoluteAnchor;

// EG_Anchor ...
typedef struct {
	CT_TwoCellAnchor TwoCellAnchor;
	CT_OneCellAnchor OneCellAnchor;
	CT_AbsoluteAnchor AbsoluteAnchor;
} EG_Anchor;

// CT_Drawing ...
typedef struct {
	EG_Anchor EG_Anchor[];
} CT_Drawing;

typedef CT_Drawing WsDr;

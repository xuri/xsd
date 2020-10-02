// Code generated by xgen. DO NOT EDIT.

typedef struct {
	CT_NonVisualDrawingProps CNvPr[];
	CT_NonVisualDrawingShapeProps CNvSpPr[];
} CT_ShapeNonVisual;

typedef struct {
	char MacroAttr; // attr, optional
	char TextlinkAttr; // attr, optional
	bool FLocksTextAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_ShapeNonVisual NvSpPr[];
	CT_ShapeProperties SpPr[];
	CT_ShapeStyle Style[];
	CT_TextBody TxBody[];
} CT_Shape;

typedef struct {
	CT_NonVisualDrawingProps CNvPr[];
	CT_NonVisualConnectorProperties CNvCxnSpPr[];
} CT_ConnectorNonVisual;

typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_ConnectorNonVisual NvCxnSpPr[];
	CT_ShapeProperties SpPr[];
	CT_ShapeStyle Style[];
} CT_Connector;

typedef struct {
	CT_NonVisualDrawingProps CNvPr[];
	CT_NonVisualPictureProperties CNvPicPr[];
} CT_PictureNonVisual;

typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_PictureNonVisual NvPicPr[];
	CT_BlipFillProperties BlipFill[];
	CT_ShapeProperties SpPr[];
	CT_ShapeStyle Style[];
} CT_Picture;

typedef struct {
	CT_NonVisualDrawingProps CNvPr[];
	CT_NonVisualGraphicFrameProperties CNvGraphicFramePr[];
} CT_GraphicFrameNonVisual;

typedef struct {
	char MacroAttr; // attr, optional
	bool FPublishedAttr; // attr, optional
	CT_GraphicFrameNonVisual NvGraphicFramePr[];
	CT_Transform2D Xfrm[];
	CT_GraphicalObject AGraphic[];
} CT_GraphicFrame;

typedef struct {
	CT_NonVisualDrawingProps CNvPr[];
	CT_NonVisualGroupDrawingShapeProps CNvGrpSpPr[];
} CT_GroupShapeNonVisual;

typedef struct {
	CT_GroupShapeNonVisual NvGrpSpPr[];
	CT_GroupShapeProperties GrpSpPr[];
	CT_Shape Sp;
	CT_GroupShape GrpSp;
	CT_GraphicFrame GraphicFrame;
	CT_Connector CxnSp;
	CT_Picture Pic;
} CT_GroupShape;

typedef struct {
	CT_Shape Sp;
	CT_GroupShape GrpSp;
	CT_GraphicFrame GraphicFrame;
	CT_Connector CxnSp;
	CT_Picture Pic;
} EG_ObjectChoices;

typedef float ST_MarkerCoordinate;

typedef struct {
	float X[];
	float Y[];
} CT_Marker;

typedef struct {
	EG_ObjectChoices EG_ObjectChoices;
	CT_Marker From;
	CT_Marker To;
} CT_RelSizeAnchor;

typedef struct {
	EG_ObjectChoices EG_ObjectChoices;
	CT_Marker From;
	CT_PositiveSize2D Ext;
} CT_AbsSizeAnchor;

typedef struct {
	CT_RelSizeAnchor RelSizeAnchor;
	CT_AbsSizeAnchor AbsSizeAnchor;
} EG_Anchor;

typedef struct {
	EG_Anchor EG_Anchor[];
} CT_Drawing;
// Code generated by xgen. DO NOT EDIT.

// CT_ShapeNonVisual ...
export class CT_ShapeNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvSpPr: Array<CT_NonVisualDrawingShapeProps>;
}

// CT_Shape ...
export class CT_Shape {
	MacroAttr: string | null;
	TextlinkAttr: string | null;
	FLocksTextAttr: boolean | null;
	FPublishedAttr: boolean | null;
	NvSpPr: Array<CT_ShapeNonVisual>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
	TxBody: Array<CT_TextBody>;
}

// CT_ConnectorNonVisual ...
export class CT_ConnectorNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvCxnSpPr: Array<CT_NonVisualConnectorProperties>;
}

// CT_Connector ...
export class CT_Connector {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvCxnSpPr: Array<CT_ConnectorNonVisual>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
}

// CT_PictureNonVisual ...
export class CT_PictureNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvPicPr: Array<CT_NonVisualPictureProperties>;
}

// CT_Picture ...
export class CT_Picture {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvPicPr: Array<CT_PictureNonVisual>;
	BlipFill: Array<CT_BlipFillProperties>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
}

// CT_GraphicFrameNonVisual ...
export class CT_GraphicFrameNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvGraphicFramePr: Array<CT_NonVisualGraphicFrameProperties>;
}

// CT_GraphicFrame ...
export class CT_GraphicFrame {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvGraphicFramePr: Array<CT_GraphicFrameNonVisual>;
	Xfrm: Array<CT_Transform2D>;
	AGraphic: Array<CT_GraphicalObject>;
}

// CT_GroupShapeNonVisual ...
export class CT_GroupShapeNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvGrpSpPr: Array<CT_NonVisualGroupDrawingShapeProps>;
}

// CT_GroupShape ...
export class CT_GroupShape {
	NvGrpSpPr: Array<CT_GroupShapeNonVisual>;
	GrpSpPr: Array<CT_GroupShapeProperties>;
	Sp: CT_Shape;
	GrpSp: CT_GroupShape;
	GraphicFrame: CT_GraphicFrame;
	CxnSp: CT_Connector;
	Pic: CT_Picture;
}

// EG_ObjectChoices ...
export class EG_ObjectChoices {
	Sp: CT_Shape;
	GrpSp: CT_GroupShape;
	GraphicFrame: CT_GraphicFrame;
	CxnSp: CT_Connector;
	Pic: CT_Picture;
}

// ST_MarkerCoordinate ...
export type ST_MarkerCoordinate = number;

// CT_Marker ...
export class CT_Marker {
	X: number;
	Y: number;
}

// CT_RelSizeAnchor ...
export class CT_RelSizeAnchor {
	EG_ObjectChoices: EG_ObjectChoices;
	From: CT_Marker;
	To: CT_Marker;
}

// CT_AbsSizeAnchor ...
export class CT_AbsSizeAnchor {
	EG_ObjectChoices: EG_ObjectChoices;
	From: CT_Marker;
	Ext: CT_PositiveSize2D;
}

// EG_Anchor ...
export class EG_Anchor {
	RelSizeAnchor: CT_RelSizeAnchor;
	AbsSizeAnchor: CT_AbsSizeAnchor;
}

// CT_Drawing ...
export class CT_Drawing {
	EG_Anchor: Array<EG_Anchor>;
}

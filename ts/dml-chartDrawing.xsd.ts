// Code generated by xgen. DO NOT EDIT.

export class CT_ShapeNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvSpPr: Array<CT_NonVisualDrawingShapeProps>;
}

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

export class CT_ConnectorNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvCxnSpPr: Array<CT_NonVisualConnectorProperties>;
}

export class CT_Connector {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvCxnSpPr: Array<CT_ConnectorNonVisual>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
}

export class CT_PictureNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvPicPr: Array<CT_NonVisualPictureProperties>;
}

export class CT_Picture {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvPicPr: Array<CT_PictureNonVisual>;
	BlipFill: Array<CT_BlipFillProperties>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
}

export class CT_GraphicFrameNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvGraphicFramePr: Array<CT_NonVisualGraphicFrameProperties>;
}

export class CT_GraphicFrame {
	MacroAttr: string | null;
	FPublishedAttr: boolean | null;
	NvGraphicFramePr: Array<CT_GraphicFrameNonVisual>;
	Xfrm: Array<CT_Transform2D>;
	AGraphic: Array<CT_GraphicalObject>;
}

export class CT_GroupShapeNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvGrpSpPr: Array<CT_NonVisualGroupDrawingShapeProps>;
}

export class CT_GroupShape {
	NvGrpSpPr: Array<CT_GroupShapeNonVisual>;
	GrpSpPr: Array<CT_GroupShapeProperties>;
	Sp: Array<CT_Shape>;
	GrpSp: Array<CT_GroupShape>;
	GraphicFrame: Array<CT_GraphicFrame>;
	CxnSp: Array<CT_Connector>;
	Pic: Array<CT_Picture>;
}

export class EG_ObjectChoices {
	Sp: CT_Shape;
	GrpSp: CT_GroupShape;
	GraphicFrame: CT_GraphicFrame;
	CxnSp: CT_Connector;
	Pic: CT_Picture;
}

export type ST_MarkerCoordinate = number;

export class CT_Marker {
	X: Array<number>;
	Y: Array<number>;
}

export class CT_RelSizeAnchor {
	EG_ObjectChoices: EG_ObjectChoices;
	From: Array<CT_Marker>;
	To: Array<CT_Marker>;
}

export class CT_AbsSizeAnchor {
	EG_ObjectChoices: EG_ObjectChoices;
	From: Array<CT_Marker>;
	Ext: Array<CT_PositiveSize2D>;
}

export class EG_Anchor {
	RelSizeAnchor: CT_RelSizeAnchor;
	AbsSizeAnchor: CT_AbsSizeAnchor;
}

export class CT_Drawing {
	EG_Anchor: Array<EG_Anchor>;
}

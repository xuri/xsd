// Code generated by xgen. DO NOT EDIT.

export class CT_EffectExtent {
	LAttr: ST_Coordinate;
	TAttr: ST_Coordinate;
	RAttr: ST_Coordinate;
	BAttr: ST_Coordinate;
}

export type ST_WrapDistance = number;

export class CT_Inline {
	DistTAttr: number | null;
	DistBAttr: number | null;
	DistLAttr: number | null;
	DistRAttr: number | null;
	Extent: Array<CT_PositiveSize2D>;
	EffectExtent: Array<CT_EffectExtent>;
	DocPr: Array<CT_NonVisualDrawingProps>;
	CNvGraphicFramePr: Array<CT_NonVisualGraphicFrameProperties>;
	AGraphic: Array<CT_GraphicalObject>;
}

export enum ST_WrapText {
	bothSides = 'bothSides',
	left = 'left',
	right = 'right',
	largest = 'largest',
}

export class CT_WrapPath {
	EditedAttr: boolean | null;
	Start: Array<CT_Point2D>;
	LineTo: Array<CT_Point2D>;
}

export class CT_WrapNone {
}

export class CT_WrapSquare {
	WrapTextAttr: string;
	DistTAttr: number | null;
	DistBAttr: number | null;
	DistLAttr: number | null;
	DistRAttr: number | null;
	EffectExtent: Array<CT_EffectExtent>;
}

export class CT_WrapTight {
	WrapTextAttr: string;
	DistLAttr: number | null;
	DistRAttr: number | null;
	WrapPolygon: Array<CT_WrapPath>;
}

export class CT_WrapThrough {
	WrapTextAttr: string;
	DistLAttr: number | null;
	DistRAttr: number | null;
	WrapPolygon: Array<CT_WrapPath>;
}

export class CT_WrapTopBottom {
	DistTAttr: number | null;
	DistBAttr: number | null;
	EffectExtent: Array<CT_EffectExtent>;
}

export class EG_WrapType {
	WrapNone: Array<CT_WrapNone>;
	WrapSquare: Array<CT_WrapSquare>;
	WrapTight: Array<CT_WrapTight>;
	WrapThrough: Array<CT_WrapThrough>;
	WrapTopAndBottom: Array<CT_WrapTopBottom>;
}

export type ST_PositionOffset = number;

export enum ST_AlignH {
	left = 'left',
	right = 'right',
	center = 'center',
	inside = 'inside',
	outside = 'outside',
}

export enum ST_RelFromH {
	margin = 'margin',
	page = 'page',
	column = 'column',
	character = 'character',
	leftMargin = 'leftMargin',
	rightMargin = 'rightMargin',
	insideMargin = 'insideMargin',
	outsideMargin = 'outsideMargin',
}

export class CT_PosH {
	RelativeFromAttr: string;
	Align: Array<string>;
	PosOffset: Array<number>;
}

export enum ST_AlignV {
	top = 'top',
	bottom = 'bottom',
	center = 'center',
	inside = 'inside',
	outside = 'outside',
}

export enum ST_RelFromV {
	margin = 'margin',
	page = 'page',
	paragraph = 'paragraph',
	line = 'line',
	topMargin = 'topMargin',
	bottomMargin = 'bottomMargin',
	insideMargin = 'insideMargin',
	outsideMargin = 'outsideMargin',
}

export class CT_PosV {
	RelativeFromAttr: string;
	Align: Array<string>;
	PosOffset: Array<number>;
}

export class CT_Anchor {
	DistTAttr: number | null;
	DistBAttr: number | null;
	DistLAttr: number | null;
	DistRAttr: number | null;
	SimplePosAttr: boolean | null;
	RelativeHeightAttr: number;
	BehindDocAttr: boolean;
	LockedAttr: boolean;
	LayoutInCellAttr: boolean;
	HiddenAttr: boolean | null;
	AllowOverlapAttr: boolean;
	EG_WrapType: EG_WrapType;
	SimplePos: Array<CT_Point2D>;
	PositionH: Array<CT_PosH>;
	PositionV: Array<CT_PosV>;
	Extent: Array<CT_PositiveSize2D>;
	EffectExtent: Array<CT_EffectExtent>;
	DocPr: Array<CT_NonVisualDrawingProps>;
	CNvGraphicFramePr: Array<CT_NonVisualGraphicFrameProperties>;
	AGraphic: Array<CT_GraphicalObject>;
}

export class CT_TxbxContent {
	WEG_BlockLevelElts: Array<EG_BlockLevelElts>;
}

export class CT_TextboxInfo {
	IdAttr: number | null;
	TxbxContent: Array<CT_TxbxContent>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_LinkedTextboxInformation {
	IdAttr: number;
	SeqAttr: number;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_WordprocessingShape {
	NormalEastAsianFlowAttr: boolean | null;
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvSpPr: Array<CT_NonVisualDrawingShapeProps>;
	CNvCnPr: Array<CT_NonVisualConnectorProperties>;
	SpPr: Array<CT_ShapeProperties>;
	Style: Array<CT_ShapeStyle>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
	Txbx: Array<CT_TextboxInfo>;
	LinkedTxbx: Array<CT_LinkedTextboxInformation>;
	BodyPr: Array<CT_TextBodyProperties>;
}

export class CT_GraphicFrame {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvFrPr: Array<CT_NonVisualGraphicFrameProperties>;
	Xfrm: Array<CT_Transform2D>;
	AGraphic: Array<CT_GraphicalObject>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_WordprocessingContentPartNonVisual {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvContentPartPr: Array<CT_NonVisualContentPartProperties>;
}

export class CT_WordprocessingContentPart {
	BwModeAttr: string | null;
	RIdAttr: string;
	NvContentPartPr: Array<CT_WordprocessingContentPartNonVisual>;
	Xfrm: Array<CT_Transform2D>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_WordprocessingGroup {
	CNvPr: Array<CT_NonVisualDrawingProps>;
	CNvGrpSpPr: Array<CT_NonVisualGroupDrawingShapeProps>;
	GrpSpPr: Array<CT_GroupShapeProperties>;
	Wsp: Array<CT_WordprocessingShape>;
	GrpSp: Array<CT_WordprocessingGroup>;
	GraphicFrame: Array<CT_GraphicFrame>;
	DpctPic: Array<CT_Picture>;
	ContentPart: Array<CT_WordprocessingContentPart>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_WordprocessingCanvas {
	Bg: Array<CT_BackgroundFormatting>;
	Whole: Array<CT_WholeE2oFormatting>;
	Wsp: Array<CT_WordprocessingShape>;
	DpctPic: Array<CT_Picture>;
	ContentPart: Array<CT_WordprocessingContentPart>;
	Wgp: Array<CT_WordprocessingGroup>;
	GraphicFrame: Array<CT_GraphicFrame>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type Wpc = CT_WordprocessingCanvas;

export type Wgp = CT_WordprocessingGroup;

export type Wsp = CT_WordprocessingShape;

export type Inline = CT_Inline;

export type Anchor = CT_Anchor;

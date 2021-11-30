// Code generated by xgen. DO NOT EDIT.

package schema;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlValue;

// CT_EffectExtent ...
public class CT_EffectExtent {
	@XmlAttribute(name = "l", required = true)
	protected ST_Coordinate LAttr;
	@XmlAttribute(name = "t", required = true)
	protected ST_Coordinate TAttr;
	@XmlAttribute(name = "r", required = true)
	protected ST_Coordinate RAttr;
	@XmlAttribute(name = "b", required = true)
	protected ST_Coordinate BAttr;
}

// ST_WrapDistance ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_WrapDistance")
public class ST_WrapDistance {
	protected Integer ST_WrapDistance;
}

// CT_Inline ...
public class CT_Inline {
	@XmlAttribute(name = "distT")
	protected Integer DistTAttr;
	@XmlAttribute(name = "distB")
	protected Integer DistBAttr;
	@XmlAttribute(name = "distL")
	protected Integer DistLAttr;
	@XmlAttribute(name = "distR")
	protected Integer DistRAttr;
	@XmlElement(required = true, name = "extent")
	protected CT_PositiveSize2D Extent;
	@XmlElement(required = true, name = "effectExtent")
	protected CT_EffectExtent EffectExtent;
	@XmlElement(required = true, name = "docPr")
	protected CT_NonVisualDrawingProps DocPr;
	@XmlElement(required = true, name = "cNvGraphicFramePr")
	protected CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
	@XmlElement(required = true, name = "a:graphic")
	protected CT_GraphicalObject AGraphic;
}

// ST_WrapText ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_WrapText")
public class ST_WrapText {
	protected String ST_WrapText;
}

// CT_WrapPath ...
public class CT_WrapPath {
	@XmlAttribute(name = "edited")
	protected Boolean EditedAttr;
	@XmlElement(required = true, name = "start")
	protected CT_Point2D Start;
	@XmlElement(required = true, name = "lineTo")
	protected List<CT_Point2D> LineTo;
}

// CT_WrapNone ...
public class CT_WrapNone {
}

// CT_WrapSquare ...
public class CT_WrapSquare {
	@XmlAttribute(name = "wrapText", required = true)
	protected String WrapTextAttr;
	@XmlAttribute(name = "distT")
	protected Integer DistTAttr;
	@XmlAttribute(name = "distB")
	protected Integer DistBAttr;
	@XmlAttribute(name = "distL")
	protected Integer DistLAttr;
	@XmlAttribute(name = "distR")
	protected Integer DistRAttr;
	@XmlElement(required = true, name = "effectExtent")
	protected CT_EffectExtent EffectExtent;
}

// CT_WrapTight ...
public class CT_WrapTight {
	@XmlAttribute(name = "wrapText", required = true)
	protected String WrapTextAttr;
	@XmlAttribute(name = "distL")
	protected Integer DistLAttr;
	@XmlAttribute(name = "distR")
	protected Integer DistRAttr;
	@XmlElement(required = true, name = "wrapPolygon")
	protected CT_WrapPath WrapPolygon;
}

// CT_WrapThrough ...
public class CT_WrapThrough {
	@XmlAttribute(name = "wrapText", required = true)
	protected String WrapTextAttr;
	@XmlAttribute(name = "distL")
	protected Integer DistLAttr;
	@XmlAttribute(name = "distR")
	protected Integer DistRAttr;
	@XmlElement(required = true, name = "wrapPolygon")
	protected CT_WrapPath WrapPolygon;
}

// CT_WrapTopBottom ...
public class CT_WrapTopBottom {
	@XmlAttribute(name = "distT")
	protected Integer DistTAttr;
	@XmlAttribute(name = "distB")
	protected Integer DistBAttr;
	@XmlElement(required = true, name = "effectExtent")
	protected CT_EffectExtent EffectExtent;
}

// EG_WrapType ...
public class EG_WrapType {
	@XmlElement(required = true, name = "wrapNone")
	protected CT_WrapNone WrapNone;
	@XmlElement(required = true, name = "wrapSquare")
	protected CT_WrapSquare WrapSquare;
	@XmlElement(required = true, name = "wrapTight")
	protected CT_WrapTight WrapTight;
	@XmlElement(required = true, name = "wrapThrough")
	protected CT_WrapThrough WrapThrough;
	@XmlElement(required = true, name = "wrapTopAndBottom")
	protected CT_WrapTopBottom WrapTopAndBottom;
}

// ST_PositionOffset ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_PositionOffset")
public class ST_PositionOffset {
	protected Integer ST_PositionOffset;
}

// ST_AlignH ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_AlignH")
public class ST_AlignH {
	protected String ST_AlignH;
}

// ST_RelFromH ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_RelFromH")
public class ST_RelFromH {
	protected String ST_RelFromH;
}

// CT_PosH ...
public class CT_PosH {
	@XmlAttribute(name = "relativeFrom", required = true)
	protected String RelativeFromAttr;
	@XmlElement(required = true, name = "align")
	protected String Align;
	@XmlElement(required = true, name = "posOffset")
	protected Integer PosOffset;
}

// ST_AlignV ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_AlignV")
public class ST_AlignV {
	protected String ST_AlignV;
}

// ST_RelFromV ...
@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_RelFromV")
public class ST_RelFromV {
	protected String ST_RelFromV;
}

// CT_PosV ...
public class CT_PosV {
	@XmlAttribute(name = "relativeFrom", required = true)
	protected String RelativeFromAttr;
	@XmlElement(required = true, name = "align")
	protected String Align;
	@XmlElement(required = true, name = "posOffset")
	protected Integer PosOffset;
}

// CT_Anchor ...
public class CT_Anchor {
	@XmlAttribute(name = "distT")
	protected Integer DistTAttr;
	@XmlAttribute(name = "distB")
	protected Integer DistBAttr;
	@XmlAttribute(name = "distL")
	protected Integer DistLAttr;
	@XmlAttribute(name = "distR")
	protected Integer DistRAttr;
	@XmlAttribute(name = "simplePos")
	protected Boolean SimplePosAttr;
	@XmlAttribute(name = "relativeHeight", required = true)
	protected Integer RelativeHeightAttr;
	@XmlAttribute(name = "behindDoc", required = true)
	protected Boolean BehindDocAttr;
	@XmlAttribute(name = "locked", required = true)
	protected Boolean LockedAttr;
	@XmlAttribute(name = "layoutInCell", required = true)
	protected Boolean LayoutInCellAttr;
	@XmlAttribute(name = "hidden")
	protected Boolean HiddenAttr;
	@XmlAttribute(name = "allowOverlap", required = true)
	protected Boolean AllowOverlapAttr;
	protected EG_WrapType EG_WrapType;
	@XmlElement(required = true, name = "simplePos")
	protected CT_Point2D SimplePos;
	@XmlElement(required = true, name = "positionH")
	protected CT_PosH PositionH;
	@XmlElement(required = true, name = "positionV")
	protected CT_PosV PositionV;
	@XmlElement(required = true, name = "extent")
	protected CT_PositiveSize2D Extent;
	@XmlElement(required = true, name = "effectExtent")
	protected CT_EffectExtent EffectExtent;
	@XmlElement(required = true, name = "docPr")
	protected CT_NonVisualDrawingProps DocPr;
	@XmlElement(required = true, name = "cNvGraphicFramePr")
	protected CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
	@XmlElement(required = true, name = "a:graphic")
	protected CT_GraphicalObject AGraphic;
}

// CT_TxbxContent ...
public class CT_TxbxContent {
	protected List<EG_BlockLevelElts> WEG_BlockLevelElts;
}

// CT_TextboxInfo ...
public class CT_TextboxInfo {
	@XmlAttribute(name = "id")
	protected Short IdAttr;
	@XmlElement(required = true, name = "txbxContent")
	protected CT_TxbxContent TxbxContent;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

// CT_LinkedTextboxInformation ...
public class CT_LinkedTextboxInformation {
	@XmlAttribute(name = "id", required = true)
	protected Short IdAttr;
	@XmlAttribute(name = "seq", required = true)
	protected Short SeqAttr;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

// CT_WordprocessingShape ...
public class CT_WordprocessingShape {
	@XmlAttribute(name = "normalEastAsianFlow")
	protected Boolean NormalEastAsianFlowAttr;
	@XmlElement(required = true, name = "cNvPr")
	protected CT_NonVisualDrawingProps CNvPr;
	@XmlElement(required = true, name = "cNvSpPr")
	protected CT_NonVisualDrawingShapeProps CNvSpPr;
	@XmlElement(required = true, name = "cNvCnPr")
	protected CT_NonVisualConnectorProperties CNvCnPr;
	@XmlElement(required = true, name = "spPr")
	protected CT_ShapeProperties SpPr;
	@XmlElement(required = true, name = "style")
	protected CT_ShapeStyle Style;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
	@XmlElement(required = true, name = "txbx")
	protected CT_TextboxInfo Txbx;
	@XmlElement(required = true, name = "linkedTxbx")
	protected CT_LinkedTextboxInformation LinkedTxbx;
	@XmlElement(required = true, name = "bodyPr")
	protected CT_TextBodyProperties BodyPr;
}

// CT_GraphicFrame ...
public class CT_GraphicFrame {
	@XmlElement(required = true, name = "cNvPr")
	protected CT_NonVisualDrawingProps CNvPr;
	@XmlElement(required = true, name = "cNvFrPr")
	protected CT_NonVisualGraphicFrameProperties CNvFrPr;
	@XmlElement(required = true, name = "xfrm")
	protected CT_Transform2D Xfrm;
	@XmlElement(required = true, name = "a:graphic")
	protected CT_GraphicalObject AGraphic;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

// CT_WordprocessingContentPartNonVisual ...
public class CT_WordprocessingContentPartNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected CT_NonVisualDrawingProps CNvPr;
	@XmlElement(required = true, name = "cNvContentPartPr")
	protected CT_NonVisualContentPartProperties CNvContentPartPr;
}

// CT_WordprocessingContentPart ...
public class CT_WordprocessingContentPart {
	@XmlAttribute(name = "bwMode")
	protected String BwModeAttr;
	@XmlAttribute(name = "r:id", required = true)
	protected String RIdAttr;
	@XmlElement(required = true, name = "nvContentPartPr")
	protected CT_WordprocessingContentPartNonVisual NvContentPartPr;
	@XmlElement(required = true, name = "xfrm")
	protected CT_Transform2D Xfrm;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

// CT_WordprocessingGroup ...
public class CT_WordprocessingGroup {
	@XmlElement(required = true, name = "cNvPr")
	protected CT_NonVisualDrawingProps CNvPr;
	@XmlElement(required = true, name = "cNvGrpSpPr")
	protected CT_NonVisualGroupDrawingShapeProps CNvGrpSpPr;
	@XmlElement(required = true, name = "grpSpPr")
	protected CT_GroupShapeProperties GrpSpPr;
	@XmlElement(required = true, name = "wsp")
	protected List<CT_WordprocessingShape> Wsp;
	@XmlElement(required = true, name = "grpSp")
	protected List<CT_WordprocessingGroup> GrpSp;
	@XmlElement(required = true, name = "graphicFrame")
	protected List<CT_GraphicFrame> GraphicFrame;
	@XmlElement(required = true, name = "dpct:pic")
	protected List<CT_Picture> DpctPic;
	@XmlElement(required = true, name = "contentPart")
	protected List<CT_WordprocessingContentPart> ContentPart;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

// CT_WordprocessingCanvas ...
public class CT_WordprocessingCanvas {
	@XmlElement(required = true, name = "bg")
	protected CT_BackgroundFormatting Bg;
	@XmlElement(required = true, name = "whole")
	protected CT_WholeE2oFormatting Whole;
	@XmlElement(required = true, name = "wsp")
	protected List<CT_WordprocessingShape> Wsp;
	@XmlElement(required = true, name = "dpct:pic")
	protected List<CT_Picture> DpctPic;
	@XmlElement(required = true, name = "contentPart")
	protected List<CT_WordprocessingContentPart> ContentPart;
	@XmlElement(required = true, name = "wgp")
	protected List<CT_WordprocessingGroup> Wgp;
	@XmlElement(required = true, name = "graphicFrame")
	protected List<CT_GraphicFrame> GraphicFrame;
	@XmlElement(required = true, name = "extLst")
	protected CT_OfficeArtExtensionList ExtLst;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "wpc")
public class Wpc {
	protected CT_WordprocessingCanvas Wpc;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "wgp")
public class Wgp {
	protected CT_WordprocessingGroup Wgp;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "wsp")
public class Wsp {
	protected CT_WordprocessingShape Wsp;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "inline")
public class Inline {
	protected CT_Inline Inline;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "anchor")
public class Anchor {
	protected CT_Anchor Anchor;
}

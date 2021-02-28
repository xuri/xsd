// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// CTEffectExtent ...
type CTEffectExtent struct {
	XMLName xml.Name      `xml:"CT_EffectExtent"`
	LAttr   *STCoordinate `xml:"l,attr"`
	TAttr   *STCoordinate `xml:"t,attr"`
	RAttr   *STCoordinate `xml:"r,attr"`
	BAttr   *STCoordinate `xml:"b,attr"`
}

// STWrapDistance ...
type STWrapDistance uint32

// CTInline ...
type CTInline struct {
	XMLName           xml.Name                           `xml:"CT_Inline"`
	DistTAttr         uint32                             `xml:"distT,attr,omitempty"`
	DistBAttr         uint32                             `xml:"distB,attr,omitempty"`
	DistLAttr         uint32                             `xml:"distL,attr,omitempty"`
	DistRAttr         uint32                             `xml:"distR,attr,omitempty"`
	Extent            *CTPositiveSize2D                  `xml:"extent"`
	EffectExtent      *CTEffectExtent                    `xml:"effectExtent"`
	DocPr             *CTNonVisualDrawingProps           `xml:"docPr"`
	CNvGraphicFramePr *CTNonVisualGraphicFrameProperties `xml:"cNvGraphicFramePr"`
	AGraphic          *CTGraphicalObject                 `xml:"a:graphic"`
}

// STWrapText ...
type STWrapText string

// CTWrapPath ...
type CTWrapPath struct {
	XMLName    xml.Name     `xml:"CT_WrapPath"`
	EditedAttr bool         `xml:"edited,attr,omitempty"`
	Start      *CTPoint2D   `xml:"start"`
	LineTo     []*CTPoint2D `xml:"lineTo"`
}

// CTWrapNone ...
type CTWrapNone struct {
	XMLName xml.Name `xml:"CT_WrapNone"`
}

// CTWrapSquare ...
type CTWrapSquare struct {
	XMLName      xml.Name        `xml:"CT_WrapSquare"`
	WrapTextAttr string          `xml:"wrapText,attr"`
	DistTAttr    uint32          `xml:"distT,attr,omitempty"`
	DistBAttr    uint32          `xml:"distB,attr,omitempty"`
	DistLAttr    uint32          `xml:"distL,attr,omitempty"`
	DistRAttr    uint32          `xml:"distR,attr,omitempty"`
	EffectExtent *CTEffectExtent `xml:"effectExtent"`
}

// CTWrapTight ...
type CTWrapTight struct {
	XMLName      xml.Name    `xml:"CT_WrapTight"`
	WrapTextAttr string      `xml:"wrapText,attr"`
	DistLAttr    uint32      `xml:"distL,attr,omitempty"`
	DistRAttr    uint32      `xml:"distR,attr,omitempty"`
	WrapPolygon  *CTWrapPath `xml:"wrapPolygon"`
}

// CTWrapThrough ...
type CTWrapThrough struct {
	XMLName      xml.Name    `xml:"CT_WrapThrough"`
	WrapTextAttr string      `xml:"wrapText,attr"`
	DistLAttr    uint32      `xml:"distL,attr,omitempty"`
	DistRAttr    uint32      `xml:"distR,attr,omitempty"`
	WrapPolygon  *CTWrapPath `xml:"wrapPolygon"`
}

// CTWrapTopBottom ...
type CTWrapTopBottom struct {
	XMLName      xml.Name        `xml:"CT_WrapTopBottom"`
	DistTAttr    uint32          `xml:"distT,attr,omitempty"`
	DistBAttr    uint32          `xml:"distB,attr,omitempty"`
	EffectExtent *CTEffectExtent `xml:"effectExtent"`
}

// EGWrapType ...
type EGWrapType struct {
	XMLName          xml.Name `xml:"EG_WrapType"`
	WrapNone         *CTWrapNone
	WrapSquare       *CTWrapSquare
	WrapTight        *CTWrapTight
	WrapThrough      *CTWrapThrough
	WrapTopAndBottom *CTWrapTopBottom
}

// STPositionOffset ...
type STPositionOffset int

// STAlignH ...
type STAlignH string

// STRelFromH ...
type STRelFromH string

// CTPosH ...
type CTPosH struct {
	XMLName          xml.Name `xml:"CT_PosH"`
	RelativeFromAttr string   `xml:"relativeFrom,attr"`
	Align            string   `xml:"align"`
	PosOffset        int      `xml:"posOffset"`
}

// STAlignV ...
type STAlignV string

// STRelFromV ...
type STRelFromV string

// CTPosV ...
type CTPosV struct {
	XMLName          xml.Name `xml:"CT_PosV"`
	RelativeFromAttr string   `xml:"relativeFrom,attr"`
	Align            string   `xml:"align"`
	PosOffset        int      `xml:"posOffset"`
}

// CTAnchor ...
type CTAnchor struct {
	XMLName            xml.Name `xml:"CT_Anchor"`
	DistTAttr          uint32   `xml:"distT,attr,omitempty"`
	DistBAttr          uint32   `xml:"distB,attr,omitempty"`
	DistLAttr          uint32   `xml:"distL,attr,omitempty"`
	DistRAttr          uint32   `xml:"distR,attr,omitempty"`
	SimplePosAttr      bool     `xml:"simplePos,attr,omitempty"`
	RelativeHeightAttr uint32   `xml:"relativeHeight,attr"`
	BehindDocAttr      bool     `xml:"behindDoc,attr"`
	LockedAttr         bool     `xml:"locked,attr"`
	LayoutInCellAttr   bool     `xml:"layoutInCell,attr"`
	HiddenAttr         bool     `xml:"hidden,attr,omitempty"`
	AllowOverlapAttr   bool     `xml:"allowOverlap,attr"`
	EGWrapType         *EGWrapType
	SimplePos          *CTPoint2D                         `xml:"simplePos"`
	PositionH          *CTPosH                            `xml:"positionH"`
	PositionV          *CTPosV                            `xml:"positionV"`
	Extent             *CTPositiveSize2D                  `xml:"extent"`
	EffectExtent       *CTEffectExtent                    `xml:"effectExtent"`
	DocPr              *CTNonVisualDrawingProps           `xml:"docPr"`
	CNvGraphicFramePr  *CTNonVisualGraphicFrameProperties `xml:"cNvGraphicFramePr"`
	AGraphic           *CTGraphicalObject                 `xml:"a:graphic"`
}

// CTTxbxContent ...
type CTTxbxContent struct {
	XMLName           xml.Name `xml:"CT_TxbxContent"`
	WEGBlockLevelElts []*EGBlockLevelElts
}

// CTTextboxInfo ...
type CTTextboxInfo struct {
	XMLName     xml.Name                  `xml:"CT_TextboxInfo"`
	IdAttr      uint16                    `xml:"id,attr,omitempty"`
	TxbxContent *CTTxbxContent            `xml:"txbxContent"`
	ExtLst      *CTOfficeArtExtensionList `xml:"extLst"`
}

// CTLinkedTextboxInformation ...
type CTLinkedTextboxInformation struct {
	XMLName xml.Name                  `xml:"CT_LinkedTextboxInformation"`
	IdAttr  uint16                    `xml:"id,attr"`
	SeqAttr uint16                    `xml:"seq,attr"`
	ExtLst  *CTOfficeArtExtensionList `xml:"extLst"`
}

// CTWordprocessingShape ...
type CTWordprocessingShape struct {
	XMLName                 xml.Name                        `xml:"CT_WordprocessingShape"`
	NormalEastAsianFlowAttr bool                            `xml:"normalEastAsianFlow,attr,omitempty"`
	CNvPr                   *CTNonVisualDrawingProps        `xml:"cNvPr"`
	CNvSpPr                 *CTNonVisualDrawingShapeProps   `xml:"cNvSpPr"`
	CNvCnPr                 *CTNonVisualConnectorProperties `xml:"cNvCnPr"`
	SpPr                    *CTShapeProperties              `xml:"spPr"`
	Style                   *CTShapeStyle                   `xml:"style"`
	ExtLst                  *CTOfficeArtExtensionList       `xml:"extLst"`
	Txbx                    *CTTextboxInfo                  `xml:"txbx"`
	LinkedTxbx              *CTLinkedTextboxInformation     `xml:"linkedTxbx"`
	BodyPr                  *CTTextBodyProperties           `xml:"bodyPr"`
}

// CTGraphicFrame ...
type CTGraphicFrame struct {
	XMLName  xml.Name                           `xml:"CT_GraphicFrame"`
	CNvPr    *CTNonVisualDrawingProps           `xml:"cNvPr"`
	CNvFrPr  *CTNonVisualGraphicFrameProperties `xml:"cNvFrPr"`
	Xfrm     *CTTransform2D                     `xml:"xfrm"`
	AGraphic *CTGraphicalObject                 `xml:"a:graphic"`
	ExtLst   *CTOfficeArtExtensionList          `xml:"extLst"`
}

// CTWordprocessingContentPartNonVisual ...
type CTWordprocessingContentPartNonVisual struct {
	XMLName          xml.Name                          `xml:"CT_WordprocessingContentPartNonVisual"`
	CNvPr            *CTNonVisualDrawingProps          `xml:"cNvPr"`
	CNvContentPartPr *CTNonVisualContentPartProperties `xml:"cNvContentPartPr"`
}

// CTWordprocessingContentPart ...
type CTWordprocessingContentPart struct {
	XMLName         xml.Name                              `xml:"CT_WordprocessingContentPart"`
	BwModeAttr      string                                `xml:"bwMode,attr,omitempty"`
	RIdAttr         string                                `xml:"r:id,attr"`
	NvContentPartPr *CTWordprocessingContentPartNonVisual `xml:"nvContentPartPr"`
	Xfrm            *CTTransform2D                        `xml:"xfrm"`
	ExtLst          *CTOfficeArtExtensionList             `xml:"extLst"`
}

// CTWordprocessingGroup ...
type CTWordprocessingGroup struct {
	XMLName      xml.Name                           `xml:"CT_WordprocessingGroup"`
	CNvPr        *CTNonVisualDrawingProps           `xml:"cNvPr"`
	CNvGrpSpPr   *CTNonVisualGroupDrawingShapeProps `xml:"cNvGrpSpPr"`
	GrpSpPr      *CTGroupShapeProperties            `xml:"grpSpPr"`
	Wsp          *CTWordprocessingShape             `xml:"wsp"`
	GrpSp        *CTWordprocessingGroup             `xml:"grpSp"`
	GraphicFrame *CTGraphicFrame                    `xml:"graphicFrame"`
	DpctPic      *CTPicture                         `xml:"dpct:pic"`
	ContentPart  *CTWordprocessingContentPart       `xml:"contentPart"`
	ExtLst       *CTOfficeArtExtensionList          `xml:"extLst"`
}

// CTWordprocessingCanvas ...
type CTWordprocessingCanvas struct {
	XMLName      xml.Name                     `xml:"CT_WordprocessingCanvas"`
	Bg           *CTBackgroundFormatting      `xml:"bg"`
	Whole        *CTWholeE2oFormatting        `xml:"whole"`
	Wsp          *CTWordprocessingShape       `xml:"wsp"`
	DpctPic      *CTPicture                   `xml:"dpct:pic"`
	ContentPart  *CTWordprocessingContentPart `xml:"contentPart"`
	Wgp          *CTWordprocessingGroup       `xml:"wgp"`
	GraphicFrame *CTGraphicFrame              `xml:"graphicFrame"`
	ExtLst       *CTOfficeArtExtensionList    `xml:"extLst"`
}

// Wpc ...
type Wpc *CTWordprocessingCanvas

// Wgp ...
type Wgp *CTWordprocessingGroup

// Wsp ...
type Wsp *CTWordprocessingShape

// Inline ...
type Inline *CTInline

// Anchor ...
type Anchor *CTAnchor

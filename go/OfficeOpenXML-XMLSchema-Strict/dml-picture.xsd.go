// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// CTPictureNonVisual ...
type CTPictureNonVisual struct {
	XMLName  xml.Name                      `xml:"CT_PictureNonVisual"`
	CNvPr    *CTNonVisualDrawingProps      `xml:"cNvPr"`
	CNvPicPr *CTNonVisualPictureProperties `xml:"cNvPicPr"`
}

// CTPicture ...
type CTPicture struct {
	XMLName  xml.Name              `xml:"CT_Picture"`
	NvPicPr  *CTPictureNonVisual   `xml:"nvPicPr"`
	BlipFill *CTBlipFillProperties `xml:"blipFill"`
	SpPr     *CTShapeProperties    `xml:"spPr"`
}

// Pic ...
type Pic *CTPicture

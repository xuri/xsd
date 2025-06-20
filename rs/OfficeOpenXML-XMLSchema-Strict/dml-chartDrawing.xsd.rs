// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// CTShapeNonVisual ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTShapeNonVisual {
	#[serde(rename = "cNvPr")]
	pub c_nv_pr: CTNonVisualDrawingProps,
	#[serde(rename = "cNvSpPr")]
	pub c_nv_sp_pr: CTNonVisualDrawingShapeProps,
}


// CTShape ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTShape {
	#[serde(rename = "macro")]
	pub macro_attr: Option<String>,
	#[serde(rename = "textlink")]
	pub textlink: Option<String>,
	#[serde(rename = "fLocksText")]
	pub f_locks_text: Option<bool>,
	#[serde(rename = "fPublished")]
	pub f_published: Option<bool>,
	#[serde(rename = "nvSpPr")]
	pub nv_sp_pr: CTShapeNonVisual,
	#[serde(rename = "spPr")]
	pub sp_pr: CTShapeProperties,
	#[serde(rename = "style")]
	pub style: Option<CTShapeStyle>,
	#[serde(rename = "txBody")]
	pub tx_body: Option<CTTextBody>,
}


// CTConnectorNonVisual ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTConnectorNonVisual {
	#[serde(rename = "cNvPr")]
	pub c_nv_pr: CTNonVisualDrawingProps,
	#[serde(rename = "cNvCxnSpPr")]
	pub c_nv_cxn_sp_pr: CTNonVisualConnectorProperties,
}


// CTConnector ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTConnector {
	#[serde(rename = "macro")]
	pub macro_attr: Option<String>,
	#[serde(rename = "fPublished")]
	pub f_published: Option<bool>,
	#[serde(rename = "nvCxnSpPr")]
	pub nv_cxn_sp_pr: CTConnectorNonVisual,
	#[serde(rename = "spPr")]
	pub sp_pr: CTShapeProperties,
	#[serde(rename = "style")]
	pub style: Option<CTShapeStyle>,
}


// CTPictureNonVisual ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTPictureNonVisual {
	#[serde(rename = "cNvPr")]
	pub c_nv_pr: CTNonVisualDrawingProps,
	#[serde(rename = "cNvPicPr")]
	pub c_nv_pic_pr: CTNonVisualPictureProperties,
}


// CTPicture ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTPicture {
	#[serde(rename = "macro")]
	pub macro_attr: Option<String>,
	#[serde(rename = "fPublished")]
	pub f_published: Option<bool>,
	#[serde(rename = "nvPicPr")]
	pub nv_pic_pr: CTPictureNonVisual,
	#[serde(rename = "blipFill")]
	pub blip_fill: CTBlipFillProperties,
	#[serde(rename = "spPr")]
	pub sp_pr: CTShapeProperties,
	#[serde(rename = "style")]
	pub style: Option<CTShapeStyle>,
}


// CTGraphicFrameNonVisual ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGraphicFrameNonVisual {
	#[serde(rename = "cNvPr")]
	pub c_nv_pr: CTNonVisualDrawingProps,
	#[serde(rename = "cNvGraphicFramePr")]
	pub c_nv_graphic_frame_pr: CTNonVisualGraphicFrameProperties,
}


// CTGraphicFrame ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGraphicFrame {
	#[serde(rename = "macro")]
	pub macro_attr: Option<String>,
	#[serde(rename = "fPublished")]
	pub f_published: Option<bool>,
	#[serde(rename = "nvGraphicFramePr")]
	pub nv_graphic_frame_pr: CTGraphicFrameNonVisual,
	#[serde(rename = "xfrm")]
	pub xfrm: CTTransform2D,
	#[serde(rename = "a:graphic")]
	pub a_graphic: CTGraphicalObject,
}


// CTGroupShapeNonVisual ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGroupShapeNonVisual {
	#[serde(rename = "cNvPr")]
	pub c_nv_pr: CTNonVisualDrawingProps,
	#[serde(rename = "cNvGrpSpPr")]
	pub c_nv_grp_sp_pr: CTNonVisualGroupDrawingShapeProps,
}


// CTGroupShape ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGroupShape {
	#[serde(rename = "nvGrpSpPr")]
	pub nv_grp_sp_pr: CTGroupShapeNonVisual,
	#[serde(rename = "grpSpPr")]
	pub grp_sp_pr: CTGroupShapeProperties,
	#[serde(rename = "sp")]
	pub sp: Vec<CTShape>,
	#[serde(rename = "grpSp")]
	pub grp_sp: Vec<CTGroupShape>,
	#[serde(rename = "graphicFrame")]
	pub graphic_frame: Vec<CTGraphicFrame>,
	#[serde(rename = "cxnSp")]
	pub cxn_sp: Vec<CTConnector>,
	#[serde(rename = "pic")]
	pub pic: Vec<CTPicture>,
}


// EGObjectChoices ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct EGObjectChoices {
	#[serde(rename = "sp")]
	pub sp: CTShape,
	#[serde(rename = "grpSp")]
	pub grp_sp: CTGroupShape,
	#[serde(rename = "graphicFrame")]
	pub graphic_frame: CTGraphicFrame,
	#[serde(rename = "cxnSp")]
	pub cxn_sp: CTConnector,
	#[serde(rename = "pic")]
	pub pic: CTPicture,
}


// STMarkerCoordinate ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STMarkerCoordinate {
	#[serde(rename = "ST_MarkerCoordinate")]
	pub st_marker_coordinate: f64,
}


// CTMarker ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMarker {
	#[serde(rename = "x")]
	pub x: f64,
	#[serde(rename = "y")]
	pub y: f64,
}


// CTRelSizeAnchor ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTRelSizeAnchor {
	#[serde(rename = "EG_ObjectChoices")]
	pub eg_object_choices: EGObjectChoices,
	#[serde(rename = "from")]
	pub from: CTMarker,
	#[serde(rename = "to")]
	pub to: CTMarker,
}


// CTAbsSizeAnchor ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTAbsSizeAnchor {
	#[serde(rename = "EG_ObjectChoices")]
	pub eg_object_choices: EGObjectChoices,
	#[serde(rename = "from")]
	pub from: CTMarker,
	#[serde(rename = "ext")]
	pub ext: CTPositiveSize2D,
}


// EGAnchor ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct EGAnchor {
	#[serde(rename = "relSizeAnchor")]
	pub rel_size_anchor: CTRelSizeAnchor,
	#[serde(rename = "absSizeAnchor")]
	pub abs_size_anchor: CTAbsSizeAnchor,
}


// CTDrawing ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDrawing {
	#[serde(rename = "EG_Anchor")]
	pub eg_anchor: Vec<EGAnchor>,
}

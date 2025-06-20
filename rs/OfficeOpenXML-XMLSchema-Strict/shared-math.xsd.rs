// Code generated by xgen. DO NOT EDIT.

use serde::Serialize;
use serde::Deserialize;

use serde_xml_rs::from_reader;


// STInteger255 ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STInteger255 {
	#[serde(rename = "ST_Integer255")]
	pub st_integer255: i32,
}


// CTInteger255 ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTInteger255 {
	#[serde(rename = "val")]
	pub val: i32,
}


// STInteger2 ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STInteger2 {
	#[serde(rename = "ST_Integer2")]
	pub st_integer2: i32,
}


// CTInteger2 ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTInteger2 {
	#[serde(rename = "val")]
	pub val: i32,
}


// STSpacingRule ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STSpacingRule {
	#[serde(rename = "ST_SpacingRule")]
	pub st_spacing_rule: i32,
}


// CTSpacingRule ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSpacingRule {
	#[serde(rename = "val")]
	pub val: i32,
}


// STUnSignedInteger ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STUnSignedInteger {
	#[serde(rename = "ST_UnSignedInteger")]
	pub st_un_signed_integer: u32,
}


// CTUnSignedInteger ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTUnSignedInteger {
	#[serde(rename = "val")]
	pub val: u32,
}


// STChar ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STChar {
	#[serde(rename = "ST_Char")]
	pub st_char: String,
}


// CTChar ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTChar {
	#[serde(rename = "val")]
	pub val: String,
}


// CTOnOff ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOnOff {
	#[serde(rename = "val")]
	pub val: Option<STOnOff>,
}


// CTString ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTString {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// CTXAlign ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTXAlign {
	#[serde(rename = "val")]
	pub val: String,
}


// CTYAlign ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTYAlign {
	#[serde(rename = "val")]
	pub val: String,
}


// STShp ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STShp {
	#[serde(rename = "ST_Shp")]
	pub st_shp: String,
}


// CTShp ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTShp {
	#[serde(rename = "val")]
	pub val: String,
}


// STFType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STFType {
	#[serde(rename = "ST_FType")]
	pub st_f_type: String,
}


// CTFType ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTFType {
	#[serde(rename = "val")]
	pub val: String,
}


// STLimLoc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STLimLoc {
	#[serde(rename = "ST_LimLoc")]
	pub st_lim_loc: String,
}


// CTLimLoc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTLimLoc {
	#[serde(rename = "val")]
	pub val: String,
}


// STTopBot ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STTopBot {
	#[serde(rename = "ST_TopBot")]
	pub st_top_bot: String,
}


// CTTopBot ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTTopBot {
	#[serde(rename = "val")]
	pub val: String,
}


// STScript ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STScript {
	#[serde(rename = "ST_Script")]
	pub st_script: String,
}


// CTScript ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTScript {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// STStyle ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STStyle {
	#[serde(rename = "ST_Style")]
	pub st_style: String,
}


// CTStyle ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTStyle {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// CTManualBreak ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTManualBreak {
	#[serde(rename = "alnAt")]
	pub aln_at: Option<i32>,
}


// EGScriptStyle ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct EGScriptStyle {
	#[serde(rename = "scr")]
	pub scr: CTScript,
	#[serde(rename = "sty")]
	pub sty: CTStyle,
}


// CTRPR ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTRPR {
	#[serde(rename = "EG_ScriptStyle")]
	pub eg_script_style: EGScriptStyle,
	#[serde(rename = "lit")]
	pub lit: Option<CTOnOff>,
	#[serde(rename = "nor")]
	pub nor: Option<CTOnOff>,
	#[serde(rename = "brk")]
	pub brk: Option<CTManualBreak>,
	#[serde(rename = "aln")]
	pub aln: Option<CTOnOff>,
}


// CTText ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTText {
	#[serde(rename = "xml:space")]
	pub xml_space: Option<Space>,
	#[serde(rename = "$value")]
	pub value: String,
}


// CTR ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTR {
	#[serde(rename = "w:EG_RPr")]
	pub weg_r_pr: EGRPr,
	#[serde(rename = "w:EG_RunInnerContent")]
	pub weg_run_inner_content: Vec<EGRunInnerContent>,
	#[serde(rename = "rPr")]
	pub r_pr: Option<CTRPR>,
	#[serde(rename = "t")]
	pub t: Vec<CTText>,
}


// CTCtrlPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTCtrlPr {
	#[serde(rename = "w:EG_RPrMath")]
	pub weg_r_pr_math: EGRPrMath,
}


// CTAccPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTAccPr {
	#[serde(rename = "chr")]
	pub chr: Option<CTChar>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTAcc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTAcc {
	#[serde(rename = "accPr")]
	pub acc_pr: Option<CTAccPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTBarPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBarPr {
	#[serde(rename = "pos")]
	pub pos: Option<CTTopBot>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTBar ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBar {
	#[serde(rename = "barPr")]
	pub bar_pr: Option<CTBarPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTBoxPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBoxPr {
	#[serde(rename = "opEmu")]
	pub op_emu: Option<CTOnOff>,
	#[serde(rename = "noBreak")]
	pub no_break: Option<CTOnOff>,
	#[serde(rename = "diff")]
	pub diff: Option<CTOnOff>,
	#[serde(rename = "brk")]
	pub brk: Option<CTManualBreak>,
	#[serde(rename = "aln")]
	pub aln: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTBox ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBox {
	#[serde(rename = "boxPr")]
	pub box_pr: Option<CTBoxPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTBorderBoxPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBorderBoxPr {
	#[serde(rename = "hideTop")]
	pub hide_top: Option<CTOnOff>,
	#[serde(rename = "hideBot")]
	pub hide_bot: Option<CTOnOff>,
	#[serde(rename = "hideLeft")]
	pub hide_left: Option<CTOnOff>,
	#[serde(rename = "hideRight")]
	pub hide_right: Option<CTOnOff>,
	#[serde(rename = "strikeH")]
	pub strike_h: Option<CTOnOff>,
	#[serde(rename = "strikeV")]
	pub strike_v: Option<CTOnOff>,
	#[serde(rename = "strikeBLTR")]
	pub strike_bltr: Option<CTOnOff>,
	#[serde(rename = "strikeTLBR")]
	pub strike_tlbr: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTBorderBox ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBorderBox {
	#[serde(rename = "borderBoxPr")]
	pub border_box_pr: Option<CTBorderBoxPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTDPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTDPr {
	#[serde(rename = "begChr")]
	pub beg_chr: Option<CTChar>,
	#[serde(rename = "sepChr")]
	pub sep_chr: Option<CTChar>,
	#[serde(rename = "endChr")]
	pub end_chr: Option<CTChar>,
	#[serde(rename = "grow")]
	pub grow: Option<CTOnOff>,
	#[serde(rename = "shp")]
	pub shp: Option<CTShp>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTD ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTD {
	#[serde(rename = "dPr")]
	pub d_pr: Option<CTDPr>,
	#[serde(rename = "e")]
	pub e: Vec<CTOMathArg>,
}


// CTEqArrPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTEqArrPr {
	#[serde(rename = "baseJc")]
	pub base_jc: Option<CTYAlign>,
	#[serde(rename = "maxDist")]
	pub max_dist: Option<CTOnOff>,
	#[serde(rename = "objDist")]
	pub obj_dist: Option<CTOnOff>,
	#[serde(rename = "rSpRule")]
	pub r_sp_rule: Option<CTSpacingRule>,
	#[serde(rename = "rSp")]
	pub r_sp: Option<CTUnSignedInteger>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTEqArr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTEqArr {
	#[serde(rename = "eqArrPr")]
	pub eq_arr_pr: Option<CTEqArrPr>,
	#[serde(rename = "e")]
	pub e: Vec<CTOMathArg>,
}


// CTFPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTFPr {
	#[serde(rename = "type")]
	pub type_attr: Option<CTFType>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTF ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTF {
	#[serde(rename = "fPr")]
	pub f_pr: Option<CTFPr>,
	#[serde(rename = "num")]
	pub num: CTOMathArg,
	#[serde(rename = "den")]
	pub den: CTOMathArg,
}


// CTFuncPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTFuncPr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTFunc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTFunc {
	#[serde(rename = "funcPr")]
	pub func_pr: Option<CTFuncPr>,
	#[serde(rename = "fName")]
	pub f_name: CTOMathArg,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTGroupChrPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGroupChrPr {
	#[serde(rename = "chr")]
	pub chr: Option<CTChar>,
	#[serde(rename = "pos")]
	pub pos: Option<CTTopBot>,
	#[serde(rename = "vertJc")]
	pub vert_jc: Option<CTTopBot>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTGroupChr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTGroupChr {
	#[serde(rename = "groupChrPr")]
	pub group_chr_pr: Option<CTGroupChrPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTLimLowPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTLimLowPr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTLimLow ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTLimLow {
	#[serde(rename = "limLowPr")]
	pub lim_low_pr: Option<CTLimLowPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
	#[serde(rename = "lim")]
	pub lim: CTOMathArg,
}


// CTLimUppPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTLimUppPr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTLimUpp ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTLimUpp {
	#[serde(rename = "limUppPr")]
	pub lim_upp_pr: Option<CTLimUppPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
	#[serde(rename = "lim")]
	pub lim: CTOMathArg,
}


// CTMCPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMCPr {
	#[serde(rename = "count")]
	pub count: Option<CTInteger255>,
	#[serde(rename = "mcJc")]
	pub mc_jc: Option<CTXAlign>,
}


// CTMC ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMC {
	#[serde(rename = "mcPr")]
	pub mc_pr: Option<CTMCPr>,
}


// CTMCS ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMCS {
	#[serde(rename = "mc")]
	pub mc: Vec<CTMC>,
}


// CTMPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMPr {
	#[serde(rename = "baseJc")]
	pub base_jc: Option<CTYAlign>,
	#[serde(rename = "plcHide")]
	pub plc_hide: Option<CTOnOff>,
	#[serde(rename = "rSpRule")]
	pub r_sp_rule: Option<CTSpacingRule>,
	#[serde(rename = "cGpRule")]
	pub c_gp_rule: Option<CTSpacingRule>,
	#[serde(rename = "rSp")]
	pub r_sp: Option<CTUnSignedInteger>,
	#[serde(rename = "cSp")]
	pub c_sp: Option<CTUnSignedInteger>,
	#[serde(rename = "cGp")]
	pub c_gp: Option<CTUnSignedInteger>,
	#[serde(rename = "mcs")]
	pub mcs: Option<CTMCS>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTMR ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMR {
	#[serde(rename = "e")]
	pub e: Vec<CTOMathArg>,
}


// CTM ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTM {
	#[serde(rename = "mPr")]
	pub m_pr: Option<CTMPr>,
	#[serde(rename = "mr")]
	pub mr: Vec<CTMR>,
}


// CTNaryPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTNaryPr {
	#[serde(rename = "chr")]
	pub chr: Option<CTChar>,
	#[serde(rename = "limLoc")]
	pub lim_loc: Option<CTLimLoc>,
	#[serde(rename = "grow")]
	pub grow: Option<CTOnOff>,
	#[serde(rename = "subHide")]
	pub sub_hide: Option<CTOnOff>,
	#[serde(rename = "supHide")]
	pub sup_hide: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTNary ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTNary {
	#[serde(rename = "naryPr")]
	pub nary_pr: Option<CTNaryPr>,
	#[serde(rename = "sub")]
	pub sub: CTOMathArg,
	#[serde(rename = "sup")]
	pub sup: CTOMathArg,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTPhantPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTPhantPr {
	#[serde(rename = "show")]
	pub show: Option<CTOnOff>,
	#[serde(rename = "zeroWid")]
	pub zero_wid: Option<CTOnOff>,
	#[serde(rename = "zeroAsc")]
	pub zero_asc: Option<CTOnOff>,
	#[serde(rename = "zeroDesc")]
	pub zero_desc: Option<CTOnOff>,
	#[serde(rename = "transp")]
	pub transp: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTPhant ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTPhant {
	#[serde(rename = "phantPr")]
	pub phant_pr: Option<CTPhantPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTRadPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTRadPr {
	#[serde(rename = "degHide")]
	pub deg_hide: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTRad ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTRad {
	#[serde(rename = "radPr")]
	pub rad_pr: Option<CTRadPr>,
	#[serde(rename = "deg")]
	pub deg: CTOMathArg,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTSPrePr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSPrePr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTSPre ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSPre {
	#[serde(rename = "sPrePr")]
	pub s_pre_pr: Option<CTSPrePr>,
	#[serde(rename = "sub")]
	pub sub: CTOMathArg,
	#[serde(rename = "sup")]
	pub sup: CTOMathArg,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
}


// CTSSubPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSubPr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTSSub ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSub {
	#[serde(rename = "sSubPr")]
	pub s_sub_pr: Option<CTSSubPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
	#[serde(rename = "sub")]
	pub sub: CTOMathArg,
}


// CTSSubSupPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSubSupPr {
	#[serde(rename = "alnScr")]
	pub aln_scr: Option<CTOnOff>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTSSubSup ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSubSup {
	#[serde(rename = "sSubSupPr")]
	pub s_sub_sup_pr: Option<CTSSubSupPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
	#[serde(rename = "sub")]
	pub sub: CTOMathArg,
	#[serde(rename = "sup")]
	pub sup: CTOMathArg,
}


// CTSSupPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSupPr {
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// CTSSup ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTSSup {
	#[serde(rename = "sSupPr")]
	pub s_sup_pr: Option<CTSSupPr>,
	#[serde(rename = "e")]
	pub e: CTOMathArg,
	#[serde(rename = "sup")]
	pub sup: CTOMathArg,
}


// EGOMathMathElements ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct EGOMathMathElements {
	#[serde(rename = "acc")]
	pub acc: CTAcc,
	#[serde(rename = "bar")]
	pub bar: CTBar,
	#[serde(rename = "box")]
	pub box_attr: CTBox,
	#[serde(rename = "borderBox")]
	pub border_box: CTBorderBox,
	#[serde(rename = "d")]
	pub d: CTD,
	#[serde(rename = "eqArr")]
	pub eq_arr: CTEqArr,
	#[serde(rename = "f")]
	pub f: CTF,
	#[serde(rename = "func")]
	pub func: CTFunc,
	#[serde(rename = "groupChr")]
	pub group_chr: CTGroupChr,
	#[serde(rename = "limLow")]
	pub lim_low: CTLimLow,
	#[serde(rename = "limUpp")]
	pub lim_upp: CTLimUpp,
	#[serde(rename = "m")]
	pub m: CTM,
	#[serde(rename = "nary")]
	pub nary: CTNary,
	#[serde(rename = "phant")]
	pub phant: CTPhant,
	#[serde(rename = "rad")]
	pub rad: CTRad,
	#[serde(rename = "sPre")]
	pub s_pre: CTSPre,
	#[serde(rename = "sSub")]
	pub s_sub: CTSSub,
	#[serde(rename = "sSubSup")]
	pub s_sub_sup: CTSSubSup,
	#[serde(rename = "sSup")]
	pub s_sup: CTSSup,
	#[serde(rename = "r")]
	pub r: CTR,
}


// EGOMathElements ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct EGOMathElements {
	#[serde(rename = "EG_OMathMathElements")]
	pub eg_o_math_math_elements: EGOMathMathElements,
	#[serde(rename = "w:EG_PContentMath")]
	pub weg_p_content_math: EGPContentMath,
}


// CTOMathArgPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMathArgPr {
	#[serde(rename = "argSz")]
	pub arg_sz: Option<CTInteger2>,
}


// CTOMathArg ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMathArg {
	#[serde(rename = "EG_OMathElements")]
	pub eg_o_math_elements: Vec<EGOMathElements>,
	#[serde(rename = "argPr")]
	pub arg_pr: Option<CTOMathArgPr>,
	#[serde(rename = "ctrlPr")]
	pub ctrl_pr: Option<CTCtrlPr>,
}


// STJc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STJc {
	#[serde(rename = "ST_Jc")]
	pub st_jc: String,
}


// CTOMathJc ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMathJc {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// CTOMathParaPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMathParaPr {
	#[serde(rename = "jc")]
	pub jc: Option<CTOMathJc>,
}


// CTTwipsMeasure ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTTwipsMeasure {
	#[serde(rename = "val")]
	pub val: STTwipsMeasure,
}


// STBreakBin ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STBreakBin {
	#[serde(rename = "ST_BreakBin")]
	pub st_break_bin: String,
}


// CTBreakBin ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBreakBin {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// STBreakBinSub ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct STBreakBinSub {
	#[serde(rename = "ST_BreakBinSub")]
	pub st_break_bin_sub: String,
}


// CTBreakBinSub ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTBreakBinSub {
	#[serde(rename = "val")]
	pub val: Option<String>,
}


// CTMathPr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTMathPr {
	#[serde(rename = "mathFont")]
	pub math_font: Option<CTString>,
	#[serde(rename = "brkBin")]
	pub brk_bin: Option<CTBreakBin>,
	#[serde(rename = "brkBinSub")]
	pub brk_bin_sub: Option<CTBreakBinSub>,
	#[serde(rename = "smallFrac")]
	pub small_frac: Option<CTOnOff>,
	#[serde(rename = "dispDef")]
	pub disp_def: Option<CTOnOff>,
	#[serde(rename = "lMargin")]
	pub l_margin: Option<CTTwipsMeasure>,
	#[serde(rename = "rMargin")]
	pub r_margin: Option<CTTwipsMeasure>,
	#[serde(rename = "defJc")]
	pub def_jc: Option<CTOMathJc>,
	#[serde(rename = "preSp")]
	pub pre_sp: Option<CTTwipsMeasure>,
	#[serde(rename = "postSp")]
	pub post_sp: Option<CTTwipsMeasure>,
	#[serde(rename = "interSp")]
	pub inter_sp: Option<CTTwipsMeasure>,
	#[serde(rename = "intraSp")]
	pub intra_sp: Option<CTTwipsMeasure>,
	#[serde(rename = "wrapIndent")]
	pub wrap_indent: CTTwipsMeasure,
	#[serde(rename = "wrapRight")]
	pub wrap_right: CTOnOff,
	#[serde(rename = "intLim")]
	pub int_lim: Option<CTLimLoc>,
	#[serde(rename = "naryLim")]
	pub nary_lim: Option<CTLimLoc>,
}


// math_pr ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct math_pr {
	#[serde(rename = "mathPr")]
	pub math_pr: CTMathPr,
}


// CTOMathPara ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMathPara {
	#[serde(rename = "oMathParaPr")]
	pub o_math_para_pr: Option<CTOMathParaPr>,
	#[serde(rename = "oMath")]
	pub o_math: Vec<CTOMath>,
}


// CTOMath ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct CTOMath {
	#[serde(rename = "EG_OMathElements")]
	pub eg_o_math_elements: Vec<EGOMathElements>,
}


// o_math_para ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct o_math_para {
	#[serde(rename = "oMathPara")]
	pub o_math_para: CTOMathPara,
}


// o_math ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct o_math {
	#[serde(rename = "oMath")]
	pub o_math: CTOMath,
}

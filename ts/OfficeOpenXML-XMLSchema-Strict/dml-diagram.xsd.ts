// Code generated by xgen. DO NOT EDIT.

export class CT_CTName {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_CTDescription {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_CTCategory {
	TypeAttr: string;
	PriAttr: number;
}

export class CT_CTCategories {
	Cat: Array<CT_CTCategory>;
}

export enum ST_ClrAppMethod {
	span = 'span',
	cycle = 'cycle',
	repeat = 'repeat',
}

export enum ST_HueDir {
	cw = 'cw',
	ccw = 'ccw',
}

export class CT_Colors {
	MethAttr: string | null;
	HueDirAttr: string | null;
	AEG_ColorChoice: Array<EG_ColorChoice>;
}

export class CT_CTStyleLabel {
	NameAttr: string;
	FillClrLst: Array<CT_Colors>;
	LinClrLst: Array<CT_Colors>;
	EffectClrLst: Array<CT_Colors>;
	TxLinClrLst: Array<CT_Colors>;
	TxFillClrLst: Array<CT_Colors>;
	TxEffectClrLst: Array<CT_Colors>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_ColorTransform {
	UniqueIdAttr: string | null;
	MinVerAttr: string | null;
	Title: Array<CT_CTName>;
	Desc: Array<CT_CTDescription>;
	CatLst: CT_CTCategories;
	StyleLbl: Array<CT_CTStyleLabel>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type ColorsDef = CT_ColorTransform;

export class CT_ColorTransformHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_CTName>;
	Desc: Array<CT_CTDescription>;
	CatLst: CT_CTCategories;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type ColorsDefHdr = CT_ColorTransformHeader;

export class CT_ColorTransformHeaderLst {
	ColorsDefHdr: Array<CT_ColorTransformHeader>;
}

export type ColorsDefHdrLst = CT_ColorTransformHeaderLst;

export enum ST_PtType {
	node = 'node',
	asst = 'asst',
	doc = 'doc',
	pres = 'pres',
	parTrans = 'parTrans',
	sibTrans = 'sibTrans',
}

export class CT_Pt {
	ModelIdAttr: ST_ModelId;
	TypeAttr: string | null;
	CxnIdAttr: ST_ModelId | null;
	PrSet: Array<CT_ElemPropSet>;
	SpPr: Array<CT_ShapeProperties>;
	T: Array<CT_TextBody>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_PtList {
	Pt: Array<CT_Pt>;
}

export enum ST_CxnType {
	parOf = 'parOf',
	presOf = 'presOf',
	presParOf = 'presParOf',
	unknownRelationship = 'unknownRelationship',
}

export class CT_Cxn {
	ModelIdAttr: ST_ModelId;
	TypeAttr: string | null;
	SrcIdAttr: ST_ModelId;
	DestIdAttr: ST_ModelId;
	SrcOrdAttr: number;
	DestOrdAttr: number;
	ParTransIdAttr: ST_ModelId | null;
	SibTransIdAttr: ST_ModelId | null;
	PresIdAttr: string | null;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_CxnList {
	Cxn: Array<CT_Cxn>;
}

export class CT_DataModel {
	PtLst: CT_PtList;
	CxnLst: Array<CT_CxnList>;
	Bg: CT_BackgroundFormatting;
	Whole: CT_WholeE2oFormatting;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type DataModel = CT_DataModel;

export class AG_IteratorAttributes {
	AxisAttr: ST_AxisTypes | null;
	PtTypeAttr: ST_ElementTypes | null;
	HideLastTransAttr: ST_Booleans | null;
	StAttr: ST_Ints | null;
	CntAttr: ST_UnsignedInts | null;
	StepAttr: ST_Ints | null;
}

export class AG_ConstraintAttributes {
	TypeAttr: string;
	ForAttr: string | null;
	ForNameAttr: string | null;
	PtTypeAttr: string | null;
}

export class AG_ConstraintRefAttributes {
	RefTypeAttr: string | null;
	RefForAttr: string | null;
	RefForNameAttr: string | null;
	RefPtTypeAttr: string | null;
}

export class CT_Constraint {
	AG_ConstraintAttributes: AG_ConstraintAttributes;
	AG_ConstraintRefAttributes: AG_ConstraintRefAttributes;
	OpAttr: string | null;
	ValAttr: number | null;
	FactAttr: number | null;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_Constraints {
	Constr: Array<CT_Constraint>;
}

export class CT_NumericRule {
	AG_ConstraintAttributes: AG_ConstraintAttributes;
	ValAttr: number | null;
	FactAttr: number | null;
	MaxAttr: number | null;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_Rules {
	Rule: Array<CT_NumericRule>;
}

export class CT_PresentationOf {
	AG_IteratorAttributes: AG_IteratorAttributes;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class ST_LayoutShapeType {
	ST_OutputShapeType: ST_OutputShapeType;
	ST_ShapeType: string;
}

export type ST_Index1 = number;

export class CT_Adj {
	IdxAttr: number;
	ValAttr: number;
}

export class CT_AdjLst {
	Adj: Array<CT_Adj>;
}

export class CT_Shape {
	RotAttr: number | null;
	TypeAttr: ST_LayoutShapeType | null;
	RBlipAttr: string | null;
	ZOrderOffAttr: number | null;
	HideGeomAttr: boolean | null;
	LkTxEntryAttr: boolean | null;
	BlipPhldrAttr: boolean | null;
	AdjLst: Array<CT_AdjLst>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_Parameter {
	TypeAttr: string;
	ValAttr: ST_ParameterVal;
}

export class CT_Algorithm {
	TypeAttr: string;
	RevAttr: number | null;
	Param: Array<CT_Parameter>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_LayoutNode {
	NameAttr: string | null;
	StyleLblAttr: string | null;
	ChOrderAttr: string | null;
	MoveWithAttr: string | null;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	VarLst: Array<CT_LayoutVariablePropertySet>;
	ForEach: CT_ForEach;
	LayoutNode: CT_LayoutNode;
	Choose: CT_Choose;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_ForEach {
	AG_IteratorAttributes: AG_IteratorAttributes;
	NameAttr: string | null;
	RefAttr: string | null;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	ForEach: CT_ForEach;
	LayoutNode: CT_LayoutNode;
	Choose: CT_Choose;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_When {
	AG_IteratorAttributes: AG_IteratorAttributes;
	NameAttr: string | null;
	FuncAttr: string;
	ArgAttr: ST_FunctionArgument | null;
	OpAttr: string;
	ValAttr: ST_FunctionValue;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	ForEach: CT_ForEach;
	LayoutNode: CT_LayoutNode;
	Choose: CT_Choose;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_Otherwise {
	NameAttr: string | null;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	ForEach: CT_ForEach;
	LayoutNode: CT_LayoutNode;
	Choose: CT_Choose;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_Choose {
	NameAttr: string | null;
	If: Array<CT_When>;
	Else: CT_Otherwise;
}

export class CT_SampleData {
	UseDefAttr: boolean | null;
	DataModel: CT_DataModel;
}

export class CT_Category {
	TypeAttr: string;
	PriAttr: number;
}

export class CT_Categories {
	Cat: Array<CT_Category>;
}

export class CT_Name {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_Description {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_DiagramDefinition {
	UniqueIdAttr: string | null;
	MinVerAttr: string | null;
	DefStyleAttr: string | null;
	Title: Array<CT_Name>;
	Desc: Array<CT_Description>;
	CatLst: CT_Categories;
	SampData: CT_SampleData;
	StyleData: CT_SampleData;
	ClrData: CT_SampleData;
	LayoutNode: CT_LayoutNode;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type LayoutDef = CT_DiagramDefinition;

export class CT_DiagramDefinitionHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	DefStyleAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_Name>;
	Desc: Array<CT_Description>;
	CatLst: CT_Categories;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type LayoutDefHdr = CT_DiagramDefinitionHeader;

export class CT_DiagramDefinitionHeaderLst {
	LayoutDefHdr: Array<CT_DiagramDefinitionHeader>;
}

export type LayoutDefHdrLst = CT_DiagramDefinitionHeaderLst;

export class CT_RelIds {
	RDmAttr: string;
	RLoAttr: string;
	RQsAttr: string;
	RCsAttr: string;
}

export type RelIds = CT_RelIds;

export class ST_ParameterVal {
	ST_FallbackDimension: ST_FallbackDimension;
	ST_DiagramTextAlignment: ST_DiagramTextAlignment;
	Int: number;
	ST_SecondaryLinearDirection: ST_SecondaryLinearDirection;
	ST_TextBlockDirection: ST_TextBlockDirection;
	ST_ContinueDirection: ST_ContinueDirection;
	ST_HierarchyAlignment: ST_HierarchyAlignment;
	ST_PyramidAccentPosition: ST_PyramidAccentPosition;
	ST_StartingElement: ST_StartingElement;
	ST_ArrowheadStyle: ST_ArrowheadStyle;
	ST_NodeHorizontalAlignment: ST_NodeHorizontalAlignment;
	ST_SecondaryChildAlignment: ST_SecondaryChildAlignment;
	ST_RotationPath: ST_RotationPath;
	ST_TextAnchorVertical: ST_TextAnchorVertical;
	ST_ConnectorRouting: ST_ConnectorRouting;
	ST_ConnectorDimension: ST_ConnectorDimension;
	ST_NodeVerticalAlignment: ST_NodeVerticalAlignment;
	ST_TextDirection: ST_TextDirection;
	ST_TextAnchorHorizontal: ST_TextAnchorHorizontal;
	ST_GrowDirection: ST_GrowDirection;
	ST_Offset: ST_Offset;
	ST_ChildDirection: ST_ChildDirection;
	ST_BendPoint: ST_BendPoint;
	ST_CenterShapeMapping: ST_CenterShapeMapping;
	Double: number;
	ST_DiagramHorizontalAlignment: ST_DiagramHorizontalAlignment;
	ST_ChildAlignment: ST_ChildAlignment;
	ST_LinearDirection: ST_LinearDirection;
	ST_PyramidAccentTextMargin: ST_PyramidAccentTextMargin;
	ST_AutoTextRotation: ST_AutoTextRotation;
	Boolean: boolean;
	ST_VerticalAlignment: ST_VerticalAlignment;
	ST_Breakpoint: ST_Breakpoint;
	String: string;
	ST_ConnectorPoint: ST_ConnectorPoint;
	ST_FlowDirection: ST_FlowDirection;
}

export class ST_ModelId {
	Int: number;
	ST_Guid: string;
}

export class ST_PrSetCustVal {
	ST_Percentage: string;
}

export class CT_ElemPropSet {
	PresAssocIDAttr: ST_ModelId | null;
	PresNameAttr: string | null;
	PresStyleLblAttr: string | null;
	PresStyleIdxAttr: number | null;
	PresStyleCntAttr: number | null;
	LoTypeIdAttr: string | null;
	LoCatIdAttr: string | null;
	QsTypeIdAttr: string | null;
	QsCatIdAttr: string | null;
	CsTypeIdAttr: string | null;
	CsCatIdAttr: string | null;
	Coherent3DOffAttr: boolean | null;
	PhldrTAttr: string | null;
	PhldrAttr: boolean | null;
	CustAngAttr: number | null;
	CustFlipVertAttr: boolean | null;
	CustFlipHorAttr: boolean | null;
	CustSzXAttr: number | null;
	CustSzYAttr: number | null;
	CustScaleXAttr: ST_PrSetCustVal | null;
	CustScaleYAttr: ST_PrSetCustVal | null;
	CustTAttr: boolean | null;
	CustLinFactXAttr: ST_PrSetCustVal | null;
	CustLinFactYAttr: ST_PrSetCustVal | null;
	CustLinFactNeighborXAttr: ST_PrSetCustVal | null;
	CustLinFactNeighborYAttr: ST_PrSetCustVal | null;
	CustRadScaleRadAttr: ST_PrSetCustVal | null;
	CustRadScaleIncAttr: ST_PrSetCustVal | null;
	PresLayoutVars: Array<CT_LayoutVariablePropertySet>;
	Style: Array<CT_ShapeStyle>;
}

export enum ST_Direction {
	norm = 'norm',
	rev = 'rev',
}

export enum ST_HierBranchStyle {
	l = 'l',
	r = 'r',
	hang = 'hang',
	std = 'std',
	init = 'init',
}

export enum ST_AnimOneStr {
	none = 'none',
	one = 'one',
	branch = 'branch',
}

export enum ST_AnimLvlStr {
	none = 'none',
	lvl = 'lvl',
	ctr = 'ctr',
}

export class CT_OrgChart {
	ValAttr: boolean | null;
}

export type ST_NodeCount = number;

export class CT_ChildMax {
	ValAttr: number | null;
}

export class CT_ChildPref {
	ValAttr: number | null;
}

export class CT_BulletEnabled {
	ValAttr: boolean | null;
}

export class CT_Direction {
	ValAttr: string | null;
}

export class CT_HierBranchStyle {
	ValAttr: string | null;
}

export class CT_AnimOne {
	ValAttr: string | null;
}

export class CT_AnimLvl {
	ValAttr: string | null;
}

export enum ST_ResizeHandlesStr {
	exact = 'exact',
	rel = 'rel',
}

export class CT_ResizeHandles {
	ValAttr: string | null;
}

export class CT_LayoutVariablePropertySet {
	OrgChart: Array<CT_OrgChart>;
	ChMax: Array<CT_ChildMax>;
	ChPref: Array<CT_ChildPref>;
	BulletEnabled: Array<CT_BulletEnabled>;
	Dir: Array<CT_Direction>;
	HierBranch: Array<CT_HierBranchStyle>;
	AnimOne: Array<CT_AnimOne>;
	AnimLvl: Array<CT_AnimLvl>;
	ResizeHandles: Array<CT_ResizeHandles>;
}

export class CT_SDName {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_SDDescription {
	LangAttr: string | null;
	ValAttr: string;
}

export class CT_SDCategory {
	TypeAttr: string;
	PriAttr: number;
}

export class CT_SDCategories {
	Cat: Array<CT_SDCategory>;
}

export class CT_TextProps {
	AEG_Text3D: Array<EG_Text3D>;
}

export class CT_StyleLabel {
	NameAttr: string;
	Scene3d: Array<CT_Scene3D>;
	Sp3d: Array<CT_Shape3D>;
	TxPr: Array<CT_TextProps>;
	Style: Array<CT_ShapeStyle>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export class CT_StyleDefinition {
	UniqueIdAttr: string | null;
	MinVerAttr: string | null;
	Title: Array<CT_SDName>;
	Desc: Array<CT_SDDescription>;
	CatLst: CT_SDCategories;
	Scene3d: Array<CT_Scene3D>;
	StyleLbl: Array<CT_StyleLabel>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type StyleDef = CT_StyleDefinition;

export class CT_StyleDefinitionHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_SDName>;
	Desc: Array<CT_SDDescription>;
	CatLst: CT_SDCategories;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

export type StyleDefHdr = CT_StyleDefinitionHeader;

export class CT_StyleDefinitionHeaderLst {
	StyleDefHdr: Array<CT_StyleDefinitionHeader>;
}

export type StyleDefHdrLst = CT_StyleDefinitionHeaderLst;

export enum ST_AlgorithmType {
	composite = 'composite',
	conn = 'conn',
	cycle = 'cycle',
	hierChild = 'hierChild',
	hierRoot = 'hierRoot',
	pyra = 'pyra',
	lin = 'lin',
	sp = 'sp',
	tx = 'tx',
	snake = 'snake',
}

export enum ST_AxisType {
	self = 'self',
	ch = 'ch',
	des = 'des',
	desOrSelf = 'desOrSelf',
	par = 'par',
	ancst = 'ancst',
	ancstOrSelf = 'ancstOrSelf',
	followSib = 'followSib',
	precedSib = 'precedSib',
	follow = 'follow',
	preced = 'preced',
	root = 'root',
	none = 'none',
}

export type ST_AxisTypes = string;

export enum ST_BoolOperator {
	none = 'none',
	equ = 'equ',
	gte = 'gte',
	lte = 'lte',
}

export enum ST_ChildOrderType {
	b = 'b',
	t = 't',
}

export enum ST_ConstraintType {
	none = 'none',
	alignOff = 'alignOff',
	begMarg = 'begMarg',
	bendDist = 'bendDist',
	begPad = 'begPad',
	b = 'b',
	bMarg = 'bMarg',
	bOff = 'bOff',
	ctrX = 'ctrX',
	ctrXOff = 'ctrXOff',
	ctrY = 'ctrY',
	ctrYOff = 'ctrYOff',
	connDist = 'connDist',
	diam = 'diam',
	endMarg = 'endMarg',
	endPad = 'endPad',
	h = 'h',
	hArH = 'hArH',
	hOff = 'hOff',
	l = 'l',
	lMarg = 'lMarg',
	lOff = 'lOff',
	r = 'r',
	rMarg = 'rMarg',
	rOff = 'rOff',
	primFontSz = 'primFontSz',
	pyraAcctRatio = 'pyraAcctRatio',
	secFontSz = 'secFontSz',
	sibSp = 'sibSp',
	secSibSp = 'secSibSp',
	sp = 'sp',
	stemThick = 'stemThick',
	t = 't',
	tMarg = 'tMarg',
	tOff = 'tOff',
	userA = 'userA',
	userB = 'userB',
	userC = 'userC',
	userD = 'userD',
	userE = 'userE',
	userF = 'userF',
	userG = 'userG',
	userH = 'userH',
	userI = 'userI',
	userJ = 'userJ',
	userK = 'userK',
	userL = 'userL',
	userM = 'userM',
	userN = 'userN',
	userO = 'userO',
	userP = 'userP',
	userQ = 'userQ',
	userR = 'userR',
	userS = 'userS',
	userT = 'userT',
	userU = 'userU',
	userV = 'userV',
	userW = 'userW',
	userX = 'userX',
	userY = 'userY',
	userZ = 'userZ',
	w = 'w',
	wArH = 'wArH',
	wOff = 'wOff',
}

export enum ST_ConstraintRelationship {
	self = 'self',
	ch = 'ch',
	des = 'des',
}

export enum ST_ElementType {
	all = 'all',
	doc = 'doc',
	node = 'node',
	norm = 'norm',
	nonNorm = 'nonNorm',
	asst = 'asst',
	nonAsst = 'nonAsst',
	parTrans = 'parTrans',
	pres = 'pres',
	sibTrans = 'sibTrans',
}

export type ST_ElementTypes = string;

export enum ST_ParameterId {
	horzAlign = 'horzAlign',
	vertAlign = 'vertAlign',
	chDir = 'chDir',
	chAlign = 'chAlign',
	secChAlign = 'secChAlign',
	linDir = 'linDir',
	secLinDir = 'secLinDir',
	stElem = 'stElem',
	bendPt = 'bendPt',
	connRout = 'connRout',
	begSty = 'begSty',
	endSty = 'endSty',
	dim = 'dim',
	rotPath = 'rotPath',
	ctrShpMap = 'ctrShpMap',
	nodeHorzAlign = 'nodeHorzAlign',
	nodeVertAlign = 'nodeVertAlign',
	fallback = 'fallback',
	txDir = 'txDir',
	pyraAcctPos = 'pyraAcctPos',
	pyraAcctTxMar = 'pyraAcctTxMar',
	txBlDir = 'txBlDir',
	txAnchorHorz = 'txAnchorHorz',
	txAnchorVert = 'txAnchorVert',
	txAnchorHorzCh = 'txAnchorHorzCh',
	txAnchorVertCh = 'txAnchorVertCh',
	parTxLTRAlign = 'parTxLTRAlign',
	parTxRTLAlign = 'parTxRTLAlign',
	shpTxLTRAlignCh = 'shpTxLTRAlignCh',
	shpTxRTLAlignCh = 'shpTxRTLAlignCh',
	autoTxRot = 'autoTxRot',
	grDir = 'grDir',
	flowDir = 'flowDir',
	contDir = 'contDir',
	bkpt = 'bkpt',
	off = 'off',
	hierAlign = 'hierAlign',
	bkPtFixedVal = 'bkPtFixedVal',
	stBulletLvl = 'stBulletLvl',
	stAng = 'stAng',
	spanAng = 'spanAng',
	ar = 'ar',
	lnSpPar = 'lnSpPar',
	lnSpAfParP = 'lnSpAfParP',
	lnSpCh = 'lnSpCh',
	lnSpAfChP = 'lnSpAfChP',
	rtShortDist = 'rtShortDist',
	alignTx = 'alignTx',
	pyraLvlNode = 'pyraLvlNode',
	pyraAcctBkgdNode = 'pyraAcctBkgdNode',
	pyraAcctTxNode = 'pyraAcctTxNode',
	srcNode = 'srcNode',
	dstNode = 'dstNode',
	begPts = 'begPts',
	endPts = 'endPts',
}

export type ST_Ints = number;

export type ST_UnsignedInts = number;

export type ST_Booleans = boolean;

export enum ST_FunctionType {
	cnt = 'cnt',
	pos = 'pos',
	revPos = 'revPos',
	posEven = 'posEven',
	posOdd = 'posOdd',
	var = 'var',
	depth = 'depth',
	maxDepth = 'maxDepth',
}

export enum ST_FunctionOperator {
	equ = 'equ',
	neq = 'neq',
	gt = 'gt',
	lt = 'lt',
	gte = 'gte',
	lte = 'lte',
}

export enum ST_DiagramHorizontalAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
	none = 'none',
}

export enum ST_VerticalAlignment {
	t = 't',
	mid = 'mid',
	b = 'b',
	none = 'none',
}

export enum ST_ChildDirection {
	horz = 'horz',
	vert = 'vert',
}

export enum ST_ChildAlignment {
	t = 't',
	b = 'b',
	l = 'l',
	r = 'r',
}

export enum ST_SecondaryChildAlignment {
	none = 'none',
	t = 't',
	b = 'b',
	l = 'l',
	r = 'r',
}

export enum ST_LinearDirection {
	fromL = 'fromL',
	fromR = 'fromR',
	fromT = 'fromT',
	fromB = 'fromB',
}

export enum ST_SecondaryLinearDirection {
	none = 'none',
	fromL = 'fromL',
	fromR = 'fromR',
	fromT = 'fromT',
	fromB = 'fromB',
}

export enum ST_StartingElement {
	node = 'node',
	trans = 'trans',
}

export enum ST_RotationPath {
	none = 'none',
	alongPath = 'alongPath',
}

export enum ST_CenterShapeMapping {
	none = 'none',
	fNode = 'fNode',
}

export enum ST_BendPoint {
	beg = 'beg',
	def = 'def',
	end = 'end',
}

export enum ST_ConnectorRouting {
	stra = 'stra',
	bend = 'bend',
	curve = 'curve',
	longCurve = 'longCurve',
}

export enum ST_ArrowheadStyle {
	auto = 'auto',
	arr = 'arr',
	noArr = 'noArr',
}

export enum ST_ConnectorDimension {
	1D = '1D',
	2D = '2D',
	cust = 'cust',
}

export enum ST_ConnectorPoint {
	auto = 'auto',
	bCtr = 'bCtr',
	ctr = 'ctr',
	midL = 'midL',
	midR = 'midR',
	tCtr = 'tCtr',
	bL = 'bL',
	bR = 'bR',
	tL = 'tL',
	tR = 'tR',
	radial = 'radial',
}

export enum ST_NodeHorizontalAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
}

export enum ST_NodeVerticalAlignment {
	t = 't',
	mid = 'mid',
	b = 'b',
}

export enum ST_FallbackDimension {
	1D = '1D',
	2D = '2D',
}

export enum ST_TextDirection {
	fromT = 'fromT',
	fromB = 'fromB',
}

export enum ST_PyramidAccentPosition {
	bef = 'bef',
	aft = 'aft',
}

export enum ST_PyramidAccentTextMargin {
	step = 'step',
	stack = 'stack',
}

export enum ST_TextBlockDirection {
	horz = 'horz',
	vert = 'vert',
}

export enum ST_TextAnchorHorizontal {
	none = 'none',
	ctr = 'ctr',
}

export enum ST_TextAnchorVertical {
	t = 't',
	mid = 'mid',
	b = 'b',
}

export enum ST_DiagramTextAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
}

export enum ST_AutoTextRotation {
	none = 'none',
	upr = 'upr',
	grav = 'grav',
}

export enum ST_GrowDirection {
	tL = 'tL',
	tR = 'tR',
	bL = 'bL',
	bR = 'bR',
}

export enum ST_FlowDirection {
	row = 'row',
	col = 'col',
}

export enum ST_ContinueDirection {
	revDir = 'revDir',
	sameDir = 'sameDir',
}

export enum ST_Breakpoint {
	endCnv = 'endCnv',
	bal = 'bal',
	fixed = 'fixed',
}

export enum ST_Offset {
	ctr = 'ctr',
	off = 'off',
}

export enum ST_HierarchyAlignment {
	tL = 'tL',
	tR = 'tR',
	tCtrCh = 'tCtrCh',
	tCtrDes = 'tCtrDes',
	bL = 'bL',
	bR = 'bR',
	bCtrCh = 'bCtrCh',
	bCtrDes = 'bCtrDes',
	lT = 'lT',
	lB = 'lB',
	lCtrCh = 'lCtrCh',
	lCtrDes = 'lCtrDes',
	rT = 'rT',
	rB = 'rB',
	rCtrCh = 'rCtrCh',
	rCtrDes = 'rCtrDes',
}

export class ST_FunctionValue {
	ST_AnimLvlStr: string;
	ST_ResizeHandlesStr: string;
	Int: number;
	Boolean: boolean;
	ST_Direction: string;
	ST_HierBranchStyle: string;
	ST_AnimOneStr: string;
}

export enum ST_VariableType {
	none = 'none',
	orgChart = 'orgChart',
	chMax = 'chMax',
	chPref = 'chPref',
	bulEnabled = 'bulEnabled',
	dir = 'dir',
	hierBranch = 'hierBranch',
	animOne = 'animOne',
	animLvl = 'animLvl',
	resizeHandles = 'resizeHandles',
}

export class ST_FunctionArgument {
	ST_VariableType: string;
}

export enum ST_OutputShapeType {
	none = 'none',
	conn = 'conn',
}
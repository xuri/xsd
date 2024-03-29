// Code generated by xgen. DO NOT EDIT.

// CT_CTName ...
export class CT_CTName {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_CTDescription ...
export class CT_CTDescription {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_CTCategory ...
export class CT_CTCategory {
	TypeAttr: string;
	PriAttr: number;
}

// CT_CTCategories ...
export class CT_CTCategories {
	Cat: Array<CT_CTCategory>;
}

// ST_ClrAppMethod ...
export enum ST_ClrAppMethod {
	span = 'span',
	cycle = 'cycle',
	repeat = 'repeat',
}

// ST_HueDir ...
export enum ST_HueDir {
	cw = 'cw',
	ccw = 'ccw',
}

// CT_Colors ...
export class CT_Colors {
	MethAttr: string | null;
	HueDirAttr: string | null;
	AEG_ColorChoice: Array<EG_ColorChoice>;
}

// CT_CTStyleLabel ...
export class CT_CTStyleLabel {
	NameAttr: string;
	FillClrLst: CT_Colors;
	LinClrLst: CT_Colors;
	EffectClrLst: CT_Colors;
	TxLinClrLst: CT_Colors;
	TxFillClrLst: CT_Colors;
	TxEffectClrLst: CT_Colors;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_ColorTransform ...
export class CT_ColorTransform {
	UniqueIdAttr: string | null;
	MinVerAttr: string | null;
	Title: Array<CT_CTName>;
	Desc: Array<CT_CTDescription>;
	CatLst: CT_CTCategories;
	StyleLbl: Array<CT_CTStyleLabel>;
	ExtLst: CT_OfficeArtExtensionList;
}

// ColorsDef ...
export type ColorsDef = CT_ColorTransform;

// CT_ColorTransformHeader ...
export class CT_ColorTransformHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_CTName>;
	Desc: Array<CT_CTDescription>;
	CatLst: CT_CTCategories;
	ExtLst: CT_OfficeArtExtensionList;
}

// ColorsDefHdr ...
export type ColorsDefHdr = CT_ColorTransformHeader;

// CT_ColorTransformHeaderLst ...
export class CT_ColorTransformHeaderLst {
	ColorsDefHdr: Array<CT_ColorTransformHeader>;
}

// ColorsDefHdrLst ...
export type ColorsDefHdrLst = CT_ColorTransformHeaderLst;

// ST_PtType ...
export enum ST_PtType {
	node = 'node',
	asst = 'asst',
	doc = 'doc',
	pres = 'pres',
	parTrans = 'parTrans',
	sibTrans = 'sibTrans',
}

// CT_Pt ...
export class CT_Pt {
	ModelIdAttr: ST_ModelId;
	TypeAttr: string | null;
	CxnIdAttr: ST_ModelId | null;
	PrSet: CT_ElemPropSet;
	SpPr: CT_ShapeProperties;
	T: CT_TextBody;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_PtList ...
export class CT_PtList {
	Pt: Array<CT_Pt>;
}

// ST_CxnType ...
export enum ST_CxnType {
	parOf = 'parOf',
	presOf = 'presOf',
	presParOf = 'presParOf',
	unknownRelationship = 'unknownRelationship',
}

// CT_Cxn ...
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
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_CxnList ...
export class CT_CxnList {
	Cxn: Array<CT_Cxn>;
}

// CT_DataModel ...
export class CT_DataModel {
	PtLst: CT_PtList;
	CxnLst: CT_CxnList;
	Bg: CT_BackgroundFormatting;
	Whole: CT_WholeE2oFormatting;
	ExtLst: CT_OfficeArtExtensionList;
}

// DataModel ...
export type DataModel = CT_DataModel;

// AG_IteratorAttributes ...
export class AG_IteratorAttributes {
	AxisAttr: ST_AxisTypes | null;
	PtTypeAttr: ST_ElementTypes | null;
	HideLastTransAttr: ST_Booleans | null;
	StAttr: ST_Ints | null;
	CntAttr: ST_UnsignedInts | null;
	StepAttr: ST_Ints | null;
}

// AG_ConstraintAttributes ...
export class AG_ConstraintAttributes {
	TypeAttr: string;
	ForAttr: string | null;
	ForNameAttr: string | null;
	PtTypeAttr: string | null;
}

// AG_ConstraintRefAttributes ...
export class AG_ConstraintRefAttributes {
	RefTypeAttr: string | null;
	RefForAttr: string | null;
	RefForNameAttr: string | null;
	RefPtTypeAttr: string | null;
}

// CT_Constraint ...
export class CT_Constraint {
	AG_ConstraintAttributes: AG_ConstraintAttributes;
	AG_ConstraintRefAttributes: AG_ConstraintRefAttributes;
	OpAttr: string | null;
	ValAttr: number | null;
	FactAttr: number | null;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_Constraints ...
export class CT_Constraints {
	Constr: Array<CT_Constraint>;
}

// CT_NumericRule ...
export class CT_NumericRule {
	AG_ConstraintAttributes: AG_ConstraintAttributes;
	ValAttr: number | null;
	FactAttr: number | null;
	MaxAttr: number | null;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_Rules ...
export class CT_Rules {
	Rule: Array<CT_NumericRule>;
}

// CT_PresentationOf ...
export class CT_PresentationOf {
	AG_IteratorAttributes: AG_IteratorAttributes;
	ExtLst: CT_OfficeArtExtensionList;
}

// ST_LayoutShapeType ...
export class ST_LayoutShapeType {
	ST_OutputShapeType: ST_OutputShapeType;
	ST_ShapeType: string;
}

// ST_Index1 ...
export type ST_Index1 = number;

// CT_Adj ...
export class CT_Adj {
	IdxAttr: number;
	ValAttr: number;
}

// CT_AdjLst ...
export class CT_AdjLst {
	Adj: Array<CT_Adj>;
}

// CT_Shape ...
export class CT_Shape {
	RotAttr: number | null;
	TypeAttr: ST_LayoutShapeType | null;
	RBlipAttr: string | null;
	ZOrderOffAttr: number | null;
	HideGeomAttr: boolean | null;
	LkTxEntryAttr: boolean | null;
	BlipPhldrAttr: boolean | null;
	AdjLst: CT_AdjLst;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_Parameter ...
export class CT_Parameter {
	TypeAttr: string;
	ValAttr: ST_ParameterVal;
}

// CT_Algorithm ...
export class CT_Algorithm {
	TypeAttr: string;
	RevAttr: number | null;
	Param: Array<CT_Parameter>;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_LayoutNode ...
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
	ForEach: Array<CT_ForEach>;
	LayoutNode: Array<CT_LayoutNode>;
	Choose: Array<CT_Choose>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

// CT_ForEach ...
export class CT_ForEach {
	AG_IteratorAttributes: AG_IteratorAttributes;
	NameAttr: string | null;
	RefAttr: string | null;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	ForEach: Array<CT_ForEach>;
	LayoutNode: Array<CT_LayoutNode>;
	Choose: Array<CT_Choose>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

// CT_When ...
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
	ForEach: Array<CT_ForEach>;
	LayoutNode: Array<CT_LayoutNode>;
	Choose: Array<CT_Choose>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

// CT_Otherwise ...
export class CT_Otherwise {
	NameAttr: string | null;
	Alg: Array<CT_Algorithm>;
	Shape: Array<CT_Shape>;
	PresOf: Array<CT_PresentationOf>;
	ConstrLst: Array<CT_Constraints>;
	RuleLst: Array<CT_Rules>;
	ForEach: Array<CT_ForEach>;
	LayoutNode: Array<CT_LayoutNode>;
	Choose: Array<CT_Choose>;
	ExtLst: Array<CT_OfficeArtExtensionList>;
}

// CT_Choose ...
export class CT_Choose {
	NameAttr: string | null;
	If: Array<CT_When>;
	Else: CT_Otherwise;
}

// CT_SampleData ...
export class CT_SampleData {
	UseDefAttr: boolean | null;
	DataModel: CT_DataModel;
}

// CT_Category ...
export class CT_Category {
	TypeAttr: string;
	PriAttr: number;
}

// CT_Categories ...
export class CT_Categories {
	Cat: Array<CT_Category>;
}

// CT_Name ...
export class CT_Name {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_Description ...
export class CT_Description {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_DiagramDefinition ...
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
	ExtLst: CT_OfficeArtExtensionList;
}

// LayoutDef ...
export type LayoutDef = CT_DiagramDefinition;

// CT_DiagramDefinitionHeader ...
export class CT_DiagramDefinitionHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	DefStyleAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_Name>;
	Desc: Array<CT_Description>;
	CatLst: CT_Categories;
	ExtLst: CT_OfficeArtExtensionList;
}

// LayoutDefHdr ...
export type LayoutDefHdr = CT_DiagramDefinitionHeader;

// CT_DiagramDefinitionHeaderLst ...
export class CT_DiagramDefinitionHeaderLst {
	LayoutDefHdr: Array<CT_DiagramDefinitionHeader>;
}

// LayoutDefHdrLst ...
export type LayoutDefHdrLst = CT_DiagramDefinitionHeaderLst;

// CT_RelIds ...
export class CT_RelIds {
	RDmAttr: string;
	RLoAttr: string;
	RQsAttr: string;
	RCsAttr: string;
}

// RelIds ...
export type RelIds = CT_RelIds;

// ST_ParameterVal ...
export class ST_ParameterVal {
	ST_ArrowheadStyle: ST_ArrowheadStyle;
	ST_AutoTextRotation: ST_AutoTextRotation;
	ST_BendPoint: ST_BendPoint;
	ST_Breakpoint: ST_Breakpoint;
	ST_CenterShapeMapping: ST_CenterShapeMapping;
	ST_ChildAlignment: ST_ChildAlignment;
	ST_ChildDirection: ST_ChildDirection;
	ST_ConnectorDimension: ST_ConnectorDimension;
	ST_ConnectorPoint: ST_ConnectorPoint;
	ST_ConnectorRouting: ST_ConnectorRouting;
	ST_ContinueDirection: ST_ContinueDirection;
	ST_DiagramHorizontalAlignment: ST_DiagramHorizontalAlignment;
	ST_DiagramTextAlignment: ST_DiagramTextAlignment;
	ST_FallbackDimension: ST_FallbackDimension;
	ST_FlowDirection: ST_FlowDirection;
	ST_GrowDirection: ST_GrowDirection;
	ST_HierarchyAlignment: ST_HierarchyAlignment;
	ST_LinearDirection: ST_LinearDirection;
	ST_NodeHorizontalAlignment: ST_NodeHorizontalAlignment;
	ST_NodeVerticalAlignment: ST_NodeVerticalAlignment;
	ST_Offset: ST_Offset;
	ST_PyramidAccentPosition: ST_PyramidAccentPosition;
	ST_PyramidAccentTextMargin: ST_PyramidAccentTextMargin;
	ST_RotationPath: ST_RotationPath;
	ST_SecondaryChildAlignment: ST_SecondaryChildAlignment;
	ST_SecondaryLinearDirection: ST_SecondaryLinearDirection;
	ST_StartingElement: ST_StartingElement;
	ST_TextAnchorHorizontal: ST_TextAnchorHorizontal;
	ST_TextAnchorVertical: ST_TextAnchorVertical;
	ST_TextBlockDirection: ST_TextBlockDirection;
	ST_TextDirection: ST_TextDirection;
	ST_VerticalAlignment: ST_VerticalAlignment;
	Boolean: boolean;
	Int: number;
	Double: number;
	String: string;
}

// ST_ModelId ...
export class ST_ModelId {
	Int: number;
	ST_Guid: string;
}

// ST_PrSetCustVal ...
export class ST_PrSetCustVal {
	ST_Percentage: string;
}

// CT_ElemPropSet ...
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
	PresLayoutVars: CT_LayoutVariablePropertySet;
	Style: CT_ShapeStyle;
}

// ST_Direction ...
export enum ST_Direction {
	norm = 'norm',
	rev = 'rev',
}

// ST_HierBranchStyle ...
export enum ST_HierBranchStyle {
	l = 'l',
	r = 'r',
	hang = 'hang',
	std = 'std',
	init = 'init',
}

// ST_AnimOneStr ...
export enum ST_AnimOneStr {
	none = 'none',
	one = 'one',
	branch = 'branch',
}

// ST_AnimLvlStr ...
export enum ST_AnimLvlStr {
	none = 'none',
	lvl = 'lvl',
	ctr = 'ctr',
}

// CT_OrgChart ...
export class CT_OrgChart {
	ValAttr: boolean | null;
}

// ST_NodeCount ...
export type ST_NodeCount = number;

// CT_ChildMax ...
export class CT_ChildMax {
	ValAttr: number | null;
}

// CT_ChildPref ...
export class CT_ChildPref {
	ValAttr: number | null;
}

// CT_BulletEnabled ...
export class CT_BulletEnabled {
	ValAttr: boolean | null;
}

// CT_Direction ...
export class CT_Direction {
	ValAttr: string | null;
}

// CT_HierBranchStyle ...
export class CT_HierBranchStyle {
	ValAttr: string | null;
}

// CT_AnimOne ...
export class CT_AnimOne {
	ValAttr: string | null;
}

// CT_AnimLvl ...
export class CT_AnimLvl {
	ValAttr: string | null;
}

// ST_ResizeHandlesStr ...
export enum ST_ResizeHandlesStr {
	exact = 'exact',
	rel = 'rel',
}

// CT_ResizeHandles ...
export class CT_ResizeHandles {
	ValAttr: string | null;
}

// CT_LayoutVariablePropertySet ...
export class CT_LayoutVariablePropertySet {
	OrgChart: CT_OrgChart;
	ChMax: CT_ChildMax;
	ChPref: CT_ChildPref;
	BulletEnabled: CT_BulletEnabled;
	Dir: CT_Direction;
	HierBranch: CT_HierBranchStyle;
	AnimOne: CT_AnimOne;
	AnimLvl: CT_AnimLvl;
	ResizeHandles: CT_ResizeHandles;
}

// CT_SDName ...
export class CT_SDName {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_SDDescription ...
export class CT_SDDescription {
	LangAttr: string | null;
	ValAttr: string;
}

// CT_SDCategory ...
export class CT_SDCategory {
	TypeAttr: string;
	PriAttr: number;
}

// CT_SDCategories ...
export class CT_SDCategories {
	Cat: Array<CT_SDCategory>;
}

// CT_TextProps ...
export class CT_TextProps {
	AEG_Text3D: Array<EG_Text3D>;
}

// CT_StyleLabel ...
export class CT_StyleLabel {
	NameAttr: string;
	Scene3d: CT_Scene3D;
	Sp3d: CT_Shape3D;
	TxPr: CT_TextProps;
	Style: CT_ShapeStyle;
	ExtLst: CT_OfficeArtExtensionList;
}

// CT_StyleDefinition ...
export class CT_StyleDefinition {
	UniqueIdAttr: string | null;
	MinVerAttr: string | null;
	Title: Array<CT_SDName>;
	Desc: Array<CT_SDDescription>;
	CatLst: CT_SDCategories;
	Scene3d: CT_Scene3D;
	StyleLbl: Array<CT_StyleLabel>;
	ExtLst: CT_OfficeArtExtensionList;
}

// StyleDef ...
export type StyleDef = CT_StyleDefinition;

// CT_StyleDefinitionHeader ...
export class CT_StyleDefinitionHeader {
	UniqueIdAttr: string;
	MinVerAttr: string | null;
	ResIdAttr: number | null;
	Title: Array<CT_SDName>;
	Desc: Array<CT_SDDescription>;
	CatLst: CT_SDCategories;
	ExtLst: CT_OfficeArtExtensionList;
}

// StyleDefHdr ...
export type StyleDefHdr = CT_StyleDefinitionHeader;

// CT_StyleDefinitionHeaderLst ...
export class CT_StyleDefinitionHeaderLst {
	StyleDefHdr: Array<CT_StyleDefinitionHeader>;
}

// StyleDefHdrLst ...
export type StyleDefHdrLst = CT_StyleDefinitionHeaderLst;

// ST_AlgorithmType ...
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

// ST_AxisType ...
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

// ST_AxisTypes ...
export type ST_AxisTypes = string;

// ST_BoolOperator ...
export enum ST_BoolOperator {
	none = 'none',
	equ = 'equ',
	gte = 'gte',
	lte = 'lte',
}

// ST_ChildOrderType ...
export enum ST_ChildOrderType {
	b = 'b',
	t = 't',
}

// ST_ConstraintType ...
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

// ST_ConstraintRelationship ...
export enum ST_ConstraintRelationship {
	self = 'self',
	ch = 'ch',
	des = 'des',
}

// ST_ElementType ...
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

// ST_ElementTypes ...
export type ST_ElementTypes = string;

// ST_ParameterId ...
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

// ST_Ints ...
export type ST_Ints = number;

// ST_UnsignedInts ...
export type ST_UnsignedInts = number;

// ST_Booleans ...
export type ST_Booleans = boolean;

// ST_FunctionType ...
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

// ST_FunctionOperator ...
export enum ST_FunctionOperator {
	equ = 'equ',
	neq = 'neq',
	gt = 'gt',
	lt = 'lt',
	gte = 'gte',
	lte = 'lte',
}

// ST_DiagramHorizontalAlignment ...
export enum ST_DiagramHorizontalAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
	none = 'none',
}

// ST_VerticalAlignment ...
export enum ST_VerticalAlignment {
	t = 't',
	mid = 'mid',
	b = 'b',
	none = 'none',
}

// ST_ChildDirection ...
export enum ST_ChildDirection {
	horz = 'horz',
	vert = 'vert',
}

// ST_ChildAlignment ...
export enum ST_ChildAlignment {
	t = 't',
	b = 'b',
	l = 'l',
	r = 'r',
}

// ST_SecondaryChildAlignment ...
export enum ST_SecondaryChildAlignment {
	none = 'none',
	t = 't',
	b = 'b',
	l = 'l',
	r = 'r',
}

// ST_LinearDirection ...
export enum ST_LinearDirection {
	fromL = 'fromL',
	fromR = 'fromR',
	fromT = 'fromT',
	fromB = 'fromB',
}

// ST_SecondaryLinearDirection ...
export enum ST_SecondaryLinearDirection {
	none = 'none',
	fromL = 'fromL',
	fromR = 'fromR',
	fromT = 'fromT',
	fromB = 'fromB',
}

// ST_StartingElement ...
export enum ST_StartingElement {
	node = 'node',
	trans = 'trans',
}

// ST_RotationPath ...
export enum ST_RotationPath {
	none = 'none',
	alongPath = 'alongPath',
}

// ST_CenterShapeMapping ...
export enum ST_CenterShapeMapping {
	none = 'none',
	fNode = 'fNode',
}

// ST_BendPoint ...
export enum ST_BendPoint {
	beg = 'beg',
	def = 'def',
	end = 'end',
}

// ST_ConnectorRouting ...
export enum ST_ConnectorRouting {
	stra = 'stra',
	bend = 'bend',
	curve = 'curve',
	longCurve = 'longCurve',
}

// ST_ArrowheadStyle ...
export enum ST_ArrowheadStyle {
	auto = 'auto',
	arr = 'arr',
	noArr = 'noArr',
}

// ST_ConnectorDimension ...
export enum ST_ConnectorDimension {
	1D = '1D',
	2D = '2D',
	cust = 'cust',
}

// ST_ConnectorPoint ...
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

// ST_NodeHorizontalAlignment ...
export enum ST_NodeHorizontalAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
}

// ST_NodeVerticalAlignment ...
export enum ST_NodeVerticalAlignment {
	t = 't',
	mid = 'mid',
	b = 'b',
}

// ST_FallbackDimension ...
export enum ST_FallbackDimension {
	1D = '1D',
	2D = '2D',
}

// ST_TextDirection ...
export enum ST_TextDirection {
	fromT = 'fromT',
	fromB = 'fromB',
}

// ST_PyramidAccentPosition ...
export enum ST_PyramidAccentPosition {
	bef = 'bef',
	aft = 'aft',
}

// ST_PyramidAccentTextMargin ...
export enum ST_PyramidAccentTextMargin {
	step = 'step',
	stack = 'stack',
}

// ST_TextBlockDirection ...
export enum ST_TextBlockDirection {
	horz = 'horz',
	vert = 'vert',
}

// ST_TextAnchorHorizontal ...
export enum ST_TextAnchorHorizontal {
	none = 'none',
	ctr = 'ctr',
}

// ST_TextAnchorVertical ...
export enum ST_TextAnchorVertical {
	t = 't',
	mid = 'mid',
	b = 'b',
}

// ST_DiagramTextAlignment ...
export enum ST_DiagramTextAlignment {
	l = 'l',
	ctr = 'ctr',
	r = 'r',
}

// ST_AutoTextRotation ...
export enum ST_AutoTextRotation {
	none = 'none',
	upr = 'upr',
	grav = 'grav',
}

// ST_GrowDirection ...
export enum ST_GrowDirection {
	tL = 'tL',
	tR = 'tR',
	bL = 'bL',
	bR = 'bR',
}

// ST_FlowDirection ...
export enum ST_FlowDirection {
	row = 'row',
	col = 'col',
}

// ST_ContinueDirection ...
export enum ST_ContinueDirection {
	revDir = 'revDir',
	sameDir = 'sameDir',
}

// ST_Breakpoint ...
export enum ST_Breakpoint {
	endCnv = 'endCnv',
	bal = 'bal',
	fixed = 'fixed',
}

// ST_Offset ...
export enum ST_Offset {
	ctr = 'ctr',
	off = 'off',
}

// ST_HierarchyAlignment ...
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

// ST_FunctionValue ...
export class ST_FunctionValue {
	Boolean: boolean;
	Int: number;
	ST_ResizeHandlesStr: string;
	ST_HierBranchStyle: string;
	ST_Direction: string;
	ST_AnimOneStr: string;
	ST_AnimLvlStr: string;
}

// ST_VariableType ...
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

// ST_FunctionArgument ...
export class ST_FunctionArgument {
	ST_VariableType: string;
}

// ST_OutputShapeType ...
export enum ST_OutputShapeType {
	none = 'none',
	conn = 'conn',
}

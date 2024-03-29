// Code generated by xgen. DO NOT EDIT.

// CT_CTName ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_CTName;

// CT_CTDescription ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_CTDescription;

// CT_CTCategory ...
typedef struct {
	char TypeAttr; // attr
	unsigned int PriAttr; // attr
} CT_CTCategory;

// CT_CTCategories ...
typedef struct {
	CT_CTCategory Cat[];
} CT_CTCategories;

// ST_ClrAppMethod ...
typedef char ST_ClrAppMethod;

// ST_HueDir ...
typedef char ST_HueDir;

// CT_Colors ...
typedef struct {
	char MethAttr; // attr, optional
	char HueDirAttr; // attr, optional
	EG_ColorChoice AEG_ColorChoice[];
} CT_Colors;

// CT_CTStyleLabel ...
typedef struct {
	char NameAttr; // attr
	CT_Colors FillClrLst;
	CT_Colors LinClrLst;
	CT_Colors EffectClrLst;
	CT_Colors TxLinClrLst;
	CT_Colors TxFillClrLst;
	CT_Colors TxEffectClrLst;
	CT_OfficeArtExtensionList ExtLst;
} CT_CTStyleLabel;

// CT_ColorTransform ...
typedef struct {
	char UniqueIdAttr; // attr, optional
	char MinVerAttr; // attr, optional
	CT_CTName Title[];
	CT_CTDescription Desc[];
	CT_CTCategories CatLst;
	CT_CTStyleLabel StyleLbl[];
	CT_OfficeArtExtensionList ExtLst;
} CT_ColorTransform;

typedef CT_ColorTransform ColorsDef;

// CT_ColorTransformHeader ...
typedef struct {
	char UniqueIdAttr; // attr
	char MinVerAttr; // attr, optional
	int ResIdAttr; // attr, optional
	CT_CTName Title[];
	CT_CTDescription Desc[];
	CT_CTCategories CatLst;
	CT_OfficeArtExtensionList ExtLst;
} CT_ColorTransformHeader;

typedef CT_ColorTransformHeader ColorsDefHdr;

// CT_ColorTransformHeaderLst ...
typedef struct {
	CT_ColorTransformHeader ColorsDefHdr[];
} CT_ColorTransformHeaderLst;

typedef CT_ColorTransformHeaderLst ColorsDefHdrLst;

// ST_PtType ...
typedef char ST_PtType;

// CT_Pt ...
typedef struct {
	ST_ModelId ModelIdAttr; // attr
	char TypeAttr; // attr, optional
	ST_ModelId CxnIdAttr; // attr, optional
	CT_ElemPropSet PrSet;
	CT_ShapeProperties SpPr;
	CT_TextBody T;
	CT_OfficeArtExtensionList ExtLst;
} CT_Pt;

// CT_PtList ...
typedef struct {
	CT_Pt Pt[];
} CT_PtList;

// ST_CxnType ...
typedef char ST_CxnType;

// CT_Cxn ...
typedef struct {
	ST_ModelId ModelIdAttr; // attr
	char TypeAttr; // attr, optional
	ST_ModelId SrcIdAttr; // attr
	ST_ModelId DestIdAttr; // attr
	unsigned int SrcOrdAttr; // attr
	unsigned int DestOrdAttr; // attr
	ST_ModelId ParTransIdAttr; // attr, optional
	ST_ModelId SibTransIdAttr; // attr, optional
	char PresIdAttr; // attr, optional
	CT_OfficeArtExtensionList ExtLst;
} CT_Cxn;

// CT_CxnList ...
typedef struct {
	CT_Cxn Cxn[];
} CT_CxnList;

// CT_DataModel ...
typedef struct {
	CT_PtList PtLst;
	CT_CxnList CxnLst;
	CT_BackgroundFormatting Bg;
	CT_WholeE2oFormatting Whole;
	CT_OfficeArtExtensionList ExtLst;
} CT_DataModel;

typedef CT_DataModel DataModel;

// AG_IteratorAttributes ...
typedef struct {
	ST_AxisTypes AxisAttr; // attr, optional
	ST_ElementTypes PtTypeAttr; // attr, optional
	ST_Booleans HideLastTransAttr; // attr, optional
	ST_Ints StAttr; // attr, optional
	ST_UnsignedInts CntAttr; // attr, optional
	ST_Ints StepAttr; // attr, optional
} AG_IteratorAttributes;

// AG_ConstraintAttributes ...
typedef struct {
	char TypeAttr; // attr
	char ForAttr; // attr, optional
	char ForNameAttr; // attr, optional
	char PtTypeAttr; // attr, optional
} AG_ConstraintAttributes;

// AG_ConstraintRefAttributes ...
typedef struct {
	char RefTypeAttr; // attr, optional
	char RefForAttr; // attr, optional
	char RefForNameAttr; // attr, optional
	char RefPtTypeAttr; // attr, optional
} AG_ConstraintRefAttributes;

// CT_Constraint ...
typedef struct {
	AG_ConstraintAttributes AG_ConstraintAttributes;
	AG_ConstraintRefAttributes AG_ConstraintRefAttributes;
	char OpAttr; // attr, optional
	float ValAttr; // attr, optional
	float FactAttr; // attr, optional
	CT_OfficeArtExtensionList ExtLst;
} CT_Constraint;

// CT_Constraints ...
typedef struct {
	CT_Constraint Constr[];
} CT_Constraints;

// CT_NumericRule ...
typedef struct {
	AG_ConstraintAttributes AG_ConstraintAttributes;
	float ValAttr; // attr, optional
	float FactAttr; // attr, optional
	float MaxAttr; // attr, optional
	CT_OfficeArtExtensionList ExtLst;
} CT_NumericRule;

// CT_Rules ...
typedef struct {
	CT_NumericRule Rule[];
} CT_Rules;

// CT_PresentationOf ...
typedef struct {
	AG_IteratorAttributes AG_IteratorAttributes;
	CT_OfficeArtExtensionList ExtLst;
} CT_PresentationOf;

// ST_LayoutShapeType ...
typedef struct {
	ST_OutputShapeType ST_OutputShapeType;
	char ST_ShapeType;
} ST_LayoutShapeType;

// ST_Index1 ...
typedef unsigned int ST_Index1;

// CT_Adj ...
typedef struct {
	unsigned int IdxAttr; // attr
	float ValAttr; // attr
} CT_Adj;

// CT_AdjLst ...
typedef struct {
	CT_Adj Adj[];
} CT_AdjLst;

// CT_Shape ...
typedef struct {
	float RotAttr; // attr, optional
	ST_LayoutShapeType TypeAttr; // attr, optional
	char RBlipAttr; // attr, optional
	int ZOrderOffAttr; // attr, optional
	bool HideGeomAttr; // attr, optional
	bool LkTxEntryAttr; // attr, optional
	bool BlipPhldrAttr; // attr, optional
	CT_AdjLst AdjLst;
	CT_OfficeArtExtensionList ExtLst;
} CT_Shape;

// CT_Parameter ...
typedef struct {
	char TypeAttr; // attr
	ST_ParameterVal ValAttr; // attr
} CT_Parameter;

// CT_Algorithm ...
typedef struct {
	char TypeAttr; // attr
	unsigned int RevAttr; // attr, optional
	CT_Parameter Param[];
	CT_OfficeArtExtensionList ExtLst;
} CT_Algorithm;

// CT_LayoutNode ...
typedef struct {
	char NameAttr; // attr, optional
	char StyleLblAttr; // attr, optional
	char ChOrderAttr; // attr, optional
	char MoveWithAttr; // attr, optional
	CT_Algorithm Alg[];
	CT_Shape Shape[];
	CT_PresentationOf PresOf[];
	CT_Constraints ConstrLst[];
	CT_Rules RuleLst[];
	CT_LayoutVariablePropertySet VarLst[];
	CT_ForEach ForEach[];
	CT_LayoutNode LayoutNode[];
	CT_Choose Choose[];
	CT_OfficeArtExtensionList ExtLst[];
} CT_LayoutNode;

// CT_ForEach ...
typedef struct {
	AG_IteratorAttributes AG_IteratorAttributes;
	char NameAttr; // attr, optional
	char RefAttr; // attr, optional
	CT_Algorithm Alg[];
	CT_Shape Shape[];
	CT_PresentationOf PresOf[];
	CT_Constraints ConstrLst[];
	CT_Rules RuleLst[];
	CT_ForEach ForEach[];
	CT_LayoutNode LayoutNode[];
	CT_Choose Choose[];
	CT_OfficeArtExtensionList ExtLst[];
} CT_ForEach;

// CT_When ...
typedef struct {
	AG_IteratorAttributes AG_IteratorAttributes;
	char NameAttr; // attr, optional
	char FuncAttr; // attr
	ST_FunctionArgument ArgAttr; // attr, optional
	char OpAttr; // attr
	ST_FunctionValue ValAttr; // attr
	CT_Algorithm Alg[];
	CT_Shape Shape[];
	CT_PresentationOf PresOf[];
	CT_Constraints ConstrLst[];
	CT_Rules RuleLst[];
	CT_ForEach ForEach[];
	CT_LayoutNode LayoutNode[];
	CT_Choose Choose[];
	CT_OfficeArtExtensionList ExtLst[];
} CT_When;

// CT_Otherwise ...
typedef struct {
	char NameAttr; // attr, optional
	CT_Algorithm Alg[];
	CT_Shape Shape[];
	CT_PresentationOf PresOf[];
	CT_Constraints ConstrLst[];
	CT_Rules RuleLst[];
	CT_ForEach ForEach[];
	CT_LayoutNode LayoutNode[];
	CT_Choose Choose[];
	CT_OfficeArtExtensionList ExtLst[];
} CT_Otherwise;

// CT_Choose ...
typedef struct {
	char NameAttr; // attr, optional
	CT_When If[];
	CT_Otherwise Else;
} CT_Choose;

// CT_SampleData ...
typedef struct {
	bool UseDefAttr; // attr, optional
	CT_DataModel DataModel;
} CT_SampleData;

// CT_Category ...
typedef struct {
	char TypeAttr; // attr
	unsigned int PriAttr; // attr
} CT_Category;

// CT_Categories ...
typedef struct {
	CT_Category Cat[];
} CT_Categories;

// CT_Name ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_Name;

// CT_Description ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_Description;

// CT_DiagramDefinition ...
typedef struct {
	char UniqueIdAttr; // attr, optional
	char MinVerAttr; // attr, optional
	char DefStyleAttr; // attr, optional
	CT_Name Title[];
	CT_Description Desc[];
	CT_Categories CatLst;
	CT_SampleData SampData;
	CT_SampleData StyleData;
	CT_SampleData ClrData;
	CT_LayoutNode LayoutNode;
	CT_OfficeArtExtensionList ExtLst;
} CT_DiagramDefinition;

typedef CT_DiagramDefinition LayoutDef;

// CT_DiagramDefinitionHeader ...
typedef struct {
	char UniqueIdAttr; // attr
	char MinVerAttr; // attr, optional
	char DefStyleAttr; // attr, optional
	int ResIdAttr; // attr, optional
	CT_Name Title[];
	CT_Description Desc[];
	CT_Categories CatLst;
	CT_OfficeArtExtensionList ExtLst;
} CT_DiagramDefinitionHeader;

typedef CT_DiagramDefinitionHeader LayoutDefHdr;

// CT_DiagramDefinitionHeaderLst ...
typedef struct {
	CT_DiagramDefinitionHeader LayoutDefHdr[];
} CT_DiagramDefinitionHeaderLst;

typedef CT_DiagramDefinitionHeaderLst LayoutDefHdrLst;

// CT_RelIds ...
typedef struct {
	char RDmAttr; // attr
	char RLoAttr; // attr
	char RQsAttr; // attr
	char RCsAttr; // attr
} CT_RelIds;

typedef CT_RelIds RelIds;

// ST_ParameterVal ...
typedef struct {
	ST_ArrowheadStyle ST_ArrowheadStyle;
	ST_AutoTextRotation ST_AutoTextRotation;
	ST_BendPoint ST_BendPoint;
	ST_Breakpoint ST_Breakpoint;
	ST_CenterShapeMapping ST_CenterShapeMapping;
	ST_ChildAlignment ST_ChildAlignment;
	ST_ChildDirection ST_ChildDirection;
	ST_ConnectorDimension ST_ConnectorDimension;
	ST_ConnectorPoint ST_ConnectorPoint;
	ST_ConnectorRouting ST_ConnectorRouting;
	ST_ContinueDirection ST_ContinueDirection;
	ST_DiagramHorizontalAlignment ST_DiagramHorizontalAlignment;
	ST_DiagramTextAlignment ST_DiagramTextAlignment;
	ST_FallbackDimension ST_FallbackDimension;
	ST_FlowDirection ST_FlowDirection;
	ST_GrowDirection ST_GrowDirection;
	ST_HierarchyAlignment ST_HierarchyAlignment;
	ST_LinearDirection ST_LinearDirection;
	ST_NodeHorizontalAlignment ST_NodeHorizontalAlignment;
	ST_NodeVerticalAlignment ST_NodeVerticalAlignment;
	ST_Offset ST_Offset;
	ST_PyramidAccentPosition ST_PyramidAccentPosition;
	ST_PyramidAccentTextMargin ST_PyramidAccentTextMargin;
	ST_RotationPath ST_RotationPath;
	ST_SecondaryChildAlignment ST_SecondaryChildAlignment;
	ST_SecondaryLinearDirection ST_SecondaryLinearDirection;
	ST_StartingElement ST_StartingElement;
	ST_TextAnchorHorizontal ST_TextAnchorHorizontal;
	ST_TextAnchorVertical ST_TextAnchorVertical;
	ST_TextBlockDirection ST_TextBlockDirection;
	ST_TextDirection ST_TextDirection;
	ST_VerticalAlignment ST_VerticalAlignment;
	bool Boolean;
	char String;
	float Double;
	int Int;
} ST_ParameterVal;

// ST_ModelId ...
typedef struct {
	char ST_Guid;
	int Int;
} ST_ModelId;

// ST_PrSetCustVal ...
typedef struct {
	char ST_Percentage;
} ST_PrSetCustVal;

// CT_ElemPropSet ...
typedef struct {
	ST_ModelId PresAssocIDAttr; // attr, optional
	char PresNameAttr; // attr, optional
	char PresStyleLblAttr; // attr, optional
	int PresStyleIdxAttr; // attr, optional
	int PresStyleCntAttr; // attr, optional
	char LoTypeIdAttr; // attr, optional
	char LoCatIdAttr; // attr, optional
	char QsTypeIdAttr; // attr, optional
	char QsCatIdAttr; // attr, optional
	char CsTypeIdAttr; // attr, optional
	char CsCatIdAttr; // attr, optional
	bool Coherent3DOffAttr; // attr, optional
	char PhldrTAttr; // attr, optional
	bool PhldrAttr; // attr, optional
	int CustAngAttr; // attr, optional
	bool CustFlipVertAttr; // attr, optional
	bool CustFlipHorAttr; // attr, optional
	int CustSzXAttr; // attr, optional
	int CustSzYAttr; // attr, optional
	ST_PrSetCustVal CustScaleXAttr; // attr, optional
	ST_PrSetCustVal CustScaleYAttr; // attr, optional
	bool CustTAttr; // attr, optional
	ST_PrSetCustVal CustLinFactXAttr; // attr, optional
	ST_PrSetCustVal CustLinFactYAttr; // attr, optional
	ST_PrSetCustVal CustLinFactNeighborXAttr; // attr, optional
	ST_PrSetCustVal CustLinFactNeighborYAttr; // attr, optional
	ST_PrSetCustVal CustRadScaleRadAttr; // attr, optional
	ST_PrSetCustVal CustRadScaleIncAttr; // attr, optional
	CT_LayoutVariablePropertySet PresLayoutVars;
	CT_ShapeStyle Style;
} CT_ElemPropSet;

// ST_Direction ...
typedef char ST_Direction;

// ST_HierBranchStyle ...
typedef char ST_HierBranchStyle;

// ST_AnimOneStr ...
typedef char ST_AnimOneStr;

// ST_AnimLvlStr ...
typedef char ST_AnimLvlStr;

// CT_OrgChart ...
typedef struct {
	bool ValAttr; // attr, optional
} CT_OrgChart;

// ST_NodeCount ...
typedef int ST_NodeCount;

// CT_ChildMax ...
typedef struct {
	int ValAttr; // attr, optional
} CT_ChildMax;

// CT_ChildPref ...
typedef struct {
	int ValAttr; // attr, optional
} CT_ChildPref;

// CT_BulletEnabled ...
typedef struct {
	bool ValAttr; // attr, optional
} CT_BulletEnabled;

// CT_Direction ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Direction;

// CT_HierBranchStyle ...
typedef struct {
	char ValAttr; // attr, optional
} CT_HierBranchStyle;

// CT_AnimOne ...
typedef struct {
	char ValAttr; // attr, optional
} CT_AnimOne;

// CT_AnimLvl ...
typedef struct {
	char ValAttr; // attr, optional
} CT_AnimLvl;

// ST_ResizeHandlesStr ...
typedef char ST_ResizeHandlesStr;

// CT_ResizeHandles ...
typedef struct {
	char ValAttr; // attr, optional
} CT_ResizeHandles;

// CT_LayoutVariablePropertySet ...
typedef struct {
	CT_OrgChart OrgChart;
	CT_ChildMax ChMax;
	CT_ChildPref ChPref;
	CT_BulletEnabled BulletEnabled;
	CT_Direction Dir;
	CT_HierBranchStyle HierBranch;
	CT_AnimOne AnimOne;
	CT_AnimLvl AnimLvl;
	CT_ResizeHandles ResizeHandles;
} CT_LayoutVariablePropertySet;

// CT_SDName ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_SDName;

// CT_SDDescription ...
typedef struct {
	char LangAttr; // attr, optional
	char ValAttr; // attr
} CT_SDDescription;

// CT_SDCategory ...
typedef struct {
	char TypeAttr; // attr
	unsigned int PriAttr; // attr
} CT_SDCategory;

// CT_SDCategories ...
typedef struct {
	CT_SDCategory Cat[];
} CT_SDCategories;

// CT_TextProps ...
typedef struct {
	EG_Text3D AEG_Text3D[];
} CT_TextProps;

// CT_StyleLabel ...
typedef struct {
	char NameAttr; // attr
	CT_Scene3D Scene3d;
	CT_Shape3D Sp3d;
	CT_TextProps TxPr;
	CT_ShapeStyle Style;
	CT_OfficeArtExtensionList ExtLst;
} CT_StyleLabel;

// CT_StyleDefinition ...
typedef struct {
	char UniqueIdAttr; // attr, optional
	char MinVerAttr; // attr, optional
	CT_SDName Title[];
	CT_SDDescription Desc[];
	CT_SDCategories CatLst;
	CT_Scene3D Scene3d;
	CT_StyleLabel StyleLbl[];
	CT_OfficeArtExtensionList ExtLst;
} CT_StyleDefinition;

typedef CT_StyleDefinition StyleDef;

// CT_StyleDefinitionHeader ...
typedef struct {
	char UniqueIdAttr; // attr
	char MinVerAttr; // attr, optional
	int ResIdAttr; // attr, optional
	CT_SDName Title[];
	CT_SDDescription Desc[];
	CT_SDCategories CatLst;
	CT_OfficeArtExtensionList ExtLst;
} CT_StyleDefinitionHeader;

typedef CT_StyleDefinitionHeader StyleDefHdr;

// CT_StyleDefinitionHeaderLst ...
typedef struct {
	CT_StyleDefinitionHeader StyleDefHdr[];
} CT_StyleDefinitionHeaderLst;

typedef CT_StyleDefinitionHeaderLst StyleDefHdrLst;

// ST_AlgorithmType ...
typedef char ST_AlgorithmType;

// ST_AxisType ...
typedef char ST_AxisType;

// ST_AxisTypes ...
typedef char ST_AxisTypes[];

// ST_BoolOperator ...
typedef char ST_BoolOperator;

// ST_ChildOrderType ...
typedef char ST_ChildOrderType;

// ST_ConstraintType ...
typedef char ST_ConstraintType;

// ST_ConstraintRelationship ...
typedef char ST_ConstraintRelationship;

// ST_ElementType ...
typedef char ST_ElementType;

// ST_ElementTypes ...
typedef char ST_ElementTypes[];

// ST_ParameterId ...
typedef char ST_ParameterId;

// ST_Ints ...
typedef int ST_Ints[];

// ST_UnsignedInts ...
typedef unsigned int ST_UnsignedInts[];

// ST_Booleans ...
typedef bool ST_Booleans[];

// ST_FunctionType ...
typedef char ST_FunctionType;

// ST_FunctionOperator ...
typedef char ST_FunctionOperator;

// ST_DiagramHorizontalAlignment ...
typedef char ST_DiagramHorizontalAlignment;

// ST_VerticalAlignment ...
typedef char ST_VerticalAlignment;

// ST_ChildDirection ...
typedef char ST_ChildDirection;

// ST_ChildAlignment ...
typedef char ST_ChildAlignment;

// ST_SecondaryChildAlignment ...
typedef char ST_SecondaryChildAlignment;

// ST_LinearDirection ...
typedef char ST_LinearDirection;

// ST_SecondaryLinearDirection ...
typedef char ST_SecondaryLinearDirection;

// ST_StartingElement ...
typedef char ST_StartingElement;

// ST_RotationPath ...
typedef char ST_RotationPath;

// ST_CenterShapeMapping ...
typedef char ST_CenterShapeMapping;

// ST_BendPoint ...
typedef char ST_BendPoint;

// ST_ConnectorRouting ...
typedef char ST_ConnectorRouting;

// ST_ArrowheadStyle ...
typedef char ST_ArrowheadStyle;

// ST_ConnectorDimension ...
typedef char ST_ConnectorDimension;

// ST_ConnectorPoint ...
typedef char ST_ConnectorPoint;

// ST_NodeHorizontalAlignment ...
typedef char ST_NodeHorizontalAlignment;

// ST_NodeVerticalAlignment ...
typedef char ST_NodeVerticalAlignment;

// ST_FallbackDimension ...
typedef char ST_FallbackDimension;

// ST_TextDirection ...
typedef char ST_TextDirection;

// ST_PyramidAccentPosition ...
typedef char ST_PyramidAccentPosition;

// ST_PyramidAccentTextMargin ...
typedef char ST_PyramidAccentTextMargin;

// ST_TextBlockDirection ...
typedef char ST_TextBlockDirection;

// ST_TextAnchorHorizontal ...
typedef char ST_TextAnchorHorizontal;

// ST_TextAnchorVertical ...
typedef char ST_TextAnchorVertical;

// ST_DiagramTextAlignment ...
typedef char ST_DiagramTextAlignment;

// ST_AutoTextRotation ...
typedef char ST_AutoTextRotation;

// ST_GrowDirection ...
typedef char ST_GrowDirection;

// ST_FlowDirection ...
typedef char ST_FlowDirection;

// ST_ContinueDirection ...
typedef char ST_ContinueDirection;

// ST_Breakpoint ...
typedef char ST_Breakpoint;

// ST_Offset ...
typedef char ST_Offset;

// ST_HierarchyAlignment ...
typedef char ST_HierarchyAlignment;

// ST_FunctionValue ...
typedef struct {
	bool Boolean;
	char ST_ResizeHandlesStr;
	char ST_HierBranchStyle;
	char ST_Direction;
	char ST_AnimOneStr;
	char ST_AnimLvlStr;
	int Int;
} ST_FunctionValue;

// ST_VariableType ...
typedef char ST_VariableType;

// ST_FunctionArgument ...
typedef struct {
	char ST_VariableType;
} ST_FunctionArgument;

// ST_OutputShapeType ...
typedef char ST_OutputShapeType;

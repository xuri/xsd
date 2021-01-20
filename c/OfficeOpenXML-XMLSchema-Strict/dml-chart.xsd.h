// Code generated by xgen. DO NOT EDIT.

// CT_Boolean ...
typedef struct {
	bool ValAttr; // attr, optional
} CT_Boolean;

// CT_Double ...
typedef struct {
	float ValAttr; // attr
} CT_Double;

// CT_UnsignedInt ...
typedef struct {
	unsigned int ValAttr; // attr
} CT_UnsignedInt;

// CT_RelId ...
typedef struct {
	char RIdAttr; // attr
} CT_RelId;

// CT_Extension ...
typedef struct {
	char UriAttr; // attr, optional
} CT_Extension;

// CT_ExtensionList ...
typedef struct {
	CT_Extension Ext[];
} CT_ExtensionList;

// CT_NumVal ...
typedef struct {
	unsigned int IdxAttr; // attr
	char FormatCodeAttr; // attr, optional
	char V[];
} CT_NumVal;

// CT_NumData ...
typedef struct {
	char FormatCode[];
	CT_UnsignedInt PtCount[];
	CT_NumVal Pt[];
	CT_ExtensionList ExtLst[];
} CT_NumData;

// CT_NumRef ...
typedef struct {
	char F[];
	CT_NumData NumCache[];
	CT_ExtensionList ExtLst[];
} CT_NumRef;

// CT_NumDataSource ...
typedef struct {
	CT_NumRef NumRef[];
	CT_NumData NumLit[];
} CT_NumDataSource;

// CT_StrVal ...
typedef struct {
	unsigned int IdxAttr; // attr
	char V[];
} CT_StrVal;

// CT_StrData ...
typedef struct {
	CT_UnsignedInt PtCount[];
	CT_StrVal Pt[];
	CT_ExtensionList ExtLst[];
} CT_StrData;

// CT_StrRef ...
typedef struct {
	char F[];
	CT_StrData StrCache[];
	CT_ExtensionList ExtLst[];
} CT_StrRef;

// CT_Tx ...
typedef struct {
	CT_StrRef StrRef[];
	CT_TextBody Rich[];
} CT_Tx;

// CT_TextLanguageID ...
typedef struct {
	char ValAttr; // attr
} CT_TextLanguageID;

// CT_Lvl ...
typedef struct {
	CT_StrVal Pt[];
} CT_Lvl;

// CT_MultiLvlStrData ...
typedef struct {
	CT_UnsignedInt PtCount[];
	CT_Lvl Lvl[];
	CT_ExtensionList ExtLst[];
} CT_MultiLvlStrData;

// CT_MultiLvlStrRef ...
typedef struct {
	char F[];
	CT_MultiLvlStrData MultiLvlStrCache[];
	CT_ExtensionList ExtLst[];
} CT_MultiLvlStrRef;

// CT_AxDataSource ...
typedef struct {
	CT_MultiLvlStrRef MultiLvlStrRef[];
	CT_NumRef NumRef[];
	CT_NumData NumLit[];
	CT_StrRef StrRef[];
	CT_StrData StrLit[];
} CT_AxDataSource;

// CT_SerTx ...
typedef struct {
	CT_StrRef StrRef[];
	char V[];
} CT_SerTx;

// ST_LayoutTarget ...
typedef char ST_LayoutTarget;

// CT_LayoutTarget ...
typedef struct {
	char ValAttr; // attr, optional
} CT_LayoutTarget;

// ST_LayoutMode ...
typedef char ST_LayoutMode;

// CT_LayoutMode ...
typedef struct {
	char ValAttr; // attr, optional
} CT_LayoutMode;

// CT_ManualLayout ...
typedef struct {
	CT_LayoutTarget LayoutTarget[];
	CT_LayoutMode XMode[];
	CT_LayoutMode YMode[];
	CT_LayoutMode WMode[];
	CT_LayoutMode HMode[];
	CT_Double X[];
	CT_Double Y[];
	CT_Double W[];
	CT_Double H[];
	CT_ExtensionList ExtLst[];
} CT_ManualLayout;

// CT_Layout ...
typedef struct {
	CT_ManualLayout ManualLayout[];
	CT_ExtensionList ExtLst[];
} CT_Layout;

// CT_Title ...
typedef struct {
	CT_Tx Tx[];
	CT_Layout Layout[];
	CT_Boolean Overlay[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_ExtensionList ExtLst[];
} CT_Title;

// ST_RotX ...
typedef char ST_RotX[];

// CT_RotX ...
typedef struct {
	char ValAttr[]; // attr, optional
} CT_RotX;

// ST_HPercent ...
typedef struct {
	ST_HPercentWithSymbol ST_HPercentWithSymbol;
} ST_HPercent;

// ST_HPercentWithSymbol ...
typedef char ST_HPercentWithSymbol;

// CT_HPercent ...
typedef struct {
	ST_HPercent ValAttr; // attr, optional
} CT_HPercent;

// ST_RotY ...
typedef unsigned int ST_RotY;

// CT_RotY ...
typedef struct {
	unsigned int ValAttr; // attr, optional
} CT_RotY;

// ST_DepthPercent ...
typedef struct {
	ST_DepthPercentWithSymbol ST_DepthPercentWithSymbol;
} ST_DepthPercent;

// ST_DepthPercentWithSymbol ...
typedef char ST_DepthPercentWithSymbol;

// CT_DepthPercent ...
typedef struct {
	ST_DepthPercent ValAttr; // attr, optional
} CT_DepthPercent;

// ST_Perspective ...
typedef char ST_Perspective;

// CT_Perspective ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Perspective;

// CT_View3D ...
typedef struct {
	CT_RotX RotX[];
	CT_HPercent HPercent[];
	CT_RotY RotY[];
	CT_DepthPercent DepthPercent[];
	CT_Boolean RAngAx[];
	CT_Perspective Perspective[];
	CT_ExtensionList ExtLst[];
} CT_View3D;

// CT_Surface ...
typedef struct {
	CT_Thickness Thickness[];
	CT_ShapeProperties SpPr[];
	CT_PictureOptions PictureOptions[];
	CT_ExtensionList ExtLst[];
} CT_Surface;

// ST_Thickness ...
typedef struct {
	ST_ThicknessPercent ST_ThicknessPercent;
} ST_Thickness;

// ST_ThicknessPercent ...
typedef char ST_ThicknessPercent;

// CT_Thickness ...
typedef struct {
	ST_Thickness ValAttr; // attr
} CT_Thickness;

// CT_DTable ...
typedef struct {
	CT_Boolean ShowHorzBorder[];
	CT_Boolean ShowVertBorder[];
	CT_Boolean ShowOutline[];
	CT_Boolean ShowKeys[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_ExtensionList ExtLst[];
} CT_DTable;

// ST_GapAmount ...
typedef struct {
	ST_GapAmountPercent ST_GapAmountPercent;
} ST_GapAmount;

// ST_GapAmountPercent ...
typedef char ST_GapAmountPercent;

// CT_GapAmount ...
typedef struct {
	ST_GapAmount ValAttr; // attr, optional
} CT_GapAmount;

// ST_Overlap ...
typedef struct {
	ST_OverlapPercent ST_OverlapPercent;
} ST_Overlap;

// ST_OverlapPercent ...
typedef char ST_OverlapPercent;

// CT_Overlap ...
typedef struct {
	ST_Overlap ValAttr; // attr, optional
} CT_Overlap;

// ST_BubbleScale ...
typedef struct {
	ST_BubbleScalePercent ST_BubbleScalePercent;
} ST_BubbleScale;

// ST_BubbleScalePercent ...
typedef char ST_BubbleScalePercent;

// CT_BubbleScale ...
typedef struct {
	ST_BubbleScale ValAttr; // attr, optional
} CT_BubbleScale;

// ST_SizeRepresents ...
typedef char ST_SizeRepresents;

// CT_SizeRepresents ...
typedef struct {
	char ValAttr; // attr, optional
} CT_SizeRepresents;

// ST_FirstSliceAng ...
typedef unsigned int ST_FirstSliceAng;

// CT_FirstSliceAng ...
typedef struct {
	unsigned int ValAttr; // attr, optional
} CT_FirstSliceAng;

// ST_HoleSize ...
typedef struct {
	ST_HoleSizePercent ST_HoleSizePercent;
} ST_HoleSize;

// ST_HoleSizePercent ...
typedef char ST_HoleSizePercent;

// CT_HoleSize ...
typedef struct {
	ST_HoleSize ValAttr; // attr, optional
} CT_HoleSize;

// ST_SplitType ...
typedef char ST_SplitType;

// CT_SplitType ...
typedef struct {
	char ValAttr; // attr, optional
} CT_SplitType;

// CT_CustSplit ...
typedef struct {
	CT_UnsignedInt SecondPiePt[];
} CT_CustSplit;

// ST_SecondPieSize ...
typedef struct {
	ST_SecondPieSizePercent ST_SecondPieSizePercent;
} ST_SecondPieSize;

// ST_SecondPieSizePercent ...
typedef char ST_SecondPieSizePercent;

// CT_SecondPieSize ...
typedef struct {
	ST_SecondPieSize ValAttr; // attr, optional
} CT_SecondPieSize;

// CT_NumFmt ...
typedef struct {
	char FormatCodeAttr; // attr
	bool SourceLinkedAttr; // attr, optional
} CT_NumFmt;

// ST_LblAlgn ...
typedef char ST_LblAlgn;

// CT_LblAlgn ...
typedef struct {
	char ValAttr; // attr
} CT_LblAlgn;

// ST_DLblPos ...
typedef char ST_DLblPos;

// CT_DLblPos ...
typedef struct {
	char ValAttr; // attr
} CT_DLblPos;

// EG_DLblShared ...
typedef struct {
	CT_NumFmt NumFmt[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_DLblPos DLblPos[];
	CT_Boolean ShowLegendKey[];
	CT_Boolean ShowVal[];
	CT_Boolean ShowCatName[];
	CT_Boolean ShowSerName[];
	CT_Boolean ShowPercent[];
	CT_Boolean ShowBubbleSize[];
	char Separator[];
} EG_DLblShared;

// Group_DLbl ...
typedef struct {
	CT_Layout Layout[];
	CT_Tx Tx[];
	EG_DLblShared EG_DLblShared[];
} Group_DLbl;

// CT_DLbl ...
typedef struct {
	Group_DLbl Group_DLbl[];
	CT_UnsignedInt Idx[];
	CT_Boolean Delete[];
	CT_ExtensionList ExtLst[];
} CT_DLbl;

// Group_DLbls ...
typedef struct {
	CT_Boolean ShowLeaderLines[];
	CT_ChartLines LeaderLines[];
	EG_DLblShared EG_DLblShared[];
} Group_DLbls;

// CT_DLbls ...
typedef struct {
	Group_DLbls Group_DLbls[];
	CT_DLbl DLbl[];
	CT_Boolean Delete[];
	CT_ExtensionList ExtLst[];
} CT_DLbls;

// ST_MarkerStyle ...
typedef char ST_MarkerStyle;

// CT_MarkerStyle ...
typedef struct {
	char ValAttr; // attr
} CT_MarkerStyle;

// ST_MarkerSize ...
typedef char ST_MarkerSize;

// CT_MarkerSize ...
typedef struct {
	char ValAttr; // attr, optional
} CT_MarkerSize;

// CT_Marker ...
typedef struct {
	CT_MarkerStyle Symbol[];
	CT_MarkerSize Size[];
	CT_ShapeProperties SpPr[];
	CT_ExtensionList ExtLst[];
} CT_Marker;

// CT_DPt ...
typedef struct {
	CT_UnsignedInt Idx[];
	CT_Boolean InvertIfNegative[];
	CT_Marker Marker[];
	CT_Boolean Bubble3D[];
	CT_UnsignedInt Explosion[];
	CT_ShapeProperties SpPr[];
	CT_PictureOptions PictureOptions[];
	CT_ExtensionList ExtLst[];
} CT_DPt;

// ST_TrendlineType ...
typedef char ST_TrendlineType;

// CT_TrendlineType ...
typedef struct {
	char ValAttr; // attr, optional
} CT_TrendlineType;

// ST_Order ...
typedef char ST_Order;

// CT_Order ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Order;

// ST_Period ...
typedef unsigned int ST_Period;

// CT_Period ...
typedef struct {
	unsigned int ValAttr; // attr, optional
} CT_Period;

// CT_TrendlineLbl ...
typedef struct {
	CT_Layout Layout[];
	CT_Tx Tx[];
	CT_NumFmt NumFmt[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_ExtensionList ExtLst[];
} CT_TrendlineLbl;

// CT_Trendline ...
typedef struct {
	char Name[];
	CT_ShapeProperties SpPr[];
	CT_TrendlineType TrendlineType[];
	CT_Order Order[];
	CT_Period Period[];
	CT_Double Forward[];
	CT_Double Backward[];
	CT_Double Intercept[];
	CT_Boolean DispRSqr[];
	CT_Boolean DispEq[];
	CT_TrendlineLbl TrendlineLbl[];
	CT_ExtensionList ExtLst[];
} CT_Trendline;

// ST_ErrDir ...
typedef char ST_ErrDir;

// CT_ErrDir ...
typedef struct {
	char ValAttr; // attr
} CT_ErrDir;

// ST_ErrBarType ...
typedef char ST_ErrBarType;

// CT_ErrBarType ...
typedef struct {
	char ValAttr; // attr, optional
} CT_ErrBarType;

// ST_ErrValType ...
typedef char ST_ErrValType;

// CT_ErrValType ...
typedef struct {
	char ValAttr; // attr, optional
} CT_ErrValType;

// CT_ErrBars ...
typedef struct {
	CT_ErrDir ErrDir[];
	CT_ErrBarType ErrBarType[];
	CT_ErrValType ErrValType[];
	CT_Boolean NoEndCap[];
	CT_NumDataSource Plus[];
	CT_NumDataSource Minus[];
	CT_Double Val[];
	CT_ShapeProperties SpPr[];
	CT_ExtensionList ExtLst[];
} CT_ErrBars;

// CT_UpDownBar ...
typedef struct {
	CT_ShapeProperties SpPr[];
} CT_UpDownBar;

// CT_UpDownBars ...
typedef struct {
	CT_GapAmount GapWidth[];
	CT_UpDownBar UpBars[];
	CT_UpDownBar DownBars[];
	CT_ExtensionList ExtLst[];
} CT_UpDownBars;

// EG_SerShared ...
typedef struct {
	CT_UnsignedInt Idx[];
	CT_UnsignedInt Order[];
	CT_SerTx Tx[];
	CT_ShapeProperties SpPr[];
} EG_SerShared;

// CT_LineSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_Marker Marker[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_Trendline Trendline[];
	CT_ErrBars ErrBars[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_Boolean Smooth[];
	CT_ExtensionList ExtLst[];
} CT_LineSer;

// CT_ScatterSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_Marker Marker[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_Trendline Trendline[];
	CT_ErrBars ErrBars[];
	CT_AxDataSource XVal[];
	CT_NumDataSource YVal[];
	CT_Boolean Smooth[];
	CT_ExtensionList ExtLst[];
} CT_ScatterSer;

// CT_RadarSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_Marker Marker[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_ExtensionList ExtLst[];
} CT_RadarSer;

// CT_BarSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_Boolean InvertIfNegative[];
	CT_PictureOptions PictureOptions[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_Trendline Trendline[];
	CT_ErrBars ErrBars[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_Shape Shape[];
	CT_ExtensionList ExtLst[];
} CT_BarSer;

// CT_AreaSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_PictureOptions PictureOptions[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_Trendline Trendline[];
	CT_ErrBars ErrBars[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_ExtensionList ExtLst[];
} CT_AreaSer;

// CT_PieSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_UnsignedInt Explosion[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_ExtensionList ExtLst[];
} CT_PieSer;

// CT_BubbleSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_Boolean InvertIfNegative[];
	CT_DPt DPt[];
	CT_DLbls DLbls[];
	CT_Trendline Trendline[];
	CT_ErrBars ErrBars[];
	CT_AxDataSource XVal[];
	CT_NumDataSource YVal[];
	CT_NumDataSource BubbleSize[];
	CT_Boolean Bubble3D[];
	CT_ExtensionList ExtLst[];
} CT_BubbleSer;

// CT_SurfaceSer ...
typedef struct {
	EG_SerShared EG_SerShared[];
	CT_AxDataSource Cat[];
	CT_NumDataSource Val[];
	CT_ExtensionList ExtLst[];
} CT_SurfaceSer;

// ST_Grouping ...
typedef char ST_Grouping;

// CT_Grouping ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Grouping;

// CT_ChartLines ...
typedef struct {
	CT_ShapeProperties SpPr[];
} CT_ChartLines;

// EG_LineChartShared ...
typedef struct {
	CT_Grouping Grouping[];
	CT_Boolean VaryColors[];
	CT_LineSer Ser[];
	CT_DLbls DLbls[];
	CT_ChartLines DropLines[];
} EG_LineChartShared;

// CT_LineChart ...
typedef struct {
	EG_LineChartShared EG_LineChartShared[];
	CT_ChartLines HiLowLines[];
	CT_UpDownBars UpDownBars[];
	CT_Boolean Marker[];
	CT_Boolean Smooth[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_LineChart;

// CT_Line3DChart ...
typedef struct {
	EG_LineChartShared EG_LineChartShared[];
	CT_GapAmount GapDepth[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_Line3DChart;

// CT_StockChart ...
typedef struct {
	CT_LineSer Ser[];
	CT_DLbls DLbls[];
	CT_ChartLines DropLines[];
	CT_ChartLines HiLowLines[];
	CT_UpDownBars UpDownBars[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_StockChart;

// ST_ScatterStyle ...
typedef char ST_ScatterStyle;

// CT_ScatterStyle ...
typedef struct {
	char ValAttr; // attr, optional
} CT_ScatterStyle;

// CT_ScatterChart ...
typedef struct {
	CT_ScatterStyle ScatterStyle[];
	CT_Boolean VaryColors[];
	CT_ScatterSer Ser[];
	CT_DLbls DLbls[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_ScatterChart;

// ST_RadarStyle ...
typedef char ST_RadarStyle;

// CT_RadarStyle ...
typedef struct {
	char ValAttr; // attr, optional
} CT_RadarStyle;

// CT_RadarChart ...
typedef struct {
	CT_RadarStyle RadarStyle[];
	CT_Boolean VaryColors[];
	CT_RadarSer Ser[];
	CT_DLbls DLbls[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_RadarChart;

// ST_BarGrouping ...
typedef char ST_BarGrouping;

// CT_BarGrouping ...
typedef struct {
	char ValAttr; // attr, optional
} CT_BarGrouping;

// ST_BarDir ...
typedef char ST_BarDir;

// CT_BarDir ...
typedef struct {
	char ValAttr; // attr, optional
} CT_BarDir;

// ST_Shape ...
typedef char ST_Shape;

// CT_Shape ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Shape;

// EG_BarChartShared ...
typedef struct {
	CT_BarDir BarDir[];
	CT_BarGrouping Grouping[];
	CT_Boolean VaryColors[];
	CT_BarSer Ser[];
	CT_DLbls DLbls[];
} EG_BarChartShared;

// CT_BarChart ...
typedef struct {
	EG_BarChartShared EG_BarChartShared[];
	CT_GapAmount GapWidth[];
	CT_Overlap Overlap[];
	CT_ChartLines SerLines[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_BarChart;

// CT_Bar3DChart ...
typedef struct {
	EG_BarChartShared EG_BarChartShared[];
	CT_GapAmount GapWidth[];
	CT_GapAmount GapDepth[];
	CT_Shape Shape[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_Bar3DChart;

// EG_AreaChartShared ...
typedef struct {
	CT_Grouping Grouping[];
	CT_Boolean VaryColors[];
	CT_AreaSer Ser[];
	CT_DLbls DLbls[];
	CT_ChartLines DropLines[];
} EG_AreaChartShared;

// CT_AreaChart ...
typedef struct {
	EG_AreaChartShared EG_AreaChartShared[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_AreaChart;

// CT_Area3DChart ...
typedef struct {
	EG_AreaChartShared EG_AreaChartShared[];
	CT_GapAmount GapDepth[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_Area3DChart;

// EG_PieChartShared ...
typedef struct {
	CT_Boolean VaryColors[];
	CT_PieSer Ser[];
	CT_DLbls DLbls[];
} EG_PieChartShared;

// CT_PieChart ...
typedef struct {
	EG_PieChartShared EG_PieChartShared[];
	CT_FirstSliceAng FirstSliceAng[];
	CT_ExtensionList ExtLst[];
} CT_PieChart;

// CT_Pie3DChart ...
typedef struct {
	EG_PieChartShared EG_PieChartShared[];
	CT_ExtensionList ExtLst[];
} CT_Pie3DChart;

// CT_DoughnutChart ...
typedef struct {
	EG_PieChartShared EG_PieChartShared[];
	CT_FirstSliceAng FirstSliceAng[];
	CT_HoleSize HoleSize[];
	CT_ExtensionList ExtLst[];
} CT_DoughnutChart;

// ST_OfPieType ...
typedef char ST_OfPieType;

// CT_OfPieType ...
typedef struct {
	char ValAttr; // attr, optional
} CT_OfPieType;

// CT_OfPieChart ...
typedef struct {
	EG_PieChartShared EG_PieChartShared[];
	CT_OfPieType OfPieType[];
	CT_GapAmount GapWidth[];
	CT_SplitType SplitType[];
	CT_Double SplitPos[];
	CT_CustSplit CustSplit[];
	CT_SecondPieSize SecondPieSize[];
	CT_ChartLines SerLines[];
	CT_ExtensionList ExtLst[];
} CT_OfPieChart;

// CT_BubbleChart ...
typedef struct {
	CT_Boolean VaryColors[];
	CT_BubbleSer Ser[];
	CT_DLbls DLbls[];
	CT_Boolean Bubble3D[];
	CT_BubbleScale BubbleScale[];
	CT_Boolean ShowNegBubbles[];
	CT_SizeRepresents SizeRepresents[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_BubbleChart;

// CT_BandFmt ...
typedef struct {
	CT_UnsignedInt Idx[];
	CT_ShapeProperties SpPr[];
} CT_BandFmt;

// CT_BandFmts ...
typedef struct {
	CT_BandFmt BandFmt[];
} CT_BandFmts;

// EG_SurfaceChartShared ...
typedef struct {
	CT_Boolean Wireframe[];
	CT_SurfaceSer Ser[];
	CT_BandFmts BandFmts[];
} EG_SurfaceChartShared;

// CT_SurfaceChart ...
typedef struct {
	EG_SurfaceChartShared EG_SurfaceChartShared[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_SurfaceChart;

// CT_Surface3DChart ...
typedef struct {
	EG_SurfaceChartShared EG_SurfaceChartShared[];
	CT_UnsignedInt AxId[];
	CT_ExtensionList ExtLst[];
} CT_Surface3DChart;

// ST_AxPos ...
typedef char ST_AxPos;

// CT_AxPos ...
typedef struct {
	char ValAttr; // attr
} CT_AxPos;

// ST_Crosses ...
typedef char ST_Crosses;

// CT_Crosses ...
typedef struct {
	char ValAttr; // attr
} CT_Crosses;

// ST_CrossBetween ...
typedef char ST_CrossBetween;

// CT_CrossBetween ...
typedef struct {
	char ValAttr; // attr
} CT_CrossBetween;

// ST_TickMark ...
typedef char ST_TickMark;

// CT_TickMark ...
typedef struct {
	char ValAttr; // attr, optional
} CT_TickMark;

// ST_TickLblPos ...
typedef char ST_TickLblPos;

// CT_TickLblPos ...
typedef struct {
	char ValAttr; // attr, optional
} CT_TickLblPos;

// ST_Skip ...
typedef unsigned int ST_Skip;

// CT_Skip ...
typedef struct {
	unsigned int ValAttr; // attr
} CT_Skip;

// ST_TimeUnit ...
typedef char ST_TimeUnit;

// CT_TimeUnit ...
typedef struct {
	char ValAttr; // attr, optional
} CT_TimeUnit;

// ST_AxisUnit ...
typedef float ST_AxisUnit;

// CT_AxisUnit ...
typedef struct {
	float ValAttr; // attr
} CT_AxisUnit;

// ST_BuiltInUnit ...
typedef char ST_BuiltInUnit;

// CT_BuiltInUnit ...
typedef struct {
	char ValAttr; // attr, optional
} CT_BuiltInUnit;

// ST_PictureFormat ...
typedef char ST_PictureFormat;

// CT_PictureFormat ...
typedef struct {
	char ValAttr; // attr
} CT_PictureFormat;

// ST_PictureStackUnit ...
typedef float ST_PictureStackUnit;

// CT_PictureStackUnit ...
typedef struct {
	float ValAttr; // attr
} CT_PictureStackUnit;

// CT_PictureOptions ...
typedef struct {
	CT_Boolean ApplyToFront[];
	CT_Boolean ApplyToSides[];
	CT_Boolean ApplyToEnd[];
	CT_PictureFormat PictureFormat[];
	CT_PictureStackUnit PictureStackUnit[];
} CT_PictureOptions;

// CT_DispUnitsLbl ...
typedef struct {
	CT_Layout Layout[];
	CT_Tx Tx[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
} CT_DispUnitsLbl;

// CT_DispUnits ...
typedef struct {
	CT_Double CustUnit[];
	CT_BuiltInUnit BuiltInUnit[];
	CT_DispUnitsLbl DispUnitsLbl[];
	CT_ExtensionList ExtLst[];
} CT_DispUnits;

// ST_Orientation ...
typedef char ST_Orientation;

// CT_Orientation ...
typedef struct {
	char ValAttr; // attr, optional
} CT_Orientation;

// ST_LogBase ...
typedef float ST_LogBase;

// CT_LogBase ...
typedef struct {
	float ValAttr; // attr
} CT_LogBase;

// CT_Scaling ...
typedef struct {
	CT_LogBase LogBase[];
	CT_Orientation Orientation[];
	CT_Double Max[];
	CT_Double Min[];
	CT_ExtensionList ExtLst[];
} CT_Scaling;

// ST_LblOffset ...
typedef struct {
	ST_LblOffsetPercent ST_LblOffsetPercent;
} ST_LblOffset;

// ST_LblOffsetPercent ...
typedef char ST_LblOffsetPercent;

// CT_LblOffset ...
typedef struct {
	ST_LblOffset ValAttr; // attr, optional
} CT_LblOffset;

// EG_AxShared ...
typedef struct {
	CT_UnsignedInt AxId[];
	CT_Scaling Scaling[];
	CT_Boolean Delete[];
	CT_AxPos AxPos[];
	CT_ChartLines MajorGridlines[];
	CT_ChartLines MinorGridlines[];
	CT_Title Title[];
	CT_NumFmt NumFmt[];
	CT_TickMark MajorTickMark[];
	CT_TickMark MinorTickMark[];
	CT_TickLblPos TickLblPos[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_UnsignedInt CrossAx[];
	CT_Crosses Crosses[];
	CT_Double CrossesAt[];
} EG_AxShared;

// CT_CatAx ...
typedef struct {
	EG_AxShared EG_AxShared[];
	CT_Boolean Auto[];
	CT_LblAlgn LblAlgn[];
	CT_LblOffset LblOffset[];
	CT_Skip TickLblSkip[];
	CT_Skip TickMarkSkip[];
	CT_Boolean NoMultiLvlLbl[];
	CT_ExtensionList ExtLst[];
} CT_CatAx;

// CT_DateAx ...
typedef struct {
	EG_AxShared EG_AxShared[];
	CT_Boolean Auto[];
	CT_LblOffset LblOffset[];
	CT_TimeUnit BaseTimeUnit[];
	CT_AxisUnit MajorUnit[];
	CT_TimeUnit MajorTimeUnit[];
	CT_AxisUnit MinorUnit[];
	CT_TimeUnit MinorTimeUnit[];
	CT_ExtensionList ExtLst[];
} CT_DateAx;

// CT_SerAx ...
typedef struct {
	EG_AxShared EG_AxShared[];
	CT_Skip TickLblSkip[];
	CT_Skip TickMarkSkip[];
	CT_ExtensionList ExtLst[];
} CT_SerAx;

// CT_ValAx ...
typedef struct {
	EG_AxShared EG_AxShared[];
	CT_CrossBetween CrossBetween[];
	CT_AxisUnit MajorUnit[];
	CT_AxisUnit MinorUnit[];
	CT_DispUnits DispUnits[];
	CT_ExtensionList ExtLst[];
} CT_ValAx;

// CT_PlotArea ...
typedef struct {
	CT_Layout Layout[];
	CT_AreaChart AreaChart[];
	CT_Area3DChart Area3DChart[];
	CT_LineChart LineChart[];
	CT_Line3DChart Line3DChart[];
	CT_StockChart StockChart[];
	CT_RadarChart RadarChart[];
	CT_ScatterChart ScatterChart[];
	CT_PieChart PieChart[];
	CT_Pie3DChart Pie3DChart[];
	CT_DoughnutChart DoughnutChart[];
	CT_BarChart BarChart[];
	CT_Bar3DChart Bar3DChart[];
	CT_OfPieChart OfPieChart[];
	CT_SurfaceChart SurfaceChart[];
	CT_Surface3DChart Surface3DChart[];
	CT_BubbleChart BubbleChart[];
	CT_ValAx ValAx[];
	CT_CatAx CatAx[];
	CT_DateAx DateAx[];
	CT_SerAx SerAx[];
	CT_DTable DTable[];
	CT_ShapeProperties SpPr[];
	CT_ExtensionList ExtLst[];
} CT_PlotArea;

// CT_PivotFmt ...
typedef struct {
	CT_UnsignedInt Idx[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_Marker Marker[];
	CT_DLbl DLbl[];
	CT_ExtensionList ExtLst[];
} CT_PivotFmt;

// CT_PivotFmts ...
typedef struct {
	CT_PivotFmt PivotFmt[];
} CT_PivotFmts;

// ST_LegendPos ...
typedef char ST_LegendPos;

// CT_LegendPos ...
typedef struct {
	char ValAttr; // attr, optional
} CT_LegendPos;

// EG_LegendEntryData ...
typedef struct {
	CT_TextBody TxPr[];
} EG_LegendEntryData;

// CT_LegendEntry ...
typedef struct {
	EG_LegendEntryData EG_LegendEntryData[];
	CT_UnsignedInt Idx[];
	CT_Boolean Delete[];
	CT_ExtensionList ExtLst[];
} CT_LegendEntry;

// CT_Legend ...
typedef struct {
	CT_LegendPos LegendPos[];
	CT_LegendEntry LegendEntry[];
	CT_Layout Layout[];
	CT_Boolean Overlay[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_ExtensionList ExtLst[];
} CT_Legend;

// ST_DispBlanksAs ...
typedef char ST_DispBlanksAs;

// CT_DispBlanksAs ...
typedef struct {
	char ValAttr; // attr, optional
} CT_DispBlanksAs;

// CT_Chart ...
typedef struct {
	CT_Title Title[];
	CT_Boolean AutoTitleDeleted[];
	CT_PivotFmts PivotFmts[];
	CT_View3D View3D[];
	CT_Surface Floor[];
	CT_Surface SideWall[];
	CT_Surface BackWall[];
	CT_PlotArea PlotArea[];
	CT_Legend Legend[];
	CT_Boolean PlotVisOnly[];
	CT_DispBlanksAs DispBlanksAs[];
	CT_Boolean ShowDLblsOverMax[];
	CT_ExtensionList ExtLst[];
} CT_Chart;

// ST_Style ...
typedef char ST_Style;

// CT_Style ...
typedef struct {
	char ValAttr; // attr
} CT_Style;

// CT_PivotSource ...
typedef struct {
	char Name[];
	CT_UnsignedInt FmtId[];
	CT_ExtensionList ExtLst[];
} CT_PivotSource;

// CT_Protection ...
typedef struct {
	CT_Boolean ChartObject[];
	CT_Boolean Data[];
	CT_Boolean Formatting[];
	CT_Boolean Selection[];
	CT_Boolean UserInterface[];
} CT_Protection;

// CT_HeaderFooter ...
typedef struct {
	bool AlignWithMarginsAttr; // attr, optional
	bool DifferentOddEvenAttr; // attr, optional
	bool DifferentFirstAttr; // attr, optional
	char OddHeader[];
	char OddFooter[];
	char EvenHeader[];
	char EvenFooter[];
	char FirstHeader[];
	char FirstFooter[];
} CT_HeaderFooter;

// CT_PageMargins ...
typedef struct {
	float LAttr; // attr
	float RAttr; // attr
	float TAttr; // attr
	float BAttr; // attr
	float HeaderAttr; // attr
	float FooterAttr; // attr
} CT_PageMargins;

// ST_PageSetupOrientation ...
typedef char ST_PageSetupOrientation;

// CT_ExternalData ...
typedef struct {
	char RIdAttr; // attr
	CT_Boolean AutoUpdate[];
} CT_ExternalData;

// CT_PageSetup ...
typedef struct {
	unsigned int PaperSizeAttr; // attr, optional
	char PaperHeightAttr; // attr, optional
	char PaperWidthAttr; // attr, optional
	unsigned int FirstPageNumberAttr; // attr, optional
	char OrientationAttr; // attr, optional
	bool BlackAndWhiteAttr; // attr, optional
	bool DraftAttr; // attr, optional
	bool UseFirstPageNumberAttr; // attr, optional
	int HorizontalDpiAttr; // attr, optional
	int VerticalDpiAttr; // attr, optional
	unsigned int CopiesAttr; // attr, optional
} CT_PageSetup;

// CT_PrintSettings ...
typedef struct {
	CT_HeaderFooter HeaderFooter[];
	CT_PageMargins PageMargins[];
	CT_PageSetup PageSetup[];
} CT_PrintSettings;

// CT_ChartSpace ...
typedef struct {
	CT_Boolean Date1904[];
	CT_TextLanguageID Lang[];
	CT_Boolean RoundedCorners[];
	CT_Style Style[];
	CT_ColorMapping ClrMapOvr[];
	CT_PivotSource PivotSource[];
	CT_Protection Protection[];
	CT_Chart Chart[];
	CT_ShapeProperties SpPr[];
	CT_TextBody TxPr[];
	CT_ExternalData ExternalData[];
	CT_PrintSettings PrintSettings[];
	CT_RelId UserShapes[];
	CT_ExtensionList ExtLst[];
} CT_ChartSpace;

typedef CT_ChartSpace ChartSpace;

typedef CT_Drawing UserShapes;

typedef CT_RelId Chart;

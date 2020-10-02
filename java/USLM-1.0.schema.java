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

public class DateSimpleType {
	@XmlElement(required = true)
	protected Byte Date;
	@XmlElement(required = true)
	protected Byte DateTime;
}

public class OccurrenceSimpleType {
	@XmlElement(required = true)
	protected Integer PositiveInteger;
	@XmlElement(required = true)
	protected ChoiceEnum ChoiceEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ShortStringSimpleType")
public class ShortStringSimpleType {
	protected String ShortStringSimpleType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "MediumStringSimpleType")
public class MediumStringSimpleType {
	protected String MediumStringSimpleType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "LongStringSimpleType")
public class LongStringSimpleType {
	protected String LongStringSimpleType;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ChoiceEnum")
public class ChoiceEnum {
	protected String ChoiceEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "PropertyTypeEnum")
public class PropertyTypeEnum {
	protected String PropertyTypeEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "SetTypeEnum")
public class SetTypeEnum {
	protected String SetTypeEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "StatusEnum")
public class StatusEnum {
	protected String StatusEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ActionTypeEnum")
public class ActionTypeEnum {
	protected String ActionTypeEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "PositionEnum")
public class PositionEnum {
	protected String PositionEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "OrientationEnum")
public class OrientationEnum {
	protected String OrientationEnum;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "NoteTypeEnum")
public class NoteTypeEnum {
	protected String NoteTypeEnum;
}

public class IdentificationGroup {
	@XmlAttribute(name = "id")
	protected StringAttr Id;
	@XmlAttribute(name = "name")
	protected StringAttr Name;
	@XmlAttribute(name = "temporalId")
	protected StringAttr TemporalId;
	@XmlAttribute(name = "identifier")
	protected StringAttr Identifier;
}

public class ClassificationGroup {
	@XmlAttribute(name = "role")
	protected StringAttr Role;
	@XmlAttribute(name = "class")
	protected StringAttr Class;
	@XmlAttribute(name = "style")
	protected StringAttr Style;
}

public class AnnotationGroup {
	@XmlAttribute(name = "note")
	protected StringAttr Note;
	@XmlAttribute(name = "alt")
	protected StringAttr Alt;
	@XmlAttribute(name = "meta")
	protected StringAttr Meta;
	@XmlAttribute(name = "misc")
	protected StringAttr Misc;
	@XmlAttribute(name = "draftingTip")
	protected StringAttr DraftingTip;
	@XmlAttribute(name = "codificationTip")
	protected StringAttr CodificationTip;
}

public class DescriptionGroup {
	@XmlAttribute(name = "title")
	protected StringAttr Title;
	@XmlAttribute(name = "brief")
	protected StringAttr Brief;
	@XmlAttribute(name = "sortOrder")
	protected IntegerAttr SortOrder;
}

public class ReferenceGroup {
	@XmlAttribute(name = "href")
	protected QNameAttr Href;
	@XmlAttribute(name = "idref")
	protected StringAttr Idref;
	@XmlAttribute(name = "portion")
	protected StringAttr Portion;
}

public class AmendingGroup {
	@XmlAttribute(name = "pos")
	protected StringAttr Pos;
	@XmlAttribute(name = "posText")
	protected StringAttr PosText;
	@XmlAttribute(name = "posCount")
	protected IntegerAttr PosCount;
}

public class LinkGroup {
	@XmlAttribute(name = "src")
	protected QNameAttr Src;
}

public class ValueGroup {
	@XmlAttribute(name = "value")
	protected StringAttr Value;
	@XmlAttribute(name = "startValue")
	protected StringAttr StartValue;
	@XmlAttribute(name = "endValue")
	protected StringAttr EndValue;
}

public class NoteGroup {
	@XmlAttribute(name = "type")
	protected StringAttr Type;
	@XmlAttribute(name = "topic")
	protected StringAttr Topic;
}

public class DateGroup {
	@XmlAttribute(name = "date")
	protected DateSimpleTypeAttr Date;
	@XmlAttribute(name = "startDate")
	protected DateSimpleTypeAttr StartDate;
	@XmlAttribute(name = "endDate")
	protected DateSimpleTypeAttr EndDate;
}

public class VersioningGroup {
	@XmlAttribute(name = "startPeriod")
	protected DateSimpleTypeAttr StartPeriod;
	@XmlAttribute(name = "endPeriod")
	protected DateSimpleTypeAttr EndPeriod;
	@XmlAttribute(name = "status")
	protected StringAttr Status;
	@XmlAttribute(name = "partial")
	protected BooleanAttr Partial;
}

public class ActionGroup {
	@XmlAttribute(name = "type")
	protected StringAttr Type;
	@XmlAttribute(name = "occurrence")
	protected OccurrenceSimpleTypeAttr Occurrence;
	@XmlAttribute(name = "commencementDate")
	protected DateSimpleTypeAttr CommencementDate;
}

public class CellGroup {
	@XmlAttribute(name = "colspan")
	protected IntegerAttr Colspan;
	@XmlAttribute(name = "rowspan")
	protected IntegerAttr Rowspan;
	@XmlAttribute(name = "leaders")
	protected StringAttr Leaders;
}

public class BaseType {
	@XmlElement(required = true)
	protected IdentificationGroup IdentificationGroup;
	@XmlElement(required = true)
	protected ClassificationGroup ClassificationGroup;
	@XmlElement(required = true)
	protected AnnotationGroup AnnotationGroup;
	@XmlElement(required = true)
	protected VersioningGroup VersioningGroup;
}

public class BaseBlockType {
	@XmlElement(required = true)
	protected IdentificationGroup IdentificationGroup;
	@XmlElement(required = true)
	protected ClassificationGroup ClassificationGroup;
	@XmlElement(required = true)
	protected AnnotationGroup AnnotationGroup;
	@XmlElement(required = true)
	protected VersioningGroup VersioningGroup;
}

public class BaseContentType {
	@XmlElement(required = true)
	protected IdentificationGroup IdentificationGroup;
	@XmlElement(required = true)
	protected ClassificationGroup ClassificationGroup;
	@XmlElement(required = true)
	protected AnnotationGroup AnnotationGroup;
	@XmlElement(required = true)
	protected VersioningGroup VersioningGroup;
}

public class MarkerType {
}

public class InlineType {
	@XmlElement(required = true, name = "marker")
	protected MarkerType Marker;
	@XmlElement(required = true, name = "inline")
	protected InlineType Inline;
}

public class BlockType {
}

public class TextType {
}

public class ContentType {
	@XmlAttribute(name = "orientation")
	protected StringAttr Orientation;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "marker")
public class Marker {
	protected MarkerType Marker;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "inline")
public class Inline {
	protected InlineType Inline;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "block")
public class Block {
	protected BlockType Block;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "content")
public class Content {
	protected ContentType Content;
}

public class LawDocType {
	@XmlElement(required = true, name = "meta")
	protected MetaType Meta;
	@XmlElement(required = true, name = "main")
	protected MainType Main;
	@XmlElement(required = true, name = "block")
	protected BlockType Block;
	@XmlElement(required = true, name = "appendix")
	protected AppendixType Appendix;
}

public class GenericDocType {
	@XmlElement(required = true, name = "meta")
	protected MetaType Meta;
	@XmlElement(required = true, name = "content")
	protected ContentType Content;
	@XmlElement(required = true, name = "appendix")
	protected List<AppendixType> Appendix;
}

public class MetaType {
	@XmlElement(required = true, name = "property")
	protected PropertyType Property;
	@XmlElement(required = true, name = "set")
	protected SetType Set;
}

public class PropertyType {
	@XmlElement(required = true)
	protected DateGroup DateGroup;
	@XmlElement(required = true)
	protected ValueGroup ValueGroup;
	@XmlElement(required = true)
	protected ReferenceGroup ReferenceGroup;
	@XmlAttribute(name = "type")
	protected StringAttr Type;
}

public class SetType {
	@XmlAttribute(name = "type")
	protected StringAttr Type;
	@XmlElement(required = true, name = "property")
	protected PropertyType Property;
	@XmlElement(required = true, name = "set")
	protected SetType Set;
}

public class TocType {
	@XmlAttribute(name = "generate")
	protected BooleanAttr Generate;
	protected HeadingStructure HeadingStructure;
	@XmlElement(required = true, name = "tocItem")
	protected TocItemType TocItem;
	@XmlElement(required = true, name = "layout")
	protected LayoutType Layout;
}

public class TocItemType {
	@XmlElement(required = true)
	protected DescriptionGroup DescriptionGroup;
	protected HeadingStructure HeadingStructure;
	@XmlElement(required = true, name = "tocItem")
	protected List<TocItemType> TocItem;
	@XmlElement(required = true, name = "content")
	protected List<ContentType> Content;
}

public class MainType {
	protected NoteStructure NoteStructure;
	protected PreambleStructure PreambleStructure;
	protected LevelStructure LevelStructure;
	@XmlElement(required = true, name = "property")
	protected PropertyType Property;
	@XmlElement(required = true, name = "block")
	protected BlockType Block;
	@XmlElement(required = true, name = "statement")
	protected StatementType Statement;
	@XmlElement(required = true, name = "toc")
	protected TocType Toc;
}

public class StatementType {
	@XmlElement(required = true)
	protected DescriptionGroup DescriptionGroup;
	@XmlElement(required = true, name = "marker")
	protected MarkerType Marker;
	@XmlElement(required = true, name = "inline")
	protected InlineType Inline;
	@XmlElement(required = true, name = "block")
	protected BlockType Block;
	@XmlElement(required = true, name = "text")
	protected TextType Text;
	@XmlElement(required = true, name = "content")
	protected ContentType Content;
	@XmlElement(required = true, name = "level")
	protected LevelType Level;
}

public class PreambleType {
	@XmlElement(required = true)
	protected DescriptionGroup DescriptionGroup;
	protected HeadingStructure HeadingStructure;
	protected List<RecitalStructure> RecitalStructure;
	@XmlElement(required = true, name = "enactingFormula")
	protected StatementType EnactingFormula;
}

public class LevelType {
	@XmlElement(required = true)
	protected DescriptionGroup DescriptionGroup;
	protected NumStructure NumStructure;
	protected HeadingStructure HeadingStructure;
	protected List<TocStructure> TocStructure;
	protected LevelStructure LevelStructure;
}

public class NumType {
	@XmlElement(required = true)
	protected ValueGroup ValueGroup;
}

public class HeadingType {
}

public class InstructionType {
	@XmlElement(required = true, name = "ref")
	protected RefType Ref;
	@XmlElement(required = true, name = "inline")
	protected InlineType Inline;
	@XmlElement(required = true, name = "marker")
	protected MarkerType Marker;
	@XmlElement(required = true, name = "action")
	protected List<ActionType> Action;
	@XmlElement(required = true, name = "level")
	protected List<LevelType> Level;
	@XmlElement(required = true, name = "quotedText")
	protected QuotedTextType QuotedText;
	@XmlElement(required = true, name = "quotedContent")
	protected QuotedContentType QuotedContent;
}

public class ActionType {
	@XmlElement(required = true)
	protected ReferenceGroup ReferenceGroup;
	@XmlElement(required = true)
	protected AmendingGroup AmendingGroup;
	@XmlElement(required = true)
	protected ActionGroup ActionGroup;
}

public class NotesType {
	@XmlElement(required = true)
	protected NoteGroup NoteGroup;
	@XmlElement(required = true, name = "heading")
	protected HeadingType Heading;
	@XmlElement(required = true, name = "subheading")
	protected List<HeadingType> Subheading;
	@XmlElement(required = true, name = "note")
	protected List<NoteType> Note;
	@XmlElement(required = true, name = "layout")
	protected LayoutType Layout;
}

public class NoteType {
	@XmlElement(required = true)
	protected NoteGroup NoteGroup;
	@XmlElement(required = true)
	protected DateGroup DateGroup;
}

public class AppendixType {
	@XmlElement(required = true)
	protected DescriptionGroup DescriptionGroup;
	@XmlElement(required = true)
	protected LinkGroup LinkGroup;
	@XmlAttribute(name = "orientation")
	protected StringAttr Orientation;
	protected NumStructure NumStructure;
	protected HeadingStructure HeadingStructure;
	protected TocStructure TocStructure;
	protected LevelStructure LevelStructure;
	@XmlElement(required = true, name = "block")
	protected BlockType Block;
}

public class SignaturesType {
	@XmlElement(required = true, name = "p")
	protected PType P;
	@XmlElement(required = true, name = "signature")
	protected List<SignatureType> Signature;
	@XmlElement(required = true, name = "layout")
	protected LayoutType Layout;
	@XmlElement(required = true, name = "date")
	protected Byte Date;
}

public class Name {
}

public class Role {
}

public class Affiliation {
}

public class SignatureType {
	@XmlElement(required = true, name = "name")
	protected Name Name;
	@XmlElement(required = true, name = "role")
	protected Role Role;
	@XmlElement(required = true, name = "affiliation")
	protected Affiliation Affiliation;
	@XmlElement(required = true, name = "date")
	protected Byte Date;
}

public class RefType {
	@XmlElement(required = true)
	protected AmendingGroup AmendingGroup;
}

public class DateType {
	@XmlElement(required = true)
	protected DateGroup DateGroup;
}

public class QuotedTextType {
	@XmlAttribute(name = "origin")
	protected QNameAttr Origin;
}

public class QuotedContentType {
	@XmlAttribute(name = "origin")
	protected QNameAttr Origin;
}

public class NoteStructure {
	@XmlElement(required = true, name = "note")
	protected NoteType Note;
	@XmlElement(required = true, name = "notes")
	protected NotesType Notes;
}

public class NumStructure {
	@XmlElement(required = true, name = "num")
	protected List<NumType> Num;
	protected List<NoteStructure> NoteStructure;
}

public class HeadingStructure {
	@XmlElement(required = true, name = "heading")
	protected List<HeadingType> Heading;
	@XmlElement(required = true, name = "subheading")
	protected List<HeadingType> Subheading;
	protected List<NoteStructure> NoteStructure;
}

public class TocStructure {
	@XmlElement(required = true, name = "toc")
	protected TocType Toc;
	protected List<NoteStructure> NoteStructure;
}

public class StatementStructure {
	@XmlElement(required = true, name = "statement")
	protected StatementType Statement;
	protected List<NoteStructure> NoteStructure;
}

public class RecitalStructure {
	@XmlElement(required = true, name = "recital")
	protected StatementType Recital;
	protected List<NoteStructure> NoteStructure;
}

public class PreambleStructure {
	@XmlElement(required = true, name = "preamble")
	protected PreambleType Preamble;
	@XmlElement(required = true, name = "enactingFormula")
	protected StatementType EnactingFormula;
	protected List<NoteStructure> NoteStructure;
}

public class LevelStructure {
	@XmlElement(required = true, name = "instruction")
	protected List<InstructionType> Instruction;
	@XmlElement(required = true, name = "content")
	protected List<ContentType> Content;
	@XmlElement(required = true, name = "text")
	protected TextType Text;
	@XmlElement(required = true, name = "level")
	protected LevelType Level;
	@XmlElement(required = true, name = "crossHeading")
	protected HeadingType CrossHeading;
	protected List<NoteStructure> NoteStructure;
	protected List<NoteStructure> NoteStructure;
	protected List<NoteStructure> NoteStructure;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "lawDoc")
public class LawDoc {
	protected LawDocType LawDoc;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "document")
public class Document {
	protected GenericDocType Document;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "meta")
public class Meta {
	protected MetaType Meta;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "property")
public class Property {
	protected PropertyType Property;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "set")
public class Set {
	protected SetType Set;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "toc")
public class Toc {
	protected TocType Toc;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "tocItem")
public class TocItem {
	protected TocItemType TocItem;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "main")
public class Main {
	protected MainType Main;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "statement")
public class Statement {
	protected StatementType Statement;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "preamble")
public class Preamble {
	protected PreambleType Preamble;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "recital")
public class Recital {
	protected StatementType Recital;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "enactingFormula")
public class EnactingFormula {
	protected StatementType EnactingFormula;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "level")
public class Level {
	protected LevelType Level;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "num")
public class Num {
	protected NumType Num;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "text")
public class Text {
	protected TextType Text;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "heading")
public class Heading {
	protected HeadingType Heading;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subheading")
public class Subheading {
	protected HeadingType Subheading;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "crossHeading")
public class CrossHeading {
	protected HeadingType CrossHeading;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "instruction")
public class Instruction {
	protected InstructionType Instruction;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "action")
public class Action {
	protected ActionType Action;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "notes")
public class Notes {
	protected NotesType Notes;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "note")
public class Note {
	protected NoteType Note;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "appendix")
public class Appendix {
	protected AppendixType Appendix;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "signatures")
public class Signatures {
	protected SignaturesType Signatures;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "signature")
public class Signature {
	protected SignatureType Signature;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ref")
public class Ref {
	protected RefType Ref;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "date")
public class Date {
	protected DateType Date;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "quotedText")
public class QuotedText {
	protected QuotedTextType QuotedText;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "quotedContent")
public class QuotedContent {
	protected QuotedContentType QuotedContent;
}

public class LayoutType {
	@XmlAttribute(name = "orientation")
	protected StringAttr Orientation;
	protected NoteStructure NoteStructure;
	@XmlElement(required = true, name = "header")
	protected RowType Header;
	@XmlElement(required = true, name = "row")
	protected RowType Row;
	@XmlElement(required = true, name = "tocItem")
	protected TocItemType TocItem;
	@XmlElement(required = true, name = "block")
	protected BlockType Block;
	@XmlElement(required = true, name = "content")
	protected ContentType Content;
}

public class RowType {
	@XmlElement(required = true, name = "column")
	protected List<ColumnType> Column;
}

public class ColumnType {
	@XmlElement(required = true)
	protected CellGroup CellGroup;
}

public class PType {
}

public class BrType {
}

public class ImgType {
	@XmlElement(required = true)
	protected LinkGroup LinkGroup;
	@XmlAttribute(name = "orientation")
	protected StringAttr Orientation;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "layout")
public class Layout {
	protected LayoutType Layout;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "header")
public class Header {
	protected RowType Header;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "row")
public class Row {
	protected RowType Row;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "column")
public class Column {
	protected ColumnType Column;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "p")
public class P {
	protected PType P;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "br")
public class Br {
	protected BrType Br;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "img")
public class Img {
	protected ImgType Img;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "center")
public class Center {
	protected ContentType Center;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "fillIn")
public class FillIn {
	protected ContentType FillIn;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "checkBox")
public class CheckBox {
	protected ContentType CheckBox;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "b")
public class B {
	protected InlineType B;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "i")
public class I {
	protected InlineType I;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "sub")
public class Sub {
	protected InlineType Sub;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "sup")
public class Sup {
	protected InlineType Sup;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "del")
public class Del {
	protected InlineType Del;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "ins")
public class Ins {
	protected InlineType Ins;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "bill")
public class Bill {
	protected LawDocType Bill;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "statute")
public class Statute {
	protected LawDocType Statute;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "resolution")
public class Resolution {
	protected LawDocType Resolution;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "amendment")
public class Amendment {
	protected LawDocType Amendment;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "uscDoc")
public class UscDoc {
	protected LawDocType UscDoc;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "docNumber")
public class DocNumber {
	protected PropertyType DocNumber;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "docPublicationName")
public class DocPublicationName {
	protected PropertyType DocPublicationName;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "docReleasePoint")
public class DocReleasePoint {
	protected PropertyType DocReleasePoint;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "docTitle")
public class DocTitle {
	protected StatementType DocTitle;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "longTitle")
public class LongTitle {
	protected StatementType LongTitle;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "shortTitle")
public class ShortTitle {
	protected InlineType ShortTitle;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "term")
public class Term {
	protected InlineType Term;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "preliminary")
public class Preliminary {
	protected LevelType Preliminary;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "title")
public class Title {
	protected LevelType Title;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subtitle")
public class Subtitle {
	protected LevelType Subtitle;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "part")
public class Part {
	protected LevelType Part;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subpart")
public class Subpart {
	protected LevelType Subpart;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "division")
public class Division {
	protected LevelType Division;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subdivision")
public class Subdivision {
	protected LevelType Subdivision;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "chapter")
public class Chapter {
	protected LevelType Chapter;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subchapter")
public class Subchapter {
	protected LevelType Subchapter;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "article")
public class Article {
	protected LevelType Article;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subarticle")
public class Subarticle {
	protected LevelType Subarticle;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "section")
public class Section {
	protected LevelType Section;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subsection")
public class Subsection {
	protected LevelType Subsection;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "paragraph")
public class Paragraph {
	protected LevelType Paragraph;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subparagraph")
public class Subparagraph {
	protected LevelType Subparagraph;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "clause")
public class Clause {
	protected LevelType Clause;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subclause")
public class Subclause {
	protected LevelType Subclause;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "item")
public class Item {
	protected LevelType Item;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subitem")
public class Subitem {
	protected LevelType Subitem;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "subsubitem")
public class Subsubitem {
	protected LevelType Subsubitem;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "def")
public class Def {
	protected TextType Def;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "chapeau")
public class Chapeau {
	protected TextType Chapeau;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "continuation")
public class Continuation {
	protected TextType Continuation;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "proviso")
public class Proviso {
	protected TextType Proviso;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "amendingFormula")
public class AmendingFormula {
	protected InstructionType AmendingFormula;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "sourceCredit")
public class SourceCredit {
	protected NoteType SourceCredit;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "statutoryNote")
public class StatutoryNote {
	protected NoteType StatutoryNote;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "editorialNote")
public class EditorialNote {
	protected NoteType EditorialNote;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "changeNote")
public class ChangeNote {
	protected NoteType ChangeNote;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "made")
public class Made {
	protected SignaturesType Made;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "approved")
public class Approved {
	protected SignaturesType Approved;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "schedule")
public class Schedule {
	protected AppendixType Schedule;
}
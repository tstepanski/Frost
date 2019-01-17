#include "org/pandalanguage/pandac/expression/Or.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Or$class_type org$pandalanguage$pandac$expression$Or$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Or$cleanup} };

typedef panda$core$Int64 (*$fn12)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn33)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn38)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn43)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn59)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn64)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn76)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn83)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn88)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn116)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn123)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn128)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn134)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 38, -6565317509677436787, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, 226243874007106, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 22850629800266681, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, 22850630532870686, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Or$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$IR$Block$ID local4;
org$pandalanguage$pandac$IR$Block$ID local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local7 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local8;
// line 15
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
org$pandalanguage$pandac$IR$Value* $tmp5 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp6 = (panda$core$Int64) {2};
org$pandalanguage$pandac$IR* $tmp7 = *(&local0);
panda$collections$Array** $tmp8 = &$tmp7->locals;
panda$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((panda$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Int64 $tmp13 = $tmp11(((panda$collections$CollectionView*) $tmp9));
org$pandalanguage$pandac$Type* $tmp14 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
org$pandalanguage$pandac$IR$Value* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local1) = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($19:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($11:org.pandalanguage.pandac.IR.Value)
// line 18
org$pandalanguage$pandac$IR* $tmp16 = *(&local0);
panda$collections$Array** $tmp17 = &$tmp16->locals;
panda$collections$Array* $tmp18 = *$tmp17;
org$pandalanguage$pandac$Type* $tmp19 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp18, ((panda$core$Object*) $tmp19));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($39:org.pandalanguage.pandac.Type)
// line 19
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 20
org$pandalanguage$pandac$Compiler$TypeContext* $tmp20 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp21 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp22 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp20, $tmp21, $tmp22);
org$pandalanguage$pandac$IR$Value* $tmp23 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp20);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$IR$Value* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local2) = $tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($52:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($50:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($48:org.pandalanguage.pandac.Compiler.TypeContext)
// line 21
org$pandalanguage$pandac$IR$Value* $tmp25 = *(&local2);
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp28 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp29 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 24
org$pandalanguage$pandac$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
// line 25
org$pandalanguage$pandac$IR* $tmp36 = *(&local0);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp39 = $tmp37($tmp36, &$s40);
*(&local4) = $tmp39;
// line 26
org$pandalanguage$pandac$IR* $tmp41 = *(&local0);
$fn43 $tmp42 = ($fn43) $tmp41->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp44 = $tmp42($tmp41, &$s45);
*(&local5) = $tmp44;
// line 27
org$pandalanguage$pandac$IR* $tmp46 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp47 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp48 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp49 = *(&local2);
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit($tmp49 != NULL);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {28};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$IR$Value* $tmp55 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp49);
org$pandalanguage$pandac$IR$Block$ID $tmp56 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp57 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp47, $tmp48, param1, $tmp55, $tmp56, $tmp57);
$fn59 $tmp58 = ($fn59) $tmp46->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp60 = $tmp58($tmp46, $tmp47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($121:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($110:org.pandalanguage.pandac.IR.Statement)
// line 29
org$pandalanguage$pandac$IR* $tmp61 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp62 = *(&local3);
$fn64 $tmp63 = ($fn64) $tmp61->$class->vtable[4];
$tmp63($tmp61, $tmp62);
// line 30
org$pandalanguage$pandac$IR* $tmp65 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp66 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp67 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp68 = *(&local2);
panda$core$Bit $tmp69 = panda$core$Bit$init$builtin_bit($tmp68 != NULL);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp71 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$IR$Value* $tmp74 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp66, $tmp67, param1, $tmp68, $tmp74);
$fn76 $tmp75 = ($fn76) $tmp65->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp77 = $tmp75($tmp65, $tmp66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($140:org.pandalanguage.pandac.IR.Statement)
// line 31
org$pandalanguage$pandac$IR* $tmp78 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp79 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp80 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp81 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp79, $tmp80, param1, $tmp81);
$fn83 $tmp82 = ($fn83) $tmp78->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp84 = $tmp82($tmp78, $tmp79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($160:org.pandalanguage.pandac.IR.Statement)
// line 32
org$pandalanguage$pandac$IR* $tmp85 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp86 = *(&local4);
$fn88 $tmp87 = ($fn88) $tmp85->$class->vtable[4];
$tmp87($tmp85, $tmp86);
// line 33
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 35
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp89 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp89, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local7) = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($178:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 36
org$pandalanguage$pandac$Compiler$TypeContext* $tmp91 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp92 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp93 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp91, $tmp92, $tmp93);
org$pandalanguage$pandac$IR$Value* $tmp94 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param3, $tmp91);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
org$pandalanguage$pandac$IR$Value* $tmp95 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
*(&local6) = $tmp94;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($195:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($193:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($191:org.pandalanguage.pandac.Compiler.TypeContext)
// line 37
org$pandalanguage$pandac$IR$Value* $tmp96 = *(&local6);
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit($tmp96 == NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block7; else goto block8;
block7:;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp99 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp100 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing compiledRight
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp101 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp102 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp103 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp104 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 41
org$pandalanguage$pandac$IR* $tmp105 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp106 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp107 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp108 = *(&local6);
panda$core$Bit $tmp109 = panda$core$Bit$init$builtin_bit($tmp108 != NULL);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp111 = (panda$core$Int64) {41};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s112, $tmp111, &$s113);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$IR$Value* $tmp114 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp106, $tmp107, param1, $tmp108, $tmp114);
$fn116 $tmp115 = ($fn116) $tmp105->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp117 = $tmp115($tmp105, $tmp106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($253:org.pandalanguage.pandac.IR.Statement)
// line 42
org$pandalanguage$pandac$IR* $tmp118 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp119 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp120 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp121 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp119, $tmp120, param1, $tmp121);
$fn123 $tmp122 = ($fn123) $tmp118->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp124 = $tmp122($tmp118, $tmp119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($273:org.pandalanguage.pandac.IR.Statement)
// line 43
org$pandalanguage$pandac$IR* $tmp125 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp126 = *(&local5);
$fn128 $tmp127 = ($fn128) $tmp125->$class->vtable[4];
$tmp127($tmp125, $tmp126);
// line 44
org$pandalanguage$pandac$IR* $tmp129 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp130 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp131 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp132 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp130, $tmp131, param1, $tmp132);
$fn134 $tmp133 = ($fn134) $tmp129->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp135 = $tmp133($tmp129, $tmp130);
*(&local8) = $tmp135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($289:org.pandalanguage.pandac.IR.Statement)
// line 45
org$pandalanguage$pandac$IR$Value* $tmp136 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp137 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp138 = *(&local8);
org$pandalanguage$pandac$Type* $tmp139 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp136, $tmp137, $tmp138, $tmp139);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($303:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($300:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp140 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing compiledRight
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp141 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp142 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp143 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp136;

}
void org$pandalanguage$pandac$expression$Or$init(org$pandalanguage$pandac$expression$Or* param0) {

return;

}
void org$pandalanguage$pandac$expression$Or$cleanup(org$pandalanguage$pandac$expression$Or* param0) {

// line 11
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






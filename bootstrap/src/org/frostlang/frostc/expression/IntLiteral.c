#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn88)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn130)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn293)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn320)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn348)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn387)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn409)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 5701837077934559492, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };

frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:17
frost$core$Int64 $tmp2 = (frost$core$Int64) {18446744073709551488u};
int64_t $tmp3 = param0.value;
int64_t $tmp4 = $tmp2.value;
bool $tmp5 = $tmp3 >= $tmp4;
frost$core$Bit $tmp6 = (frost$core$Bit) {$tmp5};
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp8 = (frost$core$Int64) {127u};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 <= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:18
frost$core$Int $tmp14 = (frost$core$Int) {8u};
return $tmp14;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:20
frost$core$Int64 $tmp15 = (frost$core$Int64) {18446744073709518848u};
int64_t $tmp16 = param0.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 >= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block5;
block6:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {32767u};
int64_t $tmp22 = param0.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:21
frost$core$Int $tmp27 = (frost$core$Int) {16u};
return $tmp27;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:23
frost$core$Int64 $tmp28 = (frost$core$Int64) {18446744071562067968u};
int64_t $tmp29 = param0.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 >= $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block9; else goto block8;
block9:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {2147483647u};
int64_t $tmp35 = param0.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 <= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:24
frost$core$Int $tmp40 = (frost$core$Int) {32u};
return $tmp40;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:26
frost$core$Int $tmp41 = (frost$core$Int) {64u};
return $tmp41;

}
frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:31
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {255u};
uint64_t $tmp43 = param0.value;
uint64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 <= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:32
frost$core$Int $tmp48 = (frost$core$Int) {8u};
return $tmp48;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:34
frost$core$UInt64 $tmp49 = (frost$core$UInt64) {65535u};
uint64_t $tmp50 = param0.value;
uint64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 <= $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:35
frost$core$Int $tmp55 = (frost$core$Int) {16u};
return $tmp55;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:37
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {4294967295u};
uint64_t $tmp57 = param0.value;
uint64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 <= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:38
frost$core$Int $tmp62 = (frost$core$Int) {32u};
return $tmp62;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:40
frost$core$Int $tmp63 = (frost$core$Int) {64u};
return $tmp63;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:46
frost$core$Int* $tmp64 = &param3->$rawValue;
frost$core$Int $tmp65 = *$tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 == $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp72 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp73 = *$tmp72;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$Type* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = $tmp73;
frost$core$Bit* $tmp75 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp76 = *$tmp75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:48
org$frostlang$frostc$Type* $tmp77 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp78 = &$tmp77->typeKind;
org$frostlang$frostc$Type$Kind $tmp79 = *$tmp78;
org$frostlang$frostc$Type$Kind$wrapper* $tmp80;
$tmp80 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp80->value = $tmp79;
frost$core$Int $tmp81 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp82 = &(&local2)->$rawValue;
*$tmp82 = $tmp81;
org$frostlang$frostc$Type$Kind $tmp83 = *(&local2);
*(&local1) = $tmp83;
org$frostlang$frostc$Type$Kind $tmp84 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp85->value = $tmp84;
ITable* $tmp86 = ((frost$core$Equatable*) $tmp80)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Bit $tmp89 = $tmp87(((frost$core$Equatable*) $tmp80), ((frost$core$Equatable*) $tmp85));
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp85)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp80)));
if ($tmp90) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type* $tmp91 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp92 = &$tmp91->typeKind;
org$frostlang$frostc$Type$Kind $tmp93 = *$tmp92;
org$frostlang$frostc$Type$Kind$wrapper* $tmp94;
$tmp94 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp94->value = $tmp93;
frost$core$Int $tmp95 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp96 = &(&local4)->$rawValue;
*$tmp96 = $tmp95;
org$frostlang$frostc$Type$Kind $tmp97 = *(&local4);
*(&local3) = $tmp97;
org$frostlang$frostc$Type$Kind $tmp98 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$core$Equatable*) $tmp94)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Bit $tmp103 = $tmp101(((frost$core$Equatable*) $tmp94), ((frost$core$Equatable*) $tmp99));
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
if ($tmp104) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:49
frost$core$Int $tmp105 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(param2);
org$frostlang$frostc$Type* $tmp106 = *(&local0);
frost$core$Int $tmp107 = org$frostlang$frostc$Type$get_size$R$frost$core$Int($tmp106);
int64_t $tmp108 = $tmp105.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 <= $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:50
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp113 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp114 = (frost$core$Int) {1u};
org$frostlang$frostc$Type* $tmp115 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type($tmp113, $tmp114, param2, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$Type* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp113;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:53
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:57
org$frostlang$frostc$Type* $tmp119 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp120 = &$tmp119->typeKind;
org$frostlang$frostc$Type$Kind $tmp121 = *$tmp120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
frost$core$Int $tmp123 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:57:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp124 = &(&local6)->$rawValue;
*$tmp124 = $tmp123;
org$frostlang$frostc$Type$Kind $tmp125 = *(&local6);
*(&local5) = $tmp125;
org$frostlang$frostc$Type$Kind $tmp126 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp127;
$tmp127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp127->value = $tmp126;
ITable* $tmp128 = ((frost$core$Equatable*) $tmp122)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$core$Bit $tmp131 = $tmp129(((frost$core$Equatable*) $tmp122), ((frost$core$Equatable*) $tmp127));
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp127)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
if ($tmp132) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:58
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp133 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp134 = (frost$core$Int) {6u};
frost$core$Real64 $tmp135 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp136 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type($tmp133, $tmp134, $tmp135, $tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$Type* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp133;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:60
org$frostlang$frostc$Type* $tmp138 = *(&local0);
frost$core$Bit $tmp139 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:61
org$frostlang$frostc$Type* $tmp141 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from IntLiteral.frost:61:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3720
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp142 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp143 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3720:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp144 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp145 = *$tmp144;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp146 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp147 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp146, $tmp147);
frost$collections$Array$add$frost$collections$Array$T($tmp146, ((frost$core$Object*) $tmp141));
org$frostlang$frostc$Type* $tmp148 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp145, ((frost$collections$ListView*) $tmp146));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp142, $tmp143, $tmp141, $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp149 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp150 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp149, $tmp150);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp151 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp152 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp151, $tmp152, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) $tmp151));
org$frostlang$frostc$IR$Value* $tmp153 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp142, ((frost$collections$ListView*) $tmp149), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Type* $tmp154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp153;
block16:;
org$frostlang$frostc$Type* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp156 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp157 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp158 = &param0->INT_TYPE;
org$frostlang$frostc$Type* $tmp159 = *$tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp156, $tmp157, $tmp159, $tmp160);
org$frostlang$frostc$IR$Value* $tmp161 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp156);
org$frostlang$frostc$IR$Value* $tmp162 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp161, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
return $tmp162;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$ClassDecl* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:73
frost$core$Int64 $tmp163 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:73:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp164 = $tmp163.value;
frost$core$UInt64 $tmp165 = (frost$core$UInt64) {((uint64_t) $tmp164)};
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {1u};
uint64_t $tmp167 = $tmp165.value;
uint64_t $tmp168 = $tmp166.value;
uint64_t $tmp169 = $tmp167 + $tmp168;
frost$core$UInt64 $tmp170 = (frost$core$UInt64) {$tmp169};
uint64_t $tmp171 = param2.value;
uint64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:74
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:77
frost$core$Int* $tmp177 = &param3->$rawValue;
frost$core$Int $tmp178 = *$tmp177;
frost$core$Int $tmp179 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Type** $tmp185 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp186 = *$tmp185;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Type* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = $tmp186;
frost$core$Bit* $tmp188 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp189 = *$tmp188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:79
org$frostlang$frostc$Type* $tmp190 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp191 = &$tmp190->typeKind;
org$frostlang$frostc$Type$Kind $tmp192 = *$tmp191;
org$frostlang$frostc$Type$Kind$wrapper* $tmp193;
$tmp193 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp193->value = $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:79:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp195 = &(&local2)->$rawValue;
*$tmp195 = $tmp194;
org$frostlang$frostc$Type$Kind $tmp196 = *(&local2);
*(&local1) = $tmp196;
org$frostlang$frostc$Type$Kind $tmp197 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp198;
$tmp198 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp198->value = $tmp197;
ITable* $tmp199 = ((frost$core$Equatable*) $tmp193)->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[0];
frost$core$Bit $tmp202 = $tmp200(((frost$core$Equatable*) $tmp193), ((frost$core$Equatable*) $tmp198));
bool $tmp203 = $tmp202.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp198)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp193)));
if ($tmp203) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:80
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:83
org$frostlang$frostc$Type* $tmp206 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp207 = &$tmp206->typeKind;
org$frostlang$frostc$Type$Kind $tmp208 = *$tmp207;
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = $tmp208;
frost$core$Int $tmp210 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:83:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp211 = &(&local4)->$rawValue;
*$tmp211 = $tmp210;
org$frostlang$frostc$Type$Kind $tmp212 = *(&local4);
*(&local3) = $tmp212;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp214->value = $tmp213;
ITable* $tmp215 = ((frost$core$Equatable*) $tmp209)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Bit $tmp218 = $tmp216(((frost$core$Equatable*) $tmp209), ((frost$core$Equatable*) $tmp214));
bool $tmp219 = $tmp218.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp209)));
if ($tmp219) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:84
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:84:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp220 = param2.value;
frost$core$Int64 $tmp221 = (frost$core$Int64) {((int64_t) $tmp220)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:84:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp222 = $tmp221.value;
int64_t $tmp223 = -$tmp222;
frost$core$Int64 $tmp224 = (frost$core$Int64) {$tmp223};
frost$core$Int $tmp225 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int($tmp224);
org$frostlang$frostc$Type* $tmp226 = *(&local0);
frost$core$Int $tmp227 = org$frostlang$frostc$Type$get_size$R$frost$core$Int($tmp226);
int64_t $tmp228 = $tmp225.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 <= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:85
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp233 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp234 = (frost$core$Int) {1u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:85:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp235 = param2.value;
frost$core$Int64 $tmp236 = (frost$core$Int64) {((int64_t) $tmp235)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:85:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp237 = $tmp236.value;
int64_t $tmp238 = -$tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {$tmp238};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:85:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp240 = $tmp239.value;
frost$core$UInt64 $tmp241 = (frost$core$UInt64) {((uint64_t) $tmp240)};
org$frostlang$frostc$Type* $tmp242 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type($tmp233, $tmp234, $tmp241, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Type* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp233;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:88
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s244);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:92
org$frostlang$frostc$Type* $tmp246 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp247 = &$tmp246->typeKind;
org$frostlang$frostc$Type$Kind $tmp248 = *$tmp247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int $tmp250 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:92:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp251 = &(&local6)->$rawValue;
*$tmp251 = $tmp250;
org$frostlang$frostc$Type$Kind $tmp252 = *(&local6);
*(&local5) = $tmp252;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Bit $tmp258 = $tmp256(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
if ($tmp259) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:93
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp260 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp261 = (frost$core$Int) {6u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:93:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp262 = param2.value;
frost$core$Int64 $tmp263 = (frost$core$Int64) {((int64_t) $tmp262)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:93:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp264 = $tmp263.value;
int64_t $tmp265 = -$tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {$tmp265};
frost$core$Real64 $tmp267 = frost$core$Real64$init$frost$core$Int64($tmp266);
org$frostlang$frostc$Type* $tmp268 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type($tmp260, $tmp261, $tmp267, $tmp268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
org$frostlang$frostc$Type* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp260;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:95
org$frostlang$frostc$Type* $tmp270 = *(&local0);
frost$core$Bit $tmp271 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:96
org$frostlang$frostc$Type* $tmp273 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp274 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp273);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$ClassDecl* $tmp275 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local7) = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:97
org$frostlang$frostc$ClassDecl* $tmp276 = *(&local7);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276 != NULL};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block28; else goto block29;
block29:;
frost$core$Int $tmp279 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s280, $tmp279);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:98
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local7);
frost$collections$Array** $tmp282 = &$tmp281->methods;
frost$collections$Array* $tmp283 = *$tmp282;
frost$core$Int $tmp284 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:98:40
frost$core$Int $tmp285 = (frost$core$Int) {0u};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 >= $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block33; else goto block32;
block33:;
ITable* $tmp291 = ((frost$collections$CollectionView*) $tmp283)->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
frost$core$Int $tmp294 = $tmp292(((frost$collections$CollectionView*) $tmp283));
int64_t $tmp295 = $tmp284.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 < $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block31; else goto block32;
block32:;
frost$core$Int $tmp300 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, $tmp300, &$s302);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp303 = &$tmp283->data;
frost$core$Object** $tmp304 = *$tmp303;
frost$core$Int64 $tmp305 = frost$core$Int64$init$frost$core$Int($tmp284);
int64_t $tmp306 = $tmp305.value;
frost$core$Object* $tmp307 = $tmp304[$tmp306];
frost$core$Frost$ref$frost$core$Object$Q($tmp307);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp307)));
org$frostlang$frostc$MethodDecl* $tmp308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp307);
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:99
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp310 = &$tmp309->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp311 = *$tmp310;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp312;
$tmp312 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp312->value = $tmp311;
frost$core$Int $tmp313 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from IntLiteral.frost:99:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp314 = &(&local10)->$rawValue;
*$tmp314 = $tmp313;
org$frostlang$frostc$MethodDecl$Kind $tmp315 = *(&local10);
*(&local9) = $tmp315;
org$frostlang$frostc$MethodDecl$Kind $tmp316 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp317->value = $tmp316;
ITable* $tmp318 = ((frost$core$Equatable*) $tmp312)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$core$Bit $tmp321 = $tmp319(((frost$core$Equatable*) $tmp312), ((frost$core$Equatable*) $tmp317));
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block35; else goto block36;
block36:;
frost$core$Int $tmp323 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s324, $tmp323);
abort(); // unreachable
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp317)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp312)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:100
org$frostlang$frostc$MethodDecl* $tmp325 = *(&local8);
frost$core$Bit $tmp326 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp325);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IntLiteral.frost:100:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp327 = $tmp326.value;
bool $tmp328 = !$tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodDecl* $tmp331 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp332 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:103
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp334 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp335 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp336 = *(&local8);
frost$collections$Array** $tmp337 = &$tmp336->parameters;
frost$collections$Array* $tmp338 = *$tmp337;
frost$core$Int $tmp339 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:104:58
frost$core$Int $tmp340 = (frost$core$Int) {0u};
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 >= $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block43; else goto block42;
block43:;
ITable* $tmp346 = ((frost$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
frost$core$Int $tmp349 = $tmp347(((frost$collections$CollectionView*) $tmp338));
int64_t $tmp350 = $tmp339.value;
int64_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 < $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block41; else goto block42;
block42:;
frost$core$Int $tmp355 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s356, $tmp355, &$s357);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp358 = &$tmp338->data;
frost$core$Object** $tmp359 = *$tmp358;
frost$core$Int64 $tmp360 = frost$core$Int64$init$frost$core$Int($tmp339);
int64_t $tmp361 = $tmp360.value;
frost$core$Object* $tmp362 = $tmp359[$tmp361];
frost$core$Frost$ref$frost$core$Object$Q($tmp362);
org$frostlang$frostc$Type** $tmp363 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp362)->type;
org$frostlang$frostc$Type* $tmp364 = *$tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp334, $tmp335, $tmp364, $tmp365);
org$frostlang$frostc$IR$Value* $tmp366 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp334);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlang$frostc$IR$Value* $tmp367 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local11) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q($tmp362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:105
org$frostlang$frostc$IR** $tmp368 = &param0->ir;
org$frostlang$frostc$IR* $tmp369 = *$tmp368;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp370 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp371 = (frost$core$Int) {7u};
org$frostlang$frostc$MethodDecl* $tmp372 = *(&local8);
frost$core$Weak** $tmp373 = &$tmp372->owner;
frost$core$Weak* $tmp374 = *$tmp373;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp375 = &$tmp374->_valid;
frost$core$Bit $tmp376 = *$tmp375;
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block46; else goto block47;
block47:;
frost$core$Int $tmp378 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s379, $tmp378);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp380 = &$tmp374->value;
frost$core$Object* $tmp381 = *$tmp380;
frost$core$Frost$ref$frost$core$Object$Q($tmp381);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp382 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp383 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp382, $tmp383);
org$frostlang$frostc$IR$Value* $tmp384 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp382, ((frost$core$Object*) $tmp384));
org$frostlang$frostc$FixedArray* $tmp385 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp382);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp370, $tmp371, param1, ((org$frostlang$frostc$ClassDecl*) $tmp381), $tmp385);
$fn387 $tmp386 = ($fn387) $tmp369->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp388 = $tmp386($tmp369, $tmp370);
*(&local12) = $tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q($tmp381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:107
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp389 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp390 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp391 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp392 = *(&local8);
frost$core$Weak** $tmp393 = &$tmp392->owner;
frost$core$Weak* $tmp394 = *$tmp393;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:107:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp395 = &$tmp394->_valid;
frost$core$Bit $tmp396 = *$tmp395;
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block50; else goto block51;
block51:;
frost$core$Int $tmp398 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s399, $tmp398);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp400 = &$tmp394->value;
frost$core$Object* $tmp401 = *$tmp400;
frost$core$Frost$ref$frost$core$Object$Q($tmp401);
org$frostlang$frostc$Type** $tmp402 = &((org$frostlang$frostc$ClassDecl*) $tmp401)->type;
org$frostlang$frostc$Type* $tmp403 = *$tmp402;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp389, $tmp390, $tmp391, $tmp403);
org$frostlang$frostc$Type* $tmp404 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from IntLiteral.frost:107:43
org$frostlang$frostc$Type** $tmp405 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp406 = *$tmp405;
ITable* $tmp407 = ((frost$core$Equatable*) $tmp404)->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[1];
frost$core$Bit $tmp410 = $tmp408(((frost$core$Equatable*) $tmp404), ((frost$core$Equatable*) $tmp406));
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block53; else goto block54;
block54:;
frost$core$Int $tmp412 = (frost$core$Int) {4131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s413, $tmp412, &$s414);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4132
frost$core$Bit $tmp415 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp416 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp389, $tmp404, $tmp415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q($tmp401);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$IR$Value* $tmp417 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp418 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp419 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp416;
block27:;
org$frostlang$frostc$Type* $tmp421 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp422 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp423 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp424 = &param0->INT_TYPE;
org$frostlang$frostc$Type* $tmp425 = *$tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp422, $tmp423, $tmp425, $tmp426);
org$frostlang$frostc$IR$Value* $tmp427 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp422);
org$frostlang$frostc$IR$Value* $tmp428 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp427, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
return $tmp428;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}


#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$VariableLValue$cleanup, org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn51)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn54)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn71)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn80)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn95)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn98)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, 1688759092515817554, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, -4389980992813749051, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable* param3) {

frost$core$Int64 local0;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 18
org$frostlang$frostc$Variable$Storage** $tmp5 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp6 = *$tmp5;
frost$core$Int64* $tmp7 = &$tmp6->$rawValue;
frost$core$Int64 $tmp8 = *$tmp7;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp8, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp12 = (frost$core$Int64*) ($tmp6->$data + 0);
frost$core$Int64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 20
frost$core$Int64 $tmp14 = *(&local0);
frost$core$Int64* $tmp15 = &param0->slot;
*$tmp15 = $tmp14;
goto block1;
block3:;
// line 23
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(false);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {23};
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s20, ((frost$core$Object*) param3));
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s22);
org$frostlang$frostc$Position$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp23->value = param2;
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp21, ((frost$core$Object*) $tmp23));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s26);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp18, $tmp25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
abort(); // unreachable
block4:;
goto block1;
block1:;
// line 26
org$frostlang$frostc$Position* $tmp28 = &param0->position;
*$tmp28 = param2;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 31
org$frostlang$frostc$Compiler** $tmp29 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp30 = *$tmp29;
org$frostlang$frostc$IR** $tmp31 = &$tmp30->ir;
org$frostlang$frostc$IR* $tmp32 = *$tmp31;
frost$collections$Array** $tmp33 = &$tmp32->locals;
frost$collections$Array* $tmp34 = *$tmp33;
frost$core$Int64* $tmp35 = &param0->slot;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Object* $tmp37 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp34, $tmp36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp37)));
frost$core$Frost$unref$frost$core$Object$Q($tmp37);
return ((org$frostlang$frostc$Type*) $tmp37);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$VariableLValue* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 36
org$frostlang$frostc$Compiler** $tmp38 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp39 = *$tmp38;
org$frostlang$frostc$IR** $tmp40 = &$tmp39->ir;
org$frostlang$frostc$IR* $tmp41 = *$tmp40;
org$frostlang$frostc$IR$Statement* $tmp42 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp44 = &param0->position;
org$frostlang$frostc$Position $tmp45 = *$tmp44;
org$frostlang$frostc$IR$Value* $tmp46 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp47 = (frost$core$Int64) {2};
frost$core$Int64* $tmp48 = &param0->slot;
frost$core$Int64 $tmp49 = *$tmp48;
$fn51 $tmp50 = ($fn51) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp52 = $tmp50(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp46, $tmp47, $tmp49, $tmp52);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp42, $tmp43, $tmp45, $tmp46);
$fn54 $tmp53 = ($fn54) $tmp41->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp55 = $tmp53($tmp41, $tmp42);
*(&local0) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// line 37
org$frostlang$frostc$IR$Value* $tmp56 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp57 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp58 = *(&local0);
org$frostlang$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlang$frostc$IR** $tmp61 = &$tmp60->ir;
org$frostlang$frostc$IR* $tmp62 = *$tmp61;
frost$collections$Array** $tmp63 = &$tmp62->locals;
frost$collections$Array* $tmp64 = *$tmp63;
frost$core$Int64* $tmp65 = &param0->slot;
frost$core$Int64 $tmp66 = *$tmp65;
frost$core$Object* $tmp67 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp64, $tmp66);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp56, $tmp57, $tmp58, ((org$frostlang$frostc$Type*) $tmp67));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
return $tmp56;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$IR$Value* param1) {

// line 42
org$frostlang$frostc$Compiler** $tmp68 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp69 = *$tmp68;
$fn71 $tmp70 = ($fn71) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp72 = $tmp70(param0);
frost$core$Bit $tmp73 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp69, $tmp72);
bool $tmp74 = $tmp73.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
if ($tmp74) goto block1; else goto block2;
block1:;
// line 43
org$frostlang$frostc$Compiler** $tmp75 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp76 = *$tmp75;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp76, param1);
// line 44
org$frostlang$frostc$Compiler** $tmp77 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp78 = *$tmp77;
$fn80 $tmp79 = ($fn80) param0->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp81 = $tmp79(param0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp78, $tmp81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
goto block2;
block2:;
// line 46
org$frostlang$frostc$Compiler** $tmp82 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp83 = *$tmp82;
org$frostlang$frostc$IR** $tmp84 = &$tmp83->ir;
org$frostlang$frostc$IR* $tmp85 = *$tmp84;
org$frostlang$frostc$IR$Statement* $tmp86 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp87 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp88 = &param0->position;
org$frostlang$frostc$Position $tmp89 = *$tmp88;
org$frostlang$frostc$IR$Value* $tmp90 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp91 = (frost$core$Int64) {2};
frost$core$Int64* $tmp92 = &param0->slot;
frost$core$Int64 $tmp93 = *$tmp92;
$fn95 $tmp94 = ($fn95) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp96 = $tmp94(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp90, $tmp91, $tmp93, $tmp96);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp86, $tmp87, $tmp89, param1, $tmp90);
$fn98 $tmp97 = ($fn98) $tmp85->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp99 = $tmp97($tmp85, $tmp86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp100 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
return;

}


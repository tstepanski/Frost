#include "org/frostlang/frostc/Compiler/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure9$class_type org$frostlang$frostc$Compiler$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure9$cleanup, org$frostlang$frostc$Compiler$_Closure9$$anonymous8$frost$core$Int64$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 39, 1651151128247971882, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x27", 34, 8962271070026622968, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };

void org$frostlang$frostc$Compiler$_Closure9$init$org$frostlang$frostc$FieldDecl$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$_Closure9* param0, org$frostlang$frostc$FieldDecl* param1, org$frostlang$frostc$Compiler* param2) {

// line 5505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$FieldDecl** $tmp2 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$FieldDecl** $tmp4 = &param0->f;
*$tmp4 = param1;
// line 5505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Compiler** $tmp5 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->$self;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure9$cleanup(org$frostlang$frostc$Compiler$_Closure9* param0) {

// line 5505
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$FieldDecl** $tmp8 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$Compiler** $tmp10 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
void org$frostlang$frostc$Compiler$_Closure9$$anonymous8$frost$core$Int64$frost$core$String(org$frostlang$frostc$Compiler$_Closure9* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 5506
org$frostlang$frostc$FieldDecl** $tmp12 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp13 = *$tmp12;
org$frostlang$frostc$Annotations** $tmp14 = &$tmp13->annotations;
org$frostlang$frostc$Annotations* $tmp15 = *$tmp14;
frost$core$Int64* $tmp16 = &$tmp15->flags;
frost$core$Int64 $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp17, param1);
frost$core$Int64 $tmp19 = (frost$core$Int64) {0};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 != $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 5507
org$frostlang$frostc$Compiler** $tmp25 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp26 = *$tmp25;
org$frostlang$frostc$FieldDecl** $tmp27 = &param0->f;
org$frostlang$frostc$FieldDecl* $tmp28 = *$tmp27;
org$frostlang$frostc$Position* $tmp29 = &((org$frostlang$frostc$Symbol*) $tmp28)->position;
org$frostlang$frostc$Position $tmp30 = *$tmp29;
frost$core$String* $tmp31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s32, param2);
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp31, &$s34);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp26, $tmp30, $tmp33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
goto block2;
block2:;
return;

}


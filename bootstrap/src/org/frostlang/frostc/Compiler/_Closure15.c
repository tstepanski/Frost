#include "org/frostlang/frostc/Compiler/_Closure15.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure15$class_type org$frostlang$frostc$Compiler$_Closure15$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure15$cleanup, org$frostlang$frostc$Compiler$_Closure15$$anonymous14$frost$core$Int$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x35", 40, 5411931511292540969, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x27", 35, 842839837407340505, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

void org$frostlang$frostc$Compiler$_Closure15$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$Compiler$_Closure15* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$ClassDecl* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5997
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->$self;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5997
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$ClassDecl** $tmp5 = &param0->cl;
org$frostlang$frostc$ClassDecl* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$ClassDecl** $tmp7 = &param0->cl;
*$tmp7 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure15$cleanup(org$frostlang$frostc$Compiler$_Closure15* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5997
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp8 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ClassDecl** $tmp10 = &param0->cl;
org$frostlang$frostc$ClassDecl* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return;

}
void org$frostlang$frostc$Compiler$_Closure15$$anonymous14$frost$core$Int$frost$core$String(org$frostlang$frostc$Compiler$_Closure15* param0, frost$core$Int param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5998
org$frostlang$frostc$ClassDecl** $tmp12 = &param0->cl;
org$frostlang$frostc$ClassDecl* $tmp13 = *$tmp12;
org$frostlang$frostc$Annotations** $tmp14 = &$tmp13->annotations;
org$frostlang$frostc$Annotations* $tmp15 = *$tmp14;
frost$core$Int* $tmp16 = &$tmp15->flags;
frost$core$Int $tmp17 = *$tmp16;
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Compiler.frost:5998:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp18 = $tmp17.value;
int64_t $tmp19 = param1.value;
int64_t $tmp20 = $tmp18 & $tmp19;
frost$core$Int $tmp21 = (frost$core$Int) {$tmp20};
frost$core$Int $tmp22 = (frost$core$Int) {0u};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 != $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5999
org$frostlang$frostc$Compiler** $tmp28 = &param0->$self;
org$frostlang$frostc$Compiler* $tmp29 = *$tmp28;
org$frostlang$frostc$ClassDecl** $tmp30 = &param0->cl;
org$frostlang$frostc$ClassDecl* $tmp31 = *$tmp30;
org$frostlang$frostc$Position* $tmp32 = &$tmp31->position;
org$frostlang$frostc$Position $tmp33 = *$tmp32;
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, param2);
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp34, &$s37);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp29, $tmp33, $tmp36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block2;
block2:;
return;

}

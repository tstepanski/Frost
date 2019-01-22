#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Error.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure28$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure28$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn16)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn41)(frost$core$String*);
typedef frost$core$String* (*$fn43)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn57)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn79)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn92)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn114)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn126)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -5097778637230146631, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0) {

// line 982
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Error* local5 = NULL;
frost$core$MutableString* local6 = NULL;
// line 983
frost$core$Int64 $tmp7 = (frost$core$Int64) {2};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// line 984
frost$core$Int64 $tmp13 = (frost$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp17)));
frost$core$String* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((frost$core$String*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
// line 985
frost$core$Int64 $tmp19 = (frost$core$Int64) {6};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$String* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = ((frost$core$String*) $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// line 987
org$frostlang$frostc$frostdoc$Markdown** $tmp25 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp26 = *$tmp25;
frost$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
frost$core$MutableMethod* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// line 988
org$frostlang$frostc$frostdoc$Markdown** $tmp31 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp32 = *$tmp31;
frost$core$MutableMethod** $tmp33 = &$tmp32->linkResolver;
frost$core$MutableMethod* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = *(&local1);
frost$core$Int8** $tmp36 = &$tmp34->pointer;
frost$core$Int8* $tmp37 = *$tmp36;
frost$core$Object** $tmp38 = &$tmp34->target;
frost$core$Object* $tmp39 = *$tmp38;
bool $tmp40 = $tmp39 != ((frost$core$Object*) NULL);
if ($tmp40) goto block4; else goto block5;
block5:;
frost$core$String* $tmp42 = (($fn41) $tmp37)($tmp35);
*(&local3) = $tmp42;
goto block6;
block4:;
frost$core$String* $tmp44 = (($fn43) $tmp37)($tmp39, $tmp35);
*(&local3) = $tmp44;
goto block6;
block6:;
frost$core$String* $tmp45 = *(&local3);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$String* $tmp46 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local4) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 989
frost$core$String* $tmp47 = *(&local4);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// line 990
*(&local5) = ((frost$core$Error*) NULL);
// line 991
frost$io$OutputStream* $tmp50 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp51 = *(&local1);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s53, $tmp51);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s55);
$fn57 $tmp56 = ($fn57) $tmp50->$class->vtable[19];
frost$core$Error* $tmp58 = $tmp56($tmp50, $tmp54);
if ($tmp58 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local5) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
goto block10;
block9:;
// line 994
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit(false);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {994};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s62, $tmp61);
abort(); // unreachable
block13:;
goto block10;
block10:;
frost$core$Error* $tmp63 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local5) = ((frost$core$Error*) NULL);
// line 996
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s64));
frost$core$String* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local4) = &$s64;
goto block8;
block8:;
// line 998
frost$core$String* $tmp66 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$String* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = $tmp66;
frost$core$String* $tmp68 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local4) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 1001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s69));
frost$core$String* $tmp70 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local1) = &$s69;
goto block2;
block2:;
// line 1003
frost$core$String* $tmp71 = *(&local1);
frost$core$RegularExpression* $tmp72 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp72, &$s73);
org$frostlang$frostc$frostdoc$Markdown** $tmp74 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp75 = *$tmp74;
org$frostlang$frostc$frostdoc$Protector** $tmp76 = &$tmp75->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp77 = *$tmp76;
$fn79 $tmp78 = ($fn79) $tmp77->$class->vtable[2];
frost$core$String* $tmp80 = $tmp78($tmp77, &$s81);
frost$core$String* $tmp82 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp71, $tmp72, $tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$String* $tmp83 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local1) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// line 1004
frost$core$String* $tmp84 = *(&local1);
frost$core$RegularExpression* $tmp85 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp85, &$s86);
org$frostlang$frostc$frostdoc$Markdown** $tmp87 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp88 = *$tmp87;
org$frostlang$frostc$frostdoc$Protector** $tmp89 = &$tmp88->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp90 = *$tmp89;
$fn92 $tmp91 = ($fn92) $tmp90->$class->vtable[2];
frost$core$String* $tmp93 = $tmp91($tmp90, &$s94);
frost$core$String* $tmp95 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String($tmp84, $tmp85, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 1005
frost$core$MutableString* $tmp97 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp97);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$MutableString* $tmp98 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local6) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// line 1006
frost$core$MutableString* $tmp99 = *(&local6);
frost$core$String* $tmp100 = *(&local1);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$MutableString$append$frost$core$String($tmp99, $tmp103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// line 1007
frost$core$String* $tmp105 = *(&local2);
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105 != NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block15; else goto block16;
block15:;
// line 1009
frost$core$String* $tmp108 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp109 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp110 = *$tmp109;
org$frostlang$frostc$frostdoc$Protector** $tmp111 = &$tmp110->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp112 = *$tmp111;
$fn114 $tmp113 = ($fn114) $tmp112->$class->vtable[2];
frost$core$String* $tmp115 = $tmp113($tmp112, &$s116);
frost$core$String* $tmp117 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp108, &$s118, $tmp115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp119 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local2) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// line 1010
frost$core$String* $tmp120 = *(&local2);
org$frostlang$frostc$frostdoc$Markdown** $tmp121 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp122 = *$tmp121;
org$frostlang$frostc$frostdoc$Protector** $tmp123 = &$tmp122->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp124 = *$tmp123;
$fn126 $tmp125 = ($fn126) $tmp124->$class->vtable[2];
frost$core$String* $tmp127 = $tmp125($tmp124, &$s128);
frost$core$String* $tmp129 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp120, &$s130, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$String* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local2) = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// line 1011
frost$core$String* $tmp132 = *(&local2);
frost$core$String* $tmp133 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp132, &$s134, &$s135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// line 1012
frost$core$MutableString* $tmp137 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp137, &$s138);
// line 1013
frost$core$MutableString* $tmp139 = *(&local6);
frost$core$String* $tmp140 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp139, $tmp140);
// line 1014
frost$core$MutableString* $tmp141 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp141, &$s142);
goto block16;
block16:;
// line 1016
frost$core$MutableString* $tmp143 = *(&local6);
frost$core$String* $tmp144 = *(&local0);
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s146, $tmp144);
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp145, &$s148);
frost$core$MutableString$append$frost$core$String($tmp143, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// line 1017
frost$core$MutableString* $tmp149 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp149, &$s150);
// line 1018
frost$core$MutableString* $tmp151 = *(&local6);
$fn153 $tmp152 = ($fn153) ((frost$core$Object*) $tmp151)->$class->vtable[0];
frost$core$String* $tmp154 = $tmp152(((frost$core$Object*) $tmp151));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$MutableString* $tmp155 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp157 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((frost$core$String*) NULL);
return $tmp154;

}


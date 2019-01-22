#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(((org$frostlang$json$Token$Kind$wrapper*) p0)->value, ((org$frostlang$json$Token$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$json$Token$Kind$get_asString$R$frost$core$String(((org$frostlang$json$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$json$Token$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Token$Kind$cleanup(((org$frostlang$json$Token$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$json$Token$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$json$Token$Kind$class_type org$frostlang$json$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$json$Token$Kind$cleanup$shim, org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$json$Token$Kind$wrapperclass_type org$frostlang$json$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$json$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$json$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, 187471018568395342, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 29, 187471018568395342, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, 1942684803172, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x53", 2, 19071, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x53", 2, 19071, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x4e\x54", 3, 1782936, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };

frost$core$String* org$frostlang$json$Token$Kind$get_asString$R$frost$core$String(org$frostlang$json$Token$Kind param0) {

// line 31
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {14};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s7));
return &$s8;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {10};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {5};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s17));
return &$s18;
block7:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {13};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
// line 35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s22));
return &$s23;
block9:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {15};
frost$core$Bit $tmp25 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block11;
block10:;
// line 36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s27));
return &$s28;
block11:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {3};
frost$core$Bit $tmp30 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block12; else goto block13;
block12:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s32));
return &$s33;
block13:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {6};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block14; else goto block15;
block14:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s37));
return &$s38;
block15:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {4};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block16; else goto block17;
block16:;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block17:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {12};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block18; else goto block19;
block18:;
// line 40
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s47));
return &$s48;
block19:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {9};
frost$core$Bit $tmp50 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block20; else goto block21;
block20:;
// line 41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s52));
return &$s53;
block21:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {7};
frost$core$Bit $tmp55 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block22; else goto block23;
block22:;
// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s57));
return &$s58;
block23:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {8};
frost$core$Bit $tmp60 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block24; else goto block25;
block24:;
// line 43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s62));
return &$s63;
block25:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {11};
frost$core$Bit $tmp65 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block26; else goto block27;
block26:;
// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s67));
return &$s68;
block27:;
frost$core$Int64 $tmp69 = (frost$core$Int64) {0};
frost$core$Bit $tmp70 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block28; else goto block29;
block28:;
// line 45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s72));
return &$s73;
block29:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {1};
frost$core$Bit $tmp75 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block30; else goto block31;
block30:;
// line 46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s77));
return &$s78;
block31:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {2};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block32; else goto block1;
block32:;
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block1:;
// line 49
goto block33;
block33:;
goto block33;
block34:;
goto block35;
block35:;

}
void org$frostlang$json$Token$Kind$cleanup(org$frostlang$json$Token$Kind param0) {

// line 11
frost$core$Int64 $tmp84 = param0.$rawValue;
frost$core$Int64 $tmp85 = (frost$core$Int64) {0};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
frost$core$Bit $tmp89 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp88);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {2};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {3};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp97 = (frost$core$Int64) {4};
frost$core$Bit $tmp98 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block10; else goto block11;
block10:;
goto block1;
block11:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {5};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block12; else goto block13;
block12:;
goto block1;
block13:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {6};
frost$core$Bit $tmp104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {7};
frost$core$Bit $tmp107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block16; else goto block17;
block16:;
goto block1;
block17:;
frost$core$Int64 $tmp109 = (frost$core$Int64) {8};
frost$core$Bit $tmp110 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block18; else goto block19;
block18:;
goto block1;
block19:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {9};
frost$core$Bit $tmp113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {10};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block22; else goto block23;
block22:;
goto block1;
block23:;
frost$core$Int64 $tmp118 = (frost$core$Int64) {11};
frost$core$Bit $tmp119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block24; else goto block25;
block24:;
goto block1;
block25:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {12};
frost$core$Bit $tmp122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {13};
frost$core$Bit $tmp125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block28; else goto block29;
block28:;
goto block1;
block29:;
frost$core$Int64 $tmp127 = (frost$core$Int64) {14};
frost$core$Bit $tmp128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block30; else goto block31;
block30:;
goto block1;
block31:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {15};
frost$core$Bit $tmp131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp84, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block32; else goto block1;
block32:;
goto block1;
block1:;
return;

}
org$frostlang$json$Token$Kind org$frostlang$json$Token$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$json$Token$Kind local0;
// line 11
frost$core$Int64* $tmp133 = &(&local0)->$rawValue;
*$tmp133 = param0;
org$frostlang$json$Token$Kind $tmp134 = *(&local0);
return $tmp134;

}
frost$core$Bit org$frostlang$json$Token$Kind$$EQ$org$frostlang$json$Token$Kind$R$frost$core$Bit(org$frostlang$json$Token$Kind param0, org$frostlang$json$Token$Kind param1) {

// line 11
frost$core$Int64 $tmp135 = param0.$rawValue;
frost$core$Int64 $tmp136 = param1.$rawValue;
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 != $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block1; else goto block2;
block1:;
// line 11
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit(false);
return $tmp142;
block2:;
// line 11
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(true);
return $tmp143;

}







#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value, ((org$frostlang$regex$RegexToken$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$regex$RegexToken$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$regex$RegexToken$Kind$cleanup(((org$frostlang$regex$RegexToken$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$regex$RegexToken$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$regex$RegexToken$Kind$class_type org$frostlang$regex$RegexToken$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$regex$RegexToken$Kind$cleanup$shim, org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$regex$RegexToken$Kind$wrapperclass_type org$frostlang$regex$RegexToken$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$regex$RegexToken$Kind$wrapper_frost$core$Equatable, { org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6343532367005386942, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 35, 6343532367005386942, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, 187268425, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x4c\x55\x53", 4, 187268425, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, 1867555365565, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x45\x54\x54\x45\x52", 6, 1867555365565, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, 1805883228981958468, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x4d\x50\x45\x52\x53\x41\x4e\x44", 9, 1805883228981958468, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, 19226088180, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x4c\x41\x53\x48", 5, 19226088180, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, 17974371258536573, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x41\x43\x4b\x54\x49\x43\x4b", 8, 17974371258536573, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 1784506841147, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x4f\x4c\x4c\x41\x52", 6, 1784506841147, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 17662151470, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x49\x47\x49\x54", 5, 17662151470, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x54\x41\x52", 4, 190438915, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x54\x41\x52", 4, 190438915, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 17549960468, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x41\x52\x45\x54", 5, 17549960468, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };

frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(org$frostlang$regex$RegexToken$Kind param0) {

// line 36
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {14};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s7));
return &$s8;
block3:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {7};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block4:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s12));
return &$s13;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {5};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block6; else goto block7;
block6:;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s17));
return &$s18;
block7:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {10};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
// line 40
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s22));
return &$s23;
block9:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {13};
frost$core$Bit $tmp25 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block11;
block10:;
// line 41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s27));
return &$s28;
block11:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {19};
frost$core$Bit $tmp30 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block12; else goto block13;
block12:;
// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s32));
return &$s33;
block13:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {3};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block14; else goto block15;
block14:;
// line 43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s37));
return &$s38;
block15:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {12};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block16; else goto block17;
block16:;
// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block17:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {20};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block18; else goto block19;
block18:;
// line 45
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s47));
return &$s48;
block19:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {15};
frost$core$Bit $tmp50 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block20; else goto block21;
block20:;
// line 46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s52));
return &$s53;
block21:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {18};
frost$core$Bit $tmp55 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block22; else goto block23;
block22:;
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s57));
return &$s58;
block23:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {17};
frost$core$Bit $tmp60 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block24; else goto block25;
block24:;
// line 48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s62));
return &$s63;
block25:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {4};
frost$core$Bit $tmp65 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block26; else goto block27;
block26:;
// line 49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s67));
return &$s68;
block27:;
frost$core$Int64 $tmp69 = (frost$core$Int64) {9};
frost$core$Bit $tmp70 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block28; else goto block29;
block28:;
// line 50
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s72));
return &$s73;
block29:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {6};
frost$core$Bit $tmp75 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block30; else goto block31;
block30:;
// line 51
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s77));
return &$s78;
block31:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {8};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block32; else goto block33;
block32:;
// line 52
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block33:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {11};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block34; else goto block35;
block34:;
// line 53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s87));
return &$s88;
block35:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {16};
frost$core$Bit $tmp90 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block36; else goto block37;
block36:;
// line 54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s92));
return &$s93;
block37:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block38; else goto block39;
block38:;
// line 55
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s97));
return &$s98;
block39:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {1};
frost$core$Bit $tmp100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block40; else goto block41;
block40:;
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s102));
return &$s103;
block41:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {2};
frost$core$Bit $tmp105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp104);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block42; else goto block1;
block42:;
// line 57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s107));
return &$s108;
block1:;
// line 59
goto block43;
block43:;
goto block43;
block44:;
goto block45;
block45:;

}
void org$frostlang$regex$RegexToken$Kind$cleanup(org$frostlang$regex$RegexToken$Kind param0) {

// line 11
frost$core$Int64 $tmp109 = param0.$rawValue;
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {1};
frost$core$Bit $tmp114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {2};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {3};
frost$core$Bit $tmp120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {4};
frost$core$Bit $tmp123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp122);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block10; else goto block11;
block10:;
goto block1;
block11:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {5};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block12; else goto block13;
block12:;
goto block1;
block13:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {6};
frost$core$Bit $tmp129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {7};
frost$core$Bit $tmp132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block16; else goto block17;
block16:;
goto block1;
block17:;
frost$core$Int64 $tmp134 = (frost$core$Int64) {8};
frost$core$Bit $tmp135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block18; else goto block19;
block18:;
goto block1;
block19:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {9};
frost$core$Bit $tmp138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {10};
frost$core$Bit $tmp141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block22; else goto block23;
block22:;
goto block1;
block23:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {11};
frost$core$Bit $tmp144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block24; else goto block25;
block24:;
goto block1;
block25:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {12};
frost$core$Bit $tmp147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {13};
frost$core$Bit $tmp150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block28; else goto block29;
block28:;
goto block1;
block29:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {14};
frost$core$Bit $tmp153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block30; else goto block31;
block30:;
goto block1;
block31:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {15};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp158 = (frost$core$Int64) {16};
frost$core$Bit $tmp159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block34; else goto block35;
block34:;
goto block1;
block35:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {17};
frost$core$Bit $tmp162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp161);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block36; else goto block37;
block36:;
goto block1;
block37:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {18};
frost$core$Bit $tmp165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp167 = (frost$core$Int64) {19};
frost$core$Bit $tmp168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp167);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block40; else goto block41;
block40:;
goto block1;
block41:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {20};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block42; else goto block1;
block42:;
goto block1;
block1:;
return;

}
org$frostlang$regex$RegexToken$Kind org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$regex$RegexToken$Kind local0;
// line 11
frost$core$Int64* $tmp173 = &(&local0)->$rawValue;
*$tmp173 = param0;
org$frostlang$regex$RegexToken$Kind $tmp174 = *(&local0);
return $tmp174;

}
frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexToken$Kind param0, org$frostlang$regex$RegexToken$Kind param1) {

// line 11
frost$core$Int64 $tmp175 = param0.$rawValue;
frost$core$Int64 $tmp176 = param1.$rawValue;
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 != $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block1; else goto block2;
block1:;
// line 11
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit(false);
return $tmp182;
block2:;
// line 11
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(true);
return $tmp183;

}







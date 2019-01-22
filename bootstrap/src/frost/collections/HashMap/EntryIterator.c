#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$EntryIterator$next$R$frost$collections$HashMap$Entry$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT$shim(frost$collections$HashMap$EntryIterator* p0) {
    frost$collections$HashMap$Entry* result = frost$collections$HashMap$EntryIterator$next$R$frost$collections$HashMap$Entry$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$HashMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$frost$collections$HashMap$Entry$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$EntryIterator$cleanup, frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$frost$collections$HashMap$Entry$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT$shim} };

typedef frost$core$Bit (*$fn68)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 808102596372319978, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 196, 7919109042396277660, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* param0, frost$collections$HashMap* param1) {

frost$core$Bit local0;
// line 43
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->bucket;
*$tmp3 = $tmp2;
// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry** $tmp4 = &param0->entry;
frost$collections$HashMap$Entry* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$HashMap$Entry** $tmp6 = &param0->entry;
*$tmp6 = ((frost$collections$HashMap$Entry*) NULL);
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$HashMap** $tmp7 = &param0->map;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->map;
*$tmp9 = param1;
// line 48
goto block1;
block1:;
frost$core$Int64* $tmp10 = &param0->bucket;
frost$core$Int64 $tmp11 = *$tmp10;
frost$core$Int64* $tmp12 = &param1->bucketCount;
frost$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp11.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 < $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry*** $tmp19 = &param1->contents;
frost$collections$HashMap$Entry** $tmp20 = *$tmp19;
frost$core$Int64* $tmp21 = &param0->bucket;
frost$core$Int64 $tmp22 = *$tmp21;
int64_t $tmp23 = $tmp22.value;
frost$collections$HashMap$Entry* $tmp24 = $tmp20[$tmp23];
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24 == NULL);
*(&local0) = $tmp25;
goto block6;
block5:;
*(&local0) = $tmp17;
goto block6;
block6:;
frost$core$Bit $tmp26 = *(&local0);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block2:;
// line 49
frost$core$Int64* $tmp28 = &param0->bucket;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->bucket;
*$tmp35 = $tmp34;
goto block1;
block3:;
// line 51
frost$core$Int64* $tmp36 = &param0->bucket;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64* $tmp38 = &param1->bucketCount;
frost$core$Int64 $tmp39 = *$tmp38;
int64_t $tmp40 = $tmp37.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 < $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block7; else goto block8;
block7:;
// line 52
frost$collections$HashMap$Entry*** $tmp45 = &param1->contents;
frost$collections$HashMap$Entry** $tmp46 = *$tmp45;
frost$core$Int64* $tmp47 = &param0->bucket;
frost$core$Int64 $tmp48 = *$tmp47;
int64_t $tmp49 = $tmp48.value;
frost$collections$HashMap$Entry* $tmp50 = $tmp46[$tmp49];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$collections$HashMap$Entry** $tmp51 = &param0->entry;
frost$collections$HashMap$Entry* $tmp52 = *$tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$collections$HashMap$Entry** $tmp53 = &param0->entry;
*$tmp53 = $tmp50;
goto block8;
block8:;
return;

}
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$EntryIterator* param0) {

frost$core$Bit local0;
// line 58
frost$core$Int64* $tmp54 = &param0->bucket;
frost$core$Int64 $tmp55 = *$tmp54;
frost$collections$HashMap** $tmp56 = &param0->map;
frost$collections$HashMap* $tmp57 = *$tmp56;
frost$core$Int64* $tmp58 = &$tmp57->bucketCount;
frost$core$Int64 $tmp59 = *$tmp58;
frost$core$Bit $tmp60 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp55, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block2;
block1:;
frost$collections$HashMap$Entry** $tmp62 = &param0->entry;
frost$collections$HashMap$Entry* $tmp63 = *$tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63 == NULL);
*(&local0) = $tmp64;
goto block3;
block2:;
*(&local0) = $tmp60;
goto block3;
block3:;
frost$core$Bit $tmp65 = *(&local0);
return $tmp65;

}
frost$collections$HashMap$Entry* frost$collections$HashMap$EntryIterator$next$R$frost$collections$HashMap$Entry$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* param0) {

frost$collections$HashMap$Entry* local0 = NULL;
ITable* $tmp66 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Bit $tmp69 = $tmp67(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp70 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp72 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block1:;
// line 63
frost$collections$HashMap$Entry** $tmp75 = &param0->entry;
frost$collections$HashMap$Entry* $tmp76 = *$tmp75;
frost$core$Bit $tmp77 = frost$core$Bit$init$builtin_bit($tmp76 != NULL);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s80, $tmp79);
abort(); // unreachable
block3:;
// line 64
frost$core$Int64* $tmp81 = &param0->bucket;
frost$core$Int64 $tmp82 = *$tmp81;
frost$collections$HashMap** $tmp83 = &param0->map;
frost$collections$HashMap* $tmp84 = *$tmp83;
frost$core$Int64* $tmp85 = &$tmp84->bucketCount;
frost$core$Int64 $tmp86 = *$tmp85;
int64_t $tmp87 = $tmp82.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 < $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block5:;
// line 65
frost$collections$HashMap$Entry** $tmp94 = &param0->entry;
frost$collections$HashMap$Entry* $tmp95 = *$tmp94;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$HashMap$Entry* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = $tmp95;
// line 66
frost$collections$HashMap$Entry** $tmp97 = &param0->entry;
frost$collections$HashMap$Entry* $tmp98 = *$tmp97;
frost$collections$HashMap$Entry** $tmp99 = &$tmp98->next;
frost$collections$HashMap$Entry* $tmp100 = *$tmp99;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$HashMap$Entry** $tmp101 = &param0->entry;
frost$collections$HashMap$Entry* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$HashMap$Entry** $tmp103 = &param0->entry;
*$tmp103 = $tmp100;
// line 67
goto block7;
block7:;
frost$collections$HashMap$Entry** $tmp104 = &param0->entry;
frost$collections$HashMap$Entry* $tmp105 = *$tmp104;
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105 == NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block8; else goto block9;
block8:;
// line 68
frost$core$Int64* $tmp108 = &param0->bucket;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 + $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
frost$core$Int64* $tmp115 = &param0->bucket;
*$tmp115 = $tmp114;
// line 69
frost$core$Int64* $tmp116 = &param0->bucket;
frost$core$Int64 $tmp117 = *$tmp116;
frost$collections$HashMap** $tmp118 = &param0->map;
frost$collections$HashMap* $tmp119 = *$tmp118;
frost$core$Int64* $tmp120 = &$tmp119->bucketCount;
frost$core$Int64 $tmp121 = *$tmp120;
frost$core$Bit $tmp122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp117, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block10; else goto block11;
block10:;
// line 70
goto block9;
block11:;
// line 72
frost$collections$HashMap** $tmp124 = &param0->map;
frost$collections$HashMap* $tmp125 = *$tmp124;
frost$collections$HashMap$Entry*** $tmp126 = &$tmp125->contents;
frost$collections$HashMap$Entry** $tmp127 = *$tmp126;
frost$core$Int64* $tmp128 = &param0->bucket;
frost$core$Int64 $tmp129 = *$tmp128;
int64_t $tmp130 = $tmp129.value;
frost$collections$HashMap$Entry* $tmp131 = $tmp127[$tmp130];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$collections$HashMap$Entry** $tmp132 = &param0->entry;
frost$collections$HashMap$Entry* $tmp133 = *$tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$collections$HashMap$Entry** $tmp134 = &param0->entry;
*$tmp134 = $tmp131;
goto block7;
block9:;
// line 74
frost$collections$HashMap$Entry* $tmp135 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$collections$HashMap$Entry* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp135;

}
void frost$collections$HashMap$EntryIterator$cleanup(frost$collections$HashMap$EntryIterator* param0) {

// line 41
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp137 = &param0->map;
frost$collections$HashMap* $tmp138 = *$tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$collections$HashMap$Entry** $tmp139 = &param0->entry;
frost$collections$HashMap$Entry* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
return;

}


#include "org/frostlang/frost/Int64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim(org$frostlang$frost$Int64List* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = org$frostlang$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64(p0, p1);

    frost$core$Int64$wrapper* $tmp2;
    $tmp2 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$Int64List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$Int64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$CollectionView, { org$frostlang$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$Int64List$class_type org$frostlang$frost$Int64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$Iterable, { org$frostlang$frost$Int64List$get_asString$R$frost$core$String, org$frostlang$frost$Int64List$cleanup, org$frostlang$frost$Int64List$get_count$R$frost$core$Int64, org$frostlang$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn125)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn151)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 29, 4836837640627173236, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -1517823672231586076, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 107, -4001891523617291418, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(org$frostlang$frost$Int64List* param0, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:16
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:17
frost$core$Int64 $tmp4 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:23
frost$core$Int64 $tmp8 = param0.step;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0u};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:24
frost$core$Int64 $tmp15 = param0.end;
frost$core$Int64 $tmp16 = param0.start;
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:25
frost$core$Int64 $tmp22 = (frost$core$Int64) {0u};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:27
frost$core$Int64 $tmp23 = param0.end;
frost$core$Int64 $tmp24 = param0.start;
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:28
frost$core$Int64 $tmp30 = (frost$core$Int64) {0u};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:30
frost$core$Int64 $tmp31 = param0.end;
frost$core$Int64 $tmp32 = param0.start;
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 - $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64 $tmp37 = param0.step;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 / $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
frost$core$Int64 $tmp42 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:30:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 > $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp48 = $tmp41.value;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
*(&local0) = $tmp49;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp50 = $tmp42.value;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
*(&local0) = $tmp51;
goto block11;
block11:;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Int64 $tmp53 = (frost$core$Int64) {1u};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 + $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
return $tmp57;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:34
frost$core$Int64 $tmp58 = param0.step;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0u};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 > $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:35
frost$core$Int64 $tmp65 = param0.end;
frost$core$Int64 $tmp66 = param0.start;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 <= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:36
frost$core$Int64 $tmp72 = (frost$core$Int64) {0u};
return $tmp72;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:38
frost$core$Int64 $tmp73 = (frost$core$Int64) {18446744073709551615u};
*(&local1) = $tmp73;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:40
frost$core$Int64 $tmp74 = param0.end;
frost$core$Int64 $tmp75 = param0.start;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 >= $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:41
frost$core$Int64 $tmp81 = (frost$core$Int64) {0u};
return $tmp81;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:43
frost$core$Int64 $tmp82 = (frost$core$Int64) {1u};
*(&local1) = $tmp82;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:45
frost$core$Int64 $tmp83 = param0.end;
frost$core$Int64 $tmp84 = param0.start;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 - $tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {$tmp87};
frost$core$Int64 $tmp89 = *(&local1);
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 + $tmp91;
frost$core$Int64 $tmp93 = (frost$core$Int64) {$tmp92};
frost$core$Int64 $tmp94 = param0.step;
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 / $tmp96;
frost$core$Int64 $tmp98 = (frost$core$Int64) {$tmp97};
frost$core$Int64 $tmp99 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:45:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 > $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp105 = $tmp98.value;
frost$core$Int64 $tmp106 = (frost$core$Int64) {$tmp105};
*(&local2) = $tmp106;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp107 = $tmp99.value;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
*(&local2) = $tmp108;
goto block21;
block21:;
frost$core$Int64 $tmp109 = *(&local2);
frost$core$Int64 $tmp110 = (frost$core$Int64) {1u};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 + $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
return $tmp114;
block2:;
goto block24;
block24:;

}
frost$core$Int64 org$frostlang$frost$Int64List$get_count$R$frost$core$Int64(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:51
frost$core$Int64* $tmp115 = &param0->_count;
frost$core$Int64 $tmp116 = *$tmp115;
return $tmp116;

}
frost$core$Int64 org$frostlang$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64(org$frostlang$frost$Int64List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp117 = (frost$core$Int64) {0u};
int64_t $tmp118 = param1.value;
int64_t $tmp119 = $tmp117.value;
bool $tmp120 = $tmp118 >= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block3; else goto block2;
block3:;
ITable* $tmp123 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$core$Int64 $tmp126 = $tmp124(((frost$collections$CollectionView*) param0));
int64_t $tmp127 = param1.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 < $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s133, $tmp132, &$s134);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:56
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp135 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp136 = *$tmp135;
frost$core$Int64 $tmp137 = $tmp136.start;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp138 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp139 = *$tmp138;
frost$core$Int64 $tmp140 = $tmp139.step;
int64_t $tmp141 = $tmp140.value;
int64_t $tmp142 = param1.value;
int64_t $tmp143 = $tmp141 * $tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {$tmp143};
int64_t $tmp145 = $tmp137.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 + $tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {$tmp147};
return $tmp148;

}
frost$core$String* org$frostlang$frost$Int64List$get_asString$R$frost$core$String(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:61
ITable* $tmp149 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[2];
frost$core$String* $tmp152 = $tmp150(((frost$collections$CollectionView*) param0), &$s153);
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s155, $tmp152);
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp154, &$s157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
return $tmp156;

}
void org$frostlang$frost$Int64List$cleanup(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int64List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}


#include "org/pandalanguage/panda/UInt64List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim(org$pandalanguage$panda$UInt64List* p0, panda$core$Int64 p1) {
    panda$core$UInt64 result = org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64(p0, p1);

    panda$core$UInt64$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt64List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, NULL, { org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt64List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$ListView, { org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$UInt64List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$CollectionView, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$UInt64List$class_type org$pandalanguage$panda$UInt64List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$UInt64List$_panda$collections$Iterable, { org$pandalanguage$panda$UInt64List$convert$R$panda$core$String, org$pandalanguage$panda$UInt64List$cleanup, org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64, org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64$shim} };

typedef panda$core$Int64 (*$fn90)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn118)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 34, -3044087007201221379, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, -6963972526139056635, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 167, -4885698001661603413, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, -6963972526139056635, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 113, -6887576838454444628, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT(org$pandalanguage$panda$UInt64List* param0, panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$UInt64List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$core$Int64(param1);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$UInt64List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT param0) {

panda$core$UInt64 local0;
// line 22
panda$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
panda$core$UInt64 $tmp8 = param0.step;
panda$core$UInt64 $tmp9 = (panda$core$UInt64) {0};
uint64_t $tmp10 = $tmp8.value;
uint64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
panda$core$Bit $tmp13 = (panda$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
panda$core$UInt64 $tmp15 = param0.end;
panda$core$UInt64 $tmp16 = param0.start;
uint64_t $tmp17 = $tmp15.value;
uint64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
panda$core$Bit $tmp20 = (panda$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// line 25
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
return $tmp22;
block8:;
goto block5;
block6:;
// line 27
panda$core$UInt64 $tmp23 = param0.end;
panda$core$UInt64 $tmp24 = param0.start;
uint64_t $tmp25 = $tmp23.value;
uint64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
panda$core$Bit $tmp28 = (panda$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// line 28
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
return $tmp30;
block10:;
goto block5;
block5:;
// line 30
panda$core$UInt64 $tmp31 = param0.end;
panda$core$UInt64 $tmp32 = param0.start;
uint64_t $tmp33 = $tmp31.value;
uint64_t $tmp34 = $tmp32.value;
uint64_t $tmp35 = $tmp33 - $tmp34;
panda$core$UInt64 $tmp36 = (panda$core$UInt64) {$tmp35};
panda$core$UInt64 $tmp37 = param0.step;
uint64_t $tmp38 = $tmp36.value;
uint64_t $tmp39 = $tmp37.value;
uint64_t $tmp40 = $tmp38 / $tmp39;
panda$core$UInt64 $tmp41 = (panda$core$UInt64) {$tmp40};
panda$core$Int64 $tmp42 = panda$core$UInt64$convert$R$panda$core$Int64($tmp41);
panda$core$Int64 $tmp43 = (panda$core$Int64) {0};
panda$core$Int64 $tmp44 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp42, $tmp43);
panda$core$Int64 $tmp45 = (panda$core$Int64) {1};
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 + $tmp47;
panda$core$Int64 $tmp49 = (panda$core$Int64) {$tmp48};
return $tmp49;
block3:;
// line 1
// line 33
// line 34
panda$core$UInt64 $tmp50 = (panda$core$UInt64) {1};
*(&local0) = $tmp50;
// line 35
panda$core$UInt64 $tmp51 = param0.end;
panda$core$UInt64 $tmp52 = param0.start;
uint64_t $tmp53 = $tmp51.value;
uint64_t $tmp54 = $tmp52.value;
uint64_t $tmp55 = $tmp53 - $tmp54;
panda$core$UInt64 $tmp56 = (panda$core$UInt64) {$tmp55};
panda$core$UInt64 $tmp57 = *(&local0);
uint64_t $tmp58 = $tmp56.value;
uint64_t $tmp59 = $tmp57.value;
uint64_t $tmp60 = $tmp58 + $tmp59;
panda$core$UInt64 $tmp61 = (panda$core$UInt64) {$tmp60};
panda$core$UInt64 $tmp62 = param0.step;
uint64_t $tmp63 = $tmp61.value;
uint64_t $tmp64 = $tmp62.value;
uint64_t $tmp65 = $tmp63 / $tmp64;
panda$core$UInt64 $tmp66 = (panda$core$UInt64) {$tmp65};
panda$core$Int64 $tmp67 = panda$core$UInt64$convert$R$panda$core$Int64($tmp66);
panda$core$Int64 $tmp68 = (panda$core$Int64) {0};
panda$core$Int64 $tmp69 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp67, $tmp68);
panda$core$Int64 $tmp70 = (panda$core$Int64) {1};
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71 + $tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {$tmp73};
return $tmp74;
block2:;
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit(false);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp77 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$UInt64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt64List* param0) {

// line 41
panda$core$Int64* $tmp80 = &param0->_count;
panda$core$Int64 $tmp81 = *$tmp80;
return $tmp81;

}
panda$core$UInt64 org$pandalanguage$panda$UInt64List$$IDX$panda$core$Int64$R$panda$core$UInt64(org$pandalanguage$panda$UInt64List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp82 = (panda$core$Int64) {0};
int64_t $tmp83 = param1.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 >= $tmp84;
panda$core$Bit $tmp86 = (panda$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block1; else goto block2;
block1:;
ITable* $tmp88 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp88->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
panda$core$Int64 $tmp91 = $tmp89(((panda$collections$CollectionView*) param0));
int64_t $tmp92 = param1.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 < $tmp93;
panda$core$Bit $tmp95 = (panda$core$Bit) {$tmp94};
*(&local0) = $tmp95;
goto block3;
block2:;
*(&local0) = $tmp86;
goto block3;
block3:;
panda$core$Bit $tmp96 = *(&local0);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp98 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block4:;
// line 46
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT* $tmp101 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT $tmp102 = *$tmp101;
panda$core$UInt64 $tmp103 = $tmp102.start;
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT* $tmp104 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT $tmp105 = *$tmp104;
panda$core$UInt64 $tmp106 = $tmp105.step;
panda$core$UInt64 $tmp107 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
uint64_t $tmp108 = $tmp106.value;
uint64_t $tmp109 = $tmp107.value;
uint64_t $tmp110 = $tmp108 * $tmp109;
panda$core$UInt64 $tmp111 = (panda$core$UInt64) {$tmp110};
uint64_t $tmp112 = $tmp103.value;
uint64_t $tmp113 = $tmp111.value;
uint64_t $tmp114 = $tmp112 + $tmp113;
panda$core$UInt64 $tmp115 = (panda$core$UInt64) {$tmp114};
return $tmp115;

}
panda$core$String* org$pandalanguage$panda$UInt64List$convert$R$panda$core$String(org$pandalanguage$panda$UInt64List* param0) {

// line 51
ITable* $tmp116 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp116->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
panda$core$String* $tmp119 = $tmp117(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s121, $tmp119);
panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s123);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($3:panda.core.String)
return $tmp122;

}
void org$pandalanguage$panda$UInt64List$cleanup(org$pandalanguage$panda$UInt64List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}


#include "frost/collections/IdentitySet.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Collection.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/collections/MapView.h"
#include "frost/collections/IdentitySet/_Closure2.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void frost$collections$IdentitySet$add$frost$collections$IdentitySet$T$shim(frost$collections$IdentitySet* p0, frost$core$Object* p1) {
    frost$collections$IdentitySet$add$frost$collections$IdentitySet$T(p0, p1);

}
__attribute__((weak)) void frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT$shim(frost$collections$IdentitySet* p0, frost$collections$CollectionView* p1) {
    frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$IdentitySet* p0, frost$core$MutableMethod* p1) {
    frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT$shim(frost$collections$IdentitySet* p0) {
    frost$collections$Iterator* result = frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentitySet$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, NULL, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$IdentitySet$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$IdentitySet$_frost$collections$Collection, { frost$collections$IdentitySet$get_count$R$frost$core$Int, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$IdentitySet$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$IdentitySet$_frost$collections$CollectionView, { frost$collections$IdentitySet$get_count$R$frost$core$Int, frost$collections$IdentitySet$add$frost$collections$IdentitySet$T$shim, frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT$shim, frost$collections$IdentitySet$clear, frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$IdentitySet$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$IdentitySet$_frost$collections$CollectionWriter, { frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT$shim} };

static frost$core$String $s1;
frost$collections$IdentitySet$class_type frost$collections$IdentitySet$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentitySet$_frost$collections$Iterable, { frost$collections$IdentitySet$get_asString$R$frost$core$String, frost$collections$IdentitySet$cleanup, frost$collections$IdentitySet$add$frost$collections$IdentitySet$T$shim, frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT$shim, frost$collections$IdentitySet$remove$frost$collections$IdentitySet$T, frost$collections$IdentitySet$get_count$R$frost$core$Int, frost$collections$IdentitySet$clear, frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT$shim, frost$collections$IdentitySet$contains$frost$collections$IdentitySet$T$R$frost$core$Bit, frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

typedef frost$collections$Iterator* (*$fn12)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn16)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn21)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn32)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn41)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn54)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn62)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn70)(frost$collections$IdentitySet$_Closure2*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn86)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn90)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn95)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn106)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x53\x65\x74", 29, 8222350284374010094, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$IdentitySet$init(frost$collections$IdentitySet* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:8
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp2 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$IdentityMap** $tmp3 = &param0->contents;
frost$collections$IdentityMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$IdentityMap** $tmp5 = &param0->contents;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void frost$collections$IdentitySet$init$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:8
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp6 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$IdentityMap** $tmp7 = &param0->contents;
frost$collections$IdentityMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$IdentityMap** $tmp9 = &param0->contents;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:14
// begin inline call to method frost.collections.IdentitySet.addAll(c:frost.collections.CollectionView<frost.collections.IdentitySet.T>) from IdentitySet.frost:14:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:24
ITable* $tmp10 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$collections$Iterator* $tmp13 = $tmp11(((frost$collections$Iterable*) param1));
goto block2;
block2:;
ITable* $tmp14 = $tmp13->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Bit $tmp17 = $tmp15($tmp13);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block3;
block3:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp19 = $tmp13->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[1];
frost$core$Object* $tmp22 = $tmp20($tmp13);
frost$core$Frost$ref$frost$core$Object$Q($tmp22);
frost$core$Object* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
*(&local0) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:25
frost$core$Object* $tmp24 = *(&local0);
// begin inline call to method frost.collections.IdentitySet.add(value:frost.collections.IdentitySet.T) from IdentitySet.frost:25:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:19
frost$collections$IdentityMap** $tmp25 = &param0->contents;
frost$collections$IdentityMap* $tmp26 = *$tmp25;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp26, $tmp24, $tmp24);
frost$core$Frost$unref$frost$core$Object$Q($tmp22);
frost$core$Object* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
*(&local0) = ((frost$core$Object*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return;

}
void frost$collections$IdentitySet$add$frost$collections$IdentitySet$T(frost$collections$IdentitySet* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:19
frost$collections$IdentityMap** $tmp28 = &param0->contents;
frost$collections$IdentityMap* $tmp29 = *$tmp28;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp29, param1, param1);
return;

}
void frost$collections$IdentitySet$addAll$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:24
ITable* $tmp30 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$collections$Iterator* $tmp33 = $tmp31(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp34 = $tmp33->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$core$Bit $tmp37 = $tmp35($tmp33);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp39 = $tmp33->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[1];
frost$core$Object* $tmp42 = $tmp40($tmp33);
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
frost$core$Object* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
*(&local0) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:25
frost$core$Object* $tmp44 = *(&local0);
// begin inline call to method frost.collections.IdentitySet.add(value:frost.collections.IdentitySet.T) from IdentitySet.frost:25:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:19
frost$collections$IdentityMap** $tmp45 = &param0->contents;
frost$collections$IdentityMap* $tmp46 = *$tmp45;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp46, $tmp44, $tmp44);
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
frost$core$Object* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
return;

}
void frost$collections$IdentitySet$remove$frost$collections$IdentitySet$T(frost$collections$IdentitySet* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:30
frost$collections$IdentityMap** $tmp48 = &param0->contents;
frost$collections$IdentityMap* $tmp49 = *$tmp48;
frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K($tmp49, param1);
return;

}
frost$core$Int frost$collections$IdentitySet$get_count$R$frost$core$Int(frost$collections$IdentitySet* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:35
frost$collections$IdentityMap** $tmp50 = &param0->contents;
frost$collections$IdentityMap* $tmp51 = *$tmp50;
ITable* $tmp52 = ((frost$collections$MapView*) $tmp51)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int $tmp55 = $tmp53(((frost$collections$MapView*) $tmp51));
return $tmp55;

}
void frost$collections$IdentitySet$clear(frost$collections$IdentitySet* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:40
frost$collections$IdentityMap** $tmp56 = &param0->contents;
frost$collections$IdentityMap* $tmp57 = *$tmp56;
frost$collections$IdentityMap$clear($tmp57);
return;

}
frost$collections$Iterator* frost$collections$IdentitySet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$IdentitySet$T$GT(frost$collections$IdentitySet* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:45
frost$collections$IdentityMap** $tmp58 = &param0->contents;
frost$collections$IdentityMap* $tmp59 = *$tmp58;
ITable* $tmp60 = ((frost$collections$MapView*) $tmp59)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[4];
frost$collections$Iterator* $tmp63 = $tmp61(((frost$collections$MapView*) $tmp59));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
return $tmp63;

}
frost$core$Bit frost$collections$IdentitySet$contains$frost$collections$IdentitySet$T$R$frost$core$Bit(frost$collections$IdentitySet* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:49
frost$collections$IdentityMap** $tmp64 = &param0->contents;
frost$collections$IdentityMap* $tmp65 = *$tmp64;
frost$core$Bit $tmp66 = frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit($tmp65, param1);
return $tmp66;

}
void frost$collections$IdentitySet$filterInPlace$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$IdentitySet* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
frost$collections$IdentityMap** $tmp67 = &param0->contents;
frost$collections$IdentityMap* $tmp68 = *$tmp67;
FROST_ASSERT(24 == sizeof(frost$collections$IdentitySet$_Closure2));
frost$collections$IdentitySet$_Closure2* $tmp69 = (frost$collections$IdentitySet$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$IdentitySet$_Closure2$class);
frost$collections$IdentitySet$_Closure2$init$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP($tmp69, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp71 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from IdentitySet.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp72 = &$tmp71->pointer;
*$tmp72 = ((frost$core$Int8*) frost$collections$IdentitySet$_Closure2$$anonymous1$frost$collections$IdentitySet$T$frost$collections$IdentitySet$T$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Object** $tmp73 = &$tmp71->target;
frost$core$Object* $tmp74 = *$tmp73;
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
frost$core$Object** $tmp75 = &$tmp71->target;
*$tmp75 = ((frost$core$Object*) $tmp69);
frost$collections$IdentityMap$filterInPlace$$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$EQ$GT$LPfrost$core$Bit$RP($tmp68, $tmp71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
return;

}
frost$core$String* frost$collections$IdentitySet$get_asString$R$frost$core$String(frost$collections$IdentitySet* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:59
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp76 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp76, &$s77);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$MutableString* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:60
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s79));
frost$core$String* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = &$s81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:61
frost$collections$IdentityMap** $tmp82 = &param0->contents;
frost$collections$IdentityMap* $tmp83 = *$tmp82;
ITable* $tmp84 = ((frost$collections$MapView*) $tmp83)->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[4];
frost$collections$Iterator* $tmp87 = $tmp85(((frost$collections$MapView*) $tmp83));
goto block1;
block1:;
ITable* $tmp88 = $tmp87->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
frost$core$Bit $tmp91 = $tmp89($tmp87);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp93 = $tmp87->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
frost$core$Object* $tmp96 = $tmp94($tmp87);
frost$core$Frost$ref$frost$core$Object$Q($tmp96);
frost$core$Object* $tmp97 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
*(&local2) = $tmp96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:62
frost$core$MutableString* $tmp98 = *(&local0);
frost$core$String* $tmp99 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp98, $tmp99);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:63
frost$core$Object* $tmp100 = *(&local2);
frost$core$Bit $tmp101 = (frost$core$Bit) {true};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:64
frost$core$MutableString* $tmp103 = *(&local0);
frost$core$Object* $tmp104 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentitySet.frost:64:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn106 $tmp105 = ($fn106) $tmp104->$class->vtable[0];
frost$core$String* $tmp107 = $tmp105($tmp104);
frost$core$MutableString$append$frost$core$String($tmp103, $tmp107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:67
frost$core$MutableString* $tmp108 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp108, &$s109);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s110));
frost$core$String* $tmp111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local1) = &$s112;
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
frost$core$Object* $tmp113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:71
frost$core$MutableString* $tmp114 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp114, &$s115);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:72
frost$core$MutableString* $tmp116 = *(&local0);
frost$core$String* $tmp117 = frost$core$MutableString$finish$R$frost$core$String($tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp117;

}
void frost$collections$IdentitySet$cleanup(frost$collections$IdentitySet* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$IdentityMap** $tmp120 = &param0->contents;
frost$collections$IdentityMap* $tmp121 = *$tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return;

}


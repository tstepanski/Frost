#include "frost/threads/MessageQueue.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"
#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/threads/Notifier.h"

__attribute__((weak)) void frost$threads$MessageQueue$cleanup$shim(frost$threads$MessageQueue* p0) {
    frost$threads$MessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$class_type frost$threads$MessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$MessageQueue$cleanup$shim, frost$threads$MessageQueue$post$frost$threads$MessageQueue$T, frost$threads$MessageQueue$pendingMessages$R$frost$core$Int, frost$threads$MessageQueue$hasMessage$R$frost$core$Bit, frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T, frost$threads$MessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1322360647885131030, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0, frost$core$Immutable* param1) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:52
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp3 = &param0->lock;
frost$threads$Lock* $tmp4 = *$tmp3;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2, $tmp4);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$ScopedLock* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:53
frost$threads$MessageQueue$Message** $tmp6 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:54
frost$threads$MessageQueue$Message** $tmp10 = &param0->head;
frost$threads$MessageQueue$Message* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11 != NULL};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
frost$core$Int $tmp14 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, $tmp14);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:55
frost$threads$MessageQueue$Message** $tmp16 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17 != NULL};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
frost$core$Int $tmp20 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
frost$threads$MessageQueue$Message* $tmp23 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T($tmp23, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$threads$MessageQueue$Message** $tmp24 = &$tmp17->next;
frost$threads$MessageQueue$Message* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$threads$MessageQueue$Message** $tmp26 = &$tmp17->next;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:56
frost$threads$MessageQueue$Message** $tmp27 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28 != NULL};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block9:;
frost$core$Int $tmp31 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block8:;
frost$threads$MessageQueue$Message** $tmp34 = &$tmp28->next;
frost$threads$MessageQueue$Message* $tmp35 = *$tmp34;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$threads$MessageQueue$Message** $tmp36 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$threads$MessageQueue$Message** $tmp38 = &param0->tail;
*$tmp38 = $tmp35;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:59
frost$core$Int* $tmp39 = &param0->count;
frost$core$Int $tmp40 = *$tmp39;
frost$core$Int $tmp41 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MessageQueue.frost:59:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block11; else goto block12;
block12:;
frost$core$Int $tmp47 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, $tmp47);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:60
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
frost$threads$MessageQueue$Message* $tmp49 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T($tmp49, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$threads$MessageQueue$Message** $tmp50 = &param0->head;
frost$threads$MessageQueue$Message* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$threads$MessageQueue$Message** $tmp52 = &param0->head;
*$tmp52 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:61
frost$threads$MessageQueue$Message** $tmp53 = &param0->head;
frost$threads$MessageQueue$Message* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$threads$MessageQueue$Message** $tmp55 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$threads$MessageQueue$Message** $tmp57 = &param0->tail;
*$tmp57 = $tmp54;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:63
frost$core$Int* $tmp58 = &param0->count;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {1u};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 + $tmp62;
frost$core$Int $tmp64 = (frost$core$Int) {$tmp63};
frost$core$Int* $tmp65 = &param0->count;
*$tmp65 = $tmp64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:64
frost$threads$Notifier** $tmp66 = &param0->notifier;
frost$threads$Notifier* $tmp67 = *$tmp66;
frost$threads$Notifier$notify($tmp67);
frost$threads$ScopedLock* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp69 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp70 = &param0->lock;
frost$threads$Lock* $tmp71 = *$tmp70;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp69, $tmp71);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$threads$ScopedLock* $tmp72 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local0) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp73 = &param0->count;
frost$core$Int $tmp74 = *$tmp73;
frost$threads$ScopedLock* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp74;

}
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp76 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp77 = &param0->lock;
frost$threads$Lock* $tmp78 = *$tmp77;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp76, $tmp78);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$threads$ScopedLock* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp80 = &param0->count;
frost$core$Int $tmp81 = *$tmp80;
frost$threads$ScopedLock* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp83 = (frost$core$Int) {0u};
int64_t $tmp84 = $tmp81.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 > $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
return $tmp87;

}
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Immutable* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:99
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp88 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp89 = &param0->lock;
frost$threads$Lock* $tmp90 = *$tmp89;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp88, $tmp90);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$threads$ScopedLock* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local0) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:100
goto block1;
block1:;
frost$threads$MessageQueue$Message** $tmp92 = &param0->head;
frost$threads$MessageQueue$Message* $tmp93 = *$tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93 == NULL};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:101
frost$threads$Notifier** $tmp96 = &param0->notifier;
frost$threads$Notifier* $tmp97 = *$tmp96;
frost$threads$Notifier$wait($tmp97);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:103
frost$threads$MessageQueue$Message** $tmp98 = &param0->head;
frost$threads$MessageQueue$Message* $tmp99 = *$tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99 != NULL};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block4; else goto block5;
block5:;
frost$core$Int $tmp102 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block4:;
frost$core$Immutable** $tmp105 = &$tmp99->payload;
frost$core$Immutable* $tmp106 = *$tmp105;
*(&local1) = ((frost$core$Immutable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Immutable* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = $tmp106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:104
frost$threads$MessageQueue$Message** $tmp108 = &param0->head;
frost$threads$MessageQueue$Message* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 != NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block6; else goto block7;
block7:;
frost$core$Int $tmp112 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block6:;
frost$threads$MessageQueue$Message** $tmp115 = &$tmp109->next;
frost$threads$MessageQueue$Message* $tmp116 = *$tmp115;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$threads$MessageQueue$Message** $tmp117 = &param0->head;
frost$threads$MessageQueue$Message* $tmp118 = *$tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$threads$MessageQueue$Message** $tmp119 = &param0->head;
*$tmp119 = $tmp116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:105
frost$threads$MessageQueue$Message** $tmp120 = &param0->head;
frost$threads$MessageQueue$Message* $tmp121 = *$tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121 == NULL};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:106
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$threads$MessageQueue$Message*) NULL)));
frost$threads$MessageQueue$Message** $tmp124 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp125 = *$tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$threads$MessageQueue$Message** $tmp126 = &param0->tail;
*$tmp126 = ((frost$threads$MessageQueue$Message*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:108
frost$core$Int* $tmp127 = &param0->count;
frost$core$Int $tmp128 = *$tmp127;
frost$core$Int $tmp129 = (frost$core$Int) {1u};
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130 - $tmp131;
frost$core$Int $tmp133 = (frost$core$Int) {$tmp132};
frost$core$Int* $tmp134 = &param0->count;
*$tmp134 = $tmp133;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:109
frost$core$Immutable* $tmp135 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Immutable* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local1) = ((frost$core$Immutable*) NULL);
frost$threads$ScopedLock* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp135;

}
void frost$threads$MessageQueue$clear(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block1;
block1:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp138 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp139 = &param0->lock;
frost$threads$Lock* $tmp140 = *$tmp139;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp138, $tmp140);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$threads$ScopedLock* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = $tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp142 = &param0->count;
frost$core$Int $tmp143 = *$tmp142;
frost$threads$ScopedLock* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp145 = (frost$core$Int) {0u};
int64_t $tmp146 = $tmp143.value;
int64_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 > $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp151 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
goto block1;
block3:;
return;

}
void frost$threads$MessageQueue$init(frost$threads$MessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:32
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
frost$threads$Lock* $tmp152 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$threads$Lock** $tmp153 = &param0->lock;
frost$threads$Lock* $tmp154 = *$tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$threads$Lock** $tmp155 = &param0->lock;
*$tmp155 = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:35
FROST_ASSERT(32 == sizeof(frost$threads$Notifier));
frost$threads$Notifier* $tmp156 = (frost$threads$Notifier*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$Notifier$class);
frost$threads$Lock** $tmp157 = &param0->lock;
frost$threads$Lock* $tmp158 = *$tmp157;
frost$threads$Notifier$init$frost$threads$Lock($tmp156, $tmp158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$threads$Notifier** $tmp159 = &param0->notifier;
frost$threads$Notifier* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$threads$Notifier** $tmp161 = &param0->notifier;
*$tmp161 = $tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:38
frost$core$Int $tmp162 = (frost$core$Int) {0u};
frost$core$Int* $tmp163 = &param0->count;
*$tmp163 = $tmp162;
return;

}
void frost$threads$MessageQueue$cleanup(frost$threads$MessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:11
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp164 = &param0->lock;
frost$threads$Lock* $tmp165 = *$tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$threads$Notifier** $tmp166 = &param0->notifier;
frost$threads$Notifier* $tmp167 = *$tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$threads$MessageQueue$Message** $tmp168 = &param0->head;
frost$threads$MessageQueue$Message* $tmp169 = *$tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$threads$MessageQueue$Message** $tmp170 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp171 = *$tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
return;

}


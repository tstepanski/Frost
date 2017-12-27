#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit} };


static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, ((panda$core$Int64) { 0 }));
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->flags = p_flags;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp1 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp1);
    panda$core$Bit $tmp3 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2, ((panda$core$Int64) { 0 }));
    return $tmp3;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp4 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
    panda$core$Int64 $tmp5 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp4);
    panda$core$Bit $tmp6 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5, ((panda$core$Int64) { 0 }));
    return $tmp6;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp7 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp8 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp7);
    panda$core$Bit $tmp9 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp8, ((panda$core$Int64) { 0 }));
    return $tmp9;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp10 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp11 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp10);
    panda$core$Bit $tmp12 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, ((panda$core$Int64) { 0 }));
    return $tmp12;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp13 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
    panda$core$Int64 $tmp14 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp13);
    panda$core$Bit $tmp15 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp14, ((panda$core$Int64) { 0 }));
    return $tmp15;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp16 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
    panda$core$Int64 $tmp17 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp16);
    panda$core$Bit $tmp18 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp17, ((panda$core$Int64) { 0 }));
    return $tmp18;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp19 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp20 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp19);
    panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp20, ((panda$core$Int64) { 0 }));
    return $tmp21;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp22 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp23 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp22);
    panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp23, ((panda$core$Int64) { 0 }));
    return $tmp24;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp25 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
    panda$core$Int64 $tmp26 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp25);
    panda$core$Bit $tmp27 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp26, ((panda$core$Int64) { 0 }));
    return $tmp27;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp28 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
    panda$core$Int64 $tmp29 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp28);
    panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp29, ((panda$core$Int64) { 0 }));
    return $tmp30;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp31 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp31);
    panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp32, ((panda$core$Int64) { 0 }));
    return $tmp33;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result34;
    panda$core$MutableString* $tmp35 = (panda$core$MutableString*) malloc(48);
    $tmp35->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp35->refCount.value = 1;
    panda$core$MutableString$init($tmp35);
    panda$core$Object* $tmp37 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp35));
    result34 = ((panda$core$MutableString*) $tmp37);
    panda$core$Bit $tmp38 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
    if ($tmp38.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s39);
    }
    }
    panda$core$Bit $tmp40 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
    if ($tmp40.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s41);
    }
    }
    panda$core$Bit $tmp42 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
    if ($tmp42.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s43);
    }
    }
    panda$core$Bit $tmp44 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
    if ($tmp44.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s45);
    }
    }
    panda$core$Bit $tmp46 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
    if ($tmp46.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s47);
    }
    }
    panda$core$Bit $tmp48 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
    if ($tmp48.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s49);
    }
    }
    panda$core$Bit $tmp50 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
    if ($tmp50.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s51);
    }
    }
    panda$core$Bit $tmp52 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
    if ($tmp52.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s53);
    }
    }
    panda$core$Bit $tmp54 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
    if ($tmp54.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s55);
    }
    }
    panda$core$Bit $tmp56 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
    if ($tmp56.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s57);
    }
    }
    panda$core$Bit $tmp58 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
    if ($tmp58.value) {
    {
        panda$core$MutableString$append$panda$core$String(result34, &$s59);
    }
    }
    panda$core$String* $tmp60 = panda$core$MutableString$finish$R$panda$core$String(result34);
    return $tmp60;
}


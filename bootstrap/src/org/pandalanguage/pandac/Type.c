#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn34)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp2 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s1);
    panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
    PANDA_ASSERT($tmp3.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) malloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4->refCount.value = 1;
    panda$collections$Array$init($tmp4);
    self->subtypes = $tmp4;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp9;
    self->parameter = NULL;
    panda$core$Bit $tmp7 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s6);
    panda$core$Bit $tmp8 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp7);
    PANDA_ASSERT($tmp8.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp9, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp9;
    self->resolved = ((panda$core$Bit) { true });
    panda$collections$Array* $tmp10 = (panda$collections$Array*) malloc(40);
    $tmp10->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp10->refCount.value = 1;
    panda$collections$Array$init($tmp10);
    self->subtypes = $tmp10;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp12, $tmp14);
    PANDA_ASSERT($tmp15.value);
    panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp18 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s17);
    panda$core$Bit $tmp19 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp16, $tmp18);
    PANDA_ASSERT($tmp19.value);
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp20.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
    $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp21->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp21, p_subtypes);
    self->subtypes = $tmp21;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name25;
    panda$core$String* separator29;
    panda$collections$Iterator* t$Iter31;
    org$pandalanguage$pandac$Type* t43;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    panda$collections$Array* $tmp23 = (panda$collections$Array*) malloc(40);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp23->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp23, p_subtypes);
    self->subtypes = $tmp23;
    panda$core$MutableString* $tmp26 = (panda$core$MutableString*) malloc(40);
    $tmp26->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp26->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp26, &$s28);
    name25 = $tmp26;
    separator29 = &$s30;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp32 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$collections$Iterator* $tmp35 = $tmp33(((panda$collections$Iterable*) p_subtypes));
        t$Iter31 = $tmp35;
        $l36:;
        ITable* $tmp38 = t$Iter31->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Bit $tmp41 = $tmp39(t$Iter31);
        panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
        if (!$tmp42.value) goto $l37;
        {
            ITable* $tmp44 = t$Iter31->$class->itable;
            while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp44 = $tmp44->next;
            }
            $fn46 $tmp45 = $tmp44->methods[1];
            panda$core$Object* $tmp47 = $tmp45(t$Iter31);
            t43 = ((org$pandalanguage$pandac$Type*) $tmp47);
            panda$core$MutableString$append$panda$core$String(name25, separator29);
            panda$core$MutableString$append$panda$core$Object(name25, ((panda$core$Object*) t43));
            separator29 = &$s48;
            bool $tmp49 = self->resolved.value;
            if (!$tmp49) goto $l50;
            $tmp49 = t43->resolved.value;
            $l50:;
            panda$core$Bit $tmp51 = { $tmp49 };
            self->resolved = $tmp51;
        }
        goto $l36;
        $l37:;
    }
    panda$core$MutableString$append$panda$core$String(name25, &$s52);
    panda$core$String* $tmp53 = panda$core$MutableString$finish$R$panda$core$String(name25);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp53);
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s54, p_param->owner);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
    ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp60;
    self->typeKind = ((panda$core$Int64) { 22 });
    self->parameter = p_param;
    self->resolved = ((panda$core$Bit) { true });
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp61 = $tmp62.value;
    if ($tmp61) goto $l63;
    panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp61 = $tmp64.value;
    $l63:;
    panda$core$Bit $tmp65 = { $tmp61 };
    PANDA_ASSERT($tmp65.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp66 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp66;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp67 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp71;
    org$pandalanguage$pandac$Type* $tmp68 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp68->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp68->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp71);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp68, &$s70, ((panda$core$Int64) { 14 }), $tmp71, ((panda$core$Bit) { true }));
    return $tmp68;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp75;
    org$pandalanguage$pandac$Type* $tmp72 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp72->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp72->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp75);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp72, &$s74, ((panda$core$Int64) { 23 }), $tmp75, ((panda$core$Bit) { true }));
    return $tmp72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp79;
    org$pandalanguage$pandac$Type* $tmp76 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp76->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp76->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp79);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp76, &$s78, ((panda$core$Int64) { 10 }), $tmp79, ((panda$core$Bit) { true }));
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes80;
    org$pandalanguage$pandac$Position $tmp87;
    panda$collections$Array* $tmp81 = (panda$collections$Array*) malloc(40);
    $tmp81->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp81->refCount.value = 1;
    panda$collections$Array$init($tmp81);
    subtypes80 = $tmp81;
    org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes80, ((panda$core$Object*) $tmp83));
    org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp84->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp87);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp84, &$s86, ((panda$core$Int64) { 11 }), $tmp87, ((panda$collections$ListView*) subtypes80), ((panda$core$Bit) { true }));
    return $tmp84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp91;
    org$pandalanguage$pandac$Type* $tmp88 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp88->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp91);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp88, &$s90, ((panda$core$Int64) { 10 }), $tmp91, ((panda$core$Bit) { true }));
    return $tmp88;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp95;
    org$pandalanguage$pandac$Type* $tmp92 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp92->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp92->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp95);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp92, &$s94, ((panda$core$Int64) { 10 }), $tmp95, ((panda$core$Bit) { true }));
    return $tmp92;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp99;
    org$pandalanguage$pandac$Type* $tmp96 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp96->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp96->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp99);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp96, &$s98, ((panda$core$Int64) { 10 }), $tmp99, ((panda$core$Bit) { true }));
    return $tmp96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp103;
    org$pandalanguage$pandac$Type* $tmp100 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp100->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp103);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp100, &$s102, ((panda$core$Int64) { 10 }), $tmp103, ((panda$core$Bit) { true }));
    return $tmp100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp107;
    org$pandalanguage$pandac$Type* $tmp104 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp104->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp104->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp107);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp104, &$s106, ((panda$core$Int64) { 10 }), $tmp107, ((panda$core$Bit) { true }));
    return $tmp104;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp111;
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp111);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp108, &$s110, ((panda$core$Int64) { 15 }), $tmp111, ((panda$core$Bit) { true }));
    return $tmp108;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp115;
    org$pandalanguage$pandac$Type* $tmp112 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp112->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp112->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp115);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp112, &$s114, ((panda$core$Int64) { 18 }), $tmp115, ((panda$core$Bit) { true }));
    return $tmp112;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp119;
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp116->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp119);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp116, &$s118, ((panda$core$Int64) { 19 }), $tmp119, ((panda$core$Bit) { true }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp123;
    org$pandalanguage$pandac$Type* $tmp120 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp120->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp120->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp123);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp120, &$s122, ((panda$core$Int64) { 10 }), $tmp123, ((panda$core$Bit) { true }));
    return $tmp120;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp127;
    org$pandalanguage$pandac$Type* $tmp124 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp124->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp124->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp127);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp124, &$s126, ((panda$core$Int64) { 10 }), $tmp127, ((panda$core$Bit) { true }));
    return $tmp124;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp131;
    org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp128->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp128->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp131);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp128, &$s130, ((panda$core$Int64) { 10 }), $tmp131, ((panda$core$Bit) { true }));
    return $tmp128;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children132;
    org$pandalanguage$pandac$Position $tmp138;
    panda$collections$Array* $tmp133 = (panda$collections$Array*) malloc(40);
    $tmp133->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp133->refCount.value = 1;
    panda$collections$Array$init($tmp133);
    children132 = $tmp133;
    org$pandalanguage$pandac$Type* $tmp135 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp135->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp135->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp138);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp135, &$s137, ((panda$core$Int64) { 10 }), $tmp138, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children132, ((panda$core$Object*) $tmp135));
    panda$collections$Array$add$panda$collections$Array$T(children132, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp139 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp139->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp139->refCount.value = 1;
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s141, &$s142);
    panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp145, ((panda$core$Object*) p_t));
    panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp139, $tmp148, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children132), p_t->resolved);
    return $tmp139;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_endPoint, org$pandalanguage$pandac$Type* p_step) {
    panda$collections$Array* children149;
    org$pandalanguage$pandac$Position $tmp155;
    panda$collections$Array* $tmp150 = (panda$collections$Array*) malloc(40);
    $tmp150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp150->refCount.value = 1;
    panda$collections$Array$init($tmp150);
    children149 = $tmp150;
    org$pandalanguage$pandac$Type* $tmp152 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp152->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp152->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp155);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp152, &$s154, ((panda$core$Int64) { 10 }), $tmp155, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children149, ((panda$core$Object*) $tmp152));
    panda$collections$Array$add$panda$collections$Array$T(children149, ((panda$core$Object*) p_endPoint));
    panda$collections$Array$add$panda$collections$Array$T(children149, ((panda$core$Object*) p_step));
    org$pandalanguage$pandac$Type* $tmp156 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp156->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp156->refCount.value = 1;
    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s158, &$s159);
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp162, ((panda$core$Object*) p_endPoint));
    panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp165, ((panda$core$Object*) p_step));
    panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s167);
    bool $tmp169 = p_endPoint->resolved.value;
    if (!$tmp169) goto $l170;
    $tmp169 = p_step->resolved.value;
    $l170:;
    panda$core$Bit $tmp171 = { $tmp169 };
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp156, $tmp168, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_endPoint)->position, ((panda$collections$ListView*) children149), $tmp171);
    return $tmp156;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp175;
    org$pandalanguage$pandac$Type* $tmp172 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp172->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp175);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp172, &$s174, ((panda$core$Int64) { 16 }), $tmp175, ((panda$core$Bit) { true }));
    return $tmp172;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp178 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s177);
    bool $tmp176 = $tmp178.value;
    if ($tmp176) goto $l179;
    panda$core$Bit $tmp181 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s180);
    $tmp176 = $tmp181.value;
    $l179:;
    panda$core$Bit $tmp182 = { $tmp176 };
    return $tmp182;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp184 = $tmp185.value;
    if ($tmp184) goto $l186;
    panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp184 = $tmp187.value;
    $l186:;
    panda$core$Bit $tmp188 = { $tmp184 };
    bool $tmp183 = $tmp188.value;
    if ($tmp183) goto $l189;
    panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp183 = $tmp190.value;
    $l189:;
    panda$core$Bit $tmp191 = { $tmp183 };
    return $tmp191;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp192 = $tmp193.value;
    if ($tmp192) goto $l194;
    panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp192 = $tmp195.value;
    $l194:;
    panda$core$Bit $tmp196 = { $tmp192 };
    return $tmp196;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp198 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s197);
    return $tmp198;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp199.value) {
    {
        panda$core$Object* $tmp200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp201 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp200));
        return $tmp201;
    }
    }
    panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp202 = $tmp203.value;
    if (!$tmp202) goto $l204;
    panda$core$Object* $tmp205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp207 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp205))->name, &$s206);
    $tmp202 = $tmp207.value;
    $l204:;
    panda$core$Bit $tmp208 = { $tmp202 };
    return $tmp208;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp209.value) {
    {
        panda$core$Object* $tmp210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp211 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp210));
        return $tmp211;
    }
    }
    panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp212 = $tmp213.value;
    if (!$tmp212) goto $l214;
    panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp217 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp215))->name, &$s216);
    $tmp212 = $tmp217.value;
    $l214:;
    panda$core$Bit $tmp218 = { $tmp212 };
    return $tmp218;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes220;
    org$pandalanguage$pandac$Position $tmp229;
    panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp219.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp221 = (panda$collections$Array*) malloc(40);
    $tmp221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp221->refCount.value = 1;
    panda$collections$Array$init($tmp221);
    subtypes220 = $tmp221;
    panda$collections$Array$add$panda$collections$Array$T(subtypes220, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp223 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp223->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp223->refCount.value = 1;
    panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s225, self->name);
    panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
    org$pandalanguage$pandac$Position$init(&$tmp229);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp223, $tmp228, ((panda$core$Int64) { 11 }), $tmp229, ((panda$collections$ListView*) subtypes220), ((panda$core$Bit) { true }));
    return $tmp223;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp230 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp230.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp231 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp232 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp231);
    if ($tmp232.value) {
    {
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp233.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp234;
    }
    }
    org$pandalanguage$pandac$Type* $tmp235 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp236 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp235);
    if ($tmp236.value) {
    {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp237.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp238 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp238;
    }
    }
    org$pandalanguage$pandac$Type* $tmp240 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp241 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp240);
    bool $tmp239 = $tmp241.value;
    if (!$tmp239) goto $l242;
    panda$core$Bit $tmp243 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp239 = $tmp243.value;
    $l242:;
    panda$core$Bit $tmp244 = { $tmp239 };
    if ($tmp244.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp246 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp245 = $tmp246.value;
    if (!$tmp245) goto $l247;
    org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp249 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp248);
    $tmp245 = $tmp249.value;
    $l247:;
    panda$core$Bit $tmp250 = { $tmp245 };
    if ($tmp250.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp251.value) {
    {
        panda$core$Object* $tmp252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp252), p_other);
        org$pandalanguage$pandac$Type* $tmp254 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp253);
        return $tmp254;
    }
    }
    panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp255.value) {
    {
        panda$core$Object* $tmp256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp256));
        org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp257);
        return $tmp258;
    }
    }
    org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp259;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found262;
    panda$collections$Array* remapped264;
    panda$core$MutableString* name267;
    panda$core$String* separator272;
    panda$core$Range$LTpanda$core$Int64$GT $tmp274;
    org$pandalanguage$pandac$Type* child289;
    panda$collections$Array* remapped307;
    panda$core$MutableString* name310;
    panda$core$String* separator314;
    panda$core$Range$LTpanda$core$Int64$GT $tmp318;
    org$pandalanguage$pandac$Type* child334;
    org$pandalanguage$pandac$Type* child352;
    panda$core$Int64 $tmp260 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp260, ((panda$core$Int64) { 0 }));
    if ($tmp261.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp263 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found262 = ((org$pandalanguage$pandac$Type*) $tmp263);
            if (((panda$core$Bit) { found262 != NULL }).value) {
            {
                return found262;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp265 = (panda$collections$Array*) malloc(40);
            $tmp265->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp265->refCount.value = 1;
            panda$collections$Array$init($tmp265);
            remapped264 = $tmp265;
            panda$core$MutableString* $tmp268 = (panda$core$MutableString*) malloc(40);
            $tmp268->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp268->refCount.value = 1;
            panda$core$Object* $tmp270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp268, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp270))->name);
            name267 = $tmp268;
            panda$core$MutableString$append$panda$core$String(name267, &$s271);
            separator272 = &$s273;
            panda$core$Int64 $tmp275 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp274, ((panda$core$Int64) { 0 }), $tmp275, ((panda$core$Bit) { false }));
            int64_t $tmp277 = $tmp274.min.value;
            panda$core$Int64 i276 = { $tmp277 };
            int64_t $tmp279 = $tmp274.max.value;
            bool $tmp280 = $tmp274.inclusive.value;
            if ($tmp280) goto $l287; else goto $l288;
            $l287:;
            if ($tmp277 <= $tmp279) goto $l281; else goto $l283;
            $l288:;
            if ($tmp277 < $tmp279) goto $l281; else goto $l283;
            $l281:;
            {
                panda$core$Object* $tmp290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i276);
                org$pandalanguage$pandac$Type* $tmp291 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp290), p_types);
                child289 = $tmp291;
                panda$collections$Array$add$panda$collections$Array$T(remapped264, ((panda$core$Object*) child289));
                panda$core$Bit $tmp292 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i276, ((panda$core$Int64) { 0 }));
                if ($tmp292.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name267, separator272);
                    panda$core$MutableString$append$panda$core$String(name267, ((org$pandalanguage$pandac$Symbol*) child289)->name);
                    separator272 = &$s293;
                }
                }
            }
            $l284:;
            int64_t $tmp295 = $tmp279 - i276.value;
            if ($tmp280) goto $l296; else goto $l297;
            $l296:;
            if ($tmp295 >= 1) goto $l294; else goto $l283;
            $l297:;
            if ($tmp295 > 1) goto $l294; else goto $l283;
            $l294:;
            i276.value += 1;
            goto $l281;
            $l283:;
            panda$core$MutableString$append$panda$core$String(name267, &$s300);
            org$pandalanguage$pandac$Type* $tmp301 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp301->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp301->refCount.value = 1;
            panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String(name267);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp301, $tmp303, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped264), self->resolved);
            return $tmp301;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp305 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp304), p_types);
            org$pandalanguage$pandac$Type* $tmp306 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp305);
            return $tmp306;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp308 = (panda$collections$Array*) malloc(40);
            $tmp308->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp308->refCount.value = 1;
            panda$collections$Array$init($tmp308);
            remapped307 = $tmp308;
            panda$core$MutableString* $tmp311 = (panda$core$MutableString*) malloc(40);
            $tmp311->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp311->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp311, &$s313);
            name310 = $tmp311;
            separator314 = &$s315;
            panda$core$Int64 $tmp316 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp317 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp316, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp317.value);
            panda$core$Int64 $tmp319 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp320 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp319, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp318, ((panda$core$Int64) { 0 }), $tmp320, ((panda$core$Bit) { false }));
            int64_t $tmp322 = $tmp318.min.value;
            panda$core$Int64 i321 = { $tmp322 };
            int64_t $tmp324 = $tmp318.max.value;
            bool $tmp325 = $tmp318.inclusive.value;
            if ($tmp325) goto $l332; else goto $l333;
            $l332:;
            if ($tmp322 <= $tmp324) goto $l326; else goto $l328;
            $l333:;
            if ($tmp322 < $tmp324) goto $l326; else goto $l328;
            $l326:;
            {
                panda$core$Object* $tmp335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i321);
                org$pandalanguage$pandac$Type* $tmp336 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp335), p_types);
                child334 = $tmp336;
                panda$core$MutableString$append$panda$core$String(name310, separator314);
                panda$core$MutableString$append$panda$core$String(name310, ((org$pandalanguage$pandac$Symbol*) child334)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped307, ((panda$core$Object*) child334));
                separator314 = &$s337;
            }
            $l329:;
            int64_t $tmp339 = $tmp324 - i321.value;
            if ($tmp325) goto $l340; else goto $l341;
            $l340:;
            if ($tmp339 >= 1) goto $l338; else goto $l328;
            $l341:;
            if ($tmp339 > 1) goto $l338; else goto $l328;
            $l338:;
            i321.value += 1;
            goto $l326;
            $l328:;
            panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp344.value) {
            {
                panda$core$MutableString$append$panda$core$String(name310, &$s345);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name310, &$s346);
            }
            }
            panda$core$Int64 $tmp347 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp348 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp347, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp348);
            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp351 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp349), $tmp350);
            if ($tmp351.value) {
            {
                panda$core$Int64 $tmp353 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp354 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp353, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp354);
                org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp355), p_types);
                child352 = $tmp356;
                panda$core$MutableString$append$panda$core$String(name310, ((org$pandalanguage$pandac$Symbol*) child352)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped307, ((panda$core$Object*) child352));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped307, ((panda$core$Object*) $tmp357));
            }
            }
            panda$core$MutableString$append$panda$core$String(name310, &$s358);
            org$pandalanguage$pandac$Type* $tmp359 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp359->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp359->refCount.value = 1;
            panda$core$String* $tmp361 = panda$core$MutableString$finish$R$panda$core$String(name310);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp359, $tmp361, self->typeKind, self->position, ((panda$collections$ListView*) remapped307), self->resolved);
            return $tmp359;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp362 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp362;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}


#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$ClassConstant$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x43\x6c\x61\x73\x73\x43\x6f\x6e\x73\x74\x61\x6e\x74", 53, -6258470687937542335, NULL };

void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = NULL;
    self->type = NULL;
    {
        panda$core$String* $tmp2 = self->name;
        panda$core$String* $tmp3 = p_name;
        self->name = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        panda$core$String* $tmp4 = self->type;
        panda$core$String* $tmp5 = p_type;
        self->type = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$cleanup(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self) {
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
}


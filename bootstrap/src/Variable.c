#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"


org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Variable$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Variable* self, panda$core$Int64 p_offset, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64(self, p_offset, p_name, p_type, ((panda$core$Int64) { 1819 }));
}
void org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$Variable* self, panda$core$Int64 p_offset, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, panda$core$Int64 p_storage) {
    self->type = p_type;
    self->storage = p_storage;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 208 }), p_offset, p_name);
}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self) {
    return self->name;
}
void org$pandalanguage$pandac$Variable$Storage$init(org$pandalanguage$pandac$Variable$Storage* self) {
}


#include "org/pandalanguage/pandac/CCodeGenerator/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


org$pandalanguage$pandac$CCodeGenerator$Pair$class_type org$pandalanguage$pandac$CCodeGenerator$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$CCodeGenerator$Pair$init$org$pandalanguage$pandac$CCodeGenerator$Pair$A$org$pandalanguage$pandac$CCodeGenerator$Pair$B(org$pandalanguage$pandac$CCodeGenerator$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    self->first = p_first;
    self->second = p_second;
}


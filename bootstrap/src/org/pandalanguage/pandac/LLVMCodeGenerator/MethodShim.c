#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"


org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = p_name;
    self->type = p_type;
}

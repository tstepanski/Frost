#pragma once
#include "panda_c.h"
#include "Break_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$statement$Break org$pandalanguage$pandac$statement$Break;

void org$pandalanguage$pandac$statement$Break$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label);
void org$pandalanguage$pandac$statement$Break$init(org$pandalanguage$pandac$statement$Break* self);
void org$pandalanguage$pandac$statement$Break$cleanup(org$pandalanguage$pandac$statement$Break* self);

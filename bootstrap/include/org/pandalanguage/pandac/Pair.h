#pragma once
#include "panda_c.h"
#include "Pair_types.h"
typedef struct org$pandalanguage$pandac$Pair org$pandalanguage$pandac$Pair;
typedef struct panda$core$Object panda$core$Object;

void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second);
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* self);


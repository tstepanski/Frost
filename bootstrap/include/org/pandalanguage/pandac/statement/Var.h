#pragma once
#include "panda_c.h"
#include "Var_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
#include "org/pandalanguage/pandac/Variable/Kind_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct org$pandalanguage$pandac$statement$Var org$pandalanguage$pandac$statement$Var;

void org$pandalanguage$pandac$statement$Var$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, org$pandalanguage$pandac$FixedArray* p_decls);
void org$pandalanguage$pandac$statement$Var$init(org$pandalanguage$pandac$statement$Var* self);
void org$pandalanguage$pandac$statement$Var$cleanup(org$pandalanguage$pandac$statement$Var* self);

#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$Compiler$EnclosingContext org$pandalanguage$pandac$Compiler$EnclosingContext;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$AutoContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
    org$pandalanguage$pandac$Compiler$EnclosingContext* context;
} org$pandalanguage$pandac$Compiler$AutoContext;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$AutoContext$class_type;
extern org$pandalanguage$pandac$Compiler$AutoContext$class_type org$pandalanguage$pandac$Compiler$AutoContext$class;

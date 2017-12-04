#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$collections$Map {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$Map;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$Map$class_type;
extern panda$collections$Map$class_type panda$collections$Map$class;

#ifndef PANDA_TYPESONLY


#endif

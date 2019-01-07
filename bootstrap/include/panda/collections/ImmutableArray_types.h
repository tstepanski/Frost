#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableArray {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 dummy;
    panda$core$Immutable** data;
} panda$collections$ImmutableArray;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$collections$ImmutableArray$class_type;
extern panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class;


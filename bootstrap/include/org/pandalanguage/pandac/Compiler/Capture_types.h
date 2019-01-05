#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$Capture {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[8];
} org$pandalanguage$pandac$Compiler$Capture;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Capture$class_type;
extern org$pandalanguage$pandac$Compiler$Capture$class_type org$pandalanguage$pandac$Compiler$Capture$class;

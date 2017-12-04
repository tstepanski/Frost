#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$MutableString panda$core$MutableString;

typedef struct panda$io$MemoryOutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$MutableString* data;
} panda$io$MemoryOutputStream;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[21]; } panda$io$MemoryOutputStream$class_type;
extern panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
#include "panda/core/UInt8.h"
typedef struct panda$core$String panda$core$String;

void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* self, panda$core$UInt8 p_i);
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* self);
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* self);
void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* self);

#endif
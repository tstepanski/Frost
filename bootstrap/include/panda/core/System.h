#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$io$InputStream panda$io$InputStream;

typedef struct panda$core$System {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$System;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$System$class_type;
extern panda$core$System$class_type panda$core$System$class;
typedef struct panda$core$System$Process {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 pid;
    panda$io$OutputStream* input;
    panda$io$InputStream* output;
    panda$io$InputStream* error;
} panda$core$System$Process;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$core$System$Process$class_type;
extern panda$core$System$Process$class_type panda$core$System$Process$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$System$Process panda$core$System$Process;
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$System panda$core$System;

void panda$core$System$exit$panda$core$Int64(panda$core$Int64 p_status);
void panda$core$System$crash();
panda$core$System$Process* panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(panda$io$File* p_path, panda$collections$ListView* p_args);
void panda$core$System$init(panda$core$System* self);
void panda$core$System$Process$waitFor$R$panda$core$Int64(panda$core$Int64* result, panda$core$System$Process* self);
void panda$core$System$Process$init(panda$core$System$Process* self);

#endif

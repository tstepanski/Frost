#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String$UTF16Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 index;
    panda$core$String* str;
} panda$core$String$UTF16Iterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$UTF16Iterator$class_type;
extern panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String$UTF16Iterator panda$core$String$UTF16Iterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
#include "panda/core/Char16.h"

void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* self);
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* self);

#endif

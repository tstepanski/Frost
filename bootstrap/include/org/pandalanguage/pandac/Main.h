#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$pandac$Main {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* opt;
    panda$io$File* llc;
    panda$io$File* gcc;
    panda$io$File* pandaHome;
} org$pandalanguage$pandac$Main;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[8]; } org$pandalanguage$pandac$Main$class_type;
extern org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class;
typedef struct org$pandalanguage$pandac$Main$Format {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Main$Format;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Main$Format$class_type;
extern org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class;
typedef struct org$pandalanguage$pandac$Main$Arguments {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ListView* args;
    panda$core$Int64 index;
} org$pandalanguage$pandac$Main$Arguments;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$Main$Arguments$class_type;
extern org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Main org$pandalanguage$pandac$Main;
typedef struct panda$io$File panda$io$File;
#include "panda/core/Int64.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct org$pandalanguage$pandac$Main$Format org$pandalanguage$pandac$Main$Format;
typedef struct org$pandalanguage$pandac$Main$Arguments org$pandalanguage$pandac$Main$Arguments;
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self);
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level);
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm);
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest);
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest);
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out);
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs);
void pandaMain(panda$collections$ListView* p_args);
void org$pandalanguage$pandac$Main$Format$init(org$pandalanguage$pandac$Main$Format* self);
void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args);
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self);
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label);

#endif

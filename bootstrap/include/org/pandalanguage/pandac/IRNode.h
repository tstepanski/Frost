#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$Array panda$collections$Array;

typedef struct org$pandalanguage$pandac$IRNode {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$Object* payload;
    org$pandalanguage$pandac$Type* type;
    panda$collections$Array* children;
} org$pandalanguage$pandac$IRNode;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$IRNode$class_type;
extern org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class;
typedef struct org$pandalanguage$pandac$IRNode$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$IRNode$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$IRNode$Kind$class_type;
extern org$pandalanguage$pandac$IRNode$Kind$class_type org$pandalanguage$pandac$IRNode$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
#include "panda/core/Int64.h"
#include "panda/core/UInt64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
typedef struct org$pandalanguage$pandac$IRNode$Kind org$pandalanguage$pandac$IRNode$Kind;

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$UInt64 p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$String* p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable* p_payload);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$collections$ListView* p_children);
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, org$pandalanguage$pandac$Type* p_type, panda$core$Object* p_payload, panda$collections$ListView* p_children);
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self);
void org$pandalanguage$pandac$IRNode$Kind$init(org$pandalanguage$pandac$IRNode$Kind* self);

#endif

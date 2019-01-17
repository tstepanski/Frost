#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$List {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} frost$collections$List;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } frost$collections$List$class_type;
extern frost$collections$List$class_type frost$collections$List$class;

#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Analyzer$State {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$Array* locals;
    frost$collections$HashMap* statements;
} org$frostlang$frostc$Analyzer$State;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Analyzer$State$class_type;
extern org$frostlang$frostc$Analyzer$State$class_type org$frostlang$frostc$Analyzer$State$class;


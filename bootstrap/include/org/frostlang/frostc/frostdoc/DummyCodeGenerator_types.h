#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$frostdoc$DummyCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} org$frostlang$frostc$frostdoc$DummyCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlang$frostc$frostdoc$DummyCodeGenerator$class_type;
extern org$frostlang$frostc$frostdoc$DummyCodeGenerator$class_type org$frostlang$frostc$frostdoc$DummyCodeGenerator$class;

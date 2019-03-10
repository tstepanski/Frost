#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$String {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Char8* data;
    frost$core$Int64 _length;
    frost$core$Int64 dummy;
    frost$core$String* owner;
} frost$core$String;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[63]; } frost$core$String$class_type;
extern frost$core$String$class_type frost$core$String$class;


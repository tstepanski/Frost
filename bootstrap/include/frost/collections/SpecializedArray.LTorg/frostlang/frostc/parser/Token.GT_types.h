#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 _count;
    frost$core$Int64 capacity;
    org$frostlang$frostc$parser$Token* data;
} frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[11]; } frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class_type;
extern frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class;

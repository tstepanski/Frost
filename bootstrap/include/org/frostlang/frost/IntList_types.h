#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frost$IntList {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT range;
    frost$core$Int _count;
} org$frostlang$frost$IntList;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frost$IntList$class_type;
extern org$frostlang$frost$IntList$class_type org$frostlang$frost$IntList$class;

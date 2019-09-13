#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;

typedef struct org$frostlang$frostc$frostdoc$LinkResolver {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Compiler* compiler;
    frost$io$File* docPath;
    frost$core$String* apiRelativePath;
    org$frostlang$frostc$ClassDecl* context;
} org$frostlang$frostc$frostdoc$LinkResolver;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlang$frostc$frostdoc$LinkResolver$class_type;
extern org$frostlang$frostc$frostdoc$LinkResolver$class_type org$frostlang$frostc$frostdoc$LinkResolver$class;


#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$parser$Lexer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$plex$runtime$DFA* dfa;
    frost$core$Int64** transitions;
    frost$core$Int64* accepts;
} org$frostlang$frostc$parser$Lexer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$parser$Lexer$class_type;
extern org$frostlang$frostc$parser$Lexer$class_type org$frostlang$frostc$parser$Lexer$class;

#pragma once
#include "frost_c.h"
#include "Main_types.h"
typedef struct org$frostlang$frostc$Main org$frostlang$frostc$Main;
typedef struct frost$io$File frost$io$File;
#include "frost/core/Bit_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* self);
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* self, frost$io$File* p_llvm, frost$io$File* p_dest, frost$core$Bit p_preserveTemporaries);
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* self, frost$io$File* p_llvm, frost$io$File* p_dest, frost$core$Bit p_preserveTemporaries);
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* self, frost$io$OutputStream* p_out);
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main* self, frost$collections$ListView* p_rawArgs);
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* p_s);
void frostMain(frost$collections$ListView* p_args);
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* self);

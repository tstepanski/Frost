#pragma once
#include "frost_c.h"
#include "IR_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* self);
org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID(org$frostlang$frostc$IR* self, org$frostlang$frostc$IR$Statement* p_s);
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* self, frost$core$String* p_comment);
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* self, org$frostlang$frostc$IR$Block$ID p_id);
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* self);
frost$core$String* org$frostlang$frostc$IR$convert$R$frost$core$String(org$frostlang$frostc$IR* self);
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* self);

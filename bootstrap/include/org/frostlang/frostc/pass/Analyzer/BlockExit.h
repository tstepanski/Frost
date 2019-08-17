#pragma once
#include "frost_c.h"
#include "BlockExit_types.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

org$frostlang$frostc$pass$Analyzer$BlockExit org$frostlang$frostc$pass$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int(org$frostlang$frostc$IR$Block$ID p_id, frost$core$Int p_exit);
frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$BlockExit self, org$frostlang$frostc$pass$Analyzer$BlockExit p_other);
frost$core$Int org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int(org$frostlang$frostc$pass$Analyzer$BlockExit self);
void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(org$frostlang$frostc$pass$Analyzer$BlockExit self);

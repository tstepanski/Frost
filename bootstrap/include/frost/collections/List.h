#pragma once
#include "frost_c.h"
#include "List_types.h"
typedef struct frost$collections$List frost$collections$List;
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* self, frost$core$Range$LTfrost$core$Int64$GT p_range, frost$collections$ListView* p_list);
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_range, frost$collections$ListView* p_list);
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* self, frost$core$MutableMethod* p_f);
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* self, frost$core$MutableMethod* p_greater);

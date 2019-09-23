#pragma once
#include "frost_c.h"
#include "String_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Char32_types.h"
#include "frost/core/String/Index_types.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
#include "frost/core/Char8_types.h"
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Int64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"

void frost$core$String$init$frost$unsafe$NewPointer$LTfrost$core$Char8$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer p_data, frost$core$Int p_length);
void frost$core$String$init$frost$unsafe$NewPointer$LTfrost$core$Char8$GT$frost$core$Int$frost$core$String(void* rawSelf, frost$unsafe$NewPointer p_data, frost$core$Int p_length, frost$core$String* p_owner);
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf, frost$collections$ListView* p_chars);
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(void* rawSelf, frost$collections$ListView* p_chars);
frost$core$String* frost$core$String$get_asString$R$frost$core$String(void* rawSelf);
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_fmt);
void frost$core$String$cleanup(void* rawSelf);
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf);
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(void* rawSelf);
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(void* rawSelf);
frost$core$Int frost$core$String$get_length$R$frost$core$Int(void* rawSelf);
frost$core$Int frost$core$String$get_byteLength$R$frost$core$Int(void* rawSelf);
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(void* rawSelf);
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_other);
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(void* rawSelf, frost$core$Object* p_other);
frost$core$String* frost$core$String$$MUL$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int p_count);
frost$core$String* frost$core$String$$MUL$frost$core$Int$frost$core$String$R$frost$core$String(frost$core$Int p_count, frost$core$String* p_s);
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* p_o, frost$core$String* p_s);
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(void* rawSelf, frost$core$String$Index p_index);
frost$core$Char32 frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32(void* rawSelf, frost$core$Int p_index);
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$GT p_r);
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(void* rawSelf, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT p_r);
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(void* rawSelf, frost$core$Char8 p_c);
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* p_s, frost$core$String$Index p_start);
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* p_s, frost$core$String$Index p_start);
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* p_regex);
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* p_needle);
frost$collections$Array* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$Q$GT$Q(void* rawSelf, frost$core$RegularExpression* p_regex);
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_search, frost$core$String* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$String* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$String* p_replacement, frost$core$Bit p_allowGroupReferences);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(void* rawSelf, frost$core$String* p_needle);
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(void* rawSelf, frost$core$String* p_needle, frost$core$Bit p_overlapping);
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(void* rawSelf, frost$core$RegularExpression* p_needle);
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(void* rawSelf, frost$core$RegularExpression* p_needle, frost$core$Bit p_overlapping);
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(void* rawSelf);
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(void* rawSelf);
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index p_i);
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index p_i);
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index p_index, frost$core$Int p_offset);
frost$core$String* frost$core$String$leftAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int p_width);
frost$core$String* frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int p_width, frost$core$Char32 p_fill);
frost$core$String* frost$core$String$rightAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int p_width);
frost$core$String* frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int p_width, frost$core$Char32 p_fill);
frost$core$String* frost$core$String$centerAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int p_width);
frost$core$String* frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int p_width, frost$core$Char32 p_fill);
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$String* p_delimiter);
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$String* p_delimiter, frost$core$Int p_maxResults);
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$RegularExpression* p_delimiter, frost$core$Int p_maxResults);
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$RegularExpression* p_delimiter);
frost$core$Int$nullable frost$core$String$get_asInt$R$frost$core$Int$Q(void* rawSelf);
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(void* rawSelf);
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(void* rawSelf);
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(void* rawSelf);
frost$core$Int frost$core$String$get_hash$R$frost$core$Int(void* rawSelf);


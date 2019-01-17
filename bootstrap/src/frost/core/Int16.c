#include "frost/core/Int16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int16.GT.h"
#include "org/frostlang/frost/Int16List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_count$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int16$format$frost$core$String$R$frost$core$String(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_hash$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int16$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int16$convert$R$frost$core$String(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$$SUB$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$$BNOT$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$SHL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$SHR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$get_abs$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int16$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int16$convert$R$frost$core$Int8(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int16$convert$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$convert$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int16$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int16$convert$R$frost$core$UInt8(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int16$convert$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int16$convert$R$frost$core$UInt16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$convert$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int16$convert$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$convert$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int16$convert$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$convert$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int16$convert$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$convert$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int16$convert$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int16$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int16$cleanup(((frost$core$Int16$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$_frost$collections$CollectionView, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$_frost$collections$Iterable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$_frost$core$Equatable, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$_frost$collections$ListView, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$_frost$core$Formattable, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int16$_frost$core$Comparable, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$Int16$class_type frost$core$Int16$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$_frost$collections$Key, { frost$core$Int16$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int16$$BNOT$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$get_abs$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int16$get_hash$R$frost$core$Int64$shim, frost$core$Int16$convert$R$frost$core$Int8$shim, frost$core$Int16$convert$R$frost$core$Int32$shim, frost$core$Int16$convert$R$frost$core$Int64$shim, frost$core$Int16$convert$R$frost$core$UInt8$shim, frost$core$Int16$convert$R$frost$core$UInt16$shim, frost$core$Int16$convert$R$frost$core$UInt32$shim, frost$core$Int16$convert$R$frost$core$UInt64$shim, frost$core$Int16$convert$R$frost$core$Real32$shim, frost$core$Int16$convert$R$frost$core$Real64$shim, frost$core$Int16$format$frost$core$String$R$frost$core$String$shim, frost$core$Int16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$CollectionView, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Iterable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Equatable, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$ListView, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Formattable, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Comparable, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s3;
frost$core$Int16$wrapperclass_type frost$core$Int16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Key, { frost$core$Int16$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn635)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -7454659636657985286, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f", 121, -7300499346784167556, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -533335643664933256, NULL };

frost$core$Int16 frost$core$Int16$init$builtin_int16(int16_t param0) {

frost$core$Int16 local0;
// line 30
int16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int16 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int16 frost$core$Int16$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int16 local0;
// line 36
int8_t $tmp6 = param0.value;
int16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int16_t) $tmp6);
frost$core$Int16 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int16 frost$core$Int16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int16 local0;
// line 42
uint8_t $tmp9 = param0.value;
int16_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int16_t) $tmp9);
frost$core$Int16 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 48
int16_t $tmp12 = param0.value;
int16_t $tmp13 = param1.value;
int32_t $tmp14 = ((int32_t) $tmp12) + ((int32_t) $tmp13);
frost$core$Int32 $tmp15 = frost$core$Int32$init$builtin_int32($tmp14);
return $tmp15;

}
frost$core$Int16 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 53
int16_t $tmp16 = param0.value;
int16_t $tmp17 = param1.value;
int16_t $tmp18 = $tmp16 + $tmp17;
frost$core$Int16 $tmp19 = frost$core$Int16$init$builtin_int16($tmp18);
return $tmp19;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 59
int16_t $tmp20 = param0.value;
int32_t $tmp21 = param1.value;
int32_t $tmp22 = ((int32_t) $tmp20) + $tmp21;
frost$core$Int32 $tmp23 = frost$core$Int32$init$builtin_int32($tmp22);
return $tmp23;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 65
int16_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) + $tmp25;
frost$core$Int64 $tmp27 = frost$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 71
int16_t $tmp28 = param0.value;
uint16_t $tmp29 = param1.value;
int32_t $tmp30 = ((int32_t) $tmp28) + ((int32_t) $tmp29);
frost$core$Int32 $tmp31 = frost$core$Int32$init$builtin_int32($tmp30);
return $tmp31;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 77
int16_t $tmp32 = param0.value;
uint32_t $tmp33 = param1.value;
int64_t $tmp34 = ((int64_t) $tmp32) + ((int64_t) $tmp33);
frost$core$Int64 $tmp35 = frost$core$Int64$init$builtin_int64($tmp34);
return $tmp35;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 83
int16_t $tmp36 = param0.value;
int16_t $tmp37 = param1.value;
int32_t $tmp38 = ((int32_t) $tmp36) - ((int32_t) $tmp37);
frost$core$Int32 $tmp39 = frost$core$Int32$init$builtin_int32($tmp38);
return $tmp39;

}
frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 88
int16_t $tmp40 = param0.value;
int16_t $tmp41 = param1.value;
int16_t $tmp42 = $tmp40 - $tmp41;
frost$core$Int16 $tmp43 = frost$core$Int16$init$builtin_int16($tmp42);
return $tmp43;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 94
int16_t $tmp44 = param0.value;
int32_t $tmp45 = param1.value;
int32_t $tmp46 = ((int32_t) $tmp44) - $tmp45;
frost$core$Int32 $tmp47 = frost$core$Int32$init$builtin_int32($tmp46);
return $tmp47;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 100
int16_t $tmp48 = param0.value;
int64_t $tmp49 = param1.value;
int64_t $tmp50 = ((int64_t) $tmp48) - $tmp49;
frost$core$Int64 $tmp51 = frost$core$Int64$init$builtin_int64($tmp50);
return $tmp51;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 106
int16_t $tmp52 = param0.value;
uint16_t $tmp53 = param1.value;
int32_t $tmp54 = ((int32_t) $tmp52) - ((int32_t) $tmp53);
frost$core$Int32 $tmp55 = frost$core$Int32$init$builtin_int32($tmp54);
return $tmp55;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 112
int16_t $tmp56 = param0.value;
uint32_t $tmp57 = param1.value;
int64_t $tmp58 = ((int64_t) $tmp56) - ((int64_t) $tmp57);
frost$core$Int64 $tmp59 = frost$core$Int64$init$builtin_int64($tmp58);
return $tmp59;

}
frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16(frost$core$Int16 param0) {

// line 117
int16_t $tmp60 = param0.value;
int16_t $tmp61 = -$tmp60;
frost$core$Int16 $tmp62 = (frost$core$Int16) {$tmp61};
return $tmp62;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 123
int16_t $tmp63 = param0.value;
int16_t $tmp64 = param1.value;
int32_t $tmp65 = ((int32_t) $tmp63) * ((int32_t) $tmp64);
frost$core$Int32 $tmp66 = frost$core$Int32$init$builtin_int32($tmp65);
return $tmp66;

}
frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 128
int16_t $tmp67 = param0.value;
int16_t $tmp68 = param1.value;
int16_t $tmp69 = $tmp67 * $tmp68;
frost$core$Int16 $tmp70 = frost$core$Int16$init$builtin_int16($tmp69);
return $tmp70;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 134
int16_t $tmp71 = param0.value;
int32_t $tmp72 = param1.value;
int32_t $tmp73 = ((int32_t) $tmp71) * $tmp72;
frost$core$Int32 $tmp74 = frost$core$Int32$init$builtin_int32($tmp73);
return $tmp74;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 140
int16_t $tmp75 = param0.value;
int64_t $tmp76 = param1.value;
int64_t $tmp77 = ((int64_t) $tmp75) * $tmp76;
frost$core$Int64 $tmp78 = frost$core$Int64$init$builtin_int64($tmp77);
return $tmp78;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 146
int16_t $tmp79 = param0.value;
uint16_t $tmp80 = param1.value;
int32_t $tmp81 = ((int32_t) $tmp79) * ((int32_t) $tmp80);
frost$core$Int32 $tmp82 = frost$core$Int32$init$builtin_int32($tmp81);
return $tmp82;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 152
int16_t $tmp83 = param0.value;
uint32_t $tmp84 = param1.value;
int64_t $tmp85 = ((int64_t) $tmp83) * ((int64_t) $tmp84);
frost$core$Int64 $tmp86 = frost$core$Int64$init$builtin_int64($tmp85);
return $tmp86;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 158
int16_t $tmp87 = param0.value;
int16_t $tmp88 = param1.value;
int32_t $tmp89 = ((int32_t) $tmp87) / ((int32_t) $tmp88);
frost$core$Int32 $tmp90 = frost$core$Int32$init$builtin_int32($tmp89);
return $tmp90;

}
frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 163
int16_t $tmp91 = param0.value;
int16_t $tmp92 = param1.value;
int16_t $tmp93 = $tmp91 / $tmp92;
frost$core$Int16 $tmp94 = frost$core$Int16$init$builtin_int16($tmp93);
return $tmp94;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 169
int16_t $tmp95 = param0.value;
int32_t $tmp96 = param1.value;
int32_t $tmp97 = ((int32_t) $tmp95) / $tmp96;
frost$core$Int32 $tmp98 = frost$core$Int32$init$builtin_int32($tmp97);
return $tmp98;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 175
int16_t $tmp99 = param0.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = ((int64_t) $tmp99) / $tmp100;
frost$core$Int64 $tmp102 = frost$core$Int64$init$builtin_int64($tmp101);
return $tmp102;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 181
int16_t $tmp103 = param0.value;
uint16_t $tmp104 = param1.value;
int32_t $tmp105 = ((int32_t) $tmp103) / ((int32_t) $tmp104);
frost$core$Int32 $tmp106 = frost$core$Int32$init$builtin_int32($tmp105);
return $tmp106;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 187
int16_t $tmp107 = param0.value;
uint32_t $tmp108 = param1.value;
int64_t $tmp109 = ((int64_t) $tmp107) / ((int64_t) $tmp108);
frost$core$Int64 $tmp110 = frost$core$Int64$init$builtin_int64($tmp109);
return $tmp110;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 193
int16_t $tmp111 = param0.value;
int16_t $tmp112 = param1.value;
int32_t $tmp113 = ((int32_t) $tmp111) % ((int32_t) $tmp112);
frost$core$Int32 $tmp114 = frost$core$Int32$init$builtin_int32($tmp113);
return $tmp114;

}
frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 198
int16_t $tmp115 = param0.value;
int16_t $tmp116 = param1.value;
int16_t $tmp117 = $tmp115 % $tmp116;
frost$core$Int16 $tmp118 = frost$core$Int16$init$builtin_int16($tmp117);
return $tmp118;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 204
int16_t $tmp119 = param0.value;
int32_t $tmp120 = param1.value;
int32_t $tmp121 = ((int32_t) $tmp119) % $tmp120;
frost$core$Int32 $tmp122 = frost$core$Int32$init$builtin_int32($tmp121);
return $tmp122;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 210
int16_t $tmp123 = param0.value;
int64_t $tmp124 = param1.value;
int64_t $tmp125 = ((int64_t) $tmp123) % $tmp124;
frost$core$Int64 $tmp126 = frost$core$Int64$init$builtin_int64($tmp125);
return $tmp126;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 216
int16_t $tmp127 = param0.value;
uint16_t $tmp128 = param1.value;
int32_t $tmp129 = ((int32_t) $tmp127) % ((int32_t) $tmp128);
frost$core$Int32 $tmp130 = frost$core$Int32$init$builtin_int32($tmp129);
return $tmp130;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 222
int16_t $tmp131 = param0.value;
uint32_t $tmp132 = param1.value;
int64_t $tmp133 = ((int64_t) $tmp131) % ((int64_t) $tmp132);
frost$core$Int64 $tmp134 = frost$core$Int64$init$builtin_int64($tmp133);
return $tmp134;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 228
int16_t $tmp135 = param0.value;
int8_t $tmp136 = param1.value;
float $tmp137 = ((float) $tmp135) / ((float) $tmp136);
frost$core$Real32 $tmp138 = frost$core$Real32$init$builtin_float32($tmp137);
return $tmp138;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 234
int16_t $tmp139 = param0.value;
int16_t $tmp140 = param1.value;
float $tmp141 = ((float) $tmp139) / ((float) $tmp140);
frost$core$Real32 $tmp142 = frost$core$Real32$init$builtin_float32($tmp141);
return $tmp142;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 240
int16_t $tmp143 = param0.value;
int32_t $tmp144 = param1.value;
float $tmp145 = ((float) $tmp143) / ((float) $tmp144);
frost$core$Real32 $tmp146 = frost$core$Real32$init$builtin_float32($tmp145);
return $tmp146;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 246
int16_t $tmp147 = param0.value;
int64_t $tmp148 = param1.value;
double $tmp149 = ((double) $tmp147) / ((double) $tmp148);
frost$core$Real64 $tmp150 = frost$core$Real64$init$builtin_float64($tmp149);
return $tmp150;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 252
int16_t $tmp151 = param0.value;
uint8_t $tmp152 = param1.value;
float $tmp153 = ((float) $tmp151) / ((float) $tmp152);
frost$core$Real32 $tmp154 = frost$core$Real32$init$builtin_float32($tmp153);
return $tmp154;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 258
int16_t $tmp155 = param0.value;
uint16_t $tmp156 = param1.value;
float $tmp157 = ((float) $tmp155) / ((float) $tmp156);
frost$core$Real32 $tmp158 = frost$core$Real32$init$builtin_float32($tmp157);
return $tmp158;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 264
int16_t $tmp159 = param0.value;
uint32_t $tmp160 = param1.value;
float $tmp161 = ((float) $tmp159) / ((float) $tmp160);
frost$core$Real32 $tmp162 = frost$core$Real32$init$builtin_float32($tmp161);
return $tmp162;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 270
int16_t $tmp163 = param0.value;
uint64_t $tmp164 = param1.value;
double $tmp165 = ((double) $tmp163) / ((double) $tmp164);
frost$core$Real64 $tmp166 = frost$core$Real64$init$builtin_float64($tmp165);
return $tmp166;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Real32 param1) {

// line 276
int16_t $tmp167 = param0.value;
float $tmp168 = param1.value;
float $tmp169 = ((float) $tmp167) / $tmp168;
frost$core$Real32 $tmp170 = frost$core$Real32$init$builtin_float32($tmp169);
return $tmp170;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Real64 param1) {

// line 282
int16_t $tmp171 = param0.value;
double $tmp172 = param1.value;
double $tmp173 = ((double) $tmp171) / $tmp172;
frost$core$Real64 $tmp174 = frost$core$Real64$init$builtin_float64($tmp173);
return $tmp174;

}
frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16(frost$core$Int16 param0) {

// line 287
int16_t $tmp175 = param0.value;
int16_t $tmp176 = !$tmp175;
frost$core$Int16 $tmp177 = (frost$core$Int16) {$tmp176};
return $tmp177;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 293
int16_t $tmp178 = param0.value;
int16_t $tmp179 = param1.value;
int32_t $tmp180 = ((int32_t) $tmp178) & ((int32_t) $tmp179);
frost$core$Int32 $tmp181 = frost$core$Int32$init$builtin_int32($tmp180);
return $tmp181;

}
frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 298
int16_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
int16_t $tmp184 = $tmp182 & $tmp183;
frost$core$Int16 $tmp185 = frost$core$Int16$init$builtin_int16($tmp184);
return $tmp185;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 304
int16_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
int32_t $tmp188 = ((int32_t) $tmp186) & $tmp187;
frost$core$Int32 $tmp189 = frost$core$Int32$init$builtin_int32($tmp188);
return $tmp189;

}
frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 310
int16_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
int64_t $tmp192 = ((int64_t) $tmp190) & $tmp191;
frost$core$Int64 $tmp193 = frost$core$Int64$init$builtin_int64($tmp192);
return $tmp193;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 316
int16_t $tmp194 = param0.value;
uint16_t $tmp195 = param1.value;
uint32_t $tmp196 = ((uint32_t) $tmp194) & ((uint32_t) $tmp195);
frost$core$UInt32 $tmp197 = frost$core$UInt32$init$builtin_uint32($tmp196);
return $tmp197;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 322
int16_t $tmp198 = param0.value;
uint32_t $tmp199 = param1.value;
uint32_t $tmp200 = ((uint32_t) $tmp198) & $tmp199;
frost$core$UInt32 $tmp201 = frost$core$UInt32$init$builtin_uint32($tmp200);
return $tmp201;

}
frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 328
int16_t $tmp202 = param0.value;
uint64_t $tmp203 = param1.value;
uint64_t $tmp204 = ((uint64_t) $tmp202) & $tmp203;
frost$core$UInt64 $tmp205 = frost$core$UInt64$init$builtin_uint64($tmp204);
return $tmp205;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 334
int16_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
int32_t $tmp208 = ((int32_t) $tmp206) | ((int32_t) $tmp207);
frost$core$Int32 $tmp209 = frost$core$Int32$init$builtin_int32($tmp208);
return $tmp209;

}
frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 339
int16_t $tmp210 = param0.value;
int16_t $tmp211 = param1.value;
int16_t $tmp212 = $tmp210 | $tmp211;
frost$core$Int16 $tmp213 = frost$core$Int16$init$builtin_int16($tmp212);
return $tmp213;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 345
int16_t $tmp214 = param0.value;
int32_t $tmp215 = param1.value;
int32_t $tmp216 = ((int32_t) $tmp214) | $tmp215;
frost$core$Int32 $tmp217 = frost$core$Int32$init$builtin_int32($tmp216);
return $tmp217;

}
frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 351
int16_t $tmp218 = param0.value;
int64_t $tmp219 = param1.value;
int64_t $tmp220 = ((int64_t) $tmp218) | $tmp219;
frost$core$Int64 $tmp221 = frost$core$Int64$init$builtin_int64($tmp220);
return $tmp221;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 357
int16_t $tmp222 = param0.value;
uint16_t $tmp223 = param1.value;
uint32_t $tmp224 = ((uint32_t) $tmp222) | ((uint32_t) $tmp223);
frost$core$UInt32 $tmp225 = frost$core$UInt32$init$builtin_uint32($tmp224);
return $tmp225;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 363
int16_t $tmp226 = param0.value;
uint32_t $tmp227 = param1.value;
uint32_t $tmp228 = ((uint32_t) $tmp226) | $tmp227;
frost$core$UInt32 $tmp229 = frost$core$UInt32$init$builtin_uint32($tmp228);
return $tmp229;

}
frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 369
int16_t $tmp230 = param0.value;
uint64_t $tmp231 = param1.value;
uint64_t $tmp232 = ((uint64_t) $tmp230) | $tmp231;
frost$core$UInt64 $tmp233 = frost$core$UInt64$init$builtin_uint64($tmp232);
return $tmp233;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 375
int16_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
int32_t $tmp236 = ((int32_t) $tmp234) ^ ((int32_t) $tmp235);
frost$core$Int32 $tmp237 = frost$core$Int32$init$builtin_int32($tmp236);
return $tmp237;

}
frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 380
int16_t $tmp238 = param0.value;
int16_t $tmp239 = param1.value;
int16_t $tmp240 = $tmp238 ^ $tmp239;
frost$core$Int16 $tmp241 = frost$core$Int16$init$builtin_int16($tmp240);
return $tmp241;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 386
int16_t $tmp242 = param0.value;
int32_t $tmp243 = param1.value;
int32_t $tmp244 = ((int32_t) $tmp242) ^ $tmp243;
frost$core$Int32 $tmp245 = frost$core$Int32$init$builtin_int32($tmp244);
return $tmp245;

}
frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 392
int16_t $tmp246 = param0.value;
int64_t $tmp247 = param1.value;
int64_t $tmp248 = ((int64_t) $tmp246) ^ $tmp247;
frost$core$Int64 $tmp249 = frost$core$Int64$init$builtin_int64($tmp248);
return $tmp249;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 398
int16_t $tmp250 = param0.value;
uint16_t $tmp251 = param1.value;
uint32_t $tmp252 = ((uint32_t) $tmp250) ^ ((uint32_t) $tmp251);
frost$core$UInt32 $tmp253 = frost$core$UInt32$init$builtin_uint32($tmp252);
return $tmp253;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 404
int16_t $tmp254 = param0.value;
uint32_t $tmp255 = param1.value;
uint32_t $tmp256 = ((uint32_t) $tmp254) ^ $tmp255;
frost$core$UInt32 $tmp257 = frost$core$UInt32$init$builtin_uint32($tmp256);
return $tmp257;

}
frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 410
int16_t $tmp258 = param0.value;
uint64_t $tmp259 = param1.value;
uint64_t $tmp260 = ((uint64_t) $tmp258) ^ $tmp259;
frost$core$UInt64 $tmp261 = frost$core$UInt64$init$builtin_uint64($tmp260);
return $tmp261;

}
frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 416
int16_t $tmp262 = param0.value;
int16_t $tmp263 = param1.value;
int32_t $tmp264 = ((int32_t) $tmp262) << ((int32_t) $tmp263);
frost$core$Int32 $tmp265 = frost$core$Int32$init$builtin_int32($tmp264);
return $tmp265;

}
frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 421
int16_t $tmp266 = param0.value;
int16_t $tmp267 = param1.value;
int16_t $tmp268 = $tmp266 << $tmp267;
frost$core$Int16 $tmp269 = frost$core$Int16$init$builtin_int16($tmp268);
return $tmp269;

}
frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 427
int16_t $tmp270 = param0.value;
int32_t $tmp271 = param1.value;
int32_t $tmp272 = ((int32_t) $tmp270) << $tmp271;
frost$core$Int32 $tmp273 = frost$core$Int32$init$builtin_int32($tmp272);
return $tmp273;

}
frost$core$Int64 frost$core$Int16$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 433
int16_t $tmp274 = param0.value;
int64_t $tmp275 = param1.value;
int64_t $tmp276 = ((int64_t) $tmp274) << $tmp275;
frost$core$Int64 $tmp277 = frost$core$Int64$init$builtin_int64($tmp276);
return $tmp277;

}
frost$core$UInt32 frost$core$Int16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 439
int16_t $tmp278 = param0.value;
uint16_t $tmp279 = param1.value;
uint32_t $tmp280 = ((uint32_t) $tmp278) << ((uint32_t) $tmp279);
frost$core$UInt32 $tmp281 = frost$core$UInt32$init$builtin_uint32($tmp280);
return $tmp281;

}
frost$core$UInt32 frost$core$Int16$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 445
int16_t $tmp282 = param0.value;
uint32_t $tmp283 = param1.value;
uint32_t $tmp284 = ((uint32_t) $tmp282) << $tmp283;
frost$core$UInt32 $tmp285 = frost$core$UInt32$init$builtin_uint32($tmp284);
return $tmp285;

}
frost$core$UInt64 frost$core$Int16$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 451
int16_t $tmp286 = param0.value;
uint64_t $tmp287 = param1.value;
uint64_t $tmp288 = ((uint64_t) $tmp286) << $tmp287;
frost$core$UInt64 $tmp289 = frost$core$UInt64$init$builtin_uint64($tmp288);
return $tmp289;

}
frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 457
int16_t $tmp290 = param0.value;
int16_t $tmp291 = param1.value;
int32_t $tmp292 = ((int32_t) $tmp290) >> ((int32_t) $tmp291);
frost$core$Int32 $tmp293 = frost$core$Int32$init$builtin_int32($tmp292);
return $tmp293;

}
frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 462
int16_t $tmp294 = param0.value;
int16_t $tmp295 = param1.value;
int16_t $tmp296 = $tmp294 >> $tmp295;
frost$core$Int16 $tmp297 = frost$core$Int16$init$builtin_int16($tmp296);
return $tmp297;

}
frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 468
int16_t $tmp298 = param0.value;
int32_t $tmp299 = param1.value;
int32_t $tmp300 = ((int32_t) $tmp298) >> $tmp299;
frost$core$Int32 $tmp301 = frost$core$Int32$init$builtin_int32($tmp300);
return $tmp301;

}
frost$core$Int64 frost$core$Int16$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 474
int16_t $tmp302 = param0.value;
int64_t $tmp303 = param1.value;
int64_t $tmp304 = ((int64_t) $tmp302) >> $tmp303;
frost$core$Int64 $tmp305 = frost$core$Int64$init$builtin_int64($tmp304);
return $tmp305;

}
frost$core$UInt32 frost$core$Int16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 480
int16_t $tmp306 = param0.value;
uint16_t $tmp307 = param1.value;
uint32_t $tmp308 = ((uint32_t) $tmp306) >> ((uint32_t) $tmp307);
frost$core$UInt32 $tmp309 = frost$core$UInt32$init$builtin_uint32($tmp308);
return $tmp309;

}
frost$core$UInt32 frost$core$Int16$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 486
int16_t $tmp310 = param0.value;
uint32_t $tmp311 = param1.value;
uint32_t $tmp312 = ((uint32_t) $tmp310) >> $tmp311;
frost$core$UInt32 $tmp313 = frost$core$UInt32$init$builtin_uint32($tmp312);
return $tmp313;

}
frost$core$UInt64 frost$core$Int16$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 492
int16_t $tmp314 = param0.value;
uint64_t $tmp315 = param1.value;
uint64_t $tmp316 = ((uint64_t) $tmp314) >> $tmp315;
frost$core$UInt64 $tmp317 = frost$core$UInt64$init$builtin_uint64($tmp316);
return $tmp317;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 498
int16_t $tmp318 = param0.value;
int8_t $tmp319 = param1.value;
bool $tmp320 = $tmp318 == ((int16_t) $tmp319);
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320);
return $tmp321;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 505
int16_t $tmp322 = param0.value;
int16_t $tmp323 = param1.value;
bool $tmp324 = $tmp322 == $tmp323;
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit($tmp324);
return $tmp325;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 511
int16_t $tmp326 = param0.value;
int32_t $tmp327 = param1.value;
bool $tmp328 = ((int32_t) $tmp326) == $tmp327;
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328);
return $tmp329;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 517
int16_t $tmp330 = param0.value;
int64_t $tmp331 = param1.value;
bool $tmp332 = ((int64_t) $tmp330) == $tmp331;
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332);
return $tmp333;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 523
int16_t $tmp334 = param0.value;
uint8_t $tmp335 = param1.value;
bool $tmp336 = ((int32_t) $tmp334) == ((int32_t) $tmp335);
frost$core$Bit $tmp337 = frost$core$Bit$init$builtin_bit($tmp336);
return $tmp337;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 529
int16_t $tmp338 = param0.value;
uint16_t $tmp339 = param1.value;
bool $tmp340 = ((int32_t) $tmp338) == ((int32_t) $tmp339);
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit($tmp340);
return $tmp341;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 535
int16_t $tmp342 = param0.value;
uint32_t $tmp343 = param1.value;
bool $tmp344 = ((int64_t) $tmp342) == ((int64_t) $tmp343);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344);
return $tmp345;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 541
int16_t $tmp346 = param0.value;
int8_t $tmp347 = param1.value;
bool $tmp348 = $tmp346 != ((int16_t) $tmp347);
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348);
return $tmp349;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 548
int16_t $tmp350 = param0.value;
int16_t $tmp351 = param1.value;
bool $tmp352 = $tmp350 != $tmp351;
frost$core$Bit $tmp353 = frost$core$Bit$init$builtin_bit($tmp352);
return $tmp353;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 554
int16_t $tmp354 = param0.value;
int32_t $tmp355 = param1.value;
bool $tmp356 = ((int32_t) $tmp354) != $tmp355;
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356);
return $tmp357;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 560
int16_t $tmp358 = param0.value;
int64_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) != $tmp359;
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360);
return $tmp361;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 566
int16_t $tmp362 = param0.value;
uint8_t $tmp363 = param1.value;
bool $tmp364 = ((int32_t) $tmp362) != ((int32_t) $tmp363);
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364);
return $tmp365;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 572
int16_t $tmp366 = param0.value;
uint16_t $tmp367 = param1.value;
bool $tmp368 = ((int32_t) $tmp366) != ((int32_t) $tmp367);
frost$core$Bit $tmp369 = frost$core$Bit$init$builtin_bit($tmp368);
return $tmp369;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 578
int16_t $tmp370 = param0.value;
uint32_t $tmp371 = param1.value;
bool $tmp372 = ((int64_t) $tmp370) != ((int64_t) $tmp371);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372);
return $tmp373;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 584
int16_t $tmp374 = param0.value;
int8_t $tmp375 = param1.value;
bool $tmp376 = $tmp374 < ((int16_t) $tmp375);
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit($tmp376);
return $tmp377;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 591
int16_t $tmp378 = param0.value;
int16_t $tmp379 = param1.value;
bool $tmp380 = $tmp378 < $tmp379;
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380);
return $tmp381;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 597
int16_t $tmp382 = param0.value;
int32_t $tmp383 = param1.value;
bool $tmp384 = ((int32_t) $tmp382) < $tmp383;
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384);
return $tmp385;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 603
int16_t $tmp386 = param0.value;
int64_t $tmp387 = param1.value;
bool $tmp388 = ((int64_t) $tmp386) < $tmp387;
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit($tmp388);
return $tmp389;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 609
int16_t $tmp390 = param0.value;
uint8_t $tmp391 = param1.value;
bool $tmp392 = ((int32_t) $tmp390) < ((int32_t) $tmp391);
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit($tmp392);
return $tmp393;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 615
int16_t $tmp394 = param0.value;
uint16_t $tmp395 = param1.value;
bool $tmp396 = ((int32_t) $tmp394) < ((int32_t) $tmp395);
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit($tmp396);
return $tmp397;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 621
int16_t $tmp398 = param0.value;
uint32_t $tmp399 = param1.value;
bool $tmp400 = ((int64_t) $tmp398) < ((int64_t) $tmp399);
frost$core$Bit $tmp401 = frost$core$Bit$init$builtin_bit($tmp400);
return $tmp401;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 627
int16_t $tmp402 = param0.value;
int8_t $tmp403 = param1.value;
bool $tmp404 = $tmp402 > ((int16_t) $tmp403);
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404);
return $tmp405;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 634
int16_t $tmp406 = param0.value;
int16_t $tmp407 = param1.value;
bool $tmp408 = $tmp406 > $tmp407;
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit($tmp408);
return $tmp409;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 640
int16_t $tmp410 = param0.value;
int32_t $tmp411 = param1.value;
bool $tmp412 = ((int32_t) $tmp410) > $tmp411;
frost$core$Bit $tmp413 = frost$core$Bit$init$builtin_bit($tmp412);
return $tmp413;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 646
int16_t $tmp414 = param0.value;
int64_t $tmp415 = param1.value;
bool $tmp416 = ((int64_t) $tmp414) > $tmp415;
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit($tmp416);
return $tmp417;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 652
int16_t $tmp418 = param0.value;
uint8_t $tmp419 = param1.value;
bool $tmp420 = ((int32_t) $tmp418) > ((int32_t) $tmp419);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420);
return $tmp421;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 658
int16_t $tmp422 = param0.value;
uint16_t $tmp423 = param1.value;
bool $tmp424 = ((int32_t) $tmp422) > ((int32_t) $tmp423);
frost$core$Bit $tmp425 = frost$core$Bit$init$builtin_bit($tmp424);
return $tmp425;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 664
int16_t $tmp426 = param0.value;
uint32_t $tmp427 = param1.value;
bool $tmp428 = ((int64_t) $tmp426) > ((int64_t) $tmp427);
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428);
return $tmp429;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 670
int16_t $tmp430 = param0.value;
int8_t $tmp431 = param1.value;
bool $tmp432 = $tmp430 >= ((int16_t) $tmp431);
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit($tmp432);
return $tmp433;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 677
int16_t $tmp434 = param0.value;
int16_t $tmp435 = param1.value;
bool $tmp436 = $tmp434 >= $tmp435;
frost$core$Bit $tmp437 = frost$core$Bit$init$builtin_bit($tmp436);
return $tmp437;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 683
int16_t $tmp438 = param0.value;
int32_t $tmp439 = param1.value;
bool $tmp440 = ((int32_t) $tmp438) >= $tmp439;
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440);
return $tmp441;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 689
int16_t $tmp442 = param0.value;
int64_t $tmp443 = param1.value;
bool $tmp444 = ((int64_t) $tmp442) >= $tmp443;
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit($tmp444);
return $tmp445;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 695
int16_t $tmp446 = param0.value;
uint8_t $tmp447 = param1.value;
bool $tmp448 = ((int32_t) $tmp446) >= ((int32_t) $tmp447);
frost$core$Bit $tmp449 = frost$core$Bit$init$builtin_bit($tmp448);
return $tmp449;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 701
int16_t $tmp450 = param0.value;
uint16_t $tmp451 = param1.value;
bool $tmp452 = ((int32_t) $tmp450) >= ((int32_t) $tmp451);
frost$core$Bit $tmp453 = frost$core$Bit$init$builtin_bit($tmp452);
return $tmp453;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 707
int16_t $tmp454 = param0.value;
uint32_t $tmp455 = param1.value;
bool $tmp456 = ((int64_t) $tmp454) >= ((int64_t) $tmp455);
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456);
return $tmp457;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 713
int16_t $tmp458 = param0.value;
int8_t $tmp459 = param1.value;
bool $tmp460 = $tmp458 <= ((int16_t) $tmp459);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460);
return $tmp461;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 720
int16_t $tmp462 = param0.value;
int16_t $tmp463 = param1.value;
bool $tmp464 = $tmp462 <= $tmp463;
frost$core$Bit $tmp465 = frost$core$Bit$init$builtin_bit($tmp464);
return $tmp465;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 726
int16_t $tmp466 = param0.value;
int32_t $tmp467 = param1.value;
bool $tmp468 = ((int32_t) $tmp466) <= $tmp467;
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit($tmp468);
return $tmp469;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 732
int16_t $tmp470 = param0.value;
int64_t $tmp471 = param1.value;
bool $tmp472 = ((int64_t) $tmp470) <= $tmp471;
frost$core$Bit $tmp473 = frost$core$Bit$init$builtin_bit($tmp472);
return $tmp473;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 738
int16_t $tmp474 = param0.value;
uint8_t $tmp475 = param1.value;
bool $tmp476 = ((int32_t) $tmp474) <= ((int32_t) $tmp475);
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit($tmp476);
return $tmp477;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 744
int16_t $tmp478 = param0.value;
uint16_t $tmp479 = param1.value;
bool $tmp480 = ((int32_t) $tmp478) <= ((int32_t) $tmp479);
frost$core$Bit $tmp481 = frost$core$Bit$init$builtin_bit($tmp480);
return $tmp481;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 750
int16_t $tmp482 = param0.value;
uint32_t $tmp483 = param1.value;
bool $tmp484 = ((int64_t) $tmp482) <= ((int64_t) $tmp483);
frost$core$Bit $tmp485 = frost$core$Bit$init$builtin_bit($tmp484);
return $tmp485;

}
frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16(frost$core$Int16 param0) {

// line 756
frost$core$Int16 $tmp486 = (frost$core$Int16) {0};
int16_t $tmp487 = param0.value;
int16_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 < $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block1; else goto block2;
block1:;
// line 757
frost$core$Int16 $tmp492 = frost$core$Int16$$SUB$R$frost$core$Int16(param0);
return $tmp492;
block2:;
// line 759
return param0;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 765
int16_t $tmp493 = param0.value;
int8_t $tmp494 = param1.value;
bool $tmp495 = $tmp493 < ((int16_t) $tmp494);
frost$core$Bit $tmp496 = frost$core$Bit$init$builtin_bit($tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block1; else goto block2;
block1:;
// line 766
int16_t $tmp498 = param0.value;
frost$core$Int16 $tmp499 = frost$core$Int16$init$builtin_int16($tmp498);
return $tmp499;
block2:;
// line 768
int8_t $tmp500 = param1.value;
frost$core$Int16 $tmp501 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp500));
return $tmp501;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 774
int16_t $tmp502 = param0.value;
int16_t $tmp503 = param1.value;
bool $tmp504 = $tmp502 < $tmp503;
frost$core$Bit $tmp505 = frost$core$Bit$init$builtin_bit($tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block1:;
// line 775
int16_t $tmp507 = param0.value;
frost$core$Int16 $tmp508 = frost$core$Int16$init$builtin_int16($tmp507);
return $tmp508;
block2:;
// line 777
int16_t $tmp509 = param1.value;
frost$core$Int16 $tmp510 = frost$core$Int16$init$builtin_int16($tmp509);
return $tmp510;

}
frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 783
int16_t $tmp511 = param0.value;
int32_t $tmp512 = param1.value;
bool $tmp513 = ((int32_t) $tmp511) < $tmp512;
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block1; else goto block2;
block1:;
// line 784
int16_t $tmp516 = param0.value;
frost$core$Int32 $tmp517 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp516));
return $tmp517;
block2:;
// line 786
int32_t $tmp518 = param1.value;
frost$core$Int32 $tmp519 = frost$core$Int32$init$builtin_int32($tmp518);
return $tmp519;

}
frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 792
int16_t $tmp520 = param0.value;
int64_t $tmp521 = param1.value;
bool $tmp522 = ((int64_t) $tmp520) < $tmp521;
frost$core$Bit $tmp523 = frost$core$Bit$init$builtin_bit($tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block1; else goto block2;
block1:;
// line 793
int16_t $tmp525 = param0.value;
frost$core$Int64 $tmp526 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp525));
return $tmp526;
block2:;
// line 795
int64_t $tmp527 = param1.value;
frost$core$Int64 $tmp528 = frost$core$Int64$init$builtin_int64($tmp527);
return $tmp528;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 801
int16_t $tmp529 = param0.value;
uint8_t $tmp530 = param1.value;
bool $tmp531 = ((int32_t) $tmp529) < ((int32_t) $tmp530);
frost$core$Bit $tmp532 = frost$core$Bit$init$builtin_bit($tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block1; else goto block2;
block1:;
// line 802
int16_t $tmp534 = param0.value;
frost$core$Int32 $tmp535 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp534));
return $tmp535;
block2:;
// line 804
uint8_t $tmp536 = param1.value;
frost$core$Int32 $tmp537 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp536));
return $tmp537;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 810
int16_t $tmp538 = param0.value;
uint16_t $tmp539 = param1.value;
bool $tmp540 = ((int32_t) $tmp538) < ((int32_t) $tmp539);
frost$core$Bit $tmp541 = frost$core$Bit$init$builtin_bit($tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block1; else goto block2;
block1:;
// line 811
int16_t $tmp543 = param0.value;
frost$core$Int32 $tmp544 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp543));
return $tmp544;
block2:;
// line 813
uint16_t $tmp545 = param1.value;
frost$core$Int32 $tmp546 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp545));
return $tmp546;

}
frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 819
int16_t $tmp547 = param0.value;
uint32_t $tmp548 = param1.value;
bool $tmp549 = ((int64_t) $tmp547) < ((int64_t) $tmp548);
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block1:;
// line 820
int16_t $tmp552 = param0.value;
frost$core$Int64 $tmp553 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp552));
return $tmp553;
block2:;
// line 822
uint32_t $tmp554 = param1.value;
frost$core$Int64 $tmp555 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp554));
return $tmp555;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 829
int16_t $tmp556 = param0.value;
int8_t $tmp557 = param1.value;
bool $tmp558 = $tmp556 > ((int16_t) $tmp557);
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block1; else goto block2;
block1:;
// line 830
int16_t $tmp561 = param0.value;
frost$core$Int16 $tmp562 = frost$core$Int16$init$builtin_int16($tmp561);
return $tmp562;
block2:;
// line 832
int8_t $tmp563 = param1.value;
frost$core$Int16 $tmp564 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp563));
return $tmp564;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 838
int16_t $tmp565 = param0.value;
int16_t $tmp566 = param1.value;
bool $tmp567 = $tmp565 > $tmp566;
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block1; else goto block2;
block1:;
// line 839
int16_t $tmp570 = param0.value;
frost$core$Int16 $tmp571 = frost$core$Int16$init$builtin_int16($tmp570);
return $tmp571;
block2:;
// line 841
int16_t $tmp572 = param1.value;
frost$core$Int16 $tmp573 = frost$core$Int16$init$builtin_int16($tmp572);
return $tmp573;

}
frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 847
int16_t $tmp574 = param0.value;
int32_t $tmp575 = param1.value;
bool $tmp576 = ((int32_t) $tmp574) > $tmp575;
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block1; else goto block2;
block1:;
// line 848
int16_t $tmp579 = param0.value;
frost$core$Int32 $tmp580 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp579));
return $tmp580;
block2:;
// line 850
int32_t $tmp581 = param1.value;
frost$core$Int32 $tmp582 = frost$core$Int32$init$builtin_int32($tmp581);
return $tmp582;

}
frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 856
int16_t $tmp583 = param0.value;
int64_t $tmp584 = param1.value;
bool $tmp585 = ((int64_t) $tmp583) > $tmp584;
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit($tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block1; else goto block2;
block1:;
// line 857
int16_t $tmp588 = param0.value;
frost$core$Int64 $tmp589 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp588));
return $tmp589;
block2:;
// line 859
int64_t $tmp590 = param1.value;
frost$core$Int64 $tmp591 = frost$core$Int64$init$builtin_int64($tmp590);
return $tmp591;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 865
int16_t $tmp592 = param0.value;
uint8_t $tmp593 = param1.value;
bool $tmp594 = ((int32_t) $tmp592) > ((int32_t) $tmp593);
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block1; else goto block2;
block1:;
// line 866
int16_t $tmp597 = param0.value;
frost$core$Int32 $tmp598 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp597));
return $tmp598;
block2:;
// line 868
uint8_t $tmp599 = param1.value;
frost$core$Int32 $tmp600 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp599));
return $tmp600;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 874
int16_t $tmp601 = param0.value;
uint16_t $tmp602 = param1.value;
bool $tmp603 = ((int32_t) $tmp601) > ((int32_t) $tmp602);
frost$core$Bit $tmp604 = frost$core$Bit$init$builtin_bit($tmp603);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block1; else goto block2;
block1:;
// line 875
int16_t $tmp606 = param0.value;
frost$core$Int32 $tmp607 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp606));
return $tmp607;
block2:;
// line 877
uint16_t $tmp608 = param1.value;
frost$core$Int32 $tmp609 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp608));
return $tmp609;

}
frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 883
int16_t $tmp610 = param0.value;
uint32_t $tmp611 = param1.value;
bool $tmp612 = ((int64_t) $tmp610) > ((int64_t) $tmp611);
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit($tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block1:;
// line 884
int16_t $tmp615 = param0.value;
frost$core$Int64 $tmp616 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp615));
return $tmp616;
block2:;
// line 886
uint32_t $tmp617 = param1.value;
frost$core$Int64 $tmp618 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp617));
return $tmp618;

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$Range$LTfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$Range$LTfrost$core$Int16$GT param0) {

// line 892
org$frostlang$frost$Int16List* $tmp619 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
frost$core$Int16 $tmp620 = param0.min;
frost$core$Int16 $tmp621 = param0.max;
frost$core$Int16 $tmp622 = (frost$core$Int16) {1};
frost$core$Bit $tmp623 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp624 = frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$init$frost$core$Int16$frost$core$Int16$frost$core$Int16$frost$core$Bit($tmp620, $tmp621, $tmp622, $tmp623);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp619, $tmp624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp619)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing REF($1:org.frostlang.frost.Int16List)
return ((frost$collections$ListView*) $tmp619);

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

// line 897
org$frostlang$frost$Int16List* $tmp625 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp625, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp625)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($1:org.frostlang.frost.Int16List)
return ((frost$collections$ListView*) $tmp625);

}
frost$core$Bit frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp626 = (frost$core$Int64) {0};
int64_t $tmp627 = param1.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 >= $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block1; else goto block2;
block1:;
frost$core$Int16$wrapper* $tmp632;
$tmp632 = (frost$core$Int16$wrapper*) frostObjectAlloc(14, (frost$core$Class*) &frost$core$Int16$wrapperclass);
$tmp632->value = param0;
ITable* $tmp633 = ((frost$collections$CollectionView*) $tmp632)->$class->itable;
while ($tmp633->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp633 = $tmp633->next;
}
$fn635 $tmp634 = $tmp633->methods[0];
frost$core$Int64 $tmp636 = $tmp634(((frost$collections$CollectionView*) $tmp632));
int64_t $tmp637 = param1.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 < $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp632)));
// unreffing REF($7:frost.collections.CollectionView)
*(&local0) = $tmp640;
goto block3;
block2:;
*(&local0) = $tmp630;
goto block3;
block3:;
frost$core$Bit $tmp641 = *(&local0);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {902};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s644, $tmp643, &$s645);
abort(); // unreachable
block4:;
// line 903
frost$core$Int64 $tmp646 = (frost$core$Int64) {1};
frost$core$Int64 $tmp647 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp646, param1);
frost$core$Int64 $tmp648 = frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp647);
frost$core$Int64 $tmp649 = (frost$core$Int64) {0};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 != $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
return $tmp653;

}
frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64(frost$core$Int16 param0) {

// line 909
frost$core$Int64 $tmp654 = (frost$core$Int64) {16};
return $tmp654;

}
frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int16 param0) {

// line 914
org$frostlang$frost$IntBitIterator* $tmp655 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp656 = frost$core$Int16$convert$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp657 = (frost$core$UInt64) {32768};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp655, $tmp656, $tmp657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp655)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($1:org.frostlang.frost.IntBitIterator)
return ((frost$collections$Iterator*) $tmp655);

}
frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64(frost$core$Int16 param0) {

// line 919
int16_t $tmp658 = param0.value;
frost$core$Int64 $tmp659 = (frost$core$Int64) {((int64_t) $tmp658)};
return $tmp659;

}
frost$core$Int16$nullable frost$core$Int16$parse$frost$core$String$frost$core$Int64$R$frost$core$Int16$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$UInt64$nullable local1;
frost$core$UInt64$nullable local2;
frost$core$Int64 $tmp660 = (frost$core$Int64) {2};
int64_t $tmp661 = param1.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 >= $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp666 = (frost$core$Int64) {36};
int64_t $tmp667 = param1.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 <= $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
*(&local0) = $tmp670;
goto block3;
block2:;
*(&local0) = $tmp664;
goto block3;
block3:;
frost$core$Bit $tmp671 = *(&local0);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp673 = (frost$core$Int64) {925};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block4:;
// line 926
frost$core$Bit $tmp676 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s677);
bool $tmp678 = $tmp676.value;
if ($tmp678) goto block6; else goto block8;
block6:;
// line 927
frost$core$Int64 $tmp679 = (frost$core$Int64) {1};
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp681 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp679, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp680);
frost$core$String* $tmp682 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp681);
frost$core$UInt64$nullable $tmp683 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp682, param1);
*(&local1) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($31:frost.core.String)
// line 928
frost$core$UInt64$nullable $tmp684 = *(&local1);
frost$core$Bit $tmp685 = frost$core$Bit$init$builtin_bit(!$tmp684.nonnull);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block9; else goto block10;
block9:;
// line 929
return ((frost$core$Int16$nullable) { .nonnull = false });
block10:;
// line 931
frost$core$UInt64$nullable $tmp687 = *(&local1);
frost$core$Bit $tmp688 = frost$core$Bit$init$builtin_bit($tmp687.nonnull);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp690 = (frost$core$Int64) {931};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s691, $tmp690, &$s692);
abort(); // unreachable
block11:;
frost$core$Int16 $tmp693 = frost$core$UInt64$convert$R$frost$core$Int16(((frost$core$UInt64) $tmp687.value));
frost$core$Int16 $tmp694 = frost$core$Int16$$SUB$R$frost$core$Int16($tmp693);
return ((frost$core$Int16$nullable) { $tmp694, true });
block8:;
// line 1
// line 934
frost$core$UInt64$nullable $tmp695 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local2) = $tmp695;
// line 935
frost$core$UInt64$nullable $tmp696 = *(&local2);
frost$core$Bit $tmp697 = frost$core$Bit$init$builtin_bit(!$tmp696.nonnull);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block13; else goto block14;
block13:;
// line 936
return ((frost$core$Int16$nullable) { .nonnull = false });
block14:;
// line 938
frost$core$UInt64$nullable $tmp699 = *(&local2);
frost$core$Bit $tmp700 = frost$core$Bit$init$builtin_bit($tmp699.nonnull);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp702 = (frost$core$Int64) {938};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s703, $tmp702, &$s704);
abort(); // unreachable
block15:;
frost$core$Int16 $tmp705 = frost$core$UInt64$convert$R$frost$core$Int16(((frost$core$UInt64) $tmp699.value));
return ((frost$core$Int16$nullable) { $tmp705, true });
block7:;
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit(false);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {925};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s709, $tmp708, &$s710);
abort(); // unreachable
block17:;
abort(); // unreachable

}
frost$core$Int8 frost$core$Int16$convert$R$frost$core$Int8(frost$core$Int16 param0) {

// line 944
int16_t $tmp711 = param0.value;
frost$core$Int8 $tmp712 = (frost$core$Int8) {((int8_t) $tmp711)};
return $tmp712;

}
frost$core$Int32 frost$core$Int16$convert$R$frost$core$Int32(frost$core$Int16 param0) {

// line 949
int16_t $tmp713 = param0.value;
frost$core$Int32 $tmp714 = (frost$core$Int32) {((int32_t) $tmp713)};
return $tmp714;

}
frost$core$Int64 frost$core$Int16$convert$R$frost$core$Int64(frost$core$Int16 param0) {

// line 954
int16_t $tmp715 = param0.value;
frost$core$Int64 $tmp716 = (frost$core$Int64) {((int64_t) $tmp715)};
return $tmp716;

}
frost$core$UInt8 frost$core$Int16$convert$R$frost$core$UInt8(frost$core$Int16 param0) {

// line 959
int16_t $tmp717 = param0.value;
frost$core$UInt8 $tmp718 = (frost$core$UInt8) {((uint8_t) $tmp717)};
return $tmp718;

}
frost$core$UInt16 frost$core$Int16$convert$R$frost$core$UInt16(frost$core$Int16 param0) {

// line 964
int16_t $tmp719 = param0.value;
frost$core$UInt16 $tmp720 = (frost$core$UInt16) {((uint16_t) $tmp719)};
return $tmp720;

}
frost$core$UInt32 frost$core$Int16$convert$R$frost$core$UInt32(frost$core$Int16 param0) {

// line 969
int16_t $tmp721 = param0.value;
frost$core$UInt32 $tmp722 = (frost$core$UInt32) {((uint32_t) $tmp721)};
return $tmp722;

}
frost$core$UInt64 frost$core$Int16$convert$R$frost$core$UInt64(frost$core$Int16 param0) {

// line 974
int16_t $tmp723 = param0.value;
frost$core$UInt64 $tmp724 = (frost$core$UInt64) {((uint64_t) $tmp723)};
return $tmp724;

}
frost$core$Real32 frost$core$Int16$convert$R$frost$core$Real32(frost$core$Int16 param0) {

// line 979
int16_t $tmp725 = param0.value;
frost$core$Real32 $tmp726 = (frost$core$Real32) {((float) $tmp725)};
return $tmp726;

}
frost$core$Real64 frost$core$Int16$convert$R$frost$core$Real64(frost$core$Int16 param0) {

// line 984
int16_t $tmp727 = param0.value;
frost$core$Real64 $tmp728 = (frost$core$Real64) {((double) $tmp727)};
return $tmp728;

}
frost$core$String* frost$core$Int16$convert$R$frost$core$String(frost$core$Int16 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int16 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 990
frost$core$Int64 $tmp729 = (frost$core$Int64) {6};
*(&local0) = $tmp729;
// line 991
frost$core$Int64 $tmp730 = *(&local0);
int64_t $tmp731 = $tmp730.value;
frost$core$Char8* $tmp732 = ((frost$core$Char8*) frostAlloc($tmp731 * 1));
*(&local1) = $tmp732;
// line 992
frost$core$Int64 $tmp733 = *(&local0);
frost$core$Int64 $tmp734 = (frost$core$Int64) {1};
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 - $tmp736;
frost$core$Int64 $tmp738 = (frost$core$Int64) {$tmp737};
*(&local2) = $tmp738;
// line 993
*(&local3) = param0;
// line 994
frost$core$Int16 $tmp739 = *(&local3);
frost$core$Int16 $tmp740 = (frost$core$Int16) {0};
int16_t $tmp741 = $tmp739.value;
int16_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 >= $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block1; else goto block3;
block1:;
// line 995
goto block4;
block4:;
// line 996
frost$core$Char8* $tmp746 = *(&local1);
frost$core$Int64 $tmp747 = *(&local2);
frost$core$Int16 $tmp748 = *(&local3);
frost$core$Int16 $tmp749 = (frost$core$Int16) {10};
frost$core$Int32 $tmp750 = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32($tmp748, $tmp749);
frost$core$Int32 $tmp751 = (frost$core$Int32) {48};
int32_t $tmp752 = $tmp750.value;
int32_t $tmp753 = $tmp751.value;
int32_t $tmp754 = $tmp752 + $tmp753;
frost$core$Int32 $tmp755 = (frost$core$Int32) {$tmp754};
frost$core$UInt8 $tmp756 = frost$core$Int32$convert$R$frost$core$UInt8($tmp755);
frost$core$Char8 $tmp757 = frost$core$Char8$init$frost$core$UInt8($tmp756);
int64_t $tmp758 = $tmp747.value;
$tmp746[$tmp758] = $tmp757;
// line 997
frost$core$Int16 $tmp759 = *(&local3);
frost$core$Int32 $tmp760 = frost$core$Int32$init$frost$core$Int16($tmp759);
frost$core$Int32 $tmp761 = (frost$core$Int32) {10};
int32_t $tmp762 = $tmp760.value;
int32_t $tmp763 = $tmp761.value;
int32_t $tmp764 = $tmp762 / $tmp763;
frost$core$Int32 $tmp765 = (frost$core$Int32) {$tmp764};
frost$core$Int16 $tmp766 = frost$core$Int32$convert$R$frost$core$Int16($tmp765);
*(&local3) = $tmp766;
// line 998
frost$core$Int64 $tmp767 = *(&local2);
frost$core$Int64 $tmp768 = (frost$core$Int64) {1};
int64_t $tmp769 = $tmp767.value;
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769 - $tmp770;
frost$core$Int64 $tmp772 = (frost$core$Int64) {$tmp771};
*(&local2) = $tmp772;
goto block5;
block5:;
frost$core$Int16 $tmp773 = *(&local3);
frost$core$Int16 $tmp774 = (frost$core$Int16) {0};
int16_t $tmp775 = $tmp773.value;
int16_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 > $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block4; else goto block6;
block6:;
// line 1001
frost$core$Int64 $tmp780 = *(&local2);
frost$core$Int64 $tmp781 = (frost$core$Int64) {1};
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782 + $tmp783;
frost$core$Int64 $tmp785 = (frost$core$Int64) {$tmp784};
*(&local2) = $tmp785;
goto block2;
block3:;
// line 1
// line 1004
goto block7;
block7:;
// line 1005
frost$core$Char8* $tmp786 = *(&local1);
frost$core$Int64 $tmp787 = *(&local2);
frost$core$Int32 $tmp788 = (frost$core$Int32) {48};
frost$core$Int16 $tmp789 = *(&local3);
frost$core$Int16 $tmp790 = (frost$core$Int16) {10};
frost$core$Int32 $tmp791 = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32($tmp789, $tmp790);
int32_t $tmp792 = $tmp788.value;
int32_t $tmp793 = $tmp791.value;
int32_t $tmp794 = $tmp792 - $tmp793;
frost$core$Int32 $tmp795 = (frost$core$Int32) {$tmp794};
frost$core$UInt8 $tmp796 = frost$core$Int32$convert$R$frost$core$UInt8($tmp795);
frost$core$Char8 $tmp797 = frost$core$Char8$init$frost$core$UInt8($tmp796);
int64_t $tmp798 = $tmp787.value;
$tmp786[$tmp798] = $tmp797;
// line 1006
frost$core$Int16 $tmp799 = *(&local3);
frost$core$Int32 $tmp800 = frost$core$Int32$init$frost$core$Int16($tmp799);
frost$core$Int32 $tmp801 = (frost$core$Int32) {10};
int32_t $tmp802 = $tmp800.value;
int32_t $tmp803 = $tmp801.value;
int32_t $tmp804 = $tmp802 / $tmp803;
frost$core$Int32 $tmp805 = (frost$core$Int32) {$tmp804};
frost$core$Int16 $tmp806 = frost$core$Int32$convert$R$frost$core$Int16($tmp805);
*(&local3) = $tmp806;
// line 1007
frost$core$Int64 $tmp807 = *(&local2);
frost$core$Int64 $tmp808 = (frost$core$Int64) {1};
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809 - $tmp810;
frost$core$Int64 $tmp812 = (frost$core$Int64) {$tmp811};
*(&local2) = $tmp812;
goto block8;
block8:;
frost$core$Int16 $tmp813 = *(&local3);
frost$core$Int16 $tmp814 = (frost$core$Int16) {0};
int16_t $tmp815 = $tmp813.value;
int16_t $tmp816 = $tmp814.value;
bool $tmp817 = $tmp815 < $tmp816;
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block7; else goto block9;
block9:;
// line 1010
frost$core$Char8* $tmp820 = *(&local1);
frost$core$Int64 $tmp821 = *(&local2);
frost$core$UInt8 $tmp822 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp823 = frost$core$Char8$init$frost$core$UInt8($tmp822);
int64_t $tmp824 = $tmp821.value;
$tmp820[$tmp824] = $tmp823;
goto block2;
block2:;
// line 1012
frost$core$Int64 $tmp825 = *(&local0);
frost$core$Int64 $tmp826 = *(&local2);
int64_t $tmp827 = $tmp825.value;
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827 - $tmp828;
frost$core$Int64 $tmp830 = (frost$core$Int64) {$tmp829};
*(&local4) = $tmp830;
// line 1013
frost$core$Int64 $tmp831 = (frost$core$Int64) {0};
frost$core$Int64 $tmp832 = *(&local4);
frost$core$Bit $tmp833 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp834 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp831, $tmp832, $tmp833);
frost$core$Int64 $tmp835 = $tmp834.min;
*(&local5) = $tmp835;
frost$core$Int64 $tmp836 = $tmp834.max;
frost$core$Bit $tmp837 = $tmp834.inclusive;
bool $tmp838 = $tmp837.value;
frost$core$Int64 $tmp839 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp840 = frost$core$Int64$convert$R$frost$core$UInt64($tmp839);
if ($tmp838) goto block13; else goto block14;
block13:;
int64_t $tmp841 = $tmp835.value;
int64_t $tmp842 = $tmp836.value;
bool $tmp843 = $tmp841 <= $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block10; else goto block11;
block14:;
int64_t $tmp846 = $tmp835.value;
int64_t $tmp847 = $tmp836.value;
bool $tmp848 = $tmp846 < $tmp847;
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block10; else goto block11;
block10:;
// line 1014
frost$core$Char8* $tmp851 = *(&local1);
frost$core$Int64 $tmp852 = *(&local5);
frost$core$Char8* $tmp853 = *(&local1);
frost$core$Int64 $tmp854 = *(&local5);
frost$core$Int64 $tmp855 = *(&local2);
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855.value;
int64_t $tmp858 = $tmp856 + $tmp857;
frost$core$Int64 $tmp859 = (frost$core$Int64) {$tmp858};
int64_t $tmp860 = $tmp859.value;
frost$core$Char8 $tmp861 = $tmp853[$tmp860];
int64_t $tmp862 = $tmp852.value;
$tmp851[$tmp862] = $tmp861;
goto block12;
block12:;
frost$core$Int64 $tmp863 = *(&local5);
int64_t $tmp864 = $tmp836.value;
int64_t $tmp865 = $tmp863.value;
int64_t $tmp866 = $tmp864 - $tmp865;
frost$core$Int64 $tmp867 = (frost$core$Int64) {$tmp866};
frost$core$UInt64 $tmp868 = frost$core$Int64$convert$R$frost$core$UInt64($tmp867);
if ($tmp838) goto block16; else goto block17;
block16:;
uint64_t $tmp869 = $tmp868.value;
uint64_t $tmp870 = $tmp840.value;
bool $tmp871 = $tmp869 >= $tmp870;
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block15; else goto block11;
block17:;
uint64_t $tmp874 = $tmp868.value;
uint64_t $tmp875 = $tmp840.value;
bool $tmp876 = $tmp874 > $tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block15; else goto block11;
block15:;
int64_t $tmp879 = $tmp863.value;
int64_t $tmp880 = $tmp839.value;
int64_t $tmp881 = $tmp879 + $tmp880;
frost$core$Int64 $tmp882 = (frost$core$Int64) {$tmp881};
*(&local5) = $tmp882;
goto block10;
block11:;
// line 1016
frost$core$String* $tmp883 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp884 = *(&local1);
frost$core$Int64 $tmp885 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp883, $tmp884, $tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($207:frost.core.String)
return $tmp883;

}
frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String(frost$core$Int16 param0, frost$core$String* param1) {

// line 1022
int16_t $tmp886 = param0.value;
bool $tmp887 = $tmp886 < 0;
frost$core$Bit $tmp888 = frost$core$Bit$init$builtin_bit($tmp887);
frost$core$Int16 $tmp889 = frost$core$Int16$get_abs$R$frost$core$Int16(param0);
frost$core$UInt64 $tmp890 = frost$core$Int16$convert$R$frost$core$UInt64($tmp889);
frost$core$UInt64 $tmp891 = (frost$core$UInt64) {65535};
frost$core$String* $tmp892 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp888, $tmp890, $tmp891, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing REF($7:frost.core.String)
return $tmp892;

}
void frost$core$Int16$cleanup(frost$core$Int16 param0) {

return;

}

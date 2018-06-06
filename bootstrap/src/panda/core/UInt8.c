#include "panda/core/UInt8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Int16.h"
#include "panda/core/Int8.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Range.LTpanda/core/UInt8.GT.h"
#include "org/pandalanguage/panda/UInt8List.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$get_count$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$UInt8$format$panda$core$String$R$panda$core$String(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$hash$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt8$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt8$convert$R$panda$core$String(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt8$$SUB$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt8$$BNOT$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$UInt8$convert$R$panda$core$Int8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$UInt8$convert$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$UInt8$convert$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$convert$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt8$convert$R$panda$core$UInt16(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$UInt8$convert$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt8$convert$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$UInt8$convert$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$UInt8$convert$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$UInt8$cleanup$shim(panda$core$Object* p0) {
    panda$core$UInt8$cleanup(((panda$core$UInt8$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt8$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt8$_panda$collections$CollectionView, { panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$core$UInt8$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt8$_panda$core$Comparable, { panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$_panda$collections$ListView, { panda$core$UInt8$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt8$_panda$core$Equatable, { panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$UInt8$class_type panda$core$UInt8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$_panda$collections$Iterable, { panda$core$UInt8$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SUB$R$panda$core$UInt8$shim, panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt8$$BNOT$R$panda$core$UInt8$shim, panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$UInt8$hash$R$panda$core$Int64$shim, panda$core$UInt8$convert$R$panda$core$Int8$shim, panda$core$UInt8$convert$R$panda$core$Int16$shim, panda$core$UInt8$convert$R$panda$core$Int32$shim, panda$core$UInt8$convert$R$panda$core$Int64$shim, panda$core$UInt8$convert$R$panda$core$UInt16$shim, panda$core$UInt8$convert$R$panda$core$UInt32$shim, panda$core$UInt8$convert$R$panda$core$UInt64$shim, panda$core$UInt8$convert$R$panda$core$Real32$shim, panda$core$UInt8$convert$R$panda$core$Real64$shim, panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt8$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt8$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$CollectionView, { panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[8]; } panda$core$UInt8$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Comparable, { panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$ListView, { panda$core$UInt8$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Equatable, { panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$UInt8$wrapperclass_type panda$core$UInt8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$Iterable, { panda$core$UInt8$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 11, 3554322233707747815, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -5754874742162034774, NULL };

void panda$core$UInt8$init$builtin_uint8(panda$core$UInt8* self, uint8_t p_value) {
    self->value = p_value;
}
panda$core$Int16 panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue4;
    panda$core$Int16 $tmp5;
    int16_t $tmp6 = ((int16_t) self.value) + ((int16_t) p_other.value);
    panda$core$Int16$init$builtin_int16(&$tmp5, $tmp6);
    $returnValue4 = $tmp5;
    return $returnValue4;
}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue8;
    panda$core$Int32 $tmp9;
    int32_t $tmp10 = ((int32_t) self.value) + ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp9, $tmp10);
    $returnValue8 = $tmp9;
    return $returnValue8;
}
panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue12;
    panda$core$Int64 $tmp13;
    int64_t $tmp14 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp13, $tmp14);
    $returnValue12 = $tmp13;
    return $returnValue12;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue16;
    panda$core$UInt32 $tmp17;
    uint32_t $tmp18 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp17, $tmp18);
    $returnValue16 = $tmp17;
    return $returnValue16;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue20;
    panda$core$UInt32 $tmp21;
    uint32_t $tmp22 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp21, $tmp22);
    $returnValue20 = $tmp21;
    return $returnValue20;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue24;
    panda$core$UInt32 $tmp25;
    uint32_t $tmp26 = ((uint32_t) self.value) + p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp25, $tmp26);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue28;
    panda$core$UInt64 $tmp29;
    uint64_t $tmp30 = ((uint64_t) self.value) + p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp29, $tmp30);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$Int16 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue32;
    panda$core$Int16 $tmp33;
    int16_t $tmp34 = ((int16_t) self.value) - ((int16_t) p_other.value);
    panda$core$Int16$init$builtin_int16(&$tmp33, $tmp34);
    $returnValue32 = $tmp33;
    return $returnValue32;
}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue36;
    panda$core$Int32 $tmp37;
    int32_t $tmp38 = ((int32_t) self.value) - ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp37, $tmp38);
    $returnValue36 = $tmp37;
    return $returnValue36;
}
panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue40;
    panda$core$Int64 $tmp41;
    int64_t $tmp42 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp41, $tmp42);
    $returnValue40 = $tmp41;
    return $returnValue40;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue44;
    panda$core$UInt32 $tmp45;
    uint32_t $tmp46 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp45, $tmp46);
    $returnValue44 = $tmp45;
    return $returnValue44;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue48;
    panda$core$UInt32 $tmp49;
    uint32_t $tmp50 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp49, $tmp50);
    $returnValue48 = $tmp49;
    return $returnValue48;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue52;
    panda$core$UInt32 $tmp53;
    uint32_t $tmp54 = ((uint32_t) self.value) - p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp53, $tmp54);
    $returnValue52 = $tmp53;
    return $returnValue52;
}
panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue56;
    panda$core$UInt64 $tmp57;
    uint64_t $tmp58 = ((uint64_t) self.value) - p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp57, $tmp58);
    $returnValue56 = $tmp57;
    return $returnValue56;
}
panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $returnValue60;
    panda$core$UInt8 $tmp61;
    panda$core$UInt8$init$builtin_uint8(&$tmp61, -self.value);
    $returnValue60 = $tmp61;
    return $returnValue60;
}
panda$core$Int16 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue64;
    panda$core$Int16 $tmp65;
    int16_t $tmp66 = ((int16_t) self.value) * ((int16_t) p_other.value);
    panda$core$Int16$init$builtin_int16(&$tmp65, $tmp66);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue68;
    panda$core$Int32 $tmp69;
    int32_t $tmp70 = ((int32_t) self.value) * ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp69, $tmp70);
    $returnValue68 = $tmp69;
    return $returnValue68;
}
panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue72;
    panda$core$Int64 $tmp73;
    int64_t $tmp74 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp73, $tmp74);
    $returnValue72 = $tmp73;
    return $returnValue72;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue76;
    panda$core$UInt32 $tmp77;
    uint32_t $tmp78 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp77, $tmp78);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue80;
    panda$core$UInt32 $tmp81;
    uint32_t $tmp82 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp81, $tmp82);
    $returnValue80 = $tmp81;
    return $returnValue80;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue84;
    panda$core$UInt32 $tmp85;
    uint32_t $tmp86 = ((uint32_t) self.value) * p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp85, $tmp86);
    $returnValue84 = $tmp85;
    return $returnValue84;
}
panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue88;
    panda$core$UInt64 $tmp89;
    uint64_t $tmp90 = ((uint64_t) self.value) * p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp89, $tmp90);
    $returnValue88 = $tmp89;
    return $returnValue88;
}
panda$core$Int16 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue92;
    panda$core$Int16 $tmp93;
    int16_t $tmp94 = ((int16_t) self.value) / ((int16_t) p_other.value);
    panda$core$Int16$init$builtin_int16(&$tmp93, $tmp94);
    $returnValue92 = $tmp93;
    return $returnValue92;
}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue96;
    panda$core$Int32 $tmp97;
    int32_t $tmp98 = ((int32_t) self.value) / ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp97, $tmp98);
    $returnValue96 = $tmp97;
    return $returnValue96;
}
panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue100;
    panda$core$Int64 $tmp101;
    int64_t $tmp102 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp101, $tmp102);
    $returnValue100 = $tmp101;
    return $returnValue100;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue104;
    panda$core$UInt32 $tmp105;
    uint32_t $tmp106 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp105, $tmp106);
    $returnValue104 = $tmp105;
    return $returnValue104;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue108;
    panda$core$UInt32 $tmp109;
    uint32_t $tmp110 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp109, $tmp110);
    $returnValue108 = $tmp109;
    return $returnValue108;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue112;
    panda$core$UInt32 $tmp113;
    uint32_t $tmp114 = ((uint32_t) self.value) / p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp113, $tmp114);
    $returnValue112 = $tmp113;
    return $returnValue112;
}
panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue116;
    panda$core$UInt64 $tmp117;
    uint64_t $tmp118 = ((uint64_t) self.value) / p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp117, $tmp118);
    $returnValue116 = $tmp117;
    return $returnValue116;
}
panda$core$Int16 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue120;
    panda$core$Int16 $tmp121;
    int16_t $tmp122 = ((int16_t) self.value) % ((int16_t) p_other.value);
    panda$core$Int16$init$builtin_int16(&$tmp121, $tmp122);
    $returnValue120 = $tmp121;
    return $returnValue120;
}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue124;
    panda$core$Int32 $tmp125;
    int32_t $tmp126 = ((int32_t) self.value) % ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp125, $tmp126);
    $returnValue124 = $tmp125;
    return $returnValue124;
}
panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue128;
    panda$core$Int64 $tmp129;
    int64_t $tmp130 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp129, $tmp130);
    $returnValue128 = $tmp129;
    return $returnValue128;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue132;
    panda$core$UInt32 $tmp133;
    uint32_t $tmp134 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp133, $tmp134);
    $returnValue132 = $tmp133;
    return $returnValue132;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue136;
    panda$core$UInt32 $tmp137;
    uint32_t $tmp138 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp137, $tmp138);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue140;
    panda$core$UInt32 $tmp141;
    uint32_t $tmp142 = ((uint32_t) self.value) % p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp141, $tmp142);
    $returnValue140 = $tmp141;
    return $returnValue140;
}
panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue144;
    panda$core$UInt64 $tmp145;
    uint64_t $tmp146 = ((uint64_t) self.value) % p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp145, $tmp146);
    $returnValue144 = $tmp145;
    return $returnValue144;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Real32 $returnValue148;
    panda$core$Real32 $tmp149;
    float $tmp150 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp149, $tmp150);
    $returnValue148 = $tmp149;
    return $returnValue148;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Real32 $returnValue152;
    panda$core$Real32 $tmp153;
    float $tmp154 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp153, $tmp154);
    $returnValue152 = $tmp153;
    return $returnValue152;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Real32 $returnValue156;
    panda$core$Real32 $tmp157;
    float $tmp158 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp157, $tmp158);
    $returnValue156 = $tmp157;
    return $returnValue156;
}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue160;
    panda$core$Real64 $tmp161;
    double $tmp162 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp161, $tmp162);
    $returnValue160 = $tmp161;
    return $returnValue160;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Real32 $returnValue164;
    panda$core$Real32 $tmp165;
    float $tmp166 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp165, $tmp166);
    $returnValue164 = $tmp165;
    return $returnValue164;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Real32 $returnValue168;
    panda$core$Real32 $tmp169;
    float $tmp170 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp169, $tmp170);
    $returnValue168 = $tmp169;
    return $returnValue168;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Real32 $returnValue172;
    panda$core$Real32 $tmp173;
    float $tmp174 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp173, $tmp174);
    $returnValue172 = $tmp173;
    return $returnValue172;
}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue176;
    panda$core$Real64 $tmp177;
    double $tmp178 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp177, $tmp178);
    $returnValue176 = $tmp177;
    return $returnValue176;
}
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $returnValue180;
    panda$core$UInt8 $tmp181;
    panda$core$UInt8$init$builtin_uint8(&$tmp181, ~self.value);
    $returnValue180 = $tmp181;
    return $returnValue180;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue184;
    panda$core$Int32 $tmp185;
    int32_t $tmp186 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp185, $tmp186);
    $returnValue184 = $tmp185;
    return $returnValue184;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue188;
    panda$core$Int32 $tmp189;
    int32_t $tmp190 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp189, $tmp190);
    $returnValue188 = $tmp189;
    return $returnValue188;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    panda$core$Int32 $tmp193;
    int32_t $tmp194 = ((int32_t) self.value) & p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp193, $tmp194);
    $returnValue192 = $tmp193;
    return $returnValue192;
}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue196;
    panda$core$Int64 $tmp197;
    int64_t $tmp198 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp197, $tmp198);
    $returnValue196 = $tmp197;
    return $returnValue196;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue200;
    panda$core$UInt32 $tmp201;
    uint32_t $tmp202 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp201, $tmp202);
    $returnValue200 = $tmp201;
    return $returnValue200;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue204;
    panda$core$UInt32 $tmp205;
    uint32_t $tmp206 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp205, $tmp206);
    $returnValue204 = $tmp205;
    return $returnValue204;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue208;
    panda$core$UInt32 $tmp209;
    uint32_t $tmp210 = ((uint32_t) self.value) & p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp209, $tmp210);
    $returnValue208 = $tmp209;
    return $returnValue208;
}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue212;
    panda$core$UInt64 $tmp213;
    uint64_t $tmp214 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp213, $tmp214);
    $returnValue212 = $tmp213;
    return $returnValue212;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue216;
    panda$core$Int32 $tmp217;
    int32_t $tmp218 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp217, $tmp218);
    $returnValue216 = $tmp217;
    return $returnValue216;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue220;
    panda$core$Int32 $tmp221;
    int32_t $tmp222 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp221, $tmp222);
    $returnValue220 = $tmp221;
    return $returnValue220;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue224;
    panda$core$Int32 $tmp225;
    int32_t $tmp226 = ((int32_t) self.value) | p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp225, $tmp226);
    $returnValue224 = $tmp225;
    return $returnValue224;
}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue228;
    panda$core$Int64 $tmp229;
    int64_t $tmp230 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp229, $tmp230);
    $returnValue228 = $tmp229;
    return $returnValue228;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue232;
    panda$core$UInt32 $tmp233;
    uint32_t $tmp234 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp233, $tmp234);
    $returnValue232 = $tmp233;
    return $returnValue232;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue236;
    panda$core$UInt32 $tmp237;
    uint32_t $tmp238 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp237, $tmp238);
    $returnValue236 = $tmp237;
    return $returnValue236;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue240;
    panda$core$UInt32 $tmp241;
    uint32_t $tmp242 = ((uint32_t) self.value) | p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp241, $tmp242);
    $returnValue240 = $tmp241;
    return $returnValue240;
}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue244;
    panda$core$UInt64 $tmp245;
    uint64_t $tmp246 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp245, $tmp246);
    $returnValue244 = $tmp245;
    return $returnValue244;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue248;
    panda$core$Int32 $tmp249;
    int32_t $tmp250 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp249, $tmp250);
    $returnValue248 = $tmp249;
    return $returnValue248;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue252;
    panda$core$Int32 $tmp253;
    int32_t $tmp254 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp253, $tmp254);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue256;
    panda$core$Int32 $tmp257;
    int32_t $tmp258 = ((int32_t) self.value) ^ p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp257, $tmp258);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue260;
    panda$core$Int64 $tmp261;
    int64_t $tmp262 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp261, $tmp262);
    $returnValue260 = $tmp261;
    return $returnValue260;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue264;
    panda$core$UInt32 $tmp265;
    uint32_t $tmp266 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp265, $tmp266);
    $returnValue264 = $tmp265;
    return $returnValue264;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue268;
    panda$core$UInt32 $tmp269;
    uint32_t $tmp270 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp269, $tmp270);
    $returnValue268 = $tmp269;
    return $returnValue268;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue272;
    panda$core$UInt32 $tmp273;
    uint32_t $tmp274 = ((uint32_t) self.value) ^ p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp273, $tmp274);
    $returnValue272 = $tmp273;
    return $returnValue272;
}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue276;
    panda$core$UInt64 $tmp277;
    uint64_t $tmp278 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp277, $tmp278);
    $returnValue276 = $tmp277;
    return $returnValue276;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue280;
    panda$core$Int32 $tmp281;
    int32_t $tmp282 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp281, $tmp282);
    $returnValue280 = $tmp281;
    return $returnValue280;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue284;
    panda$core$Int32 $tmp285;
    int32_t $tmp286 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp285, $tmp286);
    $returnValue284 = $tmp285;
    return $returnValue284;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue288;
    panda$core$Int32 $tmp289;
    int32_t $tmp290 = ((int32_t) self.value) << p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp289, $tmp290);
    $returnValue288 = $tmp289;
    return $returnValue288;
}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue292;
    panda$core$Int64 $tmp293;
    int64_t $tmp294 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp293, $tmp294);
    $returnValue292 = $tmp293;
    return $returnValue292;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue296;
    panda$core$UInt32 $tmp297;
    uint32_t $tmp298 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp297, $tmp298);
    $returnValue296 = $tmp297;
    return $returnValue296;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue300;
    panda$core$UInt32 $tmp301;
    uint32_t $tmp302 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp301, $tmp302);
    $returnValue300 = $tmp301;
    return $returnValue300;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue304;
    panda$core$UInt32 $tmp305;
    uint32_t $tmp306 = ((uint32_t) self.value) << p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp305, $tmp306);
    $returnValue304 = $tmp305;
    return $returnValue304;
}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue308;
    panda$core$UInt64 $tmp309;
    uint64_t $tmp310 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp309, $tmp310);
    $returnValue308 = $tmp309;
    return $returnValue308;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue312;
    panda$core$Int32 $tmp313;
    int32_t $tmp314 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp313, $tmp314);
    $returnValue312 = $tmp313;
    return $returnValue312;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue316;
    panda$core$Int32 $tmp317;
    int32_t $tmp318 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp317, $tmp318);
    $returnValue316 = $tmp317;
    return $returnValue316;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue320;
    panda$core$Int32 $tmp321;
    int32_t $tmp322 = ((int32_t) self.value) >> p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp321, $tmp322);
    $returnValue320 = $tmp321;
    return $returnValue320;
}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue324;
    panda$core$Int64 $tmp325;
    int64_t $tmp326 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp325, $tmp326);
    $returnValue324 = $tmp325;
    return $returnValue324;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue328;
    panda$core$UInt32 $tmp329;
    uint32_t $tmp330 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp329, $tmp330);
    $returnValue328 = $tmp329;
    return $returnValue328;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue332;
    panda$core$UInt32 $tmp333;
    uint32_t $tmp334 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp333, $tmp334);
    $returnValue332 = $tmp333;
    return $returnValue332;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue336;
    panda$core$UInt32 $tmp337;
    uint32_t $tmp338 = ((uint32_t) self.value) >> p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp337, $tmp338);
    $returnValue336 = $tmp337;
    return $returnValue336;
}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue340;
    panda$core$UInt64 $tmp341;
    uint64_t $tmp342 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp341, $tmp342);
    $returnValue340 = $tmp341;
    return $returnValue340;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue344;
    panda$core$Bit $tmp345;
    bool $tmp346 = ((int16_t) self.value) == ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp345, $tmp346);
    $returnValue344 = $tmp345;
    return $returnValue344;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue348;
    panda$core$Bit $tmp349;
    bool $tmp350 = ((int32_t) self.value) == ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp349, $tmp350);
    $returnValue348 = $tmp349;
    return $returnValue348;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue352;
    panda$core$Bit $tmp353;
    bool $tmp354 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp353, $tmp354);
    $returnValue352 = $tmp353;
    return $returnValue352;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue356;
    panda$core$Bit $tmp357;
    bool $tmp358 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp357, $tmp358);
    $returnValue356 = $tmp357;
    return $returnValue356;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue360;
    panda$core$Bit $tmp361;
    bool $tmp362 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp361, $tmp362);
    $returnValue360 = $tmp361;
    return $returnValue360;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue364;
    panda$core$Bit $tmp365;
    bool $tmp366 = ((uint32_t) self.value) == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp365, $tmp366);
    $returnValue364 = $tmp365;
    return $returnValue364;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue368;
    panda$core$Bit $tmp369;
    bool $tmp370 = ((uint64_t) self.value) == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp369, $tmp370);
    $returnValue368 = $tmp369;
    return $returnValue368;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue372;
    panda$core$Bit $tmp373;
    bool $tmp374 = ((int16_t) self.value) != ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp373, $tmp374);
    $returnValue372 = $tmp373;
    return $returnValue372;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue376;
    panda$core$Bit $tmp377;
    bool $tmp378 = ((int32_t) self.value) != ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp377, $tmp378);
    $returnValue376 = $tmp377;
    return $returnValue376;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue380;
    panda$core$Bit $tmp381;
    bool $tmp382 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp381, $tmp382);
    $returnValue380 = $tmp381;
    return $returnValue380;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue384;
    panda$core$Bit $tmp385;
    bool $tmp386 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp385, $tmp386);
    $returnValue384 = $tmp385;
    return $returnValue384;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue388;
    panda$core$Bit $tmp389;
    bool $tmp390 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp389, $tmp390);
    $returnValue388 = $tmp389;
    return $returnValue388;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue392;
    panda$core$Bit $tmp393;
    bool $tmp394 = ((uint32_t) self.value) != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp393, $tmp394);
    $returnValue392 = $tmp393;
    return $returnValue392;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue396;
    panda$core$Bit $tmp397;
    bool $tmp398 = ((uint64_t) self.value) != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp397, $tmp398);
    $returnValue396 = $tmp397;
    return $returnValue396;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue400;
    panda$core$Bit $tmp401;
    bool $tmp402 = ((int16_t) self.value) < ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp401, $tmp402);
    $returnValue400 = $tmp401;
    return $returnValue400;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue404;
    panda$core$Bit $tmp405;
    bool $tmp406 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp405, $tmp406);
    $returnValue404 = $tmp405;
    return $returnValue404;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue408;
    panda$core$Bit $tmp409;
    bool $tmp410 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp409, $tmp410);
    $returnValue408 = $tmp409;
    return $returnValue408;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue412;
    panda$core$Bit $tmp413;
    bool $tmp414 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp413, $tmp414);
    $returnValue412 = $tmp413;
    return $returnValue412;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue416;
    panda$core$Bit $tmp417;
    bool $tmp418 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp417, $tmp418);
    $returnValue416 = $tmp417;
    return $returnValue416;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue420;
    panda$core$Bit $tmp421;
    bool $tmp422 = ((uint32_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp421, $tmp422);
    $returnValue420 = $tmp421;
    return $returnValue420;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue424;
    panda$core$Bit $tmp425;
    bool $tmp426 = ((uint64_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp425, $tmp426);
    $returnValue424 = $tmp425;
    return $returnValue424;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue428;
    panda$core$Bit $tmp429;
    bool $tmp430 = ((int16_t) self.value) > ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp429, $tmp430);
    $returnValue428 = $tmp429;
    return $returnValue428;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue432;
    panda$core$Bit $tmp433;
    bool $tmp434 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp433, $tmp434);
    $returnValue432 = $tmp433;
    return $returnValue432;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue436;
    panda$core$Bit $tmp437;
    bool $tmp438 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp437, $tmp438);
    $returnValue436 = $tmp437;
    return $returnValue436;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue440;
    panda$core$Bit $tmp441;
    bool $tmp442 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp441, $tmp442);
    $returnValue440 = $tmp441;
    return $returnValue440;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue444;
    panda$core$Bit $tmp445;
    bool $tmp446 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp445, $tmp446);
    $returnValue444 = $tmp445;
    return $returnValue444;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue448;
    panda$core$Bit $tmp449;
    bool $tmp450 = ((uint32_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp449, $tmp450);
    $returnValue448 = $tmp449;
    return $returnValue448;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue452;
    panda$core$Bit $tmp453;
    bool $tmp454 = ((uint64_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp453, $tmp454);
    $returnValue452 = $tmp453;
    return $returnValue452;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue456;
    panda$core$Bit $tmp457;
    bool $tmp458 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp457, $tmp458);
    $returnValue456 = $tmp457;
    return $returnValue456;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue460;
    panda$core$Bit $tmp461;
    bool $tmp462 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp461, $tmp462);
    $returnValue460 = $tmp461;
    return $returnValue460;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue464;
    panda$core$Bit $tmp465;
    bool $tmp466 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp465, $tmp466);
    $returnValue464 = $tmp465;
    return $returnValue464;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue468;
    panda$core$Bit $tmp469;
    bool $tmp470 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp469, $tmp470);
    $returnValue468 = $tmp469;
    return $returnValue468;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue472;
    panda$core$Bit $tmp473;
    bool $tmp474 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp473, $tmp474);
    $returnValue472 = $tmp473;
    return $returnValue472;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue476;
    panda$core$Bit $tmp477;
    bool $tmp478 = ((uint32_t) self.value) >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp477, $tmp478);
    $returnValue476 = $tmp477;
    return $returnValue476;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue480;
    panda$core$Bit $tmp481;
    bool $tmp482 = ((uint64_t) self.value) >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp481, $tmp482);
    $returnValue480 = $tmp481;
    return $returnValue480;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue484;
    panda$core$Bit $tmp485;
    bool $tmp486 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp485, $tmp486);
    $returnValue484 = $tmp485;
    return $returnValue484;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue488;
    panda$core$Bit $tmp489;
    bool $tmp490 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp489, $tmp490);
    $returnValue488 = $tmp489;
    return $returnValue488;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue492;
    panda$core$Bit $tmp493;
    bool $tmp494 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp493, $tmp494);
    $returnValue492 = $tmp493;
    return $returnValue492;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue496;
    panda$core$Bit $tmp497;
    bool $tmp498 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp497, $tmp498);
    $returnValue496 = $tmp497;
    return $returnValue496;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue500;
    panda$core$Bit $tmp501;
    bool $tmp502 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp501, $tmp502);
    $returnValue500 = $tmp501;
    return $returnValue500;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue504;
    panda$core$Bit $tmp505;
    bool $tmp506 = ((uint32_t) self.value) <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp505, $tmp506);
    $returnValue504 = $tmp505;
    return $returnValue504;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue508;
    panda$core$Bit $tmp509;
    bool $tmp510 = ((uint64_t) self.value) <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp509, $tmp510);
    $returnValue508 = $tmp509;
    return $returnValue508;
}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp512;
    panda$core$Int16 $returnValue514;
    panda$core$Int16 $tmp515;
    panda$core$Int16 $tmp517;
    bool $tmp513 = ((int16_t) self.value) < ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp512, $tmp513);
    if ($tmp512.value) {
    {
        panda$core$Int16$init$builtin_int16(&$tmp515, ((int16_t) self.value));
        $returnValue514 = $tmp515;
        return $returnValue514;
    }
    }
    panda$core$Int16$init$builtin_int16(&$tmp517, ((int16_t) p_other.value));
    $returnValue514 = $tmp517;
    return $returnValue514;
}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp519;
    panda$core$Int32 $returnValue521;
    panda$core$Int32 $tmp522;
    panda$core$Int32 $tmp524;
    bool $tmp520 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp519, $tmp520);
    if ($tmp519.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp522, ((int32_t) self.value));
        $returnValue521 = $tmp522;
        return $returnValue521;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp524, ((int32_t) p_other.value));
    $returnValue521 = $tmp524;
    return $returnValue521;
}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp526;
    panda$core$Int64 $returnValue528;
    panda$core$Int64 $tmp529;
    panda$core$Int64 $tmp531;
    bool $tmp527 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp526, $tmp527);
    if ($tmp526.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp529, ((int64_t) self.value));
        $returnValue528 = $tmp529;
        return $returnValue528;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp531, ((int64_t) p_other.value));
    $returnValue528 = $tmp531;
    return $returnValue528;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp533;
    panda$core$UInt32 $returnValue535;
    panda$core$UInt32 $tmp536;
    panda$core$UInt32 $tmp538;
    bool $tmp534 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp533, $tmp534);
    if ($tmp533.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp536, ((uint32_t) self.value));
        $returnValue535 = $tmp536;
        return $returnValue535;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp538, ((uint32_t) p_other.value));
    $returnValue535 = $tmp538;
    return $returnValue535;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp540;
    panda$core$UInt32 $returnValue542;
    panda$core$UInt32 $tmp543;
    panda$core$UInt32 $tmp545;
    bool $tmp541 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp540, $tmp541);
    if ($tmp540.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp543, ((uint32_t) self.value));
        $returnValue542 = $tmp543;
        return $returnValue542;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp545, ((uint32_t) p_other.value));
    $returnValue542 = $tmp545;
    return $returnValue542;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp547;
    panda$core$UInt32 $returnValue549;
    panda$core$UInt32 $tmp550;
    panda$core$UInt32 $tmp552;
    bool $tmp548 = ((uint32_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp547, $tmp548);
    if ($tmp547.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp550, ((uint32_t) self.value));
        $returnValue549 = $tmp550;
        return $returnValue549;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp552, p_other.value);
    $returnValue549 = $tmp552;
    return $returnValue549;
}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $tmp554;
    panda$core$UInt64 $returnValue556;
    panda$core$UInt64 $tmp557;
    panda$core$UInt64 $tmp559;
    bool $tmp555 = ((uint64_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp554, $tmp555);
    if ($tmp554.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp557, ((uint64_t) self.value));
        $returnValue556 = $tmp557;
        return $returnValue556;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp559, p_other.value);
    $returnValue556 = $tmp559;
    return $returnValue556;
}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp561;
    panda$core$Int16 $returnValue563;
    panda$core$Int16 $tmp564;
    panda$core$Int16 $tmp566;
    bool $tmp562 = ((int16_t) self.value) > ((int16_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp561, $tmp562);
    if ($tmp561.value) {
    {
        panda$core$Int16$init$builtin_int16(&$tmp564, ((int16_t) self.value));
        $returnValue563 = $tmp564;
        return $returnValue563;
    }
    }
    panda$core$Int16$init$builtin_int16(&$tmp566, ((int16_t) p_other.value));
    $returnValue563 = $tmp566;
    return $returnValue563;
}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp568;
    panda$core$Int32 $returnValue570;
    panda$core$Int32 $tmp571;
    panda$core$Int32 $tmp573;
    bool $tmp569 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp568, $tmp569);
    if ($tmp568.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp571, ((int32_t) self.value));
        $returnValue570 = $tmp571;
        return $returnValue570;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp573, ((int32_t) p_other.value));
    $returnValue570 = $tmp573;
    return $returnValue570;
}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp575;
    panda$core$Int64 $returnValue577;
    panda$core$Int64 $tmp578;
    panda$core$Int64 $tmp580;
    bool $tmp576 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp575, $tmp576);
    if ($tmp575.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp578, ((int64_t) self.value));
        $returnValue577 = $tmp578;
        return $returnValue577;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp580, ((int64_t) p_other.value));
    $returnValue577 = $tmp580;
    return $returnValue577;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp582;
    panda$core$UInt32 $returnValue584;
    panda$core$UInt32 $tmp585;
    panda$core$UInt32 $tmp587;
    bool $tmp583 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp582, $tmp583);
    if ($tmp582.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp585, ((uint32_t) self.value));
        $returnValue584 = $tmp585;
        return $returnValue584;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp587, ((uint32_t) p_other.value));
    $returnValue584 = $tmp587;
    return $returnValue584;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp589;
    panda$core$UInt32 $returnValue591;
    panda$core$UInt32 $tmp592;
    panda$core$UInt32 $tmp594;
    bool $tmp590 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp589, $tmp590);
    if ($tmp589.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp592, ((uint32_t) self.value));
        $returnValue591 = $tmp592;
        return $returnValue591;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp594, ((uint32_t) p_other.value));
    $returnValue591 = $tmp594;
    return $returnValue591;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp596;
    panda$core$UInt32 $returnValue598;
    panda$core$UInt32 $tmp599;
    panda$core$UInt32 $tmp601;
    bool $tmp597 = ((uint32_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp596, $tmp597);
    if ($tmp596.value) {
    {
        panda$core$UInt32$init$builtin_uint32(&$tmp599, ((uint32_t) self.value));
        $returnValue598 = $tmp599;
        return $returnValue598;
    }
    }
    panda$core$UInt32$init$builtin_uint32(&$tmp601, p_other.value);
    $returnValue598 = $tmp601;
    return $returnValue598;
}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $tmp603;
    panda$core$UInt64 $returnValue605;
    panda$core$UInt64 $tmp606;
    panda$core$UInt64 $tmp608;
    bool $tmp604 = ((uint64_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp603, $tmp604);
    if ($tmp603.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp606, ((uint64_t) self.value));
        $returnValue605 = $tmp606;
        return $returnValue605;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp608, p_other.value);
    $returnValue605 = $tmp608;
    return $returnValue605;
}
panda$collections$ListView* panda$core$UInt8$$IDX$panda$core$Range$LTpanda$core$UInt8$GT$R$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$core$Range$LTpanda$core$UInt8$GT p_range) {
    panda$collections$ListView* $returnValue610;
    panda$collections$ListView* $tmp611;
    org$pandalanguage$panda$UInt8List* $tmp612;
    panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp614;
    panda$core$UInt8 $tmp615;
    org$pandalanguage$panda$UInt8List* $tmp613 = (org$pandalanguage$panda$UInt8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$UInt8List$class);
    panda$core$UInt8$init$builtin_uint8(&$tmp615, 1);
    panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$init$panda$core$UInt8$panda$core$UInt8$panda$core$UInt8$panda$core$Bit(&$tmp614, p_range.min, p_range.max, $tmp615, p_range.inclusive);
    org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT($tmp613, $tmp614);
    $tmp612 = $tmp613;
    $tmp611 = ((panda$collections$ListView*) $tmp612);
    $returnValue610 = $tmp611;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
    return $returnValue610;
}
panda$collections$ListView* panda$core$UInt8$$IDX$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$R$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT p_range) {
    panda$collections$ListView* $returnValue617;
    panda$collections$ListView* $tmp618;
    org$pandalanguage$panda$UInt8List* $tmp619;
    org$pandalanguage$panda$UInt8List* $tmp620 = (org$pandalanguage$panda$UInt8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$UInt8List$class);
    org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT($tmp620, p_range);
    $tmp619 = $tmp620;
    $tmp618 = ((panda$collections$ListView*) $tmp619);
    $returnValue617 = $tmp618;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
    return $returnValue617;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue622;
    panda$core$Int8 $tmp623;
    panda$core$Int32 $tmp626;
    panda$core$Int8$init$builtin_int8(&$tmp623, 1);
    panda$core$Int32 $tmp624 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32($tmp623, p_index);
    panda$core$Int32 $tmp625 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp624);
    panda$core$Int32$init$builtin_int32(&$tmp626, 0);
    panda$core$Bit $tmp627 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp625, $tmp626);
    $returnValue622 = $tmp627;
    return $returnValue622;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue629;
    panda$core$Int16 $tmp630;
    panda$core$Int32 $tmp633;
    panda$core$Int16$init$builtin_int16(&$tmp630, 1);
    panda$core$Int32 $tmp631 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32($tmp630, p_index);
    panda$core$Int32 $tmp632 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp631);
    panda$core$Int32$init$builtin_int32(&$tmp633, 0);
    panda$core$Bit $tmp634 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp632, $tmp633);
    $returnValue629 = $tmp634;
    return $returnValue629;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue636;
    panda$core$Int32 $tmp637;
    panda$core$Int32 $tmp640;
    panda$core$Int32$init$builtin_int32(&$tmp637, 1);
    panda$core$Int32 $tmp638 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp637, p_index);
    panda$core$Int32 $tmp639 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp638);
    panda$core$Int32$init$builtin_int32(&$tmp640, 0);
    panda$core$Bit $tmp641 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp639, $tmp640);
    $returnValue636 = $tmp641;
    return $returnValue636;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp644;
    panda$core$Bit $returnValue654;
    panda$core$Int64 $tmp655;
    panda$core$Int64 $tmp658;
    panda$core$Int64$init$builtin_int64(&$tmp644, 0);
    panda$core$Bit $tmp645 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp644);
    bool $tmp643 = $tmp645.value;
    if (!$tmp643) goto $l646;
    panda$core$Int64 $tmp647 = panda$core$UInt8$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp648 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp647);
    $tmp643 = $tmp648.value;
    $l646:;
    panda$core$Bit $tmp649 = { $tmp643 };
    if ($tmp649.value) goto $l650; else goto $l651;
    $l651:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s652, (panda$core$Int64) { 656 }, &$s653);
    abort();
    $l650:;
    panda$core$Int64$init$builtin_int64(&$tmp655, 1);
    panda$core$Int64 $tmp656 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp655, p_index);
    panda$core$Int64 $tmp657 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp656);
    panda$core$Int64$init$builtin_int64(&$tmp658, 0);
    panda$core$Bit $tmp659 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp658);
    $returnValue654 = $tmp659;
    return $returnValue654;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue661;
    panda$core$UInt8 $tmp662;
    panda$core$UInt32 $tmp665;
    panda$core$UInt8$init$builtin_uint8(&$tmp662, 1);
    panda$core$UInt32 $tmp663 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32($tmp662, p_index);
    panda$core$UInt32 $tmp664 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp663);
    panda$core$UInt32$init$builtin_uint32(&$tmp665, 0);
    panda$core$Bit $tmp666 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp664, $tmp665);
    $returnValue661 = $tmp666;
    return $returnValue661;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue668;
    panda$core$UInt16 $tmp669;
    panda$core$UInt32 $tmp672;
    panda$core$UInt16$init$builtin_uint16(&$tmp669, 1);
    panda$core$UInt32 $tmp670 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32($tmp669, p_index);
    panda$core$UInt32 $tmp671 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp670);
    panda$core$UInt32$init$builtin_uint32(&$tmp672, 0);
    panda$core$Bit $tmp673 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp671, $tmp672);
    $returnValue668 = $tmp673;
    return $returnValue668;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue675;
    panda$core$UInt32 $tmp676;
    panda$core$UInt32 $tmp679;
    panda$core$UInt32$init$builtin_uint32(&$tmp676, 1);
    panda$core$UInt32 $tmp677 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp676, p_index);
    panda$core$UInt32 $tmp678 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp677);
    panda$core$UInt32$init$builtin_uint32(&$tmp679, 0);
    panda$core$Bit $tmp680 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp678, $tmp679);
    $returnValue675 = $tmp680;
    return $returnValue675;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue682;
    panda$core$UInt64 $tmp683;
    panda$core$UInt64 $tmp686;
    panda$core$UInt64$init$builtin_uint64(&$tmp683, 1);
    panda$core$UInt64 $tmp684 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64($tmp683, p_index);
    panda$core$UInt64 $tmp685 = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp684);
    panda$core$UInt64$init$builtin_uint64(&$tmp686, 0);
    panda$core$Bit $tmp687 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp685, $tmp686);
    $returnValue682 = $tmp687;
    return $returnValue682;
}
panda$core$Int64 panda$core$UInt8$get_count$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue689;
    panda$core$Int64 $tmp690;
    panda$core$Int64$init$builtin_int64(&$tmp690, 8);
    $returnValue689 = $tmp690;
    return $returnValue689;
}
panda$collections$Iterator* panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt8 self) {
    panda$collections$Iterator* $returnValue692;
    panda$collections$Iterator* $tmp693;
    org$pandalanguage$panda$IntBitIterator* $tmp694;
    panda$core$UInt64 $tmp697;
    org$pandalanguage$panda$IntBitIterator* $tmp695 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
    panda$core$UInt64 $tmp696 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$UInt64$init$builtin_uint64(&$tmp697, 128);
    org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp695, $tmp696, $tmp697);
    $tmp694 = $tmp695;
    $tmp693 = ((panda$collections$Iterator*) $tmp694);
    $returnValue692 = $tmp693;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
    return $returnValue692;
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue699;
    panda$core$Int64 $tmp700;
    panda$core$Int64$init$builtin_int64(&$tmp700, ((int64_t) self.value));
    $returnValue699 = $tmp700;
    return $returnValue699;
}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result702;
    panda$core$UInt8$nullable $returnValue704;
    panda$core$UInt64$nullable $tmp703 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result702 = $tmp703;
    if (((panda$core$Bit) { !result702.nonnull }).value) {
    {
        $returnValue704 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $returnValue704;
    }
    }
    panda$core$UInt8 $tmp706 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) result702.value));
    $returnValue704 = ((panda$core$UInt8$nullable) { $tmp706, true });
    return $returnValue704;
}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 self) {
    panda$core$Int8 $returnValue708;
    panda$core$Int8 $tmp709;
    panda$core$Int8$init$builtin_int8(&$tmp709, ((int8_t) self.value));
    $returnValue708 = $tmp709;
    return $returnValue708;
}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 self) {
    panda$core$Int16 $returnValue711;
    panda$core$Int16 $tmp712;
    panda$core$Int16$init$builtin_int16(&$tmp712, ((int16_t) self.value));
    $returnValue711 = $tmp712;
    return $returnValue711;
}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 self) {
    panda$core$Int32 $returnValue714;
    panda$core$Int32 $tmp715;
    panda$core$Int32$init$builtin_int32(&$tmp715, ((int32_t) self.value));
    $returnValue714 = $tmp715;
    return $returnValue714;
}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue717;
    panda$core$Int64 $tmp718;
    panda$core$Int64$init$builtin_int64(&$tmp718, ((int64_t) self.value));
    $returnValue717 = $tmp718;
    return $returnValue717;
}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 self) {
    panda$core$UInt16 $returnValue720;
    panda$core$UInt16 $tmp721;
    panda$core$UInt16$init$builtin_uint16(&$tmp721, ((uint16_t) self.value));
    $returnValue720 = $tmp721;
    return $returnValue720;
}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 self) {
    panda$core$UInt32 $returnValue723;
    panda$core$UInt32 $tmp724;
    panda$core$UInt32$init$builtin_uint32(&$tmp724, ((uint32_t) self.value));
    $returnValue723 = $tmp724;
    return $returnValue723;
}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 self) {
    panda$core$UInt64 $returnValue726;
    panda$core$UInt64 $tmp727;
    panda$core$UInt64$init$builtin_uint64(&$tmp727, ((uint64_t) self.value));
    $returnValue726 = $tmp727;
    return $returnValue726;
}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 self) {
    panda$core$Real32 $returnValue729;
    panda$core$Real32 $tmp730;
    panda$core$Real32$init$builtin_float32(&$tmp730, ((float) self.value));
    $returnValue729 = $tmp730;
    return $returnValue729;
}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 self) {
    panda$core$Real64 $returnValue732;
    panda$core$Real64 $tmp733;
    panda$core$Real64$init$builtin_float64(&$tmp733, ((double) self.value));
    $returnValue732 = $tmp733;
    return $returnValue732;
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 self) {
    panda$core$Int64 max735;
    panda$core$Int64 $tmp736;
    panda$core$Char8* chars737;
    panda$core$Int64 index738;
    panda$core$Int64 $tmp739;
    panda$core$UInt8 value741;
    panda$core$UInt8 $tmp742;
    panda$core$Char8 $tmp746;
    panda$core$UInt8 $tmp747;
    panda$core$UInt32 $tmp749;
    panda$core$UInt8 $tmp752;
    panda$core$Int64 $tmp755;
    panda$core$UInt8 $tmp758;
    panda$core$Int64 $tmp760;
    panda$core$Char8 $tmp764;
    panda$core$UInt32 $tmp765;
    panda$core$UInt8 $tmp766;
    panda$core$UInt8 $tmp770;
    panda$core$Int64 $tmp773;
    panda$core$UInt8 $tmp776;
    panda$core$Char8 $tmp778;
    panda$core$UInt8 $tmp779;
    panda$core$Int64 size780;
    panda$core$Range$LTpanda$core$Int64$GT $tmp782;
    panda$core$Int64 $tmp783;
    panda$core$Bit $tmp784;
    panda$core$String* $returnValue805;
    panda$core$String* $tmp806;
    panda$core$String* $tmp807;
    panda$core$Int64$init$builtin_int64(&$tmp736, 3);
    max735 = $tmp736;
    chars737 = ((panda$core$Char8*) pandaZAlloc(max735.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp739, 1);
    panda$core$Int64 $tmp740 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max735, $tmp739);
    index738 = $tmp740;
    value741 = self;
    panda$core$UInt8$init$builtin_uint8(&$tmp742, 0);
    panda$core$Bit $tmp743 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(value741, $tmp742);
    if ($tmp743.value) {
    {
        $l744:;
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp747, 10);
            panda$core$UInt32 $tmp748 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value741, $tmp747);
            panda$core$UInt32$init$builtin_uint32(&$tmp749, 48);
            panda$core$UInt32 $tmp750 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp748, $tmp749);
            panda$core$UInt8 $tmp751 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp750);
            panda$core$Char8$init$panda$core$UInt8(&$tmp746, $tmp751);
            chars737[index738.value] = $tmp746;
            panda$core$UInt8$init$builtin_uint8(&$tmp752, 10);
            panda$core$UInt32 $tmp753 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value741, $tmp752);
            panda$core$UInt8 $tmp754 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp753);
            value741 = $tmp754;
            panda$core$Int64$init$builtin_int64(&$tmp755, 1);
            panda$core$Int64 $tmp756 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index738, $tmp755);
            index738 = $tmp756;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp758, 0);
        panda$core$Bit $tmp759 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(value741, $tmp758);
        bool $tmp757 = $tmp759.value;
        if ($tmp757) goto $l744;
        $l745:;
        panda$core$Int64$init$builtin_int64(&$tmp760, 1);
        panda$core$Int64 $tmp761 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index738, $tmp760);
        index738 = $tmp761;
    }
    }
    else {
    {
        $l762:;
        {
            panda$core$UInt32$init$builtin_uint32(&$tmp765, 48);
            panda$core$UInt8$init$builtin_uint8(&$tmp766, 10);
            panda$core$UInt32 $tmp767 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value741, $tmp766);
            panda$core$UInt32 $tmp768 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32($tmp765, $tmp767);
            panda$core$UInt8 $tmp769 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp768);
            panda$core$Char8$init$panda$core$UInt8(&$tmp764, $tmp769);
            chars737[index738.value] = $tmp764;
            panda$core$UInt8$init$builtin_uint8(&$tmp770, 10);
            panda$core$UInt32 $tmp771 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value741, $tmp770);
            panda$core$UInt8 $tmp772 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp771);
            value741 = $tmp772;
            panda$core$Int64$init$builtin_int64(&$tmp773, 1);
            panda$core$Int64 $tmp774 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index738, $tmp773);
            index738 = $tmp774;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp776, 0);
        panda$core$Bit $tmp777 = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(value741, $tmp776);
        bool $tmp775 = $tmp777.value;
        if ($tmp775) goto $l762;
        $l763:;
        panda$core$UInt8$init$builtin_uint8(&$tmp779, 45);
        panda$core$Char8$init$panda$core$UInt8(&$tmp778, $tmp779);
        chars737[index738.value] = $tmp778;
    }
    }
    panda$core$Int64 $tmp781 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max735, index738);
    size780 = $tmp781;
    panda$core$Int64$init$builtin_int64(&$tmp783, 0);
    panda$core$Bit$init$builtin_bit(&$tmp784, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp782, $tmp783, size780, $tmp784);
    int64_t $tmp786 = $tmp782.min.value;
    panda$core$Int64 i785 = { $tmp786 };
    int64_t $tmp788 = $tmp782.max.value;
    bool $tmp789 = $tmp782.inclusive.value;
    if ($tmp789) goto $l796; else goto $l797;
    $l796:;
    if ($tmp786 <= $tmp788) goto $l790; else goto $l792;
    $l797:;
    if ($tmp786 < $tmp788) goto $l790; else goto $l792;
    $l790:;
    {
        panda$core$Int64 $tmp798 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i785, index738);
        chars737[i785.value] = chars737[$tmp798.value];
    }
    $l793:;
    int64_t $tmp800 = $tmp788 - i785.value;
    if ($tmp789) goto $l801; else goto $l802;
    $l801:;
    if ((uint64_t) $tmp800 >= 1) goto $l799; else goto $l792;
    $l802:;
    if ((uint64_t) $tmp800 > 1) goto $l799; else goto $l792;
    $l799:;
    i785.value += 1;
    goto $l790;
    $l792:;
    panda$core$String* $tmp808 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp808, chars737, size780);
    $tmp807 = $tmp808;
    $tmp806 = $tmp807;
    $returnValue805 = $tmp806;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
    return $returnValue805;
}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue810;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$Bit $tmp813;
    panda$core$UInt64 $tmp815;
    panda$core$Bit$init$builtin_bit(&$tmp813, false);
    panda$core$UInt64 $tmp814 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$UInt64$init$builtin_uint64(&$tmp815, 255);
    panda$core$String* $tmp816 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp813, $tmp814, $tmp815, p_fmt);
    $tmp812 = $tmp816;
    $tmp811 = $tmp812;
    $returnValue810 = $tmp811;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
    return $returnValue810;
}
void panda$core$UInt8$cleanup(panda$core$UInt8 self) {
}


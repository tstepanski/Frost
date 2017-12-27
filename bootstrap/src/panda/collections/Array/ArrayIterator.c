#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim(panda$collections$Array$ArrayIterator* self) {
    panda$core$Object* result = panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Array$ArrayIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit, panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim} };

panda$collections$Array$ArrayIterator$class_type panda$collections$Array$ArrayIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$ArrayIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit, panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim} };



void panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT(panda$collections$Array$ArrayIterator* self, panda$collections$Array* p_array) {
    self->array = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_array));
        self->array = ((panda$collections$Array*) $tmp1);
    }
}
panda$core$Bit panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit(panda$collections$Array$ArrayIterator* self) {
    panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, self->array->count);
    return $tmp2;
}
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(panda$collections$Array$ArrayIterator* self) {
    panda$core$Int64 $tmp3 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp3;
    panda$core$Int64 $tmp4 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->array, $tmp4);
    return $tmp5;
}


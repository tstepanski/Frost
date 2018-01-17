#include "panda/io/InputStream/LineIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String.h"
#include "panda/io/InputStream.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
panda$core$Object* panda$io$InputStream$LineIterator$next$R$panda$core$String$shim(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result = panda$io$InputStream$LineIterator$next$R$panda$core$String(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$InputStream$LineIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim} };

panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$InputStream$LineIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$LineIterator$cleanup, panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$io$InputStream$LineIterator$readNext} };

typedef void (*$fn1)(panda$io$InputStream$LineIterator*);
typedef void (*$fn3)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn5)(panda$io$InputStream*);


void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input) {
    self->_next = NULL;
    {
        self->input = p_input;
    }
    (($fn1) self->$class->vtable[4])(self);
}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self) {
    return ((panda$core$Bit) { self->_next == NULL });
}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result2;
    panda$core$String* tmp44;
    PANDA_ASSERT(((panda$core$Bit) { self->_next != NULL }).value);
    result2 = self->_next;
    (($fn3) self->$class->vtable[4])(self);
    {
        tmp44 = result2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2));
        return tmp44;
    }
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    {
        panda$core$String* $tmp6 = (($fn5) self->input->$class->vtable[11])(self->input);
        self->_next = $tmp6;
    }
}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->_next));
}


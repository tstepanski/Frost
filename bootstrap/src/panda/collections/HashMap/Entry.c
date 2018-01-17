#include "panda/collections/HashMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"


panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$Entry$cleanup} };



void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    self->value = NULL;
    self->next = NULL;
    {
        self->key = p_key;
    }
    {
        self->value = p_value;
    }
}
void panda$collections$HashMap$Entry$cleanup(panda$collections$HashMap$Entry* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->key));
    panda$core$Panda$unref$panda$core$Object(self->value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->next));
}


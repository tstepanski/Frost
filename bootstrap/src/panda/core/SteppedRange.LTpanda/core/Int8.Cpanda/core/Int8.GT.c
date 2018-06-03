#include "panda/core/SteppedRange.LTpanda/core/Int8.Cpanda/core/Int8.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int8.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$String* panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$convert$R$panda$core$String(((panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$cleanup$shim(panda$core$Object* p0) {
    panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$cleanup(((panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$wrapper*) p0)->value);

}

static panda$core$String $s1;
panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$class_type panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$convert$R$panda$core$String$shim, panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$cleanup$shim} };

static panda$core$String $s2;
panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$convert$R$panda$core$String$shim, panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3e", 57, 6424785830957960250, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3e", 57, 6424785830957960250, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

void panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$init$panda$core$Int8$panda$core$Int8$panda$core$Int8$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT* self, panda$core$Int8 p_start, panda$core$Int8 p_end, panda$core$Int8 p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    self->step = p_step;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT self) {
    panda$core$MutableString* result6 = NULL;
    panda$core$MutableString* $tmp7;
    panda$core$MutableString* $tmp8;
    panda$core$Object* $tmp10;
    panda$core$Object* $tmp14;
    panda$core$Object* $tmp17;
    panda$core$String* $returnValue19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    int $tmp5;
    {
        panda$core$MutableString* $tmp9 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp9);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        result6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        if (((panda$core$Bit) { true }).value) {
        {
            panda$core$Int8$wrapper* $tmp11;
            $tmp11 = (panda$core$Int8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Int8$wrapperclass);
            $tmp11->value = self.start;
            $tmp10 = ((panda$core$Object*) $tmp11);
            panda$core$MutableString$append$panda$core$Object(result6, $tmp10);
            panda$core$Panda$unref$panda$core$Object($tmp10);
        }
        }
        if (self.inclusive.value) {
        {
            panda$core$MutableString$append$panda$core$String(result6, &$s12);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result6, &$s13);
        }
        }
        if (((panda$core$Bit) { true }).value) {
        {
            panda$core$Int8$wrapper* $tmp15;
            $tmp15 = (panda$core$Int8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Int8$wrapperclass);
            $tmp15->value = self.end;
            $tmp14 = ((panda$core$Object*) $tmp15);
            panda$core$MutableString$append$panda$core$Object(result6, $tmp14);
            panda$core$Panda$unref$panda$core$Object($tmp14);
        }
        }
        panda$core$MutableString$append$panda$core$String(result6, &$s16);
        panda$core$Int8$wrapper* $tmp18;
        $tmp18 = (panda$core$Int8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Int8$wrapperclass);
        $tmp18->value = self.step;
        $tmp17 = ((panda$core$Object*) $tmp18);
        panda$core$MutableString$append$panda$core$Object(result6, $tmp17);
        panda$core$Panda$unref$panda$core$Object($tmp17);
        panda$core$String* $tmp22 = panda$core$MutableString$finish$R$panda$core$String(result6);
        $tmp21 = $tmp22;
        $tmp20 = $tmp21;
        $returnValue19 = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
        $tmp5 = 0;
        goto $l3;
        $l23:;
        return $returnValue19;
    }
    $l3:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
    result6 = NULL;
    switch ($tmp5) {
        case 0: goto $l23;
    }
    $l25:;
    abort();
}
void panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$cleanup(panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT self) {
}





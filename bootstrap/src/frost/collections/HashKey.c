#include "frost/collections/HashKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"


struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$HashKey$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$HashKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$collections$HashKey$_frost$collections$HashKey, { NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$collections$HashKey$class_type frost$collections$HashKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashKey$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4b\x65\x79", 25, -3594957676371988117, NULL };








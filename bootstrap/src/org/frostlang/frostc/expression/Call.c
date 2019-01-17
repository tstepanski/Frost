#include "org/frostlang/frostc/expression/Call.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Formattable.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Variable.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Call$class_type org$frostlang$frostc$expression$Call$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$Call$cleanup} };

typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn77)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn144)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn161)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn180)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn220)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn255)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn281)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn304)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn332)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn364)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn391)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn401)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn452)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn479)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn503)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn550)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn579)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn602)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn631)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn648)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn694)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn703)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn725)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn754)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn1021)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1030)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1053)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1082)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn1157)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1271)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1275)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1280)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1334)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn1365)(org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1369)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int64 (*$fn1379)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1418)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1422)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1427)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1433)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn1444)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1479)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1500)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1560)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1570)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1574)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1579)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1587)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1591)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1612)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1624)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1658)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1702)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1725)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1851)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1866)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1885)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1910)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn1919)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1931)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1937)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1960)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2009)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2016)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2032)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2083)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2094)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2125)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2135)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2152)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2156)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2161)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2166)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2179)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2184)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2206)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2226)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2233)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2324)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2344)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2351)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2356)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2370)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2447)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2464)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2554)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2571)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2668)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2701)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2713)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2717)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2722)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2778)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2784)(org$frostlang$frostc$Compiler$TypeContext*);
typedef frost$core$Int64 (*$fn2823)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2857)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2870)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2874)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2879)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2936)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2942)(org$frostlang$frostc$Compiler$TypeContext*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3070)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3184)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3206)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3270)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn3299)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn3308)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3442)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn3578)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3588)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3611)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn3639)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3651)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3728)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3760)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3768)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3785)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3797)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3808)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3815)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3849)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3858)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3896)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3915)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn4031)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4051)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4110)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 36, -3986479872985642702, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x72", 5, 20924392920, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x50\x6f\x69\x6e\x74\x65\x72\x49\x6e\x74\x72\x69\x6e\x73\x69\x63\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 382, -4884818683857402, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 131, -1251988423769408069, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e", 183, -1606613617903784312, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 131, -1251988423769408069, NULL };
static frost$core$String $s1342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, -3407239944236024271, NULL };
static frost$core$String $s1414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e", 183, -1606613617903784312, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20\x27", 20, -7237900421143798122, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x74\x6f\x20", 5, 14602620331, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -6962729775976817809, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 99, 8145804827713163921, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static frost$core$String $s1896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static frost$core$String $s1902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1912 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s1914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static frost$core$String $s2079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static frost$core$String $s2163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static frost$core$String $s2201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2999 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3012 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s3026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static frost$core$String $s3033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s3093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 331, 5189620526265609373, NULL };
static frost$core$String $s3145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static frost$core$String $s3265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static frost$core$String $s3285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static frost$core$String $s3291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s3303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s3305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s3313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static frost$core$String $s3344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static frost$core$String $s3346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static frost$core$String $s3383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 99, 8145804827713163921, NULL };
static frost$core$String $s3391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static frost$core$String $s3927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s3946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s3949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s3964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s3998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s4026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s4144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s4172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s4180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s4195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s4217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s4243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s4276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Statement$ID local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Statement$ID local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
frost$core$Bit local14;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$Type* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$IR$Statement$ID local20;
// line 24
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 25
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
// line 26
org$frostlang$frostc$Type** $tmp5 = &param3->target;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block3;
block1:;
// line 27
org$frostlang$frostc$Type** $tmp9 = &param3->target;
org$frostlang$frostc$Type* $tmp10 = *$tmp9;
org$frostlang$frostc$FixedArray** $tmp11 = &$tmp10->subtypes;
org$frostlang$frostc$FixedArray* $tmp12 = *$tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
frost$core$Object* $tmp19 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp12, $tmp18);
org$frostlang$frostc$Type* $tmp20 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp19));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$Type* $tmp21 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local1) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($35:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
// unreffing REF($33:org.frostlang.frostc.FixedArray.T)
goto block2;
block3:;
// line 1
// line 30
org$frostlang$frostc$Type** $tmp22 = &param3->target;
org$frostlang$frostc$Type* $tmp23 = *$tmp22;
org$frostlang$frostc$FixedArray** $tmp24 = &$tmp23->subtypes;
org$frostlang$frostc$FixedArray* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Object* $tmp32 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp25, $tmp31);
org$frostlang$frostc$FixedArray** $tmp33 = &((org$frostlang$frostc$Type*) $tmp32)->subtypes;
org$frostlang$frostc$FixedArray* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block8:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Object* $tmp41 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp34, $tmp40);
org$frostlang$frostc$Type* $tmp42 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local1) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($81:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp41);
// unreffing REF($79:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
// unreffing REF($65:org.frostlang.frostc.FixedArray.T)
goto block2;
block2:;
// line 32
org$frostlang$frostc$Type* $tmp44 = *(&local1);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block10; else goto block11;
block10:;
// line 33
org$frostlang$frostc$Pair* $tmp47 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp49;
$tmp49 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp49->value = $tmp48;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp47, ((frost$core$Object*) $tmp49), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($108:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($105:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp50 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp47;
block11:;
// line 35
org$frostlang$frostc$Type** $tmp52 = &param3->target;
org$frostlang$frostc$Type* $tmp53 = *$tmp52;
org$frostlang$frostc$Type$Kind* $tmp54 = &$tmp53->typeKind;
org$frostlang$frostc$Type$Kind $tmp55 = *$tmp54;
org$frostlang$frostc$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp56->value = $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp58 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp57);
org$frostlang$frostc$Type$Kind$wrapper* $tmp59;
$tmp59 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((frost$core$Equatable*) $tmp56)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Bit $tmp63 = $tmp61(((frost$core$Equatable*) $tmp56), ((frost$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp65 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s66, $tmp65);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp59)));
// unreffing REF($139:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp56)));
// unreffing REF($135:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 36
org$frostlang$frostc$MethodDecl** $tmp67 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp68 = *$tmp67;
frost$core$String** $tmp69 = &((org$frostlang$frostc$Symbol*) $tmp68)->name;
frost$core$String* $tmp70 = *$tmp69;
frost$core$Bit $tmp71 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s72);
bool $tmp73 = $tmp71.value;
if ($tmp73) goto block15; else goto block16;
block15:;
// line 38
frost$core$Int64 $tmp74 = (frost$core$Int64) {0};
ITable* $tmp75 = param4->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Object* $tmp78 = $tmp76(param4, $tmp74);
org$frostlang$frostc$Compiler$TypeContext* $tmp79 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp80 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp81 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp79, $tmp80, $tmp81);
org$frostlang$frostc$IR$Value* $tmp82 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp78), $tmp79);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$IR$Value* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($172:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($170:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($168:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
// unreffing REF($166:frost.collections.ListView.T)
// line 39
org$frostlang$frostc$IR$Value* $tmp84 = *(&local2);
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block17; else goto block18;
block17:;
// line 40
org$frostlang$frostc$Pair* $tmp87 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp89;
$tmp89 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp89->value = $tmp88;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp87, ((frost$core$Object*) $tmp89), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($202:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($199:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp90 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing count
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp87;
block18:;
// line 42
org$frostlang$frostc$IR* $tmp93 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp94 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp95 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp96 = *(&local2);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block19:;
org$frostlang$frostc$IR$Value* $tmp102 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp96);
org$frostlang$frostc$Type* $tmp103 = *(&local1);
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block21:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp94, $tmp95, param1, $tmp102, $tmp103);
$fn110 $tmp109 = ($fn110) $tmp93->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp111 = $tmp109($tmp93, $tmp94);
*(&local3) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($242:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($231:org.frostlang.frostc.IR.Statement)
// line 44
org$frostlang$frostc$Pair* $tmp112 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp114;
$tmp114 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp114->value = $tmp113;
org$frostlang$frostc$IR$Value* $tmp115 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp116 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp117 = *(&local3);
org$frostlang$frostc$Type* $tmp118 = *(&local1);
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit($tmp118 != NULL);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block23:;
org$frostlang$frostc$Type* $tmp124 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp118);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp115, $tmp116, $tmp117, $tmp124);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp112, ((frost$core$Object*) $tmp114), ((frost$core$Object*) $tmp115));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($279:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($267:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($266:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($263:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing count
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp126 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp112;
block16:;
frost$core$Bit $tmp128 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s129);
bool $tmp130 = $tmp128.value;
if ($tmp130) goto block25; else goto block26;
block25:;
// line 48
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s134, $tmp133);
abort(); // unreachable
block27:;
// line 49
org$frostlang$frostc$IR* $tmp135 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp136 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {17};
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s141, $tmp140, &$s142);
abort(); // unreachable
block29:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp136, $tmp137, param1, param2);
$fn144 $tmp143 = ($fn144) $tmp135->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp145 = $tmp143($tmp135, $tmp136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($327:org.frostlang.frostc.IR.Statement)
// line 50
org$frostlang$frostc$Pair* $tmp146 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp148;
$tmp148 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp148->value = $tmp147;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp146, ((frost$core$Object*) $tmp148), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($347:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($344:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp146;
block26:;
frost$core$Bit $tmp151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s152);
bool $tmp153 = $tmp151.value;
if ($tmp153) goto block31; else goto block32;
block31:;
// line 53
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s157, $tmp156);
abort(); // unreachable
block33:;
// line 54
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
ITable* $tmp159 = param4->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Object* $tmp162 = $tmp160(param4, $tmp158);
org$frostlang$frostc$Compiler$TypeContext* $tmp163 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp164 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp165 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp163, $tmp164, $tmp165);
org$frostlang$frostc$IR$Value* $tmp166 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp162), $tmp163);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlang$frostc$IR$Value* $tmp167 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local4) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($390:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing REF($388:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($386:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
// unreffing REF($384:frost.collections.ListView.T)
// line 55
org$frostlang$frostc$IR$Value* $tmp168 = *(&local4);
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit($tmp168 == NULL);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block35; else goto block36;
block35:;
// line 56
org$frostlang$frostc$Pair* $tmp171 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp173;
$tmp173 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp173->value = $tmp172;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp171, ((frost$core$Object*) $tmp173), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($420:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($417:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp174 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp171;
block36:;
// line 58
frost$core$Int64 $tmp177 = (frost$core$Int64) {1};
ITable* $tmp178 = param4->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Object* $tmp181 = $tmp179(param4, $tmp177);
org$frostlang$frostc$Compiler$TypeContext* $tmp182 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp183 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp184 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp182, $tmp183, $tmp184);
org$frostlang$frostc$IR$Value* $tmp185 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp181), $tmp182);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
org$frostlang$frostc$IR$Value* $tmp186 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local5) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($457:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($455:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($453:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
// unreffing REF($451:frost.collections.ListView.T)
// line 59
org$frostlang$frostc$IR$Value* $tmp187 = *(&local5);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187 == NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block37; else goto block38;
block37:;
// line 60
org$frostlang$frostc$Pair* $tmp190 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp192;
$tmp192 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp192->value = $tmp191;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp190, ((frost$core$Object*) $tmp192), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($487:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($484:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp193 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing newCount
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp194 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp190;
block38:;
// line 62
org$frostlang$frostc$IR* $tmp197 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp198 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp199 = (frost$core$Int64) {21};
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block39:;
org$frostlang$frostc$IR$Value* $tmp205 = *(&local4);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block41:;
org$frostlang$frostc$IR$Value* $tmp211 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp205);
org$frostlang$frostc$IR$Value* $tmp212 = *(&local5);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s216, $tmp215, &$s217);
abort(); // unreachable
block43:;
org$frostlang$frostc$IR$Value* $tmp218 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp212);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp198, $tmp199, param1, param2, $tmp211, $tmp218);
$fn220 $tmp219 = ($fn220) $tmp197->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp221 = $tmp219($tmp197, $tmp198);
*(&local6) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($550:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($540:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($521:org.frostlang.frostc.IR.Statement)
// line 65
org$frostlang$frostc$Pair* $tmp222 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp224;
$tmp224 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp224->value = $tmp223;
org$frostlang$frostc$IR$Value* $tmp225 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp226 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp227 = *(&local6);
org$frostlang$frostc$Type* $tmp228 = *(&local1);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp231 = (frost$core$Int64) {66};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block45:;
org$frostlang$frostc$Type* $tmp234 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp228);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp225, $tmp226, $tmp227, $tmp234);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp222, ((frost$core$Object*) $tmp224), ((frost$core$Object*) $tmp225));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($581:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($569:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($568:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($565:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing newCount
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp222;
block32:;
frost$core$Bit $tmp239 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s240);
bool $tmp241 = $tmp239.value;
if ($tmp241) goto block47; else goto block48;
block47:;
// line 69
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {69};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block49:;
// line 70
org$frostlang$frostc$IR* $tmp246 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp247 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {18};
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {70};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp247, $tmp248, param1, param2);
$fn255 $tmp254 = ($fn255) $tmp246->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp256 = $tmp254($tmp246, $tmp247);
*(&local7) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($634:org.frostlang.frostc.IR.Statement)
// line 71
org$frostlang$frostc$Pair* $tmp257 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp259;
$tmp259 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp259->value = $tmp258;
org$frostlang$frostc$IR$Value* $tmp260 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp262 = *(&local7);
org$frostlang$frostc$Type* $tmp263 = *(&local1);
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263 != NULL);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp266 = (frost$core$Int64) {71};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s267, $tmp266, &$s268);
abort(); // unreachable
block53:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp260, $tmp261, $tmp262, $tmp263);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp257, ((frost$core$Object*) $tmp259), ((frost$core$Object*) $tmp260));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($656:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($655:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($652:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp257;
block48:;
frost$core$Bit $tmp271 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s272);
bool $tmp273 = $tmp271.value;
if ($tmp273) goto block55; else goto block56;
block55:;
// line 74
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s277, $tmp276);
abort(); // unreachable
block57:;
// line 75
frost$core$Int64 $tmp278 = (frost$core$Int64) {0};
ITable* $tmp279 = param4->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Object* $tmp282 = $tmp280(param4, $tmp278);
org$frostlang$frostc$Compiler$TypeContext* $tmp283 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp284 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp285 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp283, $tmp284, $tmp285);
org$frostlang$frostc$IR$Value* $tmp286 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp282), $tmp283);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
org$frostlang$frostc$IR$Value* $tmp287 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local8) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($715:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($713:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($711:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp282);
// unreffing REF($709:frost.collections.ListView.T)
// line 76
org$frostlang$frostc$IR* $tmp288 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp289 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp290 = (frost$core$Int64) {20};
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {76};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block59:;
org$frostlang$frostc$IR$Value* $tmp296 = *(&local8);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block61:;
org$frostlang$frostc$IR$Value* $tmp302 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp296);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp289, $tmp290, param1, param2, $tmp302);
$fn304 $tmp303 = ($fn304) $tmp288->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp305 = $tmp303($tmp288, $tmp289);
*(&local9) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($756:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing REF($737:org.frostlang.frostc.IR.Statement)
// line 78
org$frostlang$frostc$Pair* $tmp306 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp308;
$tmp308 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp308->value = $tmp307;
org$frostlang$frostc$IR$Value* $tmp309 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp310 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp311 = *(&local9);
org$frostlang$frostc$Type* $tmp312 = *(&local1);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block63:;
org$frostlang$frostc$Type* $tmp318 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp312);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp309, $tmp310, $tmp311, $tmp318);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp306, ((frost$core$Object*) $tmp308), ((frost$core$Object*) $tmp309));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($784:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($772:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($771:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($768:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp319 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing value
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp306;
block56:;
frost$core$Bit $tmp322 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s323);
bool $tmp324 = $tmp322.value;
if ($tmp324) goto block65; else goto block66;
block65:;
// line 82
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp327 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s328, $tmp327);
abort(); // unreachable
block67:;
// line 83
frost$core$Int64 $tmp329 = (frost$core$Int64) {0};
ITable* $tmp330 = param4->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
frost$core$Object* $tmp333 = $tmp331(param4, $tmp329);
org$frostlang$frostc$Compiler$TypeContext* $tmp334 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp336 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp334, $tmp335, $tmp336);
org$frostlang$frostc$IR$Value* $tmp337 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp333), $tmp334);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$IR$Value* $tmp338 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local10) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($840:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($838:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($836:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp333);
// unreffing REF($834:frost.collections.ListView.T)
// line 84
org$frostlang$frostc$IR$Value* $tmp339 = *(&local10);
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit($tmp339 == NULL);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block69; else goto block70;
block69:;
// line 85
org$frostlang$frostc$Pair* $tmp342 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp344;
$tmp344 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp344->value = $tmp343;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp342, ((frost$core$Object*) $tmp344), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($870:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($867:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp345 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing index
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp342;
block70:;
// line 87
org$frostlang$frostc$IR* $tmp348 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp349 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp350 = (frost$core$Int64) {19};
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {87};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block71:;
org$frostlang$frostc$IR$Value* $tmp356 = *(&local10);
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block73:;
org$frostlang$frostc$IR$Value* $tmp362 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp356);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp349, $tmp350, param1, param2, $tmp362);
$fn364 $tmp363 = ($fn364) $tmp348->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp365 = $tmp363($tmp348, $tmp349);
*(&local11) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($918:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($899:org.frostlang.frostc.IR.Statement)
// line 89
org$frostlang$frostc$Pair* $tmp366 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp368;
$tmp368 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp368->value = $tmp367;
org$frostlang$frostc$IR$Value* $tmp369 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp370 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp371 = *(&local11);
org$frostlang$frostc$Type* $tmp372 = *(&local1);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block75:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp369, $tmp370, $tmp371, $tmp372);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp366, ((frost$core$Object*) $tmp368), ((frost$core$Object*) $tmp369));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing REF($934:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($933:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($930:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp378 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing index
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp366;
block66:;
frost$core$Bit $tmp381 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s382);
bool $tmp383 = $tmp381.value;
if ($tmp383) goto block77; else goto block78;
block77:;
// line 92
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp386 = (frost$core$Int64) {92};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s387, $tmp386);
abort(); // unreachable
block79:;
// line 93
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
ITable* $tmp389 = param4->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Object* $tmp392 = $tmp390(param4, $tmp388);
org$frostlang$frostc$Compiler$TypeContext* $tmp393 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp394 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp395 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp393, $tmp394, $tmp395);
org$frostlang$frostc$IR$Value* $tmp396 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp392), $tmp393);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$IR$Value* $tmp397 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local12) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($998:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($996:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing REF($994:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp392);
// unreffing REF($992:frost.collections.ListView.T)
// line 94
frost$core$Int64 $tmp398 = (frost$core$Int64) {1};
ITable* $tmp399 = param4->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$core$Object* $tmp402 = $tmp400(param4, $tmp398);
org$frostlang$frostc$Compiler$TypeContext* $tmp403 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp404 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp405 = *(&local1);
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit($tmp405 != NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp408 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block81:;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp403, $tmp404, $tmp405);
org$frostlang$frostc$IR$Value* $tmp411 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp402), $tmp403);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
org$frostlang$frostc$IR$Value* $tmp412 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local13) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($1036:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($1024:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp402);
// unreffing REF($1022:frost.collections.ListView.T)
// line 95
org$frostlang$frostc$IR$Value* $tmp413 = *(&local12);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413 != NULL);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block85; else goto block86;
block85:;
org$frostlang$frostc$IR$Value* $tmp416 = *(&local13);
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit($tmp416 != NULL);
*(&local14) = $tmp417;
goto block87;
block86:;
*(&local14) = $tmp414;
goto block87;
block87:;
frost$core$Bit $tmp418 = *(&local14);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block83; else goto block84;
block83:;
// line 96
org$frostlang$frostc$IR$Value* $tmp420 = *(&local12);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420 != NULL);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp423 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block88:;
org$frostlang$frostc$IR$Value* $tmp426 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp420);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
org$frostlang$frostc$IR$Value* $tmp427 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local15) = $tmp426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($1079:org.frostlang.frostc.IR.Value)
// line 97
org$frostlang$frostc$Type* $tmp428 = *(&local1);
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428 != NULL);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s432, $tmp431, &$s433);
abort(); // unreachable
block92:;
frost$core$Bit $tmp434 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp428);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block90; else goto block91;
block90:;
// line 98
org$frostlang$frostc$IR$Value* $tmp436 = *(&local13);
frost$core$Bit $tmp437 = frost$core$Bit$init$builtin_bit($tmp436 != NULL);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s440, $tmp439, &$s441);
abort(); // unreachable
block94:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp436);
// line 99
org$frostlang$frostc$IR* $tmp442 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp443 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {19};
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s448, $tmp447, &$s449);
abort(); // unreachable
block96:;
org$frostlang$frostc$IR$Value* $tmp450 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp443, $tmp444, param1, param2, $tmp450);
$fn452 $tmp451 = ($fn452) $tmp442->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp453 = $tmp451($tmp442, $tmp443);
*(&local16) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($1116:org.frostlang.frostc.IR.Statement)
// line 100
org$frostlang$frostc$IR$Value* $tmp454 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp455 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp456 = *(&local16);
org$frostlang$frostc$Type* $tmp457 = *(&local1);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457 != NULL);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s461, $tmp460, &$s462);
abort(); // unreachable
block98:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp454, $tmp455, $tmp456, $tmp457);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp454);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($1135:org.frostlang.frostc.IR.Value)
goto block91;
block91:;
// line 102
org$frostlang$frostc$IR* $tmp463 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp464 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp465 = (frost$core$Int64) {23};
org$frostlang$frostc$IR$Value* $tmp466 = *(&local13);
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466 != NULL);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s470, $tmp469, &$s471);
abort(); // unreachable
block100:;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block102:;
org$frostlang$frostc$IR$Value* $tmp477 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp464, $tmp465, param1, $tmp466, param2, $tmp477);
$fn479 $tmp478 = ($fn479) $tmp463->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp480 = $tmp478($tmp463, $tmp464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($1155:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp481 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing indexValue
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block84;
block84:;
// line 104
org$frostlang$frostc$Pair* $tmp482 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp484;
$tmp484 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp484->value = $tmp483;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp482, ((frost$core$Object*) $tmp484), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($1191:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($1188:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp485 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing value
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp486 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing index
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp488 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp482;
block78:;
frost$core$Bit $tmp489 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s490);
bool $tmp491 = $tmp489.value;
if ($tmp491) goto block104; else goto block105;
block104:;
// line 107
org$frostlang$frostc$Type* $tmp492 = *(&local1);
frost$core$Bit $tmp493 = frost$core$Bit$init$builtin_bit($tmp492 != NULL);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp495 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s496, $tmp495, &$s497);
abort(); // unreachable
block106:;
org$frostlang$frostc$Type* $tmp498 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp492);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$Type* $tmp499 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local17) = $tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($1236:org.frostlang.frostc.Type)
// line 108
frost$core$Int64 $tmp500 = (frost$core$Int64) {0};
ITable* $tmp501 = param4->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$Object* $tmp504 = $tmp502(param4, $tmp500);
org$frostlang$frostc$Compiler$TypeContext* $tmp505 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp506 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp507 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp505, $tmp506, $tmp507);
org$frostlang$frostc$IR$Value* $tmp508 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp504), $tmp505);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$IR$Value* $tmp509 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local18) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($1257:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($1255:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($1253:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp504);
// unreffing REF($1251:frost.collections.ListView.T)
// line 109
org$frostlang$frostc$Type* $tmp510 = *(&local17);
frost$core$Bit $tmp511 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block108; else goto block109;
block108:;
// line 110
org$frostlang$frostc$IR$Value* $tmp513 = *(&local18);
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513 != NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block110:;
org$frostlang$frostc$IR$Value* $tmp519 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp513);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
org$frostlang$frostc$IR$Value* $tmp520 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local19) = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($1292:org.frostlang.frostc.IR.Value)
// line 111
org$frostlang$frostc$IR* $tmp521 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp522 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {19};
frost$core$Bit $tmp524 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s527, $tmp526, &$s528);
abort(); // unreachable
block112:;
org$frostlang$frostc$IR$Value* $tmp529 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp522, $tmp523, param1, param2, $tmp529);
$fn531 $tmp530 = ($fn531) $tmp521->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp532 = $tmp530($tmp521, $tmp522);
*(&local20) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($1305:org.frostlang.frostc.IR.Statement)
// line 112
org$frostlang$frostc$IR$Value* $tmp533 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp535 = *(&local20);
org$frostlang$frostc$Type* $tmp536 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp533, $tmp534, $tmp535, $tmp536);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($1324:org.frostlang.frostc.IR.Value)
// line 113
org$frostlang$frostc$IR* $tmp537 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp538 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp539 = (frost$core$Int64) {23};
org$frostlang$frostc$IR$Value* $tmp540 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp541 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp542 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp540, $tmp541, $tmp542);
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s546, $tmp545, &$s547);
abort(); // unreachable
block114:;
org$frostlang$frostc$IR$Value* $tmp548 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp538, $tmp539, param1, $tmp540, param2, $tmp548);
$fn550 $tmp549 = ($fn550) $tmp537->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp551 = $tmp549($tmp537, $tmp538);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing REF($1337:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($1335:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp552 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing indexValue
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block109;
block109:;
// line 116
org$frostlang$frostc$Pair* $tmp553 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp555;
$tmp555 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp555->value = $tmp554;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp553, ((frost$core$Object*) $tmp555), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($1369:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($1366:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp556 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing index
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp557 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing nullableType
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp553;
block105:;
// line 119
frost$core$Bit $tmp560 = frost$core$Bit$init$builtin_bit(false);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {119};
org$frostlang$frostc$MethodDecl** $tmp563 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp564 = *$tmp563;
frost$core$String** $tmp565 = &((org$frostlang$frostc$Symbol*) $tmp564)->name;
frost$core$String* $tmp566 = *$tmp565;
frost$core$String* $tmp567 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s568, $tmp566);
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp567, &$s570);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s571, $tmp562, $tmp569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($1412:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing REF($1411:frost.core.String)
abort(); // unreachable
block116:;
goto block14;
block14:;
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit(false);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block118:;
abort(); // unreachable

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$parser$Token$Kind param3, frost$collections$ListView* param4, org$frostlang$frostc$Type* param5, org$frostlang$frostc$Type* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 129
ITable* $tmp577 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp577->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp577 = $tmp577->next;
}
$fn579 $tmp578 = $tmp577->methods[0];
frost$core$Int64 $tmp580 = $tmp578(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp581 = (frost$core$Int64) {1};
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 != $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block1; else goto block2;
block1:;
// line 130
org$frostlang$frostc$Pair* $tmp587 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp589;
$tmp589 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp589->value = $tmp588;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp587, ((frost$core$Object*) $tmp589), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($15:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing REF($12:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp587;
block2:;
// line 132
org$frostlang$frostc$IR$Value* $tmp590 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$IR$Value* $tmp591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local0) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($29:org.frostlang.frostc.IR.Value?)
// line 133
org$frostlang$frostc$IR$Value* $tmp592 = *(&local0);
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit($tmp592 == NULL);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block3; else goto block4;
block3:;
// line 134
org$frostlang$frostc$Pair* $tmp595 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp596 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp597;
$tmp597 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp597->value = $tmp596;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp595, ((frost$core$Object*) $tmp597), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($50:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($47:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp595;
block4:;
// line 136
frost$core$Int64 $tmp599 = (frost$core$Int64) {0};
ITable* $tmp600 = param4->$class->itable;
while ($tmp600->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp600 = $tmp600->next;
}
$fn602 $tmp601 = $tmp600->methods[0];
frost$core$Object* $tmp603 = $tmp601(param4, $tmp599);
org$frostlang$frostc$Compiler$TypeContext* $tmp604 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp605 = (frost$core$Int64) {3};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp604, $tmp605, param5);
org$frostlang$frostc$IR$Value* $tmp606 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp603), $tmp604);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$IR$Value* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = $tmp606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($76:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($73:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp603);
// unreffing REF($71:frost.collections.ListView.T)
// line 137
org$frostlang$frostc$IR$Value* $tmp608 = *(&local1);
frost$core$Bit $tmp609 = frost$core$Bit$init$builtin_bit($tmp608 == NULL);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block5; else goto block6;
block5:;
// line 138
org$frostlang$frostc$Pair* $tmp611 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp613;
$tmp613 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp613->value = $tmp612;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp611, ((frost$core$Object*) $tmp613), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($103:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($100:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp614 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing right
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp615 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp611;
block6:;
// line 140
org$frostlang$frostc$IR$Value* $tmp616 = *(&local0);
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit($tmp616 != NULL);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s620, $tmp619, &$s621);
abort(); // unreachable
block7:;
org$frostlang$frostc$IR$Value* $tmp622 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp616);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
org$frostlang$frostc$IR$Value* $tmp623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local2) = $tmp622;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing REF($135:org.frostlang.frostc.IR.Value)
// line 141
// line 142
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 143
org$frostlang$frostc$Type* $tmp624 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp625 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param6, $tmp624);
bool $tmp626 = $tmp625.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($150:org.frostlang.frostc.Type)
if ($tmp626) goto block9; else goto block11;
block9:;
// line 144
org$frostlang$frostc$Type* $tmp627 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$Type* $tmp628 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local4) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($158:org.frostlang.frostc.Type)
goto block10;
block11:;
// line 1
// line 147
org$frostlang$frostc$IR$Value* $tmp629 = *(&local2);
$fn631 $tmp630 = ($fn631) $tmp629->$class->vtable[2];
org$frostlang$frostc$Type* $tmp632 = $tmp630($tmp629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$Type* $tmp633 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local4) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($173:org.frostlang.frostc.Type)
goto block10;
block10:;
// line 149
org$frostlang$frostc$IR** $tmp634 = &param0->ir;
org$frostlang$frostc$IR* $tmp635 = *$tmp634;
org$frostlang$frostc$IR$Statement* $tmp636 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp637 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp638 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local1);
frost$core$Bit $tmp640 = frost$core$Bit$init$builtin_bit($tmp639 != NULL);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s643, $tmp642, &$s644);
abort(); // unreachable
block12:;
org$frostlang$frostc$IR$Value* $tmp645 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp639);
org$frostlang$frostc$Type* $tmp646 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp636, $tmp637, param1, $tmp638, param3, $tmp645, $tmp646);
$fn648 $tmp647 = ($fn648) $tmp635->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp649 = $tmp647($tmp635, $tmp636);
*(&local3) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($199:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing REF($187:org.frostlang.frostc.IR.Statement)
// line 151
frost$collections$Array* $tmp650 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp650);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$collections$Array* $tmp651 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local5) = $tmp650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing REF($212:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 152
frost$collections$Array* $tmp652 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp653 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp655 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp656 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp657 = *(&local3);
org$frostlang$frostc$Type* $tmp658 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp655, $tmp656, $tmp657, $tmp658);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp653, $tmp654, param1, $tmp655);
frost$collections$Array$add$frost$collections$Array$T($tmp652, ((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($230:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing REF($228:org.frostlang.frostc.ASTNode)
// line 153
org$frostlang$frostc$IR$Value* $tmp659 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp660 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp659, $tmp660, param6);
frost$collections$Array* $tmp661 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp662 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp663 = (frost$core$Int64) {3};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp662, $tmp663, param6);
org$frostlang$frostc$IR$Value* $tmp664 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp659, ((frost$collections$ListView*) $tmp661), $tmp662);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local6) = $tmp664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing REF($253:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($250:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($245:org.frostlang.frostc.IR.Value)
// line 155
org$frostlang$frostc$IR$Value* $tmp666 = *(&local6);
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit($tmp666 != NULL);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s670, $tmp669);
abort(); // unreachable
block14:;
// line 156
org$frostlang$frostc$Pair* $tmp671 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp673;
$tmp673 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp673->value = $tmp672;
org$frostlang$frostc$IR$Value* $tmp674 = *(&local6);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp671, ((frost$core$Object*) $tmp673), ((frost$core$Object*) $tmp674));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($283:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// unreffing REF($280:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp675 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing construct
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp676 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing constructArgs
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing builtinResultType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing builtinLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing right
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp680 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp671;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 163
org$frostlang$frostc$MethodDecl** $tmp681 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp682 = *$tmp681;
frost$core$String** $tmp683 = &((org$frostlang$frostc$Symbol*) $tmp682)->name;
frost$core$String* $tmp684 = *$tmp683;
frost$core$Bit $tmp685 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s686);
bool $tmp687 = $tmp685.value;
if ($tmp687) goto block2; else goto block3;
block2:;
// line 165
org$frostlang$frostc$MethodDecl** $tmp688 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp689 = *$tmp688;
frost$collections$Array** $tmp690 = &$tmp689->parameters;
frost$collections$Array* $tmp691 = *$tmp690;
ITable* $tmp692 = ((frost$collections$CollectionView*) $tmp691)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$core$Int64 $tmp695 = $tmp693(((frost$collections$CollectionView*) $tmp691));
frost$core$Int64 $tmp696 = (frost$core$Int64) {1};
frost$core$Bit $tmp697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp695, $tmp696);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp699 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s700, $tmp699);
abort(); // unreachable
block4:;
// line 166
ITable* $tmp701 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$core$Int64 $tmp704 = $tmp702(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp705 = (frost$core$Int64) {1};
frost$core$Bit $tmp706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp704, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s709, $tmp708);
abort(); // unreachable
block6:;
// line 167
org$frostlang$frostc$MethodDecl** $tmp710 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp711 = *$tmp710;
frost$collections$Array** $tmp712 = &$tmp711->parameters;
frost$collections$Array* $tmp713 = *$tmp712;
frost$core$Int64 $tmp714 = (frost$core$Int64) {0};
frost$core$Object* $tmp715 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp713, $tmp714);
org$frostlang$frostc$Type** $tmp716 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp715)->type;
org$frostlang$frostc$Type* $tmp717 = *$tmp716;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$Type* $tmp718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local0) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
// unreffing REF($42:frost.collections.Array.T)
// line 168
org$frostlang$frostc$Type* $tmp719 = *(&local0);
frost$core$Bit $tmp720 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block8; else goto block9;
block8:;
// line 169
frost$core$Int64 $tmp722 = (frost$core$Int64) {0};
ITable* $tmp723 = param4->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[0];
frost$core$Object* $tmp726 = $tmp724(param4, $tmp722);
org$frostlang$frostc$Compiler$TypeContext* $tmp727 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp728 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp729 = *(&local0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp727, $tmp728, $tmp729);
org$frostlang$frostc$IR$Value* $tmp730 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp726), $tmp727);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
org$frostlang$frostc$IR$Value* $tmp731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local1) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($71:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($67:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp726);
// unreffing REF($65:frost.collections.ListView.T)
// line 170
org$frostlang$frostc$IR$Value* $tmp732 = *(&local1);
frost$core$Bit $tmp733 = frost$core$Bit$init$builtin_bit($tmp732 != NULL);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block10; else goto block11;
block10:;
// line 171
org$frostlang$frostc$IR** $tmp735 = &param0->ir;
org$frostlang$frostc$IR* $tmp736 = *$tmp735;
org$frostlang$frostc$IR$Statement* $tmp737 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp738 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp739 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp740 = *$tmp739;
frost$core$Weak** $tmp741 = &$tmp740->owner;
frost$core$Weak* $tmp742 = *$tmp741;
frost$core$Object* $tmp743 = frost$core$Weak$get$R$frost$core$Weak$T($tmp742);
frost$collections$Array* $tmp744 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp745 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp744, $tmp745);
org$frostlang$frostc$IR$Value* $tmp746 = *(&local1);
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit($tmp746 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {172};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s750, $tmp749, &$s751);
abort(); // unreachable
block12:;
frost$collections$Array$add$frost$collections$Array$T($tmp744, ((frost$core$Object*) $tmp746));
org$frostlang$frostc$FixedArray* $tmp752 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp744);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp737, $tmp738, param1, ((org$frostlang$frostc$ClassDecl*) $tmp743), $tmp752);
$fn754 $tmp753 = ($fn754) $tmp736->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp755 = $tmp753($tmp736, $tmp737);
*(&local2) = $tmp755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($123:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($106:frost.collections.Array<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
// unreffing REF($104:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($97:org.frostlang.frostc.IR.Statement)
// line 173
org$frostlang$frostc$Pair* $tmp756 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp757 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp758;
$tmp758 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp758->value = $tmp757;
org$frostlang$frostc$IR$Value* $tmp759 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp760 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp761 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp762 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp763 = *$tmp762;
frost$core$Weak** $tmp764 = &$tmp763->owner;
frost$core$Weak* $tmp765 = *$tmp764;
frost$core$Object* $tmp766 = frost$core$Weak$get$R$frost$core$Weak$T($tmp765);
org$frostlang$frostc$Type** $tmp767 = &((org$frostlang$frostc$ClassDecl*) $tmp766)->type;
org$frostlang$frostc$Type* $tmp768 = *$tmp767;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp759, $tmp760, $tmp761, $tmp768);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp756, ((frost$core$Object*) $tmp758), ((frost$core$Object*) $tmp759));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q($tmp766);
// unreffing REF($154:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing REF($146:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($145:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($142:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp756;
block11:;
org$frostlang$frostc$IR$Value* $tmp771 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp772 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Bit $tmp773 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s774);
bool $tmp775 = $tmp773.value;
if ($tmp775) goto block14; else goto block15;
block14:;
// line 178
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp778 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s779, $tmp778, &$s780);
abort(); // unreachable
block16:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp782 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp781);
org$frostlang$frostc$Type* $tmp783 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp784 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp785 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp782, param4, $tmp783, $tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($215:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($214:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing REF($213:org.frostlang.frostc.Type)
return $tmp785;
block15:;
frost$core$Bit $tmp786 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s787);
bool $tmp788 = $tmp786.value;
if ($tmp788) goto block18; else goto block19;
block18:;
// line 182
frost$core$Bit $tmp789 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp791 = (frost$core$Int64) {182};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s792, $tmp791, &$s793);
abort(); // unreachable
block20:;
frost$core$Int64 $tmp794 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token$Kind $tmp795 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp794);
org$frostlang$frostc$Type* $tmp796 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp797 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp798 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp795, param4, $tmp796, $tmp797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing REF($244:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($243:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($242:org.frostlang.frostc.Type)
return $tmp798;
block19:;
frost$core$Bit $tmp799 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s800);
bool $tmp801 = $tmp799.value;
if ($tmp801) goto block22; else goto block23;
block22:;
// line 186
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp804 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s805, $tmp804, &$s806);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp807 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$Kind $tmp808 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp807);
org$frostlang$frostc$Type* $tmp809 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp810 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp811 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp808, param4, $tmp809, $tmp810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($273:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing REF($272:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing REF($271:org.frostlang.frostc.Type)
return $tmp811;
block23:;
frost$core$Bit $tmp812 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s813);
bool $tmp814 = $tmp812.value;
if ($tmp814) goto block26; else goto block27;
block26:;
// line 190
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp817 = (frost$core$Int64) {190};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s818, $tmp817, &$s819);
abort(); // unreachable
block28:;
frost$core$Int64 $tmp820 = (frost$core$Int64) {56};
org$frostlang$frostc$parser$Token$Kind $tmp821 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp820);
org$frostlang$frostc$Type* $tmp822 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp823 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp824 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp821, param4, $tmp822, $tmp823);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($302:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($301:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($300:org.frostlang.frostc.Type)
return $tmp824;
block27:;
frost$core$Bit $tmp825 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s826);
bool $tmp827 = $tmp825.value;
if ($tmp827) goto block30; else goto block31;
block30:;
// line 194
frost$core$Bit $tmp828 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp830 = (frost$core$Int64) {194};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s831, $tmp830, &$s832);
abort(); // unreachable
block32:;
frost$core$Int64 $tmp833 = (frost$core$Int64) {64};
org$frostlang$frostc$parser$Token$Kind $tmp834 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp833);
org$frostlang$frostc$MethodDecl** $tmp835 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp836 = *$tmp835;
frost$core$Weak** $tmp837 = &$tmp836->owner;
frost$core$Weak* $tmp838 = *$tmp837;
frost$core$Object* $tmp839 = frost$core$Weak$get$R$frost$core$Weak$T($tmp838);
org$frostlang$frostc$Type** $tmp840 = &((org$frostlang$frostc$ClassDecl*) $tmp839)->type;
org$frostlang$frostc$Type* $tmp841 = *$tmp840;
org$frostlang$frostc$MethodDecl** $tmp842 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp843 = *$tmp842;
frost$collections$Array** $tmp844 = &$tmp843->parameters;
frost$collections$Array* $tmp845 = *$tmp844;
frost$core$Int64 $tmp846 = (frost$core$Int64) {0};
frost$core$Object* $tmp847 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp845, $tmp846);
org$frostlang$frostc$Type** $tmp848 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp847)->type;
org$frostlang$frostc$Type* $tmp849 = *$tmp848;
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp852 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp841, $tmp849, $tmp850, $tmp851);
org$frostlang$frostc$Type* $tmp853 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp854 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp834, param4, $tmp852, $tmp853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($352:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($351:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($350:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp847);
// unreffing REF($344:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp839);
// unreffing REF($334:frost.core.Weak.T)
return $tmp854;
block31:;
frost$core$Bit $tmp855 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s856);
bool $tmp857 = $tmp855.value;
if ($tmp857) goto block34; else goto block35;
block34:;
// line 200
frost$core$Bit $tmp858 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s861, $tmp860, &$s862);
abort(); // unreachable
block36:;
frost$core$Int64 $tmp863 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp864 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp863);
org$frostlang$frostc$MethodDecl** $tmp865 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp866 = *$tmp865;
frost$core$Weak** $tmp867 = &$tmp866->owner;
frost$core$Weak* $tmp868 = *$tmp867;
frost$core$Object* $tmp869 = frost$core$Weak$get$R$frost$core$Weak$T($tmp868);
org$frostlang$frostc$Type** $tmp870 = &((org$frostlang$frostc$ClassDecl*) $tmp869)->type;
org$frostlang$frostc$Type* $tmp871 = *$tmp870;
org$frostlang$frostc$MethodDecl** $tmp872 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp873 = *$tmp872;
frost$collections$Array** $tmp874 = &$tmp873->parameters;
frost$collections$Array* $tmp875 = *$tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {0};
frost$core$Object* $tmp877 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp875, $tmp876);
org$frostlang$frostc$Type** $tmp878 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp877)->type;
org$frostlang$frostc$Type* $tmp879 = *$tmp878;
frost$core$Bit $tmp880 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp881 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp882 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp871, $tmp879, $tmp880, $tmp881);
org$frostlang$frostc$Type* $tmp883 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp884 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp864, param4, $tmp882, $tmp883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($408:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($407:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($406:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp877);
// unreffing REF($400:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
// unreffing REF($390:frost.core.Weak.T)
return $tmp884;
block35:;
frost$core$Bit $tmp885 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s886);
bool $tmp887 = $tmp885.value;
if ($tmp887) goto block38; else goto block39;
block38:;
// line 206
frost$core$Bit $tmp888 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s891, $tmp890, &$s892);
abort(); // unreachable
block40:;
frost$core$Int64 $tmp893 = (frost$core$Int64) {63};
org$frostlang$frostc$parser$Token$Kind $tmp894 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp893);
org$frostlang$frostc$MethodDecl** $tmp895 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp896 = *$tmp895;
frost$core$Weak** $tmp897 = &$tmp896->owner;
frost$core$Weak* $tmp898 = *$tmp897;
frost$core$Object* $tmp899 = frost$core$Weak$get$R$frost$core$Weak$T($tmp898);
org$frostlang$frostc$Type** $tmp900 = &((org$frostlang$frostc$ClassDecl*) $tmp899)->type;
org$frostlang$frostc$Type* $tmp901 = *$tmp900;
org$frostlang$frostc$MethodDecl** $tmp902 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp903 = *$tmp902;
frost$collections$Array** $tmp904 = &$tmp903->parameters;
frost$collections$Array* $tmp905 = *$tmp904;
frost$core$Int64 $tmp906 = (frost$core$Int64) {0};
frost$core$Object* $tmp907 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp905, $tmp906);
org$frostlang$frostc$Type** $tmp908 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp907)->type;
org$frostlang$frostc$Type* $tmp909 = *$tmp908;
frost$core$Bit $tmp910 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp911 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp912 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp901, $tmp909, $tmp910, $tmp911);
org$frostlang$frostc$Type* $tmp913 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp914 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp894, param4, $tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($464:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($463:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($462:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
// unreffing REF($456:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
// unreffing REF($446:frost.core.Weak.T)
return $tmp914;
block39:;
frost$core$Bit $tmp915 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s916);
bool $tmp917 = $tmp915.value;
if ($tmp917) goto block42; else goto block43;
block42:;
// line 212
frost$core$Bit $tmp918 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp920 = (frost$core$Int64) {212};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s921, $tmp920, &$s922);
abort(); // unreachable
block44:;
frost$core$Int64 $tmp923 = (frost$core$Int64) {65};
org$frostlang$frostc$parser$Token$Kind $tmp924 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp923);
org$frostlang$frostc$MethodDecl** $tmp925 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp926 = *$tmp925;
frost$core$Weak** $tmp927 = &$tmp926->owner;
frost$core$Weak* $tmp928 = *$tmp927;
frost$core$Object* $tmp929 = frost$core$Weak$get$R$frost$core$Weak$T($tmp928);
org$frostlang$frostc$Type** $tmp930 = &((org$frostlang$frostc$ClassDecl*) $tmp929)->type;
org$frostlang$frostc$Type* $tmp931 = *$tmp930;
org$frostlang$frostc$MethodDecl** $tmp932 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp933 = *$tmp932;
frost$collections$Array** $tmp934 = &$tmp933->parameters;
frost$collections$Array* $tmp935 = *$tmp934;
frost$core$Int64 $tmp936 = (frost$core$Int64) {0};
frost$core$Object* $tmp937 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp935, $tmp936);
org$frostlang$frostc$Type** $tmp938 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp937)->type;
org$frostlang$frostc$Type* $tmp939 = *$tmp938;
frost$core$Bit $tmp940 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp941 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp942 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp931, $tmp939, $tmp940, $tmp941);
org$frostlang$frostc$Type* $tmp943 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp944 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp924, param4, $tmp942, $tmp943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($520:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($519:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($518:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp937);
// unreffing REF($512:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp929);
// unreffing REF($502:frost.core.Weak.T)
return $tmp944;
block43:;
frost$core$Bit $tmp945 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s946);
bool $tmp947 = $tmp945.value;
if ($tmp947) goto block46; else goto block47;
block46:;
// line 218
frost$core$Bit $tmp948 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp950 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s951, $tmp950, &$s952);
abort(); // unreachable
block48:;
frost$core$Int64 $tmp953 = (frost$core$Int64) {59};
org$frostlang$frostc$parser$Token$Kind $tmp954 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp953);
org$frostlang$frostc$MethodDecl** $tmp955 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp956 = *$tmp955;
frost$core$Weak** $tmp957 = &$tmp956->owner;
frost$core$Weak* $tmp958 = *$tmp957;
frost$core$Object* $tmp959 = frost$core$Weak$get$R$frost$core$Weak$T($tmp958);
org$frostlang$frostc$Type** $tmp960 = &((org$frostlang$frostc$ClassDecl*) $tmp959)->type;
org$frostlang$frostc$Type* $tmp961 = *$tmp960;
org$frostlang$frostc$MethodDecl** $tmp962 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp963 = *$tmp962;
frost$collections$Array** $tmp964 = &$tmp963->parameters;
frost$collections$Array* $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = (frost$core$Int64) {0};
frost$core$Object* $tmp967 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp965, $tmp966);
org$frostlang$frostc$Type** $tmp968 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp967)->type;
org$frostlang$frostc$Type* $tmp969 = *$tmp968;
frost$core$Bit $tmp970 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp971 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp972 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp961, $tmp969, $tmp970, $tmp971);
org$frostlang$frostc$Type* $tmp973 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp974 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp954, param4, $tmp972, $tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing REF($576:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing REF($575:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing REF($574:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp967);
// unreffing REF($568:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp959);
// unreffing REF($558:frost.core.Weak.T)
return $tmp974;
block47:;
frost$core$Bit $tmp975 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s976);
bool $tmp977 = $tmp975.value;
if ($tmp977) goto block50; else goto block1;
block50:;
// line 224
frost$core$Bit $tmp978 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp980 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s981, $tmp980, &$s982);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp983 = (frost$core$Int64) {60};
org$frostlang$frostc$parser$Token$Kind $tmp984 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp983);
org$frostlang$frostc$MethodDecl** $tmp985 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp986 = *$tmp985;
frost$core$Weak** $tmp987 = &$tmp986->owner;
frost$core$Weak* $tmp988 = *$tmp987;
frost$core$Object* $tmp989 = frost$core$Weak$get$R$frost$core$Weak$T($tmp988);
org$frostlang$frostc$Type** $tmp990 = &((org$frostlang$frostc$ClassDecl*) $tmp989)->type;
org$frostlang$frostc$Type* $tmp991 = *$tmp990;
org$frostlang$frostc$MethodDecl** $tmp992 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp993 = *$tmp992;
frost$collections$Array** $tmp994 = &$tmp993->parameters;
frost$collections$Array* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = (frost$core$Int64) {0};
frost$core$Object* $tmp997 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp995, $tmp996);
org$frostlang$frostc$Type** $tmp998 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp997)->type;
org$frostlang$frostc$Type* $tmp999 = *$tmp998;
frost$core$Bit $tmp1000 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1002 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp991, $tmp999, $tmp1000, $tmp1001);
org$frostlang$frostc$Type* $tmp1003 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp1004 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp984, param4, $tmp1002, $tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing REF($632:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($631:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing REF($630:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp997);
// unreffing REF($624:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp989);
// unreffing REF($614:frost.core.Weak.T)
return $tmp1004;
block1:;
// line 230
org$frostlang$frostc$Pair* $tmp1005 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1006 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1007;
$tmp1007 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1007->value = $tmp1006;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1005, ((frost$core$Object*) $tmp1007), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($655:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing REF($652:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1005;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 237
org$frostlang$frostc$MethodDecl** $tmp1008 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1009 = *$tmp1008;
frost$core$String** $tmp1010 = &((org$frostlang$frostc$Symbol*) $tmp1009)->name;
frost$core$String* $tmp1011 = *$tmp1010;
frost$core$Bit $tmp1012 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1011, &$s1013);
bool $tmp1014 = $tmp1012.value;
if ($tmp1014) goto block2; else goto block1;
block2:;
// line 239
org$frostlang$frostc$MethodDecl** $tmp1015 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1016 = *$tmp1015;
frost$collections$Array** $tmp1017 = &$tmp1016->parameters;
frost$collections$Array* $tmp1018 = *$tmp1017;
ITable* $tmp1019 = ((frost$collections$CollectionView*) $tmp1018)->$class->itable;
while ($tmp1019->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1019 = $tmp1019->next;
}
$fn1021 $tmp1020 = $tmp1019->methods[0];
frost$core$Int64 $tmp1022 = $tmp1020(((frost$collections$CollectionView*) $tmp1018));
frost$core$Int64 $tmp1023 = (frost$core$Int64) {1};
frost$core$Bit $tmp1024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1022, $tmp1023);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1026 = (frost$core$Int64) {239};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1027, $tmp1026);
abort(); // unreachable
block3:;
// line 240
ITable* $tmp1028 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$core$Int64 $tmp1031 = $tmp1029(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp1032 = (frost$core$Int64) {1};
frost$core$Bit $tmp1033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1031, $tmp1032);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1036, $tmp1035);
abort(); // unreachable
block5:;
// line 241
org$frostlang$frostc$MethodDecl** $tmp1037 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1038 = *$tmp1037;
frost$collections$Array** $tmp1039 = &$tmp1038->parameters;
frost$collections$Array* $tmp1040 = *$tmp1039;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {0};
frost$core$Object* $tmp1042 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1040, $tmp1041);
org$frostlang$frostc$Type** $tmp1043 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1042)->type;
org$frostlang$frostc$Type* $tmp1044 = *$tmp1043;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$Type* $tmp1045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local0) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q($tmp1042);
// unreffing REF($42:frost.collections.Array.T)
// line 242
org$frostlang$frostc$Type* $tmp1046 = *(&local0);
org$frostlang$frostc$Type* $tmp1047 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1048 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1046, $tmp1047);
bool $tmp1049 = $tmp1048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
// unreffing REF($58:org.frostlang.frostc.Type)
if ($tmp1049) goto block7; else goto block8;
block7:;
// line 243
frost$core$Int64 $tmp1050 = (frost$core$Int64) {0};
ITable* $tmp1051 = param4->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[0];
frost$core$Object* $tmp1054 = $tmp1052(param4, $tmp1050);
org$frostlang$frostc$Compiler$TypeContext* $tmp1055 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1056 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1057 = *(&local0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1055, $tmp1056, $tmp1057);
org$frostlang$frostc$IR$Value* $tmp1058 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1054), $tmp1055);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
org$frostlang$frostc$IR$Value* $tmp1059 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local1) = $tmp1058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($75:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing REF($71:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp1054);
// unreffing REF($69:frost.collections.ListView.T)
// line 244
org$frostlang$frostc$IR$Value* $tmp1060 = *(&local1);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block9; else goto block10;
block9:;
// line 245
org$frostlang$frostc$IR** $tmp1063 = &param0->ir;
org$frostlang$frostc$IR* $tmp1064 = *$tmp1063;
org$frostlang$frostc$IR$Statement* $tmp1065 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1066 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp1067 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1068 = *$tmp1067;
frost$core$Weak** $tmp1069 = &$tmp1068->owner;
frost$core$Weak* $tmp1070 = *$tmp1069;
frost$core$Object* $tmp1071 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1070);
frost$collections$Array* $tmp1072 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1073 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1072, $tmp1073);
org$frostlang$frostc$IR$Value* $tmp1074 = *(&local1);
frost$core$Bit $tmp1075 = frost$core$Bit$init$builtin_bit($tmp1074 != NULL);
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1077 = (frost$core$Int64) {246};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1078, $tmp1077, &$s1079);
abort(); // unreachable
block11:;
frost$collections$Array$add$frost$collections$Array$T($tmp1072, ((frost$core$Object*) $tmp1074));
org$frostlang$frostc$FixedArray* $tmp1080 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1072);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1065, $tmp1066, param1, ((org$frostlang$frostc$ClassDecl*) $tmp1071), $tmp1080);
$fn1082 $tmp1081 = ($fn1082) $tmp1064->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1083 = $tmp1081($tmp1064, $tmp1065);
*(&local2) = $tmp1083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// unreffing REF($127:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing REF($110:frost.collections.Array<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
// unreffing REF($108:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing REF($101:org.frostlang.frostc.IR.Statement)
// line 247
org$frostlang$frostc$Pair* $tmp1084 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1085 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1086;
$tmp1086 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1086->value = $tmp1085;
org$frostlang$frostc$IR$Value* $tmp1087 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1089 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp1090 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1091 = *$tmp1090;
frost$core$Weak** $tmp1092 = &$tmp1091->owner;
frost$core$Weak* $tmp1093 = *$tmp1092;
frost$core$Object* $tmp1094 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1093);
org$frostlang$frostc$Type** $tmp1095 = &((org$frostlang$frostc$ClassDecl*) $tmp1094)->type;
org$frostlang$frostc$Type* $tmp1096 = *$tmp1095;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1087, $tmp1088, $tmp1089, $tmp1096);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1084, ((frost$core$Object*) $tmp1086), ((frost$core$Object*) $tmp1087));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q($tmp1094);
// unreffing REF($158:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($150:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($149:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// unreffing REF($146:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp1097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1084;
block10:;
org$frostlang$frostc$IR$Value* $tmp1099 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp1100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 252
org$frostlang$frostc$Pair* $tmp1101 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1102 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1103;
$tmp1103 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1103->value = $tmp1102;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1101, ((frost$core$Object*) $tmp1103), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($207:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($204:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1101;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 258
org$frostlang$frostc$Type** $tmp1104 = &param3->target;
org$frostlang$frostc$Type* $tmp1105 = *$tmp1104;
frost$core$Bit $tmp1106 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block3; else goto block4;
block3:;
*(&local0) = $tmp1106;
goto block5;
block4:;
org$frostlang$frostc$Type** $tmp1108 = &param3->target;
org$frostlang$frostc$Type* $tmp1109 = *$tmp1108;
frost$core$Bit $tmp1110 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1112 = &param3->target;
org$frostlang$frostc$Type* $tmp1113 = *$tmp1112;
org$frostlang$frostc$FixedArray** $tmp1114 = &$tmp1113->subtypes;
org$frostlang$frostc$FixedArray* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = frost$core$Bit$init$builtin_bit($tmp1115 != NULL);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {258};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1119, $tmp1118, &$s1120);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {1};
frost$core$Object* $tmp1122 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1115, $tmp1121);
frost$core$Bit $tmp1123 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q($tmp1122);
// unreffing REF($27:org.frostlang.frostc.FixedArray.T)
*(&local1) = $tmp1123;
goto block8;
block7:;
*(&local1) = $tmp1110;
goto block8;
block8:;
frost$core$Bit $tmp1124 = *(&local1);
*(&local0) = $tmp1124;
goto block5;
block5:;
frost$core$Bit $tmp1125 = *(&local0);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block1; else goto block2;
block1:;
// line 259
org$frostlang$frostc$Pair* $tmp1127 = org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing REF($44:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1127;
block2:;
// line 261
org$frostlang$frostc$Type** $tmp1128 = &param3->target;
org$frostlang$frostc$Type* $tmp1129 = *$tmp1128;
frost$core$Bit $tmp1130 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp1129);
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block11; else goto block12;
block11:;
// line 262
org$frostlang$frostc$Pair* $tmp1132 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($58:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1132;
block12:;
// line 264
org$frostlang$frostc$Type** $tmp1133 = &param3->target;
org$frostlang$frostc$Type* $tmp1134 = *$tmp1133;
org$frostlang$frostc$Type* $tmp1135 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1136 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1134, $tmp1135);
bool $tmp1137 = $tmp1136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing REF($68:org.frostlang.frostc.Type)
if ($tmp1137) goto block13; else goto block14;
block13:;
// line 265
org$frostlang$frostc$Pair* $tmp1138 = org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($76:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1138;
block14:;
// line 267
org$frostlang$frostc$Pair* $tmp1139 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1140 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1141;
$tmp1141 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1141->value = $tmp1140;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1139, ((frost$core$Object*) $tmp1141), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($87:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing REF($84:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1139;

}
frost$collections$ListView* org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$Array* local4 = NULL;
// line 281
org$frostlang$frostc$FixedArray** $tmp1142 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1143 = *$tmp1142;
frost$core$Bit $tmp1144 = frost$core$Bit$init$builtin_bit($tmp1143 == NULL);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block1; else goto block2;
block1:;
// line 282
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
return ((frost$collections$ListView*) NULL);
block2:;
// line 284
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local0) = ((frost$collections$Array*) NULL);
// line 285
frost$core$Int64 $tmp1147 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1148 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1149 = *$tmp1148;
frost$core$Bit $tmp1150 = frost$core$Bit$init$builtin_bit($tmp1149 != NULL);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1153, $tmp1152, &$s1154);
abort(); // unreachable
block3:;
ITable* $tmp1155 = ((frost$collections$CollectionView*) $tmp1149)->$class->itable;
while ($tmp1155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[0];
frost$core$Int64 $tmp1158 = $tmp1156(((frost$collections$CollectionView*) $tmp1149));
frost$core$Bit $tmp1159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1160 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1147, $tmp1158, $tmp1159);
frost$core$Int64 $tmp1161 = $tmp1160.min;
*(&local1) = $tmp1161;
frost$core$Int64 $tmp1162 = $tmp1160.max;
frost$core$Bit $tmp1163 = $tmp1160.inclusive;
bool $tmp1164 = $tmp1163.value;
frost$core$Int64 $tmp1165 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1166 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1165);
if ($tmp1164) goto block8; else goto block9;
block8:;
int64_t $tmp1167 = $tmp1161.value;
int64_t $tmp1168 = $tmp1162.value;
bool $tmp1169 = $tmp1167 <= $tmp1168;
frost$core$Bit $tmp1170 = (frost$core$Bit) {$tmp1169};
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block5; else goto block6;
block9:;
int64_t $tmp1172 = $tmp1161.value;
int64_t $tmp1173 = $tmp1162.value;
bool $tmp1174 = $tmp1172 < $tmp1173;
frost$core$Bit $tmp1175 = (frost$core$Bit) {$tmp1174};
bool $tmp1176 = $tmp1175.value;
if ($tmp1176) goto block5; else goto block6;
block5:;
// line 286
org$frostlang$frostc$FixedArray** $tmp1177 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1178 = *$tmp1177;
frost$core$Bit $tmp1179 = frost$core$Bit$init$builtin_bit($tmp1178 != NULL);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1182, $tmp1181, &$s1183);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp1184 = *(&local1);
frost$core$Object* $tmp1185 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1178, $tmp1184);
org$frostlang$frostc$Type$Kind* $tmp1186 = &((org$frostlang$frostc$Type*) $tmp1185)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1187 = *$tmp1186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1188;
$tmp1188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1188->value = $tmp1187;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1190 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1189);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1191;
$tmp1191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1191->value = $tmp1190;
ITable* $tmp1192 = ((frost$core$Equatable*) $tmp1188)->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[0];
frost$core$Bit $tmp1195 = $tmp1193(((frost$core$Equatable*) $tmp1188), ((frost$core$Equatable*) $tmp1191));
bool $tmp1196 = $tmp1195.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1191)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1188)));
// unreffing REF($72:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1185);
// unreffing REF($68:org.frostlang.frostc.FixedArray.T)
if ($tmp1196) goto block10; else goto block14;
block10:;
// line 287
org$frostlang$frostc$FixedArray** $tmp1197 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1198 = *$tmp1197;
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1202, $tmp1201, &$s1203);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp1204 = *(&local1);
frost$core$Object* $tmp1205 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1198, $tmp1204);
frost$core$Weak** $tmp1206 = &((org$frostlang$frostc$Type*) $tmp1205)->genericMethodParameter;
frost$core$Weak* $tmp1207 = *$tmp1206;
frost$core$Object* $tmp1208 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1207);
frost$core$Bit $tmp1209 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1208) != NULL);
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1212, $tmp1211, &$s1213);
abort(); // unreachable
block19:;
frost$core$String** $tmp1214 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1208)->owner;
frost$core$String* $tmp1215 = *$tmp1214;
frost$core$Weak** $tmp1216 = &param0->owner;
frost$core$Weak* $tmp1217 = *$tmp1216;
frost$core$Object* $tmp1218 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1217);
frost$core$String** $tmp1219 = &((org$frostlang$frostc$ClassDecl*) $tmp1218)->name;
frost$core$String* $tmp1220 = *$tmp1219;
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1220, &$s1222);
frost$core$String** $tmp1223 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1224 = *$tmp1223;
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1221, $tmp1224);
frost$core$Bit $tmp1226 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1215, $tmp1225);
bool $tmp1227 = $tmp1226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing REF($131:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing REF($127:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1218);
// unreffing REF($123:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
// unreffing REF($108:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1205);
// unreffing REF($103:org.frostlang.frostc.FixedArray.T)
if ($tmp1227) goto block15; else goto block16;
block15:;
// line 288
frost$collections$Array* $tmp1228 = *(&local0);
frost$core$Bit $tmp1229 = frost$core$Bit$init$builtin_bit($tmp1228 == NULL);
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block21; else goto block22;
block21:;
// line 289
frost$collections$Array* $tmp1231 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$collections$Array* $tmp1232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local0) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// unreffing REF($157:frost.collections.Array<frost.collections.ListView<frost.core.Int64>>)
goto block22;
block22:;
// line 291
frost$collections$Array* $tmp1233 = *(&local0);
frost$core$Bit $tmp1234 = frost$core$Bit$init$builtin_bit($tmp1233 != NULL);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp1236 = (frost$core$Int64) {291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1237, $tmp1236, &$s1238);
abort(); // unreachable
block23:;
frost$collections$Array* $tmp1239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1240 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1239, $tmp1240);
frost$core$Int64 $tmp1241 = *(&local1);
frost$core$Int64$wrapper* $tmp1242;
$tmp1242 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1242->value = $tmp1241;
frost$collections$Array$add$frost$collections$Array$T($tmp1239, ((frost$core$Object*) $tmp1242));
frost$collections$ImmutableArray* $tmp1243 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp1239);
frost$collections$Array$add$frost$collections$Array$T($tmp1233, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1243)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($190:frost.collections.ImmutableArray<frost.collections.ImmutableArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing REF($187:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// unreffing REF($181:frost.collections.Array<frost.core.Int64>)
goto block16;
block16:;
goto block11;
block14:;
// line 1
// line 295
org$frostlang$frostc$FixedArray** $tmp1244 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1245 = *$tmp1244;
frost$core$Bit $tmp1246 = frost$core$Bit$init$builtin_bit($tmp1245 != NULL);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1248 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1249, $tmp1248, &$s1250);
abort(); // unreachable
block25:;
frost$core$Int64 $tmp1251 = *(&local1);
frost$core$Object* $tmp1252 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1245, $tmp1251);
frost$collections$ListView* $tmp1253 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp1252));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$collections$ListView* $tmp1254 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local2) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($222:frost.collections.ListView<frost.collections.ListView<frost.core.Int64>>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1252);
// unreffing REF($220:org.frostlang.frostc.FixedArray.T)
// line 296
frost$collections$ListView* $tmp1255 = *(&local2);
frost$core$Bit $tmp1256 = frost$core$Bit$init$builtin_bit($tmp1255 != NULL);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block27; else goto block28;
block27:;
// line 297
frost$collections$Array* $tmp1258 = *(&local0);
frost$core$Bit $tmp1259 = frost$core$Bit$init$builtin_bit($tmp1258 == NULL);
bool $tmp1260 = $tmp1259.value;
if ($tmp1260) goto block29; else goto block30;
block29:;
// line 298
frost$collections$Array* $tmp1261 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$collections$Array* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing REF($249:frost.collections.Array<frost.collections.ListView<frost.core.Int64>>)
goto block30;
block30:;
// line 300
frost$collections$ListView* $tmp1263 = *(&local2);
frost$core$Bit $tmp1264 = frost$core$Bit$init$builtin_bit($tmp1263 != NULL);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1266 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1267, $tmp1266, &$s1268);
abort(); // unreachable
block31:;
ITable* $tmp1269 = ((frost$collections$Iterable*) $tmp1263)->$class->itable;
while ($tmp1269->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1269 = $tmp1269->next;
}
$fn1271 $tmp1270 = $tmp1269->methods[0];
frost$collections$Iterator* $tmp1272 = $tmp1270(((frost$collections$Iterable*) $tmp1263));
goto block33;
block33:;
ITable* $tmp1273 = $tmp1272->$class->itable;
while ($tmp1273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1273 = $tmp1273->next;
}
$fn1275 $tmp1274 = $tmp1273->methods[0];
frost$core$Bit $tmp1276 = $tmp1274($tmp1272);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block35; else goto block34;
block34:;
*(&local3) = ((frost$collections$ListView*) NULL);
ITable* $tmp1278 = $tmp1272->$class->itable;
while ($tmp1278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[1];
frost$core$Object* $tmp1281 = $tmp1279($tmp1272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1281)));
frost$collections$ListView* $tmp1282 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local3) = ((frost$collections$ListView*) $tmp1281);
// line 301
frost$collections$Array* $tmp1283 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1283, $tmp1284);
frost$core$Int64 $tmp1285 = *(&local1);
frost$core$Int64$wrapper* $tmp1286;
$tmp1286 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1286->value = $tmp1285;
frost$collections$Array$add$frost$collections$Array$T($tmp1283, ((frost$core$Object*) $tmp1286));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$collections$Array* $tmp1287 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local4) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($301:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($295:frost.collections.Array<frost.core.Int64>)
// line 302
frost$collections$Array* $tmp1288 = *(&local4);
frost$collections$ListView* $tmp1289 = *(&local3);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1288, ((frost$collections$CollectionView*) $tmp1289));
// line 303
frost$collections$Array* $tmp1290 = *(&local0);
frost$core$Bit $tmp1291 = frost$core$Bit$init$builtin_bit($tmp1290 != NULL);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1293 = (frost$core$Int64) {303};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1294, $tmp1293, &$s1295);
abort(); // unreachable
block36:;
frost$collections$Array* $tmp1296 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1290, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1296)));
frost$collections$Array* $tmp1297 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// unreffing finalPath
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1281);
// unreffing REF($286:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1298 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// unreffing path
*(&local3) = ((frost$collections$ListView*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing REF($275:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block28;
block28:;
frost$collections$ListView* $tmp1299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing paths
*(&local2) = ((frost$collections$ListView*) NULL);
goto block11;
block11:;
goto block7;
block7:;
frost$core$Int64 $tmp1300 = *(&local1);
int64_t $tmp1301 = $tmp1162.value;
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301 - $tmp1302;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {$tmp1303};
frost$core$UInt64 $tmp1305 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1304);
if ($tmp1164) goto block39; else goto block40;
block39:;
uint64_t $tmp1306 = $tmp1305.value;
uint64_t $tmp1307 = $tmp1166.value;
bool $tmp1308 = $tmp1306 >= $tmp1307;
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block38; else goto block6;
block40:;
uint64_t $tmp1311 = $tmp1305.value;
uint64_t $tmp1312 = $tmp1166.value;
bool $tmp1313 = $tmp1311 > $tmp1312;
frost$core$Bit $tmp1314 = (frost$core$Bit) {$tmp1313};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block38; else goto block6;
block38:;
int64_t $tmp1316 = $tmp1300.value;
int64_t $tmp1317 = $tmp1165.value;
int64_t $tmp1318 = $tmp1316 + $tmp1317;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {$tmp1318};
*(&local1) = $tmp1319;
goto block5;
block6:;
// line 308
frost$collections$Array* $tmp1320 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1320)));
frost$collections$Array* $tmp1321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1320);

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
// line 313
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local0) = param0;
// line 314
ITable* $tmp1323 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp1323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[0];
frost$collections$Iterator* $tmp1326 = $tmp1324(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1327 = $tmp1326->$class->itable;
while ($tmp1327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[0];
frost$core$Bit $tmp1330 = $tmp1328($tmp1326);
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block3; else goto block2;
block2:;
ITable* $tmp1332 = $tmp1326->$class->itable;
while ($tmp1332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1332 = $tmp1332->next;
}
$fn1334 $tmp1333 = $tmp1332->methods[1];
frost$core$Object* $tmp1335 = $tmp1333($tmp1326);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp1335)->value;
// line 315
org$frostlang$frostc$Type* $tmp1336 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp1337 = &$tmp1336->subtypes;
org$frostlang$frostc$FixedArray* $tmp1338 = *$tmp1337;
frost$core$Bit $tmp1339 = frost$core$Bit$init$builtin_bit($tmp1338 != NULL);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1341 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1342, $tmp1341, &$s1343);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp1344 = *(&local1);
frost$core$Object* $tmp1345 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1338, $tmp1344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1345)));
org$frostlang$frostc$Type* $tmp1346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1345);
frost$core$Frost$unref$frost$core$Object$Q($tmp1345);
// unreffing REF($39:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1335);
// unreffing REF($22:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 317
org$frostlang$frostc$Type* $tmp1347 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$Type* $tmp1348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing result
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1347;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

// line 325
org$frostlang$frostc$Type** $tmp1349 = &param0->bound;
org$frostlang$frostc$Type* $tmp1350 = *$tmp1349;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
return $tmp1350;

}
org$frostlang$frostc$MethodRef* org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodRef* param1, frost$collections$ListView* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$ListView* local4 = NULL;
org$frostlang$frostc$Pair* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Int64 local7;
// line 322
frost$core$Bit* $tmp1351 = &param1->requiresTypeInference;
frost$core$Bit $tmp1352 = *$tmp1351;
frost$core$Bit $tmp1353 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block1; else goto block2;
block1:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 325
frost$collections$Array* $tmp1355 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$MethodDecl** $tmp1356 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1357 = *$tmp1356;
frost$collections$Array** $tmp1358 = &$tmp1357->genericParameters;
frost$collections$Array* $tmp1359 = *$tmp1358;
frost$core$Bit $tmp1360 = frost$core$Bit$init$builtin_bit($tmp1359 != NULL);
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1363, $tmp1362, &$s1364);
abort(); // unreachable
block3:;
frost$core$Method* $tmp1366 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp1366, ((frost$core$Int8*) org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp1367 = ((frost$collections$CollectionView*) $tmp1359)->$class->itable;
while ($tmp1367->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[8];
frost$collections$Array* $tmp1370 = $tmp1368(((frost$collections$CollectionView*) $tmp1359), ((frost$core$MutableMethod*) $tmp1366));
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp1355, ((frost$collections$ListView*) $tmp1370));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$Array* $tmp1371 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local0) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing REF($33:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($27:frost.core.Method)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing REF($12:frost.collections.Array<org.frostlang.frostc.Type>)
// line 326
frost$core$Int64 $tmp1372 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl** $tmp1373 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1374 = *$tmp1373;
frost$collections$Array** $tmp1375 = &$tmp1374->parameters;
frost$collections$Array* $tmp1376 = *$tmp1375;
ITable* $tmp1377 = ((frost$collections$CollectionView*) $tmp1376)->$class->itable;
while ($tmp1377->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1377 = $tmp1377->next;
}
$fn1379 $tmp1378 = $tmp1377->methods[0];
frost$core$Int64 $tmp1380 = $tmp1378(((frost$collections$CollectionView*) $tmp1376));
frost$core$Bit $tmp1381 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1382 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1372, $tmp1380, $tmp1381);
frost$core$Int64 $tmp1383 = $tmp1382.min;
*(&local1) = $tmp1383;
frost$core$Int64 $tmp1384 = $tmp1382.max;
frost$core$Bit $tmp1385 = $tmp1382.inclusive;
bool $tmp1386 = $tmp1385.value;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1388 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1387);
if ($tmp1386) goto block8; else goto block9;
block8:;
int64_t $tmp1389 = $tmp1383.value;
int64_t $tmp1390 = $tmp1384.value;
bool $tmp1391 = $tmp1389 <= $tmp1390;
frost$core$Bit $tmp1392 = (frost$core$Bit) {$tmp1391};
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block5; else goto block6;
block9:;
int64_t $tmp1394 = $tmp1383.value;
int64_t $tmp1395 = $tmp1384.value;
bool $tmp1396 = $tmp1394 < $tmp1395;
frost$core$Bit $tmp1397 = (frost$core$Bit) {$tmp1396};
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block5; else goto block6;
block5:;
// line 327
frost$core$Int64 $tmp1399 = *(&local1);
org$frostlang$frostc$Type* $tmp1400 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1399);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
org$frostlang$frostc$Type* $tmp1401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local2) = $tmp1400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing REF($87:org.frostlang.frostc.Type)
// line 328
org$frostlang$frostc$MethodDecl** $tmp1402 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1403 = *$tmp1402;
org$frostlang$frostc$Type* $tmp1404 = *(&local2);
frost$collections$ListView* $tmp1405 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q($tmp1403, $tmp1404);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$collections$ListView* $tmp1406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local3) = $tmp1405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
// unreffing REF($102:frost.collections.ListView<frost.collections.ListView<frost.core.Int64>>?)
// line 329
frost$collections$ListView* $tmp1407 = *(&local3);
frost$core$Bit $tmp1408 = frost$core$Bit$init$builtin_bit($tmp1407 != NULL);
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block10; else goto block11;
block10:;
// line 330
frost$collections$ListView* $tmp1410 = *(&local3);
frost$core$Bit $tmp1411 = frost$core$Bit$init$builtin_bit($tmp1410 != NULL);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {330};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1414, $tmp1413, &$s1415);
abort(); // unreachable
block12:;
ITable* $tmp1416 = ((frost$collections$Iterable*) $tmp1410)->$class->itable;
while ($tmp1416->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1416 = $tmp1416->next;
}
$fn1418 $tmp1417 = $tmp1416->methods[0];
frost$collections$Iterator* $tmp1419 = $tmp1417(((frost$collections$Iterable*) $tmp1410));
goto block14;
block14:;
ITable* $tmp1420 = $tmp1419->$class->itable;
while ($tmp1420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1420 = $tmp1420->next;
}
$fn1422 $tmp1421 = $tmp1420->methods[0];
frost$core$Bit $tmp1423 = $tmp1421($tmp1419);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block16; else goto block15;
block15:;
*(&local4) = ((frost$collections$ListView*) NULL);
ITable* $tmp1425 = $tmp1419->$class->itable;
while ($tmp1425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[1];
frost$core$Object* $tmp1428 = $tmp1426($tmp1419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1428)));
frost$collections$ListView* $tmp1429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local4) = ((frost$collections$ListView*) $tmp1428);
// line 331
frost$core$Int64 $tmp1430 = *(&local1);
ITable* $tmp1431 = param2->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
frost$core$Object* $tmp1434 = $tmp1432(param2, $tmp1430);
org$frostlang$frostc$Type* $tmp1435 = *(&local2);
org$frostlang$frostc$Pair* $tmp1436 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1434), $tmp1435);
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
org$frostlang$frostc$Pair* $tmp1437 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local5) = $tmp1436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// unreffing REF($157:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1434);
// unreffing REF($154:frost.collections.ListView.T)
// line 332
org$frostlang$frostc$Pair* $tmp1438 = *(&local5);
frost$core$Bit $tmp1439 = frost$core$Bit$init$builtin_bit($tmp1438 == NULL);
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block17; else goto block18;
block17:;
// line 333
frost$core$Int64 $tmp1441 = *(&local1);
ITable* $tmp1442 = param2->$class->itable;
while ($tmp1442->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1442 = $tmp1442->next;
}
$fn1444 $tmp1443 = $tmp1442->methods[0];
frost$core$Object* $tmp1445 = $tmp1443(param2, $tmp1441);
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1447, ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1445)));
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1446, &$s1449);
org$frostlang$frostc$Type* $tmp1450 = *(&local2);
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1448, ((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1451, &$s1453);
frost$io$Console$printLine$frost$core$String($tmp1452);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// unreffing REF($185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
// unreffing REF($181:frost.collections.ListView.T)
// line 334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing argType
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1428);
// unreffing REF($142:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// unreffing g
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($131:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$ListView* $tmp1456 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing generics
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// unreffing paramType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block18:;
// line 336
org$frostlang$frostc$MethodDecl** $tmp1459 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1460 = *$tmp1459;
frost$collections$Array** $tmp1461 = &$tmp1460->parameters;
frost$collections$Array* $tmp1462 = *$tmp1461;
frost$core$Int64 $tmp1463 = *(&local1);
frost$core$Object* $tmp1464 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1462, $tmp1463);
org$frostlang$frostc$Type** $tmp1465 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1464)->type;
org$frostlang$frostc$Type* $tmp1466 = *$tmp1465;
frost$collections$ListView* $tmp1467 = *(&local4);
org$frostlang$frostc$Type* $tmp1468 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type($tmp1466, $tmp1467);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$Type* $tmp1469 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local6) = $tmp1468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($254:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1464);
// unreffing REF($249:frost.collections.Array.T)
// line 337
org$frostlang$frostc$Type* $tmp1470 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1471 = &$tmp1470->typeKind;
org$frostlang$frostc$Type$Kind $tmp1472 = *$tmp1471;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1473;
$tmp1473 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1473->value = $tmp1472;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1475 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1474);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1476;
$tmp1476 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1476->value = $tmp1475;
ITable* $tmp1477 = ((frost$core$Equatable*) $tmp1473)->$class->itable;
while ($tmp1477->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1477 = $tmp1477->next;
}
$fn1479 $tmp1478 = $tmp1477->methods[0];
frost$core$Bit $tmp1480 = $tmp1478(((frost$core$Equatable*) $tmp1473), ((frost$core$Equatable*) $tmp1476));
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1482 = (frost$core$Int64) {337};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1483, $tmp1482);
abort(); // unreachable
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1476)));
// unreffing REF($276:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1473)));
// unreffing REF($272:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 338
frost$core$Int64 $tmp1484 = (frost$core$Int64) {0};
*(&local7) = $tmp1484;
// line 339
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp1485 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1486 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1487 = *$tmp1486;
frost$collections$Array** $tmp1488 = &$tmp1487->genericParameters;
frost$collections$Array* $tmp1489 = *$tmp1488;
frost$core$Bit $tmp1490 = frost$core$Bit$init$builtin_bit($tmp1489 != NULL);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1492 = (frost$core$Int64) {339};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1493, $tmp1492, &$s1494);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp1495 = *(&local1);
frost$core$Object* $tmp1496 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1489, $tmp1495);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1485, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1496));
org$frostlang$frostc$Type* $tmp1497 = *(&local6);
ITable* $tmp1498 = ((frost$core$Equatable*) $tmp1485)->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[1];
frost$core$Bit $tmp1501 = $tmp1499(((frost$core$Equatable*) $tmp1485), ((frost$core$Equatable*) $tmp1497));
bool $tmp1502 = $tmp1501.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1496);
// unreffing REF($310:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
// unreffing REF($295:org.frostlang.frostc.Type)
if ($tmp1502) goto block22; else goto block23;
block22:;
// line 340
frost$core$Int64 $tmp1503 = *(&local7);
frost$core$Int64 $tmp1504 = (frost$core$Int64) {1};
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505 + $tmp1506;
frost$core$Int64 $tmp1508 = (frost$core$Int64) {$tmp1507};
*(&local7) = $tmp1508;
goto block21;
block23:;
// line 342
frost$collections$Array* $tmp1509 = *(&local0);
frost$core$Int64 $tmp1510 = *(&local7);
frost$collections$Array* $tmp1511 = *(&local0);
frost$core$Int64 $tmp1512 = *(&local7);
frost$core$Object* $tmp1513 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1511, $tmp1512);
org$frostlang$frostc$Pair* $tmp1514 = *(&local5);
frost$core$Bit $tmp1515 = frost$core$Bit$init$builtin_bit($tmp1514 != NULL);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1517 = (frost$core$Int64) {343};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1518, $tmp1517, &$s1519);
abort(); // unreachable
block26:;
frost$core$Object** $tmp1520 = &$tmp1514->first;
frost$core$Object* $tmp1521 = *$tmp1520;
frost$collections$ListView* $tmp1522 = *(&local4);
org$frostlang$frostc$Type* $tmp1523 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1521), $tmp1522);
org$frostlang$frostc$Type* $tmp1524 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1513), param0, $tmp1523);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1509, $tmp1510, ((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
// unreffing REF($359:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// unreffing REF($358:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1513);
// unreffing REF($343:frost.collections.Array.T)
org$frostlang$frostc$Type* $tmp1525 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// unreffing parameter
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1526 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
// unreffing argType
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1428);
// unreffing REF($142:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1527 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing g
*(&local4) = ((frost$collections$ListView*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($131:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block11;
block11:;
frost$collections$ListView* $tmp1528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
// unreffing generics
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// unreffing paramType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1530 = *(&local1);
int64_t $tmp1531 = $tmp1384.value;
int64_t $tmp1532 = $tmp1530.value;
int64_t $tmp1533 = $tmp1531 - $tmp1532;
frost$core$Int64 $tmp1534 = (frost$core$Int64) {$tmp1533};
frost$core$UInt64 $tmp1535 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1534);
if ($tmp1386) goto block29; else goto block30;
block29:;
uint64_t $tmp1536 = $tmp1535.value;
uint64_t $tmp1537 = $tmp1388.value;
bool $tmp1538 = $tmp1536 >= $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block28; else goto block6;
block30:;
uint64_t $tmp1541 = $tmp1535.value;
uint64_t $tmp1542 = $tmp1388.value;
bool $tmp1543 = $tmp1541 > $tmp1542;
frost$core$Bit $tmp1544 = (frost$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block28; else goto block6;
block28:;
int64_t $tmp1546 = $tmp1530.value;
int64_t $tmp1547 = $tmp1387.value;
int64_t $tmp1548 = $tmp1546 + $tmp1547;
frost$core$Int64 $tmp1549 = (frost$core$Int64) {$tmp1548};
*(&local1) = $tmp1549;
goto block5;
block6:;
// line 347
org$frostlang$frostc$MethodRef* $tmp1550 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp1551 = &param1->target;
org$frostlang$frostc$Type* $tmp1552 = *$tmp1551;
org$frostlang$frostc$MethodDecl** $tmp1553 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1554 = *$tmp1553;
frost$collections$Array* $tmp1555 = *(&local0);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1550, param0, $tmp1552, $tmp1554, ((frost$collections$ListView*) $tmp1555));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
// unreffing REF($431:org.frostlang.frostc.MethodRef)
frost$collections$Array* $tmp1556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1550;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

// line 354
org$frostlang$frostc$Pair* $tmp1557 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL), param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// unreffing REF($1:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
return $tmp1557;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, frost$collections$ListView* param5, org$frostlang$frostc$Compiler$TypeContext* param6) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodRef* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
org$frostlang$frostc$Pair* local8 = NULL;
frost$core$Bit local9;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Pair* local11 = NULL;
// line 362
ITable* $tmp1558 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1558->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1558 = $tmp1558->next;
}
$fn1560 $tmp1559 = $tmp1558->methods[0];
frost$core$Int64 $tmp1561 = $tmp1559(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp1562 = (frost$core$Int64) {0};
frost$core$Bit $tmp1563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1561, $tmp1562);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block1; else goto block2;
block1:;
// line 363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// line 365
frost$core$Int64 $tmp1565 = (frost$core$Int64) {9223372036854775807};
*(&local0) = $tmp1565;
// line 366
frost$collections$Array* $tmp1566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1566);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
frost$collections$Array* $tmp1567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local1) = $tmp1566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing REF($16:frost.collections.Array<org.frostlang.frostc.MethodRef>)
// line 367
ITable* $tmp1568 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$collections$Iterator* $tmp1571 = $tmp1569(((frost$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp1572 = $tmp1571->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$core$Bit $tmp1575 = $tmp1573($tmp1571);
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1577 = $tmp1571->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[1];
frost$core$Object* $tmp1580 = $tmp1578($tmp1571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1580)));
org$frostlang$frostc$MethodDecl* $tmp1581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp1580);
// line 368
org$frostlang$frostc$MethodDecl* $tmp1582 = *(&local2);
frost$collections$Array** $tmp1583 = &$tmp1582->parameters;
frost$collections$Array* $tmp1584 = *$tmp1583;
ITable* $tmp1585 = ((frost$collections$CollectionView*) $tmp1584)->$class->itable;
while ($tmp1585->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1585 = $tmp1585->next;
}
$fn1587 $tmp1586 = $tmp1585->methods[0];
frost$core$Int64 $tmp1588 = $tmp1586(((frost$collections$CollectionView*) $tmp1584));
ITable* $tmp1589 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1589 = $tmp1589->next;
}
$fn1591 $tmp1590 = $tmp1589->methods[0];
frost$core$Int64 $tmp1592 = $tmp1590(((frost$collections$CollectionView*) param5));
int64_t $tmp1593 = $tmp1588.value;
int64_t $tmp1594 = $tmp1592.value;
bool $tmp1595 = $tmp1593 != $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block6; else goto block7;
block6:;
// line 369
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block7:;
// line 371
org$frostlang$frostc$MethodDecl* $tmp1599 = *(&local2);
frost$core$Bit $tmp1600 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp1599);
frost$core$Bit $tmp1601 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1600);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block8; else goto block9;
block8:;
// line 372
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1603 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block9:;
// line 374
*(&local3) = ((org$frostlang$frostc$MethodRef*) NULL);
// line 375
frost$core$Bit $tmp1604 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block10; else goto block12;
block10:;
// line 376
frost$core$Bit $tmp1606 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1608 = (frost$core$Int64) {376};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1609, $tmp1608, &$s1610);
abort(); // unreachable
block13:;
$fn1612 $tmp1611 = ($fn1612) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1613 = $tmp1611(param2);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
org$frostlang$frostc$Type* $tmp1614 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local4) = $tmp1613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// unreffing REF($111:org.frostlang.frostc.Type)
// line 377
org$frostlang$frostc$Type* $tmp1615 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp1616 = &$tmp1615->typeKind;
org$frostlang$frostc$Type$Kind $tmp1617 = *$tmp1616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1618;
$tmp1618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1618->value = $tmp1617;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1620 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1619);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1621;
$tmp1621 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1621->value = $tmp1620;
ITable* $tmp1622 = ((frost$core$Equatable*) $tmp1618)->$class->itable;
while ($tmp1622->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1622 = $tmp1622->next;
}
$fn1624 $tmp1623 = $tmp1622->methods[0];
frost$core$Bit $tmp1625 = $tmp1623(((frost$core$Equatable*) $tmp1618), ((frost$core$Equatable*) $tmp1621));
bool $tmp1626 = $tmp1625.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1621)));
// unreffing REF($130:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1618)));
// unreffing REF($126:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1626) goto block15; else goto block16;
block15:;
// line 378
org$frostlang$frostc$Type* $tmp1627 = *(&local4);
frost$core$Weak** $tmp1628 = &$tmp1627->genericMethodParameter;
frost$core$Weak* $tmp1629 = *$tmp1628;
frost$core$Object* $tmp1630 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1629);
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1630) != NULL);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1633 = (frost$core$Int64) {378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1634, $tmp1633, &$s1635);
abort(); // unreachable
block17:;
org$frostlang$frostc$Type** $tmp1636 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1630)->bound;
org$frostlang$frostc$Type* $tmp1637 = *$tmp1636;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
org$frostlang$frostc$Type* $tmp1638 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local4) = $tmp1637;
frost$core$Frost$unref$frost$core$Object$Q($tmp1630);
// unreffing REF($146:frost.core.Weak.T)
goto block16;
block16:;
// line 380
org$frostlang$frostc$MethodRef* $tmp1639 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp1640 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp1641 = *(&local2);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1639, param0, $tmp1640, $tmp1641, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
org$frostlang$frostc$MethodRef* $tmp1642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local3) = $tmp1639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
// unreffing REF($169:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp1643 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// unreffing owner
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block11;
block12:;
// line 382
org$frostlang$frostc$MethodDecl* $tmp1644 = *(&local2);
org$frostlang$frostc$Annotations** $tmp1645 = &$tmp1644->annotations;
org$frostlang$frostc$Annotations* $tmp1646 = *$tmp1645;
frost$core$Bit $tmp1647 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1646);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block21; else goto block22;
block21:;
*(&local5) = $tmp1647;
goto block23;
block22:;
org$frostlang$frostc$MethodDecl* $tmp1649 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp1650 = &$tmp1649->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1651 = *$tmp1650;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1652;
$tmp1652 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
frost$core$Int64 $tmp1653 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1654 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1653);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
ITable* $tmp1656 = ((frost$core$Equatable*) $tmp1652)->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[0];
frost$core$Bit $tmp1659 = $tmp1657(((frost$core$Equatable*) $tmp1652), ((frost$core$Equatable*) $tmp1655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
// unreffing REF($204:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1652)));
// unreffing REF($200:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local5) = $tmp1659;
goto block23;
block23:;
frost$core$Bit $tmp1660 = *(&local5);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block19; else goto block24;
block19:;
// line 383
org$frostlang$frostc$MethodRef* $tmp1662 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$MethodDecl* $tmp1663 = *(&local2);
frost$core$Weak** $tmp1664 = &$tmp1663->owner;
frost$core$Weak* $tmp1665 = *$tmp1664;
frost$core$Object* $tmp1666 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1665);
org$frostlang$frostc$Type** $tmp1667 = &((org$frostlang$frostc$ClassDecl*) $tmp1666)->type;
org$frostlang$frostc$Type* $tmp1668 = *$tmp1667;
org$frostlang$frostc$MethodDecl* $tmp1669 = *(&local2);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1662, param0, $tmp1668, $tmp1669, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$MethodRef* $tmp1670 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local3) = $tmp1662;
frost$core$Frost$unref$frost$core$Object$Q($tmp1666);
// unreffing REF($224:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
// unreffing REF($219:org.frostlang.frostc.MethodRef)
goto block20;
block24:;
// line 1
// line 386
org$frostlang$frostc$MethodRef* $tmp1671 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
frost$collections$Stack** $tmp1672 = &param0->currentClass;
frost$collections$Stack* $tmp1673 = *$tmp1672;
frost$core$Int64 $tmp1674 = (frost$core$Int64) {0};
frost$core$Object* $tmp1675 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1673, $tmp1674);
org$frostlang$frostc$Type** $tmp1676 = &((org$frostlang$frostc$ClassDecl*) $tmp1675)->type;
org$frostlang$frostc$Type* $tmp1677 = *$tmp1676;
org$frostlang$frostc$MethodDecl* $tmp1678 = *(&local2);
frost$core$Weak** $tmp1679 = &$tmp1678->owner;
frost$core$Weak* $tmp1680 = *$tmp1679;
frost$core$Object* $tmp1681 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1680);
org$frostlang$frostc$Type* $tmp1682 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1677, ((org$frostlang$frostc$ClassDecl*) $tmp1681));
frost$core$Bit $tmp1683 = frost$core$Bit$init$builtin_bit($tmp1682 != NULL);
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {386};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1686, $tmp1685, &$s1687);
abort(); // unreachable
block25:;
org$frostlang$frostc$MethodDecl* $tmp1688 = *(&local2);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1671, param0, $tmp1682, $tmp1688, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
org$frostlang$frostc$MethodRef* $tmp1689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local3) = $tmp1671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// unreffing REF($260:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1681);
// unreffing REF($258:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1675);
// unreffing REF($250:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
// unreffing REF($245:org.frostlang.frostc.MethodRef)
goto block20;
block20:;
goto block11;
block11:;
// line 389
org$frostlang$frostc$MethodRef* $tmp1690 = *(&local3);
org$frostlang$frostc$MethodRef* $tmp1691 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp1690, param5);
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit($tmp1691 != NULL);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {389};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1695, $tmp1694, &$s1696);
abort(); // unreachable
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
org$frostlang$frostc$MethodRef* $tmp1697 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local3) = $tmp1691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
// unreffing REF($293:org.frostlang.frostc.MethodRef?)
// line 390
frost$core$Int64 $tmp1698 = (frost$core$Int64) {0};
*(&local6) = $tmp1698;
// line 391
frost$core$Int64 $tmp1699 = (frost$core$Int64) {0};
ITable* $tmp1700 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1700->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1700 = $tmp1700->next;
}
$fn1702 $tmp1701 = $tmp1700->methods[0];
frost$core$Int64 $tmp1703 = $tmp1701(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp1704 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1705 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1699, $tmp1703, $tmp1704);
frost$core$Int64 $tmp1706 = $tmp1705.min;
*(&local7) = $tmp1706;
frost$core$Int64 $tmp1707 = $tmp1705.max;
frost$core$Bit $tmp1708 = $tmp1705.inclusive;
bool $tmp1709 = $tmp1708.value;
frost$core$Int64 $tmp1710 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1711 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1710);
if ($tmp1709) goto block32; else goto block33;
block32:;
int64_t $tmp1712 = $tmp1706.value;
int64_t $tmp1713 = $tmp1707.value;
bool $tmp1714 = $tmp1712 <= $tmp1713;
frost$core$Bit $tmp1715 = (frost$core$Bit) {$tmp1714};
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block29; else goto block30;
block33:;
int64_t $tmp1717 = $tmp1706.value;
int64_t $tmp1718 = $tmp1707.value;
bool $tmp1719 = $tmp1717 < $tmp1718;
frost$core$Bit $tmp1720 = (frost$core$Bit) {$tmp1719};
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block29; else goto block30;
block29:;
// line 392
frost$core$Int64 $tmp1722 = *(&local7);
ITable* $tmp1723 = param5->$class->itable;
while ($tmp1723->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1723 = $tmp1723->next;
}
$fn1725 $tmp1724 = $tmp1723->methods[0];
frost$core$Object* $tmp1726 = $tmp1724(param5, $tmp1722);
org$frostlang$frostc$MethodRef* $tmp1727 = *(&local3);
frost$core$Int64 $tmp1728 = *(&local7);
org$frostlang$frostc$Type* $tmp1729 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1727, $tmp1728);
org$frostlang$frostc$Pair* $tmp1730 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1726), $tmp1729);
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
org$frostlang$frostc$Pair* $tmp1731 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local8) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
// unreffing REF($350:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// unreffing REF($349:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1726);
// unreffing REF($345:frost.collections.ListView.T)
// line 393
org$frostlang$frostc$Pair* $tmp1732 = *(&local8);
frost$core$Bit $tmp1733 = frost$core$Bit$init$builtin_bit($tmp1732 == NULL);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block34; else goto block35;
block34:;
// line 394
org$frostlang$frostc$Pair* $tmp1735 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
// unreffing argCost
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp1736 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing ref
*(&local3) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1737 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block35:;
// line 396
frost$core$Int64 $tmp1738 = *(&local6);
org$frostlang$frostc$Pair* $tmp1739 = *(&local8);
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739 != NULL);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1742 = (frost$core$Int64) {396};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1743, $tmp1742, &$s1744);
abort(); // unreachable
block36:;
frost$core$Object** $tmp1745 = &$tmp1739->second;
frost$core$Object* $tmp1746 = *$tmp1745;
int64_t $tmp1747 = $tmp1738.value;
int64_t $tmp1748 = ((frost$core$Int64$wrapper*) $tmp1746)->value.value;
int64_t $tmp1749 = $tmp1747 + $tmp1748;
frost$core$Int64 $tmp1750 = (frost$core$Int64) {$tmp1749};
*(&local6) = $tmp1750;
org$frostlang$frostc$Pair* $tmp1751 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
// unreffing argCost
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
goto block31;
block31:;
frost$core$Int64 $tmp1752 = *(&local7);
int64_t $tmp1753 = $tmp1707.value;
int64_t $tmp1754 = $tmp1752.value;
int64_t $tmp1755 = $tmp1753 - $tmp1754;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {$tmp1755};
frost$core$UInt64 $tmp1757 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1756);
if ($tmp1709) goto block39; else goto block40;
block39:;
uint64_t $tmp1758 = $tmp1757.value;
uint64_t $tmp1759 = $tmp1711.value;
bool $tmp1760 = $tmp1758 >= $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block38; else goto block30;
block40:;
uint64_t $tmp1763 = $tmp1757.value;
uint64_t $tmp1764 = $tmp1711.value;
bool $tmp1765 = $tmp1763 > $tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block38; else goto block30;
block38:;
int64_t $tmp1768 = $tmp1752.value;
int64_t $tmp1769 = $tmp1710.value;
int64_t $tmp1770 = $tmp1768 + $tmp1769;
frost$core$Int64 $tmp1771 = (frost$core$Int64) {$tmp1770};
*(&local7) = $tmp1771;
goto block29;
block30:;
// line 398
frost$core$Int64* $tmp1772 = &param6->$rawValue;
frost$core$Int64 $tmp1773 = *$tmp1772;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {2};
frost$core$Bit $tmp1775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1773, $tmp1774);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block42; else goto block43;
block42:;
// line 400
org$frostlang$frostc$MethodDecl* $tmp1777 = *(&local2);
org$frostlang$frostc$Type** $tmp1778 = &$tmp1777->returnType;
org$frostlang$frostc$Type* $tmp1779 = *$tmp1778;
org$frostlang$frostc$Type* $tmp1780 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1781 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1779, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block46; else goto block47;
block46:;
*(&local9) = $tmp1781;
goto block48;
block47:;
org$frostlang$frostc$MethodRef* $tmp1783 = *(&local3);
org$frostlang$frostc$Type* $tmp1784 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1783);
frost$core$Bit $tmp1785 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1784);
frost$core$Bit $tmp1786 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1785);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
// unreffing REF($461:org.frostlang.frostc.Type)
*(&local9) = $tmp1786;
goto block48;
block48:;
frost$core$Bit $tmp1787 = *(&local9);
bool $tmp1788 = $tmp1787.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
// unreffing REF($454:org.frostlang.frostc.Type)
if ($tmp1788) goto block44; else goto block45;
block44:;
// line 401
org$frostlang$frostc$MethodRef* $tmp1789 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
// unreffing ref
*(&local3) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1790 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block45:;
goto block41;
block43:;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {3};
frost$core$Bit $tmp1792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1773, $tmp1791);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block49; else goto block41;
block49:;
org$frostlang$frostc$Type** $tmp1794 = (org$frostlang$frostc$Type**) (param6->$data + 0);
org$frostlang$frostc$Type* $tmp1795 = *$tmp1794;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
org$frostlang$frostc$Type* $tmp1796 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local10) = $tmp1795;
// line 405
org$frostlang$frostc$MethodRef* $tmp1797 = *(&local3);
org$frostlang$frostc$Type* $tmp1798 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1797);
org$frostlang$frostc$Type* $tmp1799 = *(&local10);
org$frostlang$frostc$Pair* $tmp1800 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, $tmp1798, $tmp1799);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$Pair* $tmp1801 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local11) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// unreffing REF($508:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
// unreffing REF($506:org.frostlang.frostc.Type)
// line 406
org$frostlang$frostc$Pair* $tmp1802 = *(&local11);
frost$core$Bit $tmp1803 = frost$core$Bit$init$builtin_bit($tmp1802 == NULL);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block50; else goto block51;
block50:;
// line 407
org$frostlang$frostc$Pair* $tmp1805 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
// unreffing returnCost
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1806 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// unreffing t
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp1807 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// unreffing ref
*(&local3) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1808 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block51:;
// line 409
frost$core$Int64 $tmp1809 = *(&local6);
org$frostlang$frostc$Pair* $tmp1810 = *(&local11);
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit($tmp1810 != NULL);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {409};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1814, $tmp1813, &$s1815);
abort(); // unreachable
block52:;
frost$core$Object** $tmp1816 = &$tmp1810->second;
frost$core$Object* $tmp1817 = *$tmp1816;
int64_t $tmp1818 = $tmp1809.value;
int64_t $tmp1819 = ((frost$core$Int64$wrapper*) $tmp1817)->value.value;
int64_t $tmp1820 = $tmp1818 + $tmp1819;
frost$core$Int64 $tmp1821 = (frost$core$Int64) {$tmp1820};
*(&local6) = $tmp1821;
org$frostlang$frostc$Pair* $tmp1822 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
// unreffing returnCost
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1823 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing t
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block41;
block41:;
// line 412
frost$core$Int64 $tmp1824 = *(&local6);
org$frostlang$frostc$MethodDecl* $tmp1825 = *(&local2);
frost$core$Int64 $tmp1826 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64($tmp1825);
int64_t $tmp1827 = $tmp1824.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 - $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {$tmp1829};
*(&local6) = $tmp1830;
// line 413
frost$core$Int64 $tmp1831 = *(&local6);
frost$core$Int64 $tmp1832 = *(&local0);
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832.value;
bool $tmp1835 = $tmp1833 < $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block54; else goto block55;
block54:;
// line 414
frost$core$Int64 $tmp1838 = *(&local6);
*(&local0) = $tmp1838;
// line 415
frost$collections$Array* $tmp1839 = *(&local1);
frost$collections$Array$clear($tmp1839);
goto block55;
block55:;
// line 417
frost$core$Int64 $tmp1840 = *(&local6);
frost$core$Int64 $tmp1841 = *(&local0);
frost$core$Bit $tmp1842 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1840, $tmp1841);
bool $tmp1843 = $tmp1842.value;
if ($tmp1843) goto block56; else goto block57;
block56:;
// line 418
frost$collections$Array* $tmp1844 = *(&local1);
org$frostlang$frostc$MethodRef* $tmp1845 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp1844, ((frost$core$Object*) $tmp1845));
goto block57;
block57:;
org$frostlang$frostc$MethodRef* $tmp1846 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// unreffing ref
*(&local3) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// unreffing m
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
// unreffing REF($33:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 421
frost$collections$Array* $tmp1848 = *(&local1);
ITable* $tmp1849 = ((frost$collections$CollectionView*) $tmp1848)->$class->itable;
while ($tmp1849->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1849 = $tmp1849->next;
}
$fn1851 $tmp1850 = $tmp1849->methods[0];
frost$core$Int64 $tmp1852 = $tmp1850(((frost$collections$CollectionView*) $tmp1848));
frost$core$Int64 $tmp1853 = (frost$core$Int64) {0};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1852, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block58; else goto block59;
block58:;
// line 422
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp1856 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// unreffing best
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block59:;
// line 424
org$frostlang$frostc$Pair* $tmp1857 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp1858 = *(&local1);
frost$core$Int64 $tmp1859 = *(&local0);
frost$core$Int64$wrapper* $tmp1860;
$tmp1860 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1860->value = $tmp1859;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1857, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1858)), ((frost$core$Object*) $tmp1860));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing REF($664:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// unreffing REF($658:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
frost$collections$Array* $tmp1861 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// unreffing best
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1857;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
frost$core$Int64 local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$SymbolTable* local9 = NULL;
org$frostlang$frostc$FieldDecl* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
org$frostlang$frostc$IR$Statement$ID local13;
org$frostlang$frostc$FieldDecl* local14 = NULL;
org$frostlang$frostc$IR$Statement$ID local15;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$IR$Statement$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$IR$Block$ID local19;
org$frostlang$frostc$IR$Block$ID local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$IR$Statement$ID local22;
frost$collections$Array* local23 = NULL;
frost$core$Int64 local24;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$IR$Statement$ID local27;
org$frostlang$frostc$IR$Statement$ID local28;
org$frostlang$frostc$IR$Value* local29 = NULL;
// line 430
org$frostlang$frostc$IR** $tmp1862 = &param0->ir;
org$frostlang$frostc$IR* $tmp1863 = *$tmp1862;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$IR* $tmp1864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local0) = $tmp1863;
// line 431
$fn1866 $tmp1865 = ($fn1866) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1867 = $tmp1865(param2);
org$frostlang$frostc$Type* $tmp1868 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1867);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
org$frostlang$frostc$Type* $tmp1869 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
*(&local1) = $tmp1868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
// unreffing REF($13:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 432
org$frostlang$frostc$Type* $tmp1870 = *(&local1);
frost$core$Bit $tmp1871 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp1870);
frost$core$Bit $tmp1872 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1871);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block1; else goto block2;
block1:;
// line 433
org$frostlang$frostc$Type* $tmp1874 = *(&local1);
frost$core$String* $tmp1875 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1876, ((frost$core$Object*) $tmp1874));
frost$core$String* $tmp1877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1875, &$s1878);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1877);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
// unreffing REF($36:frost.core.String)
// line 434
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1879 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1880 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 436
org$frostlang$frostc$Type* $tmp1881 = *(&local1);
frost$core$Int64 $tmp1882 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1881);
ITable* $tmp1883 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1883->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1883 = $tmp1883->next;
}
$fn1885 $tmp1884 = $tmp1883->methods[0];
frost$core$Int64 $tmp1886 = $tmp1884(((frost$collections$CollectionView*) param3));
int64_t $tmp1887 = $tmp1882.value;
int64_t $tmp1888 = $tmp1886.value;
bool $tmp1889 = $tmp1887 != $tmp1888;
frost$core$Bit $tmp1890 = (frost$core$Bit) {$tmp1889};
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block3; else goto block4;
block3:;
// line 437
org$frostlang$frostc$Type* $tmp1892 = *(&local1);
frost$core$String* $tmp1893 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1894, ((frost$core$Object*) $tmp1892));
frost$core$String* $tmp1895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1893, &$s1896);
org$frostlang$frostc$Type* $tmp1897 = *(&local1);
frost$core$Int64 $tmp1898 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1897);
frost$core$Int64$wrapper* $tmp1899;
$tmp1899 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1899->value = $tmp1898;
frost$core$String* $tmp1900 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1895, ((frost$core$Object*) $tmp1899));
frost$core$String* $tmp1901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1900, &$s1902);
org$frostlang$frostc$Type* $tmp1903 = *(&local1);
frost$core$Int64 $tmp1904 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1903);
frost$core$Int64 $tmp1905 = (frost$core$Int64) {1};
frost$core$Bit $tmp1906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1904, $tmp1905);
frost$core$Bit$wrapper* $tmp1907;
$tmp1907 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1907->value = $tmp1906;
ITable* $tmp1908 = ((frost$core$Formattable*) $tmp1907)->$class->itable;
while ($tmp1908->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp1908 = $tmp1908->next;
}
$fn1910 $tmp1909 = $tmp1908->methods[0];
frost$core$String* $tmp1911 = $tmp1909(((frost$core$Formattable*) $tmp1907), &$s1912);
frost$core$String* $tmp1913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1914, $tmp1911);
frost$core$String* $tmp1915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1913, &$s1916);
ITable* $tmp1917 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1917->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1917 = $tmp1917->next;
}
$fn1919 $tmp1918 = $tmp1917->methods[0];
frost$core$Int64 $tmp1920 = $tmp1918(((frost$collections$CollectionView*) param3));
frost$core$Int64$wrapper* $tmp1921;
$tmp1921 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1921->value = $tmp1920;
frost$core$String* $tmp1922 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1915, ((frost$core$Object*) $tmp1921));
frost$core$String* $tmp1923 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1922, &$s1924);
frost$core$String* $tmp1925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1901, $tmp1923);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1925);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing REF($93:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp1907)));
// unreffing REF($85:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// unreffing REF($80:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
// unreffing REF($78:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
// unreffing REF($75:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// unreffing REF($74:frost.core.String)
// line 439
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1926 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1927 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 441
frost$collections$Array* $tmp1928 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp1929 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1929->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
frost$core$Int64 $tmp1932 = $tmp1930(((frost$collections$CollectionView*) param3));
frost$collections$Array$init$frost$core$Int64($tmp1928, $tmp1932);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$collections$Array* $tmp1933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local2) = $tmp1928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// unreffing REF($152:frost.collections.Array<org.frostlang.frostc.IR.Value>)
// line 442
frost$core$Int64 $tmp1934 = (frost$core$Int64) {0};
ITable* $tmp1935 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1935->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
frost$core$Int64 $tmp1938 = $tmp1936(((frost$collections$CollectionView*) param3));
frost$core$Bit $tmp1939 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1940 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1934, $tmp1938, $tmp1939);
frost$core$Int64 $tmp1941 = $tmp1940.min;
*(&local3) = $tmp1941;
frost$core$Int64 $tmp1942 = $tmp1940.max;
frost$core$Bit $tmp1943 = $tmp1940.inclusive;
bool $tmp1944 = $tmp1943.value;
frost$core$Int64 $tmp1945 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1946 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1945);
if ($tmp1944) goto block8; else goto block9;
block8:;
int64_t $tmp1947 = $tmp1941.value;
int64_t $tmp1948 = $tmp1942.value;
bool $tmp1949 = $tmp1947 <= $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block5; else goto block6;
block9:;
int64_t $tmp1952 = $tmp1941.value;
int64_t $tmp1953 = $tmp1942.value;
bool $tmp1954 = $tmp1952 < $tmp1953;
frost$core$Bit $tmp1955 = (frost$core$Bit) {$tmp1954};
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block5; else goto block6;
block5:;
// line 443
frost$core$Int64 $tmp1957 = *(&local3);
ITable* $tmp1958 = param3->$class->itable;
while ($tmp1958->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1958 = $tmp1958->next;
}
$fn1960 $tmp1959 = $tmp1958->methods[0];
frost$core$Object* $tmp1961 = $tmp1959(param3, $tmp1957);
org$frostlang$frostc$Compiler$TypeContext* $tmp1962 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1963 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1964 = *(&local1);
frost$core$Int64 $tmp1965 = *(&local3);
org$frostlang$frostc$Type* $tmp1966 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1964, $tmp1965);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1962, $tmp1963, $tmp1966);
org$frostlang$frostc$IR$Value* $tmp1967 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1961), $tmp1962);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
org$frostlang$frostc$IR$Value* $tmp1968 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local4) = $tmp1967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
// unreffing REF($207:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// unreffing REF($205:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
// unreffing REF($201:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp1961);
// unreffing REF($199:frost.collections.ListView.T)
// line 445
org$frostlang$frostc$IR$Value* $tmp1969 = *(&local4);
frost$core$Bit $tmp1970 = frost$core$Bit$init$builtin_bit($tmp1969 == NULL);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block10; else goto block11;
block10:;
// line 446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
// unreffing compiled
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1974 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1975 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// line 448
frost$collections$Array* $tmp1976 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1977 = *(&local4);
frost$core$Bit $tmp1978 = frost$core$Bit$init$builtin_bit($tmp1977 != NULL);
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1980 = (frost$core$Int64) {448};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1981, $tmp1980, &$s1982);
abort(); // unreachable
block12:;
frost$collections$Array$add$frost$collections$Array$T($tmp1976, ((frost$core$Object*) $tmp1977));
org$frostlang$frostc$IR$Value* $tmp1983 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing compiled
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1984 = *(&local3);
int64_t $tmp1985 = $tmp1942.value;
int64_t $tmp1986 = $tmp1984.value;
int64_t $tmp1987 = $tmp1985 - $tmp1986;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {$tmp1987};
frost$core$UInt64 $tmp1989 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1988);
if ($tmp1944) goto block15; else goto block16;
block15:;
uint64_t $tmp1990 = $tmp1989.value;
uint64_t $tmp1991 = $tmp1946.value;
bool $tmp1992 = $tmp1990 >= $tmp1991;
frost$core$Bit $tmp1993 = (frost$core$Bit) {$tmp1992};
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block14; else goto block6;
block16:;
uint64_t $tmp1995 = $tmp1989.value;
uint64_t $tmp1996 = $tmp1946.value;
bool $tmp1997 = $tmp1995 > $tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block14; else goto block6;
block14:;
int64_t $tmp2000 = $tmp1984.value;
int64_t $tmp2001 = $tmp1945.value;
int64_t $tmp2002 = $tmp2000 + $tmp2001;
frost$core$Int64 $tmp2003 = (frost$core$Int64) {$tmp2002};
*(&local3) = $tmp2003;
goto block5;
block6:;
// line 450
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 451
org$frostlang$frostc$IR* $tmp2004 = *(&local0);
frost$collections$Array** $tmp2005 = &$tmp2004->locals;
frost$collections$Array* $tmp2006 = *$tmp2005;
ITable* $tmp2007 = ((frost$collections$CollectionView*) $tmp2006)->$class->itable;
while ($tmp2007->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2007 = $tmp2007->next;
}
$fn2009 $tmp2008 = $tmp2007->methods[0];
frost$core$Int64 $tmp2010 = $tmp2008(((frost$collections$CollectionView*) $tmp2006));
*(&local6) = $tmp2010;
// line 452
org$frostlang$frostc$Type* $tmp2011 = *(&local1);
org$frostlang$frostc$Type* $tmp2012 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2011);
org$frostlang$frostc$Type* $tmp2013 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp2014 = ((frost$core$Equatable*) $tmp2012)->$class->itable;
while ($tmp2014->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2014 = $tmp2014->next;
}
$fn2016 $tmp2015 = $tmp2014->methods[1];
frost$core$Bit $tmp2017 = $tmp2015(((frost$core$Equatable*) $tmp2012), ((frost$core$Equatable*) $tmp2013));
bool $tmp2018 = $tmp2017.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
// unreffing REF($317:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// unreffing REF($314:org.frostlang.frostc.Type)
if ($tmp2018) goto block17; else goto block19;
block17:;
// line 453
org$frostlang$frostc$IR* $tmp2019 = *(&local0);
frost$collections$Array** $tmp2020 = &$tmp2019->locals;
frost$collections$Array* $tmp2021 = *$tmp2020;
org$frostlang$frostc$Type* $tmp2022 = *(&local1);
org$frostlang$frostc$Type* $tmp2023 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2022);
frost$collections$Array$add$frost$collections$Array$T($tmp2021, ((frost$core$Object*) $tmp2023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// unreffing REF($335:org.frostlang.frostc.Type)
// line 454
org$frostlang$frostc$IR$Value* $tmp2024 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2025 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2026 = *(&local6);
org$frostlang$frostc$Type* $tmp2027 = *(&local1);
org$frostlang$frostc$Type* $tmp2028 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2027);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2024, $tmp2025, $tmp2026, $tmp2028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
org$frostlang$frostc$IR$Value* $tmp2029 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local5) = $tmp2024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// unreffing REF($346:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
// unreffing REF($342:org.frostlang.frostc.IR.Value)
goto block18;
block19:;
// line 1
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2030 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block18;
block18:;
// line 459
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// line 460
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 461
$fn2032 $tmp2031 = ($fn2032) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2033 = $tmp2031(param2);
frost$core$Bit $tmp2034 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2033);
bool $tmp2035 = $tmp2034.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
// unreffing REF($377:org.frostlang.frostc.Type)
if ($tmp2035) goto block20; else goto block22;
block20:;
// line 462
org$frostlang$frostc$Type* $tmp2036 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
org$frostlang$frostc$Type* $tmp2037 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local7) = $tmp2036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
// unreffing REF($385:org.frostlang.frostc.Type)
// line 463
org$frostlang$frostc$Type* $tmp2038 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
org$frostlang$frostc$Type* $tmp2039 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local8) = $tmp2038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
// unreffing REF($396:org.frostlang.frostc.Type)
goto block21;
block22:;
// line 1
// line 466
org$frostlang$frostc$Type* $tmp2040 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
org$frostlang$frostc$Type* $tmp2041 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
*(&local7) = $tmp2040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// unreffing REF($409:org.frostlang.frostc.Type)
// line 467
org$frostlang$frostc$Type* $tmp2042 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
org$frostlang$frostc$Type* $tmp2043 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local8) = $tmp2042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
// unreffing REF($420:org.frostlang.frostc.Type)
goto block21;
block21:;
// line 469
org$frostlang$frostc$Type* $tmp2044 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp2045 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2044);
frost$core$Bit $tmp2046 = frost$core$Bit$init$builtin_bit($tmp2045 != NULL);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp2048 = (frost$core$Int64) {469};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2049, $tmp2048, &$s2050);
abort(); // unreachable
block23:;
org$frostlang$frostc$SymbolTable* $tmp2051 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp2045);
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
org$frostlang$frostc$SymbolTable* $tmp2052 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local9) = $tmp2051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
// unreffing REF($442:org.frostlang.frostc.SymbolTable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// unreffing REF($433:org.frostlang.frostc.ClassDecl?)
// line 470
org$frostlang$frostc$SymbolTable* $tmp2053 = *(&local9);
org$frostlang$frostc$Symbol* $tmp2054 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2053, &$s2055);
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp2054)));
org$frostlang$frostc$FieldDecl* $tmp2056 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) $tmp2054);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
// unreffing REF($458:org.frostlang.frostc.Symbol?)
// line 471
org$frostlang$frostc$FieldDecl* $tmp2057 = *(&local10);
frost$core$Bit $tmp2058 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp2057);
frost$core$Bit $tmp2059 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2058);
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block25; else goto block26;
block25:;
// line 472
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp2061 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2062 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2063 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2064 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2065 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2066 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2067 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// line 474
org$frostlang$frostc$Type* $tmp2069 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp2070 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp2069);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
org$frostlang$frostc$IR$Value* $tmp2071 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local11) = $tmp2070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
// unreffing REF($523:org.frostlang.frostc.IR.Value?)
// line 475
org$frostlang$frostc$IR* $tmp2072 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2073 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {10};
org$frostlang$frostc$IR$Value* $tmp2075 = *(&local11);
frost$core$Bit $tmp2076 = frost$core$Bit$init$builtin_bit($tmp2075 != NULL);
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2078 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2079, $tmp2078, &$s2080);
abort(); // unreachable
block27:;
org$frostlang$frostc$FieldDecl* $tmp2081 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2073, $tmp2074, param1, $tmp2075, $tmp2081);
$fn2083 $tmp2082 = ($fn2083) $tmp2072->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2084 = $tmp2082($tmp2072, $tmp2073);
*(&local12) = $tmp2084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
// unreffing REF($536:org.frostlang.frostc.IR.Statement)
// line 477
org$frostlang$frostc$IR* $tmp2085 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2086 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2087 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2088 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2089 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2090 = *(&local12);
org$frostlang$frostc$Type* $tmp2091 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2092 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2091);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2088, $tmp2089, $tmp2090, $tmp2092);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2086, $tmp2087, param1, $tmp2088);
$fn2094 $tmp2093 = ($fn2094) $tmp2085->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2095 = $tmp2093($tmp2085, $tmp2086);
*(&local13) = $tmp2095;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing REF($563:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
// unreffing REF($562:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing REF($559:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
// unreffing REF($557:org.frostlang.frostc.IR.Statement)
// line 479
org$frostlang$frostc$SymbolTable* $tmp2096 = *(&local9);
org$frostlang$frostc$Symbol* $tmp2097 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2096, &$s2098);
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp2097)));
org$frostlang$frostc$FieldDecl* $tmp2099 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) $tmp2097);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
// unreffing REF($583:org.frostlang.frostc.Symbol?)
// line 480
org$frostlang$frostc$FieldDecl* $tmp2100 = *(&local14);
frost$core$Bit $tmp2101 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp2100);
frost$core$Bit $tmp2102 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2101);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block29; else goto block30;
block29:;
// line 481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp2104 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2105 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2106 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2108 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2109 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2110 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
// line 483
org$frostlang$frostc$IR* $tmp2114 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2115 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {10};
org$frostlang$frostc$IR$Value* $tmp2117 = *(&local11);
frost$core$Bit $tmp2118 = frost$core$Bit$init$builtin_bit($tmp2117 != NULL);
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2120 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2121, $tmp2120, &$s2122);
abort(); // unreachable
block31:;
org$frostlang$frostc$FieldDecl* $tmp2123 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2115, $tmp2116, param1, $tmp2117, $tmp2123);
$fn2125 $tmp2124 = ($fn2125) $tmp2114->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2126 = $tmp2124($tmp2114, $tmp2115);
*(&local15) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// unreffing REF($657:org.frostlang.frostc.IR.Statement)
// line 484
org$frostlang$frostc$IR* $tmp2127 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2128 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2129 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2130 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2131 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2132 = *(&local15);
org$frostlang$frostc$Type* $tmp2133 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2130, $tmp2131, $tmp2132, $tmp2133);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2128, $tmp2129, param1, $tmp2130);
$fn2135 $tmp2134 = ($fn2135) $tmp2127->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2136 = $tmp2134($tmp2127, $tmp2128);
*(&local16) = $tmp2136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// unreffing REF($680:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
// unreffing REF($678:org.frostlang.frostc.IR.Statement)
// line 485
org$frostlang$frostc$IR* $tmp2137 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2138 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2139 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2140 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2141 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2142 = *(&local16);
org$frostlang$frostc$Type* $tmp2143 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2140, $tmp2141, $tmp2142, $tmp2143);
frost$core$Int64 $tmp2144 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp2145 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2144);
org$frostlang$frostc$IR$Value* $tmp2146 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2147 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2148 = *(&local8);
org$frostlang$frostc$Type* $tmp2149 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2148);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2146, $tmp2147, $tmp2149);
org$frostlang$frostc$Type* $tmp2150 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2138, $tmp2139, param1, $tmp2140, $tmp2145, $tmp2146, $tmp2150);
$fn2152 $tmp2151 = ($fn2152) $tmp2137->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2153 = $tmp2151($tmp2137, $tmp2138);
*(&local17) = $tmp2153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// unreffing REF($711:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
// unreffing REF($709:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
// unreffing REF($706:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
// unreffing REF($699:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($697:org.frostlang.frostc.IR.Statement)
// line 487
org$frostlang$frostc$IR* $tmp2154 = *(&local0);
$fn2156 $tmp2155 = ($fn2156) $tmp2154->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2157 = $tmp2155($tmp2154, &$s2158);
*(&local18) = $tmp2157;
// line 488
org$frostlang$frostc$IR* $tmp2159 = *(&local0);
$fn2161 $tmp2160 = ($fn2161) $tmp2159->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2162 = $tmp2160($tmp2159, &$s2163);
*(&local19) = $tmp2162;
// line 489
org$frostlang$frostc$IR* $tmp2164 = *(&local0);
$fn2166 $tmp2165 = ($fn2166) $tmp2164->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2167 = $tmp2165($tmp2164, &$s2168);
*(&local20) = $tmp2167;
// line 490
org$frostlang$frostc$IR* $tmp2169 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2170 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2171 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2172 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2173 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2174 = *(&local17);
org$frostlang$frostc$Type* $tmp2175 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2172, $tmp2173, $tmp2174, $tmp2175);
org$frostlang$frostc$IR$Block$ID $tmp2176 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp2177 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2170, $tmp2171, param1, $tmp2172, $tmp2176, $tmp2177);
$fn2179 $tmp2178 = ($fn2179) $tmp2169->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2180 = $tmp2178($tmp2169, $tmp2170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
// unreffing REF($753:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
// unreffing REF($750:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// unreffing REF($748:org.frostlang.frostc.IR.Statement)
// line 492
org$frostlang$frostc$IR* $tmp2181 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2182 = *(&local19);
$fn2184 $tmp2183 = ($fn2184) $tmp2181->$class->vtable[4];
$tmp2183($tmp2181, $tmp2182);
// line 493
org$frostlang$frostc$IR$Value* $tmp2185 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2186 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2187 = *(&local13);
org$frostlang$frostc$Type* $tmp2188 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2189 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2188);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2185, $tmp2186, $tmp2187, $tmp2189);
org$frostlang$frostc$Type* $tmp2190 = *(&local1);
org$frostlang$frostc$Type* $tmp2191 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2190);
org$frostlang$frostc$IR$Value* $tmp2192 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2185, $tmp2191);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
org$frostlang$frostc$IR$Value* $tmp2193 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local21) = $tmp2192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
// unreffing REF($784:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
// unreffing REF($783:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing REF($779:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing REF($778:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing REF($775:org.frostlang.frostc.IR.Value)
// line 495
org$frostlang$frostc$IR* $tmp2194 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2195 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2196 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2197 = *(&local21);
frost$core$Bit $tmp2198 = frost$core$Bit$init$builtin_bit($tmp2197 != NULL);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp2200 = (frost$core$Int64) {495};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2201, $tmp2200, &$s2202);
abort(); // unreachable
block33:;
org$frostlang$frostc$FixedArray* $tmp2203 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2204 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2203, ((frost$collections$ListView*) $tmp2204));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2195, $tmp2196, param1, $tmp2197, $tmp2203);
$fn2206 $tmp2205 = ($fn2206) $tmp2194->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2207 = $tmp2205($tmp2194, $tmp2195);
*(&local22) = $tmp2207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
// unreffing REF($820:org.frostlang.frostc.FixedArray<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// unreffing REF($809:org.frostlang.frostc.IR.Statement)
// line 497
org$frostlang$frostc$IR$Value* $tmp2208 = *(&local5);
frost$core$Bit $tmp2209 = frost$core$Bit$init$builtin_bit($tmp2208 != NULL);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block35; else goto block36;
block35:;
// line 498
org$frostlang$frostc$IR* $tmp2211 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2212 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2213 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp2214 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2215 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2216 = *(&local22);
org$frostlang$frostc$Type* $tmp2217 = *(&local1);
org$frostlang$frostc$Type* $tmp2218 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2217);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2214, $tmp2215, $tmp2216, $tmp2218);
org$frostlang$frostc$IR$Value* $tmp2219 = *(&local5);
frost$core$Bit $tmp2220 = frost$core$Bit$init$builtin_bit($tmp2219 != NULL);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp2222 = (frost$core$Int64) {499};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2223, $tmp2222, &$s2224);
abort(); // unreachable
block37:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2212, $tmp2213, param1, $tmp2214, $tmp2219);
$fn2226 $tmp2225 = ($fn2226) $tmp2211->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2227 = $tmp2225($tmp2211, $tmp2212);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// unreffing REF($850:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// unreffing REF($846:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// unreffing REF($844:org.frostlang.frostc.IR.Statement)
goto block36;
block36:;
// line 501
org$frostlang$frostc$IR* $tmp2228 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2229 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2230 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2231 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2229, $tmp2230, param1, $tmp2231);
$fn2233 $tmp2232 = ($fn2233) $tmp2228->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2234 = $tmp2232($tmp2228, $tmp2229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// unreffing REF($876:org.frostlang.frostc.IR.Statement)
// line 502
org$frostlang$frostc$IR* $tmp2235 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2236 = *(&local18);
$fn2238 $tmp2237 = ($fn2238) $tmp2235->$class->vtable[4];
$tmp2237($tmp2235, $tmp2236);
// line 503
frost$collections$Array* $tmp2239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2239);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$collections$Array* $tmp2240 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
*(&local23) = $tmp2239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
// unreffing REF($891:frost.collections.Array<org.frostlang.frostc.Type>)
// line 504
frost$collections$Array* $tmp2241 = *(&local23);
org$frostlang$frostc$Type* $tmp2242 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp2241, ((frost$core$Object*) $tmp2242));
// line 505
frost$core$Int64 $tmp2243 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2244 = *(&local1);
frost$core$Int64 $tmp2245 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp2244);
frost$core$Bit $tmp2246 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2247 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2243, $tmp2245, $tmp2246);
frost$core$Int64 $tmp2248 = $tmp2247.min;
*(&local24) = $tmp2248;
frost$core$Int64 $tmp2249 = $tmp2247.max;
frost$core$Bit $tmp2250 = $tmp2247.inclusive;
bool $tmp2251 = $tmp2250.value;
frost$core$Int64 $tmp2252 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2253 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2252);
if ($tmp2251) goto block42; else goto block43;
block42:;
int64_t $tmp2254 = $tmp2248.value;
int64_t $tmp2255 = $tmp2249.value;
bool $tmp2256 = $tmp2254 <= $tmp2255;
frost$core$Bit $tmp2257 = (frost$core$Bit) {$tmp2256};
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block39; else goto block40;
block43:;
int64_t $tmp2259 = $tmp2248.value;
int64_t $tmp2260 = $tmp2249.value;
bool $tmp2261 = $tmp2259 < $tmp2260;
frost$core$Bit $tmp2262 = (frost$core$Bit) {$tmp2261};
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block39; else goto block40;
block39:;
// line 506
frost$collections$Array* $tmp2264 = *(&local23);
org$frostlang$frostc$Type* $tmp2265 = *(&local1);
frost$core$Int64 $tmp2266 = *(&local24);
org$frostlang$frostc$Type* $tmp2267 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2265, $tmp2266);
frost$collections$Array$add$frost$collections$Array$T($tmp2264, ((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing REF($941:org.frostlang.frostc.Type)
goto block41;
block41:;
frost$core$Int64 $tmp2268 = *(&local24);
int64_t $tmp2269 = $tmp2249.value;
int64_t $tmp2270 = $tmp2268.value;
int64_t $tmp2271 = $tmp2269 - $tmp2270;
frost$core$Int64 $tmp2272 = (frost$core$Int64) {$tmp2271};
frost$core$UInt64 $tmp2273 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2272);
if ($tmp2251) goto block45; else goto block46;
block45:;
uint64_t $tmp2274 = $tmp2273.value;
uint64_t $tmp2275 = $tmp2253.value;
bool $tmp2276 = $tmp2274 >= $tmp2275;
frost$core$Bit $tmp2277 = (frost$core$Bit) {$tmp2276};
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block44; else goto block40;
block46:;
uint64_t $tmp2279 = $tmp2273.value;
uint64_t $tmp2280 = $tmp2253.value;
bool $tmp2281 = $tmp2279 > $tmp2280;
frost$core$Bit $tmp2282 = (frost$core$Bit) {$tmp2281};
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block44; else goto block40;
block44:;
int64_t $tmp2284 = $tmp2268.value;
int64_t $tmp2285 = $tmp2252.value;
int64_t $tmp2286 = $tmp2284 + $tmp2285;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {$tmp2286};
*(&local24) = $tmp2287;
goto block39;
block40:;
// line 508
org$frostlang$frostc$Type* $tmp2288 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2289 = &$tmp2288->typeKind;
org$frostlang$frostc$Type$Kind $tmp2290 = *$tmp2289;
frost$collections$Array* $tmp2291 = *(&local23);
org$frostlang$frostc$Type* $tmp2292 = *(&local1);
org$frostlang$frostc$Type* $tmp2293 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2292);
frost$core$Int64 $tmp2294 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2295 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp2290, ((frost$collections$ListView*) $tmp2291), $tmp2293, $tmp2294);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
org$frostlang$frostc$Type* $tmp2296 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local25) = $tmp2295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($982:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
// unreffing REF($980:org.frostlang.frostc.Type)
// line 510
org$frostlang$frostc$IR$Value* $tmp2297 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2298 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2299 = *(&local13);
org$frostlang$frostc$Type* $tmp2300 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2301 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2300);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2297, $tmp2298, $tmp2299, $tmp2301);
org$frostlang$frostc$Type* $tmp2302 = *(&local25);
org$frostlang$frostc$Type* $tmp2303 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2302);
org$frostlang$frostc$IR$Value* $tmp2304 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2297, $tmp2303);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
org$frostlang$frostc$IR$Value* $tmp2305 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local26) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// unreffing REF($1006:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($1005:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
// unreffing REF($1001:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
// unreffing REF($1000:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// unreffing REF($997:org.frostlang.frostc.IR.Value)
// line 512
frost$collections$Array* $tmp2306 = *(&local2);
frost$core$Int64 $tmp2307 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2308 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2309 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2310 = *(&local16);
org$frostlang$frostc$Type* $tmp2311 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2308, $tmp2309, $tmp2310, $tmp2311);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp2306, $tmp2307, ((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
// unreffing REF($1033:org.frostlang.frostc.IR.Value)
// line 513
org$frostlang$frostc$IR* $tmp2312 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2313 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2314 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2315 = *(&local26);
frost$core$Bit $tmp2316 = frost$core$Bit$init$builtin_bit($tmp2315 != NULL);
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp2318 = (frost$core$Int64) {513};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2319, $tmp2318, &$s2320);
abort(); // unreachable
block47:;
org$frostlang$frostc$FixedArray* $tmp2321 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2322 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2321, ((frost$collections$ListView*) $tmp2322));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2313, $tmp2314, param1, $tmp2315, $tmp2321);
$fn2324 $tmp2323 = ($fn2324) $tmp2312->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2325 = $tmp2323($tmp2312, $tmp2313);
*(&local27) = $tmp2325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// unreffing REF($1056:org.frostlang.frostc.FixedArray<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
// unreffing REF($1045:org.frostlang.frostc.IR.Statement)
// line 515
org$frostlang$frostc$IR$Value* $tmp2326 = *(&local5);
frost$core$Bit $tmp2327 = frost$core$Bit$init$builtin_bit($tmp2326 != NULL);
bool $tmp2328 = $tmp2327.value;
if ($tmp2328) goto block49; else goto block50;
block49:;
// line 516
org$frostlang$frostc$IR* $tmp2329 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2330 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2331 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp2332 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2333 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2334 = *(&local27);
org$frostlang$frostc$Type* $tmp2335 = *(&local1);
org$frostlang$frostc$Type* $tmp2336 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2335);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2332, $tmp2333, $tmp2334, $tmp2336);
org$frostlang$frostc$IR$Value* $tmp2337 = *(&local5);
frost$core$Bit $tmp2338 = frost$core$Bit$init$builtin_bit($tmp2337 != NULL);
bool $tmp2339 = $tmp2338.value;
if ($tmp2339) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp2340 = (frost$core$Int64) {517};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2341, $tmp2340, &$s2342);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2330, $tmp2331, param1, $tmp2332, $tmp2337);
$fn2344 $tmp2343 = ($fn2344) $tmp2329->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2345 = $tmp2343($tmp2329, $tmp2330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
// unreffing REF($1086:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
// unreffing REF($1082:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
// unreffing REF($1080:org.frostlang.frostc.IR.Statement)
goto block50;
block50:;
// line 519
org$frostlang$frostc$IR* $tmp2346 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2347 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2348 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2349 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2347, $tmp2348, param1, $tmp2349);
$fn2351 $tmp2350 = ($fn2351) $tmp2346->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2352 = $tmp2350($tmp2346, $tmp2347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
// unreffing REF($1112:org.frostlang.frostc.IR.Statement)
// line 520
org$frostlang$frostc$IR* $tmp2353 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2354 = *(&local20);
$fn2356 $tmp2355 = ($fn2356) $tmp2353->$class->vtable[4];
$tmp2355($tmp2353, $tmp2354);
// line 521
org$frostlang$frostc$IR$Value* $tmp2357 = *(&local5);
frost$core$Bit $tmp2358 = frost$core$Bit$init$builtin_bit($tmp2357 != NULL);
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block53; else goto block54;
block53:;
// line 522
org$frostlang$frostc$IR* $tmp2360 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2361 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2362 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2363 = *(&local5);
frost$core$Bit $tmp2364 = frost$core$Bit$init$builtin_bit($tmp2363 != NULL);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp2366 = (frost$core$Int64) {522};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2367, $tmp2366, &$s2368);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2361, $tmp2362, param1, $tmp2363);
$fn2370 $tmp2369 = ($fn2370) $tmp2360->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2371 = $tmp2369($tmp2360, $tmp2361);
*(&local28) = $tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// unreffing REF($1134:org.frostlang.frostc.IR.Statement)
// line 523
org$frostlang$frostc$IR$Value* $tmp2372 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2373 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2374 = *(&local28);
org$frostlang$frostc$Type* $tmp2375 = *(&local1);
org$frostlang$frostc$Type* $tmp2376 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2375);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2372, $tmp2373, $tmp2374, $tmp2376);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
org$frostlang$frostc$IR$Value* $tmp2377 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local29) = $tmp2372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
// unreffing REF($1157:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
// unreffing REF($1153:org.frostlang.frostc.IR.Value)
// line 524
org$frostlang$frostc$Type* $tmp2378 = *(&local1);
org$frostlang$frostc$Type* $tmp2379 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2378);
frost$core$Bit $tmp2380 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2379);
bool $tmp2381 = $tmp2380.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
// unreffing REF($1174:org.frostlang.frostc.Type)
if ($tmp2381) goto block57; else goto block58;
block57:;
// line 525
frost$collections$Stack** $tmp2382 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2383 = *$tmp2382;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2384 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2385 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2386 = *(&local29);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2384, $tmp2385, $tmp2386);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2383, ((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
// unreffing REF($1185:org.frostlang.frostc.Compiler.EnclosingContext)
goto block58;
block58:;
// line 527
org$frostlang$frostc$IR$Value* $tmp2387 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2388 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2387, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
// unreffing REF($1198:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp2389 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
// unreffing loadRef
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2390 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
// unreffing haveTargetCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2391 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// unreffing haveTargetType
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2392 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
// unreffing targetParams
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2393 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// unreffing noTargetCast
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2394 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2395 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2396 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2397 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2398 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2399 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2400 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp2388;
block54:;
// line 529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2404 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
// unreffing haveTargetCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2405 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
// unreffing haveTargetType
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2406 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
// unreffing targetParams
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2407 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// unreffing noTargetCast
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2408 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2409 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2410 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2411 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2412 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2413 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2414 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2417 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
org$frostlang$frostc$FixedArray* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$Pair* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Int64 local19;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
org$frostlang$frostc$Pair* local23 = NULL;
frost$collections$Array* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
frost$core$Int64 local27;
org$frostlang$frostc$Type* local28 = NULL;
org$frostlang$frostc$Type* local29 = NULL;
org$frostlang$frostc$ClassDecl* local30 = NULL;
org$frostlang$frostc$Symbol* local31 = NULL;
org$frostlang$frostc$IR$Statement$ID local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
// line 535
frost$collections$Stack** $tmp2418 = &param0->currentClass;
frost$collections$Stack* $tmp2419 = *$tmp2418;
frost$core$Int64 $tmp2420 = (frost$core$Int64) {0};
frost$core$Object* $tmp2421 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2419, $tmp2420);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2421)));
org$frostlang$frostc$ClassDecl* $tmp2422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2421);
frost$core$Frost$unref$frost$core$Object$Q($tmp2421);
// unreffing REF($5:frost.collections.Stack.T)
// line 536
org$frostlang$frostc$IR** $tmp2423 = &param0->ir;
org$frostlang$frostc$IR* $tmp2424 = *$tmp2423;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
org$frostlang$frostc$IR* $tmp2425 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local1) = $tmp2424;
// line 537
frost$core$Int64* $tmp2426 = &param2->$rawValue;
frost$core$Int64 $tmp2427 = *$tmp2426;
frost$core$Int64 $tmp2428 = (frost$core$Int64) {9};
frost$core$Bit $tmp2429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2428);
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value** $tmp2431 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2432 = *$tmp2431;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
org$frostlang$frostc$IR$Value* $tmp2433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local2) = $tmp2432;
org$frostlang$frostc$MethodDecl** $tmp2434 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2435 = *$tmp2434;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
org$frostlang$frostc$MethodDecl* $tmp2436 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local3) = $tmp2435;
// line 539
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 540
org$frostlang$frostc$IR$Value* $tmp2437 = *(&local2);
frost$core$Bit $tmp2438 = frost$core$Bit$init$builtin_bit($tmp2437 != NULL);
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block4; else goto block6;
block4:;
// line 541
org$frostlang$frostc$IR$Value* $tmp2440 = *(&local2);
frost$core$Bit $tmp2441 = frost$core$Bit$init$builtin_bit($tmp2440 != NULL);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2443 = (frost$core$Int64) {541};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2444, $tmp2443, &$s2445);
abort(); // unreachable
block7:;
$fn2447 $tmp2446 = ($fn2447) $tmp2440->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2448 = $tmp2446($tmp2440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlang$frostc$Type* $tmp2449 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local4) = $tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// unreffing REF($71:org.frostlang.frostc.Type)
goto block5;
block6:;
// line 543
org$frostlang$frostc$MethodDecl* $tmp2450 = *(&local3);
org$frostlang$frostc$Annotations** $tmp2451 = &$tmp2450->annotations;
org$frostlang$frostc$Annotations* $tmp2452 = *$tmp2451;
frost$core$Bit $tmp2453 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block11; else goto block12;
block11:;
*(&local5) = $tmp2453;
goto block13;
block12:;
org$frostlang$frostc$MethodDecl* $tmp2455 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind* $tmp2456 = &$tmp2455->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2457 = *$tmp2456;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2458;
$tmp2458 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2458->value = $tmp2457;
frost$core$Int64 $tmp2459 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2460 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2459);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2461;
$tmp2461 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2461->value = $tmp2460;
ITable* $tmp2462 = ((frost$core$Equatable*) $tmp2458)->$class->itable;
while ($tmp2462->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2462 = $tmp2462->next;
}
$fn2464 $tmp2463 = $tmp2462->methods[0];
frost$core$Bit $tmp2465 = $tmp2463(((frost$core$Equatable*) $tmp2458), ((frost$core$Equatable*) $tmp2461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2461)));
// unreffing REF($98:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2458)));
// unreffing REF($94:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local5) = $tmp2465;
goto block13;
block13:;
frost$core$Bit $tmp2466 = *(&local5);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block9; else goto block14;
block9:;
// line 544
org$frostlang$frostc$MethodDecl* $tmp2468 = *(&local3);
frost$core$Weak** $tmp2469 = &$tmp2468->owner;
frost$core$Weak* $tmp2470 = *$tmp2469;
frost$core$Object* $tmp2471 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2470);
org$frostlang$frostc$Type** $tmp2472 = &((org$frostlang$frostc$ClassDecl*) $tmp2471)->type;
org$frostlang$frostc$Type* $tmp2473 = *$tmp2472;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
org$frostlang$frostc$Type* $tmp2474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local4) = $tmp2473;
frost$core$Frost$unref$frost$core$Object$Q($tmp2471);
// unreffing REF($117:frost.core.Weak.T)
goto block10;
block14:;
// line 1
// line 547
org$frostlang$frostc$ClassDecl* $tmp2475 = *(&local0);
org$frostlang$frostc$Type** $tmp2476 = &$tmp2475->type;
org$frostlang$frostc$Type* $tmp2477 = *$tmp2476;
org$frostlang$frostc$MethodDecl* $tmp2478 = *(&local3);
frost$core$Weak** $tmp2479 = &$tmp2478->owner;
frost$core$Weak* $tmp2480 = *$tmp2479;
frost$core$Object* $tmp2481 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2480);
org$frostlang$frostc$Type* $tmp2482 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2477, ((org$frostlang$frostc$ClassDecl*) $tmp2481));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
org$frostlang$frostc$Type* $tmp2483 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local6) = $tmp2482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
// unreffing REF($142:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2481);
// unreffing REF($140:frost.core.Weak.T)
// line 548
org$frostlang$frostc$Type* $tmp2484 = *(&local6);
frost$core$Bit $tmp2485 = frost$core$Bit$init$builtin_bit($tmp2484 != NULL);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2487 = (frost$core$Int64) {548};
org$frostlang$frostc$ClassDecl* $tmp2488 = *(&local0);
org$frostlang$frostc$Type** $tmp2489 = &$tmp2488->type;
org$frostlang$frostc$Type* $tmp2490 = *$tmp2489;
frost$core$String* $tmp2491 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2492, ((frost$core$Object*) $tmp2490));
frost$core$String* $tmp2493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2491, &$s2494);
org$frostlang$frostc$MethodDecl* $tmp2495 = *(&local3);
frost$core$Weak** $tmp2496 = &$tmp2495->owner;
frost$core$Weak* $tmp2497 = *$tmp2496;
frost$core$Object* $tmp2498 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2497);
frost$core$String** $tmp2499 = &((org$frostlang$frostc$ClassDecl*) $tmp2498)->name;
frost$core$String* $tmp2500 = *$tmp2499;
frost$core$String* $tmp2501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2493, $tmp2500);
frost$core$String* $tmp2502 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2501, &$s2503);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2504, $tmp2487, $tmp2502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
// unreffing REF($178:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
// unreffing REF($177:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2498);
// unreffing REF($173:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
// unreffing REF($168:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
// unreffing REF($167:frost.core.String)
abort(); // unreachable
block15:;
// line 550
org$frostlang$frostc$Type* $tmp2505 = *(&local6);
frost$core$Bit $tmp2506 = frost$core$Bit$init$builtin_bit($tmp2505 != NULL);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp2508 = (frost$core$Int64) {550};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2509, $tmp2508, &$s2510);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
org$frostlang$frostc$Type* $tmp2511 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local4) = $tmp2505;
org$frostlang$frostc$Type* $tmp2512 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
// unreffing found
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
goto block5;
block5:;
// line 552
org$frostlang$frostc$MethodDecl* $tmp2513 = *(&local3);
frost$core$Bit $tmp2514 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2513);
frost$core$Bit $tmp2515 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2514);
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block19; else goto block20;
block19:;
// line 553
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// unreffing targetType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2518 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2519 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// unreffing target
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2521 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block20:;
// line 555
org$frostlang$frostc$IR$Value* $tmp2522 = *(&local2);
org$frostlang$frostc$MethodRef* $tmp2523 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2524 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp2525 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp2523, param0, $tmp2524, $tmp2525);
org$frostlang$frostc$IR$Value* $tmp2526 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2522, $tmp2523, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
// unreffing REF($260:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
// unreffing REF($256:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp2527 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
// unreffing targetType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
// unreffing target
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2526;
block3:;
frost$core$Int64 $tmp2532 = (frost$core$Int64) {11};
frost$core$Bit $tmp2533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2532);
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block21; else goto block22;
block21:;
org$frostlang$frostc$IR$Value** $tmp2535 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2536 = *$tmp2535;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$IR$Value* $tmp2537 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local7) = $tmp2536;
org$frostlang$frostc$MethodDecl** $tmp2538 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2539 = *$tmp2538;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
org$frostlang$frostc$MethodDecl* $tmp2540 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local8) = $tmp2539;
org$frostlang$frostc$FixedArray** $tmp2541 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2542 = *$tmp2541;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
org$frostlang$frostc$FixedArray* $tmp2543 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
*(&local9) = $tmp2542;
// line 559
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 560
org$frostlang$frostc$IR$Value* $tmp2544 = *(&local7);
frost$core$Bit $tmp2545 = frost$core$Bit$init$builtin_bit($tmp2544 != NULL);
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block23; else goto block25;
block23:;
// line 561
org$frostlang$frostc$IR$Value* $tmp2547 = *(&local7);
frost$core$Bit $tmp2548 = frost$core$Bit$init$builtin_bit($tmp2547 != NULL);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2550 = (frost$core$Int64) {561};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2551, $tmp2550, &$s2552);
abort(); // unreachable
block26:;
$fn2554 $tmp2553 = ($fn2554) $tmp2547->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2555 = $tmp2553($tmp2547);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
org$frostlang$frostc$Type* $tmp2556 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
*(&local10) = $tmp2555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
// unreffing REF($345:org.frostlang.frostc.Type)
goto block24;
block25:;
// line 563
org$frostlang$frostc$MethodDecl* $tmp2557 = *(&local8);
org$frostlang$frostc$Annotations** $tmp2558 = &$tmp2557->annotations;
org$frostlang$frostc$Annotations* $tmp2559 = *$tmp2558;
frost$core$Bit $tmp2560 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2559);
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block30; else goto block31;
block30:;
*(&local11) = $tmp2560;
goto block32;
block31:;
org$frostlang$frostc$MethodDecl* $tmp2562 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp2563 = &$tmp2562->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2564 = *$tmp2563;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2565;
$tmp2565 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2565->value = $tmp2564;
frost$core$Int64 $tmp2566 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2567 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2566);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2568;
$tmp2568 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2568->value = $tmp2567;
ITable* $tmp2569 = ((frost$core$Equatable*) $tmp2565)->$class->itable;
while ($tmp2569->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2569 = $tmp2569->next;
}
$fn2571 $tmp2570 = $tmp2569->methods[0];
frost$core$Bit $tmp2572 = $tmp2570(((frost$core$Equatable*) $tmp2565), ((frost$core$Equatable*) $tmp2568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2568)));
// unreffing REF($372:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2565)));
// unreffing REF($368:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local11) = $tmp2572;
goto block32;
block32:;
frost$core$Bit $tmp2573 = *(&local11);
bool $tmp2574 = $tmp2573.value;
if ($tmp2574) goto block28; else goto block33;
block28:;
// line 564
org$frostlang$frostc$MethodDecl* $tmp2575 = *(&local8);
frost$core$Weak** $tmp2576 = &$tmp2575->owner;
frost$core$Weak* $tmp2577 = *$tmp2576;
frost$core$Object* $tmp2578 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2577);
org$frostlang$frostc$Type** $tmp2579 = &((org$frostlang$frostc$ClassDecl*) $tmp2578)->type;
org$frostlang$frostc$Type* $tmp2580 = *$tmp2579;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
org$frostlang$frostc$Type* $tmp2581 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local10) = $tmp2580;
frost$core$Frost$unref$frost$core$Object$Q($tmp2578);
// unreffing REF($391:frost.core.Weak.T)
goto block29;
block33:;
// line 1
// line 567
org$frostlang$frostc$ClassDecl* $tmp2582 = *(&local0);
org$frostlang$frostc$Type** $tmp2583 = &$tmp2582->type;
org$frostlang$frostc$Type* $tmp2584 = *$tmp2583;
org$frostlang$frostc$MethodDecl* $tmp2585 = *(&local8);
frost$core$Weak** $tmp2586 = &$tmp2585->owner;
frost$core$Weak* $tmp2587 = *$tmp2586;
frost$core$Object* $tmp2588 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2587);
org$frostlang$frostc$Type* $tmp2589 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2584, ((org$frostlang$frostc$ClassDecl*) $tmp2588));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
org$frostlang$frostc$Type* $tmp2590 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local12) = $tmp2589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
// unreffing REF($416:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2588);
// unreffing REF($414:frost.core.Weak.T)
// line 568
org$frostlang$frostc$Type* $tmp2591 = *(&local12);
frost$core$Bit $tmp2592 = frost$core$Bit$init$builtin_bit($tmp2591 != NULL);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2594 = (frost$core$Int64) {568};
org$frostlang$frostc$ClassDecl* $tmp2595 = *(&local0);
org$frostlang$frostc$Type** $tmp2596 = &$tmp2595->type;
org$frostlang$frostc$Type* $tmp2597 = *$tmp2596;
frost$core$String* $tmp2598 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2599, ((frost$core$Object*) $tmp2597));
frost$core$String* $tmp2600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2598, &$s2601);
org$frostlang$frostc$MethodDecl* $tmp2602 = *(&local8);
frost$core$Weak** $tmp2603 = &$tmp2602->owner;
frost$core$Weak* $tmp2604 = *$tmp2603;
frost$core$Object* $tmp2605 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2604);
frost$core$String** $tmp2606 = &((org$frostlang$frostc$ClassDecl*) $tmp2605)->name;
frost$core$String* $tmp2607 = *$tmp2606;
frost$core$String* $tmp2608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2600, $tmp2607);
frost$core$String* $tmp2609 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2608, &$s2610);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2611, $tmp2594, $tmp2609);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
// unreffing REF($451:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2605);
// unreffing REF($447:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
// unreffing REF($442:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
// unreffing REF($441:frost.core.String)
abort(); // unreachable
block34:;
// line 570
org$frostlang$frostc$Type* $tmp2612 = *(&local12);
frost$core$Bit $tmp2613 = frost$core$Bit$init$builtin_bit($tmp2612 != NULL);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2615 = (frost$core$Int64) {570};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2616, $tmp2615, &$s2617);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
org$frostlang$frostc$Type* $tmp2618 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local10) = $tmp2612;
org$frostlang$frostc$Type* $tmp2619 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
// unreffing found
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block29;
block29:;
goto block24;
block24:;
// line 572
org$frostlang$frostc$MethodDecl* $tmp2620 = *(&local8);
frost$core$Bit $tmp2621 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2620);
frost$core$Bit $tmp2622 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2621);
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block38; else goto block39;
block38:;
// line 573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2624 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2625 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
// unreffing types
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2626 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// unreffing m
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2627 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block39:;
// line 575
org$frostlang$frostc$IR$Value* $tmp2630 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp2631 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2632 = *(&local10);
org$frostlang$frostc$MethodDecl* $tmp2633 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2634 = *(&local9);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp2631, param0, $tmp2632, $tmp2633, ((frost$collections$ListView*) $tmp2634));
org$frostlang$frostc$IR$Value* $tmp2635 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2630, $tmp2631, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
// unreffing REF($541:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
// unreffing REF($535:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp2636 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2637 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// unreffing types
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2638 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// unreffing m
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2639 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2640 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2635;
block22:;
frost$core$Int64 $tmp2642 = (frost$core$Int64) {10};
frost$core$Bit $tmp2643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2642);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block40; else goto block41;
block40:;
org$frostlang$frostc$IR$Value** $tmp2645 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2646 = *$tmp2645;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$IR$Value* $tmp2647 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local13) = $tmp2646;
org$frostlang$frostc$FixedArray** $tmp2648 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2649 = *$tmp2648;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
org$frostlang$frostc$FixedArray* $tmp2650 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local14) = $tmp2649;
// line 579
org$frostlang$frostc$IR$Value* $tmp2651 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2652 = *(&local14);
org$frostlang$frostc$Pair* $tmp2653 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2651, ((frost$collections$ListView*) $tmp2652), param3, param4);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
org$frostlang$frostc$Pair* $tmp2654 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local15) = $tmp2653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
// unreffing REF($607:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 580
org$frostlang$frostc$Pair* $tmp2655 = *(&local15);
frost$core$Bit $tmp2656 = frost$core$Bit$init$builtin_bit($tmp2655 != NULL);
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block42; else goto block43;
block42:;
// line 581
org$frostlang$frostc$Pair* $tmp2658 = *(&local15);
frost$core$Bit $tmp2659 = frost$core$Bit$init$builtin_bit($tmp2658 != NULL);
bool $tmp2660 = $tmp2659.value;
if ($tmp2660) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp2661 = (frost$core$Int64) {581};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2662, $tmp2661, &$s2663);
abort(); // unreachable
block46:;
frost$core$Object** $tmp2664 = &$tmp2658->first;
frost$core$Object* $tmp2665 = *$tmp2664;
ITable* $tmp2666 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2665))->$class->itable;
while ($tmp2666->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2666 = $tmp2666->next;
}
$fn2668 $tmp2667 = $tmp2666->methods[0];
frost$core$Int64 $tmp2669 = $tmp2667(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2665)));
frost$core$Int64 $tmp2670 = (frost$core$Int64) {1};
int64_t $tmp2671 = $tmp2669.value;
int64_t $tmp2672 = $tmp2670.value;
bool $tmp2673 = $tmp2671 > $tmp2672;
frost$core$Bit $tmp2674 = (frost$core$Bit) {$tmp2673};
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block44; else goto block45;
block44:;
// line 582
org$frostlang$frostc$Pair* $tmp2676 = *(&local15);
frost$core$Bit $tmp2677 = frost$core$Bit$init$builtin_bit($tmp2676 != NULL);
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp2679 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2680, $tmp2679, &$s2681);
abort(); // unreachable
block48:;
frost$core$Object** $tmp2682 = &$tmp2676->first;
frost$core$Object* $tmp2683 = *$tmp2682;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2683), param3, param4);
// line 583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2684 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2685 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2686 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2688 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block45:;
// line 585
org$frostlang$frostc$IR$Value* $tmp2689 = *(&local13);
org$frostlang$frostc$Pair* $tmp2690 = *(&local15);
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit($tmp2690 != NULL);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp2693 = (frost$core$Int64) {585};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2694, $tmp2693, &$s2695);
abort(); // unreachable
block50:;
frost$core$Object** $tmp2696 = &$tmp2690->first;
frost$core$Object* $tmp2697 = *$tmp2696;
frost$core$Int64 $tmp2698 = (frost$core$Int64) {0};
ITable* $tmp2699 = ((frost$collections$ListView*) $tmp2697)->$class->itable;
while ($tmp2699->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2699 = $tmp2699->next;
}
$fn2701 $tmp2700 = $tmp2699->methods[0];
frost$core$Object* $tmp2702 = $tmp2700(((frost$collections$ListView*) $tmp2697), $tmp2698);
org$frostlang$frostc$IR$Value* $tmp2703 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2689, ((org$frostlang$frostc$MethodRef*) $tmp2702), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
// unreffing REF($709:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2702);
// unreffing REF($707:frost.collections.ListView.T)
org$frostlang$frostc$Pair* $tmp2704 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2705 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2706 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2708 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2703;
block43:;
// line 588
frost$collections$Array* $tmp2709 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2709);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
frost$collections$Array* $tmp2710 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local16) = $tmp2709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
// unreffing REF($745:frost.collections.Array<org.frostlang.frostc.Type>)
// line 589
ITable* $tmp2711 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2711->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2711 = $tmp2711->next;
}
$fn2713 $tmp2712 = $tmp2711->methods[0];
frost$collections$Iterator* $tmp2714 = $tmp2712(((frost$collections$Iterable*) param3));
goto block52;
block52:;
ITable* $tmp2715 = $tmp2714->$class->itable;
while ($tmp2715->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2715 = $tmp2715->next;
}
$fn2717 $tmp2716 = $tmp2715->methods[0];
frost$core$Bit $tmp2718 = $tmp2716($tmp2714);
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block54; else goto block53;
block53:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2720 = $tmp2714->$class->itable;
while ($tmp2720->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2720 = $tmp2720->next;
}
$fn2722 $tmp2721 = $tmp2720->methods[1];
frost$core$Object* $tmp2723 = $tmp2721($tmp2714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2723)));
org$frostlang$frostc$ASTNode* $tmp2724 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2723);
// line 590
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local17);
org$frostlang$frostc$Type* $tmp2726 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2725);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
org$frostlang$frostc$Type* $tmp2727 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local18) = $tmp2726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// unreffing REF($783:org.frostlang.frostc.Type?)
// line 591
org$frostlang$frostc$Type* $tmp2728 = *(&local18);
frost$core$Bit $tmp2729 = frost$core$Bit$init$builtin_bit($tmp2728 == NULL);
bool $tmp2730 = $tmp2729.value;
if ($tmp2730) goto block55; else goto block56;
block55:;
// line 593
frost$core$Int64* $tmp2731 = &param0->errorCount;
frost$core$Int64 $tmp2732 = *$tmp2731;
*(&local19) = $tmp2732;
// line 594
org$frostlang$frostc$ASTNode* $tmp2733 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp2734 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
// unreffing REF($806:org.frostlang.frostc.IR.Value?)
// line 595
frost$core$Int64* $tmp2735 = &param0->errorCount;
frost$core$Int64 $tmp2736 = *$tmp2735;
frost$core$Int64 $tmp2737 = *(&local19);
frost$core$Bit $tmp2738 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2736, $tmp2737);
bool $tmp2739 = $tmp2738.value;
if ($tmp2739) goto block57; else goto block58;
block57:;
// line 597
org$frostlang$frostc$FixedArray* $tmp2740 = *(&local14);
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0};
frost$core$Object* $tmp2742 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2740, $tmp2741);
frost$core$String** $tmp2743 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2742))->name;
frost$core$String* $tmp2744 = *$tmp2743;
frost$core$String* $tmp2745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2746, $tmp2744);
frost$core$String* $tmp2747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2745, &$s2748);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2747);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
// unreffing REF($827:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// unreffing REF($826:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2742);
// unreffing REF($821:org.frostlang.frostc.FixedArray.T)
goto block58;
block58:;
// line 599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2749 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
// unreffing preferred
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2723);
// unreffing REF($773:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2750 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
// unreffing a
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
// unreffing REF($762:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp2751 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// unreffing argTypes
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2752 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2753 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2754 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block56:;
// line 601
frost$collections$Array* $tmp2757 = *(&local16);
org$frostlang$frostc$Type* $tmp2758 = *(&local18);
frost$core$Bit $tmp2759 = frost$core$Bit$init$builtin_bit($tmp2758 != NULL);
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp2761 = (frost$core$Int64) {601};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2762, $tmp2761, &$s2763);
abort(); // unreachable
block59:;
frost$collections$Array$add$frost$collections$Array$T($tmp2757, ((frost$core$Object*) $tmp2758));
org$frostlang$frostc$Type* $tmp2764 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
// unreffing preferred
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2723);
// unreffing REF($773:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2765 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
// unreffing a
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
// unreffing REF($762:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 603
org$frostlang$frostc$FixedArray* $tmp2766 = *(&local14);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {0};
frost$core$Object* $tmp2768 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2766, $tmp2767);
frost$core$String** $tmp2769 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2768))->name;
frost$core$String* $tmp2770 = *$tmp2769;
frost$core$String* $tmp2771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2772, $tmp2770);
frost$core$String* $tmp2773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2771, &$s2774);
frost$collections$Array* $tmp2775 = *(&local16);
ITable* $tmp2776 = ((frost$collections$CollectionView*) $tmp2775)->$class->itable;
while ($tmp2776->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2776 = $tmp2776->next;
}
$fn2778 $tmp2777 = $tmp2776->methods[1];
frost$core$String* $tmp2779 = $tmp2777(((frost$collections$CollectionView*) $tmp2775));
frost$core$String* $tmp2780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2773, $tmp2779);
frost$core$String* $tmp2781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2780, &$s2782);
$fn2784 $tmp2783 = ($fn2784) param4->$class->vtable[2];
frost$core$String* $tmp2785 = $tmp2783(param4);
frost$core$String* $tmp2786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2781, $tmp2785);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2786);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
// unreffing REF($939:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
// unreffing REF($938:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// unreffing REF($936:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing REF($935:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
// unreffing REF($934:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
// unreffing REF($930:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// unreffing REF($929:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2768);
// unreffing REF($924:org.frostlang.frostc.FixedArray.T)
// line 605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2787 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
// unreffing argTypes
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2788 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2789 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2790 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2791 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block41:;
frost$core$Int64 $tmp2793 = (frost$core$Int64) {12};
frost$core$Bit $tmp2794 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2793);
bool $tmp2795 = $tmp2794.value;
if ($tmp2795) goto block61; else goto block62;
block61:;
org$frostlang$frostc$IR$Value** $tmp2796 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2797 = *$tmp2796;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
org$frostlang$frostc$IR$Value* $tmp2798 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local20) = $tmp2797;
org$frostlang$frostc$FixedArray** $tmp2799 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2800 = *$tmp2799;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
org$frostlang$frostc$FixedArray* $tmp2801 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local21) = $tmp2800;
org$frostlang$frostc$FixedArray** $tmp2802 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2803 = *$tmp2802;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
org$frostlang$frostc$FixedArray* $tmp2804 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local22) = $tmp2803;
// line 608
org$frostlang$frostc$IR$Value* $tmp2805 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2806 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp2807 = *(&local22);
org$frostlang$frostc$Pair* $tmp2808 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2805, ((frost$collections$ListView*) $tmp2806), ((frost$collections$ListView*) $tmp2807), param3, param4);
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$Pair* $tmp2809 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local23) = $tmp2808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
// unreffing REF($1036:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 609
org$frostlang$frostc$Pair* $tmp2810 = *(&local23);
frost$core$Bit $tmp2811 = frost$core$Bit$init$builtin_bit($tmp2810 != NULL);
bool $tmp2812 = $tmp2811.value;
if ($tmp2812) goto block63; else goto block64;
block63:;
// line 610
org$frostlang$frostc$Pair* $tmp2813 = *(&local23);
frost$core$Bit $tmp2814 = frost$core$Bit$init$builtin_bit($tmp2813 != NULL);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp2816 = (frost$core$Int64) {610};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2817, $tmp2816, &$s2818);
abort(); // unreachable
block67:;
frost$core$Object** $tmp2819 = &$tmp2813->first;
frost$core$Object* $tmp2820 = *$tmp2819;
ITable* $tmp2821 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2820))->$class->itable;
while ($tmp2821->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2821 = $tmp2821->next;
}
$fn2823 $tmp2822 = $tmp2821->methods[0];
frost$core$Int64 $tmp2824 = $tmp2822(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2820)));
frost$core$Int64 $tmp2825 = (frost$core$Int64) {1};
int64_t $tmp2826 = $tmp2824.value;
int64_t $tmp2827 = $tmp2825.value;
bool $tmp2828 = $tmp2826 > $tmp2827;
frost$core$Bit $tmp2829 = (frost$core$Bit) {$tmp2828};
bool $tmp2830 = $tmp2829.value;
if ($tmp2830) goto block65; else goto block66;
block65:;
// line 611
org$frostlang$frostc$Pair* $tmp2831 = *(&local23);
frost$core$Bit $tmp2832 = frost$core$Bit$init$builtin_bit($tmp2831 != NULL);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp2834 = (frost$core$Int64) {611};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2835, $tmp2834, &$s2836);
abort(); // unreachable
block69:;
frost$core$Object** $tmp2837 = &$tmp2831->first;
frost$core$Object* $tmp2838 = *$tmp2837;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2838), param3, param4);
// line 612
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2839 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2840 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2841 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2842 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2844 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block66:;
// line 614
org$frostlang$frostc$IR$Value* $tmp2845 = *(&local20);
org$frostlang$frostc$Pair* $tmp2846 = *(&local23);
frost$core$Bit $tmp2847 = frost$core$Bit$init$builtin_bit($tmp2846 != NULL);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp2849 = (frost$core$Int64) {614};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2850, $tmp2849, &$s2851);
abort(); // unreachable
block71:;
frost$core$Object** $tmp2852 = &$tmp2846->first;
frost$core$Object* $tmp2853 = *$tmp2852;
frost$core$Int64 $tmp2854 = (frost$core$Int64) {0};
ITable* $tmp2855 = ((frost$collections$ListView*) $tmp2853)->$class->itable;
while ($tmp2855->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2855 = $tmp2855->next;
}
$fn2857 $tmp2856 = $tmp2855->methods[0];
frost$core$Object* $tmp2858 = $tmp2856(((frost$collections$ListView*) $tmp2853), $tmp2854);
org$frostlang$frostc$IR$Value* $tmp2859 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2845, ((org$frostlang$frostc$MethodRef*) $tmp2858), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
// unreffing REF($1143:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2858);
// unreffing REF($1141:frost.collections.ListView.T)
org$frostlang$frostc$Pair* $tmp2860 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2861 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2862 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2863 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2865 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2859;
block64:;
// line 617
frost$collections$Array* $tmp2866 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2866);
*(&local24) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$collections$Array* $tmp2867 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local24) = $tmp2866;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
// unreffing REF($1184:frost.collections.Array<org.frostlang.frostc.Type>)
// line 618
ITable* $tmp2868 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2868->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2868 = $tmp2868->next;
}
$fn2870 $tmp2869 = $tmp2868->methods[0];
frost$collections$Iterator* $tmp2871 = $tmp2869(((frost$collections$Iterable*) param3));
goto block73;
block73:;
ITable* $tmp2872 = $tmp2871->$class->itable;
while ($tmp2872->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2872 = $tmp2872->next;
}
$fn2874 $tmp2873 = $tmp2872->methods[0];
frost$core$Bit $tmp2875 = $tmp2873($tmp2871);
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block75; else goto block74;
block74:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2877 = $tmp2871->$class->itable;
while ($tmp2877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2877 = $tmp2877->next;
}
$fn2879 $tmp2878 = $tmp2877->methods[1];
frost$core$Object* $tmp2880 = $tmp2878($tmp2871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2880)));
org$frostlang$frostc$ASTNode* $tmp2881 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp2880);
// line 619
org$frostlang$frostc$ASTNode* $tmp2882 = *(&local25);
org$frostlang$frostc$Type* $tmp2883 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2882);
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
org$frostlang$frostc$Type* $tmp2884 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
*(&local26) = $tmp2883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
// unreffing REF($1222:org.frostlang.frostc.Type?)
// line 620
org$frostlang$frostc$Type* $tmp2885 = *(&local26);
frost$core$Bit $tmp2886 = frost$core$Bit$init$builtin_bit($tmp2885 == NULL);
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block76; else goto block77;
block76:;
// line 622
frost$core$Int64* $tmp2888 = &param0->errorCount;
frost$core$Int64 $tmp2889 = *$tmp2888;
*(&local27) = $tmp2889;
// line 623
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp2891 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// unreffing REF($1245:org.frostlang.frostc.IR.Value?)
// line 624
frost$core$Int64* $tmp2892 = &param0->errorCount;
frost$core$Int64 $tmp2893 = *$tmp2892;
frost$core$Int64 $tmp2894 = *(&local27);
frost$core$Bit $tmp2895 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2893, $tmp2894);
bool $tmp2896 = $tmp2895.value;
if ($tmp2896) goto block78; else goto block79;
block78:;
// line 626
org$frostlang$frostc$FixedArray* $tmp2897 = *(&local21);
frost$core$Int64 $tmp2898 = (frost$core$Int64) {0};
frost$core$Object* $tmp2899 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2897, $tmp2898);
frost$core$String** $tmp2900 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2899))->name;
frost$core$String* $tmp2901 = *$tmp2900;
frost$core$String* $tmp2902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2903, $tmp2901);
frost$core$String* $tmp2904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2902, &$s2905);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2904);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
// unreffing REF($1266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
// unreffing REF($1265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2899);
// unreffing REF($1260:org.frostlang.frostc.FixedArray.T)
goto block79;
block79:;
// line 628
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2906 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
// unreffing preferred
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2880);
// unreffing REF($1212:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
// unreffing a
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
// unreffing REF($1201:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp2908 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
// unreffing argTypes
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2909 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2910 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2911 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2912 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2913 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2914 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block77:;
// line 630
frost$collections$Array* $tmp2915 = *(&local24);
org$frostlang$frostc$Type* $tmp2916 = *(&local26);
frost$core$Bit $tmp2917 = frost$core$Bit$init$builtin_bit($tmp2916 != NULL);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp2919 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2920, $tmp2919, &$s2921);
abort(); // unreachable
block80:;
frost$collections$Array$add$frost$collections$Array$T($tmp2915, ((frost$core$Object*) $tmp2916));
org$frostlang$frostc$Type* $tmp2922 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
// unreffing preferred
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2880);
// unreffing REF($1212:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2923 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
// unreffing a
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
// unreffing REF($1201:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 632
org$frostlang$frostc$FixedArray* $tmp2924 = *(&local21);
frost$core$Int64 $tmp2925 = (frost$core$Int64) {0};
frost$core$Object* $tmp2926 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2924, $tmp2925);
frost$core$String** $tmp2927 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2926))->name;
frost$core$String* $tmp2928 = *$tmp2927;
frost$core$String* $tmp2929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2930, $tmp2928);
frost$core$String* $tmp2931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2929, &$s2932);
frost$collections$Array* $tmp2933 = *(&local24);
ITable* $tmp2934 = ((frost$collections$CollectionView*) $tmp2933)->$class->itable;
while ($tmp2934->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2934 = $tmp2934->next;
}
$fn2936 $tmp2935 = $tmp2934->methods[1];
frost$core$String* $tmp2937 = $tmp2935(((frost$collections$CollectionView*) $tmp2933));
frost$core$String* $tmp2938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2931, $tmp2937);
frost$core$String* $tmp2939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2938, &$s2940);
$fn2942 $tmp2941 = ($fn2942) param4->$class->vtable[2];
frost$core$String* $tmp2943 = $tmp2941(param4);
frost$core$String* $tmp2944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2939, $tmp2943);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2944);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
// unreffing REF($1383:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// unreffing REF($1382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
// unreffing REF($1380:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// unreffing REF($1379:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
// unreffing REF($1378:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
// unreffing REF($1374:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
// unreffing REF($1373:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2926);
// unreffing REF($1368:org.frostlang.frostc.FixedArray.T)
// line 634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2945 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// unreffing argTypes
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2946 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2947 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2948 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2949 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2950 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2951 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
frost$core$Int64 $tmp2952 = (frost$core$Int64) {5};
frost$core$Bit $tmp2953 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2952);
bool $tmp2954 = $tmp2953.value;
if ($tmp2954) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp2955 = (frost$core$Int64) {7};
frost$core$Bit $tmp2956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2955);
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block82; else goto block84;
block82:;
// line 637
org$frostlang$frostc$IR$Value* $tmp2958 = org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
// unreffing REF($1457:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR* $tmp2959 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2958;
block84:;
frost$core$Int64 $tmp2961 = (frost$core$Int64) {14};
frost$core$Bit $tmp2962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2427, $tmp2961);
bool $tmp2963 = $tmp2962.value;
if ($tmp2963) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Type** $tmp2964 = (org$frostlang$frostc$Type**) (param2->$data + 0);
org$frostlang$frostc$Type* $tmp2965 = *$tmp2964;
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
org$frostlang$frostc$Type* $tmp2966 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local28) = $tmp2965;
// line 640
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
// line 641
org$frostlang$frostc$Type* $tmp2967 = *(&local28);
frost$core$Bit $tmp2968 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp2967);
bool $tmp2969 = $tmp2968.value;
if ($tmp2969) goto block87; else goto block89;
block87:;
// line 642
org$frostlang$frostc$Type* $tmp2970 = *(&local28);
org$frostlang$frostc$FixedArray** $tmp2971 = &$tmp2970->subtypes;
org$frostlang$frostc$FixedArray* $tmp2972 = *$tmp2971;
frost$core$Bit $tmp2973 = frost$core$Bit$init$builtin_bit($tmp2972 != NULL);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp2975 = (frost$core$Int64) {642};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2976, $tmp2975, &$s2977);
abort(); // unreachable
block90:;
frost$core$Int64 $tmp2978 = (frost$core$Int64) {1};
frost$core$Object* $tmp2979 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2972, $tmp2978);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2979)));
org$frostlang$frostc$Type* $tmp2980 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
*(&local29) = ((org$frostlang$frostc$Type*) $tmp2979);
frost$core$Frost$unref$frost$core$Object$Q($tmp2979);
// unreffing REF($1508:org.frostlang.frostc.FixedArray.T)
goto block88;
block89:;
// line 1
// line 645
org$frostlang$frostc$Type* $tmp2981 = *(&local28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
org$frostlang$frostc$Type* $tmp2982 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local29) = $tmp2981;
goto block88;
block88:;
// line 647
org$frostlang$frostc$Type* $tmp2983 = *(&local29);
org$frostlang$frostc$ClassDecl* $tmp2984 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2983);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
org$frostlang$frostc$ClassDecl* $tmp2985 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
*(&local30) = $tmp2984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
// unreffing REF($1532:org.frostlang.frostc.ClassDecl?)
// line 648
org$frostlang$frostc$ClassDecl* $tmp2986 = *(&local30);
frost$core$Bit $tmp2987 = frost$core$Bit$init$builtin_bit($tmp2986 == NULL);
bool $tmp2988 = $tmp2987.value;
if ($tmp2988) goto block92; else goto block93;
block92:;
// line 649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2989 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2990 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2991 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2992 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block93:;
// line 651
org$frostlang$frostc$ClassDecl* $tmp2994 = *(&local30);
frost$core$Bit $tmp2995 = frost$core$Bit$init$builtin_bit($tmp2994 != NULL);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2998, $tmp2997, &$s2999);
abort(); // unreachable
block96:;
frost$core$Bit $tmp3000 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp2994);
frost$core$Bit $tmp3001 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3000);
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block94; else goto block95;
block94:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3003 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3004 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3005 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3006 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3007 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block95:;
// line 654
org$frostlang$frostc$ClassDecl* $tmp3008 = *(&local30);
frost$core$Bit $tmp3009 = frost$core$Bit$init$builtin_bit($tmp3008 != NULL);
bool $tmp3010 = $tmp3009.value;
if ($tmp3010) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp3011 = (frost$core$Int64) {654};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3012, $tmp3011, &$s3013);
abort(); // unreachable
block98:;
org$frostlang$frostc$SymbolTable* $tmp3014 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp3008);
org$frostlang$frostc$Symbol* $tmp3015 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3014, &$s3016);
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
org$frostlang$frostc$Symbol* $tmp3017 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
*(&local31) = $tmp3015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// unreffing REF($1632:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
// unreffing REF($1631:org.frostlang.frostc.SymbolTable)
// line 655
org$frostlang$frostc$Symbol* $tmp3018 = *(&local31);
frost$core$Bit $tmp3019 = frost$core$Bit$init$builtin_bit($tmp3018 != NULL);
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp3021 = (frost$core$Int64) {655};
org$frostlang$frostc$ClassDecl* $tmp3022 = *(&local30);
frost$core$Bit $tmp3023 = frost$core$Bit$init$builtin_bit($tmp3022 != NULL);
bool $tmp3024 = $tmp3023.value;
if ($tmp3024) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp3025 = (frost$core$Int64) {655};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3026, $tmp3025, &$s3027);
abort(); // unreachable
block102:;
frost$core$String** $tmp3028 = &$tmp3022->name;
frost$core$String* $tmp3029 = *$tmp3028;
frost$core$String* $tmp3030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3031, $tmp3029);
frost$core$String* $tmp3032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3030, &$s3033);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3034, $tmp3021, $tmp3032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
// unreffing REF($1665:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
// unreffing REF($1664:frost.core.String)
abort(); // unreachable
block100:;
// line 656
org$frostlang$frostc$ClassDecl* $tmp3035 = *(&local30);
frost$core$Bit $tmp3036 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp3035);
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block104; else goto block105;
block104:;
// line 657
org$frostlang$frostc$Symbol* $tmp3038 = *(&local31);
frost$core$Bit $tmp3039 = frost$core$Bit$init$builtin_bit($tmp3038 != NULL);
bool $tmp3040 = $tmp3039.value;
if ($tmp3040) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp3041 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3042, $tmp3041, &$s3043);
abort(); // unreachable
block106:;
org$frostlang$frostc$IR$Value* $tmp3044 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp3038);
frost$core$Bit $tmp3045 = frost$core$Bit$init$builtin_bit($tmp3044 != NULL);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp3047 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3048, $tmp3047, &$s3049);
abort(); // unreachable
block108:;
org$frostlang$frostc$IR$Value* $tmp3050 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3044, param3, param4);
org$frostlang$frostc$Type* $tmp3051 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp3052 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3050, $tmp3051);
org$frostlang$frostc$IR$Value* $tmp3053 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3052, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
// unreffing REF($1701:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
// unreffing REF($1700:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
// unreffing REF($1698:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
// unreffing REF($1689:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Symbol* $tmp3054 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
// unreffing inits
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3055 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3056 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3057 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3058 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3053;
block105:;
// line 661
org$frostlang$frostc$IR* $tmp3060 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3061 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3062 = (frost$core$Int64) {6};
org$frostlang$frostc$ClassDecl* $tmp3063 = *(&local30);
frost$core$Bit $tmp3064 = frost$core$Bit$init$builtin_bit($tmp3063 != NULL);
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3067, $tmp3066, &$s3068);
abort(); // unreachable
block110:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl($tmp3061, $tmp3062, param1, $tmp3063);
$fn3070 $tmp3069 = ($fn3070) $tmp3060->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3071 = $tmp3069($tmp3060, $tmp3061);
*(&local32) = $tmp3071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
// unreffing REF($1749:org.frostlang.frostc.IR.Statement)
// line 662
org$frostlang$frostc$IR$Value* $tmp3072 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3073 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3074 = *(&local32);
org$frostlang$frostc$Type* $tmp3075 = *(&local29);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3072, $tmp3073, $tmp3074, $tmp3075);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
org$frostlang$frostc$IR$Value* $tmp3076 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local33) = $tmp3072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
// unreffing REF($1768:org.frostlang.frostc.IR.Value)
// line 663
frost$collections$Stack** $tmp3077 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3078 = *$tmp3077;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3079 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3080 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3081 = *(&local33);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3079, $tmp3080, $tmp3081);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3078, ((frost$core$Object*) $tmp3079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
// unreffing REF($1787:org.frostlang.frostc.Compiler.EnclosingContext)
// line 664
org$frostlang$frostc$IR$Value* $tmp3082 = *(&local33);
org$frostlang$frostc$Symbol* $tmp3083 = *(&local31);
frost$core$Bit $tmp3084 = frost$core$Bit$init$builtin_bit($tmp3083 != NULL);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp3086 = (frost$core$Int64) {664};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3087, $tmp3086, &$s3088);
abort(); // unreachable
block112:;
org$frostlang$frostc$IR$Value* $tmp3089 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3082, $tmp3083);
frost$core$Bit $tmp3090 = frost$core$Bit$init$builtin_bit($tmp3089 != NULL);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {664};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3093, $tmp3092, &$s3094);
abort(); // unreachable
block114:;
org$frostlang$frostc$Compiler$TypeContext* $tmp3095 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3096 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3095, $tmp3096);
org$frostlang$frostc$IR$Value* $tmp3097 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3089, param3, $tmp3095);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
// unreffing REF($1820:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
// unreffing REF($1817:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
// unreffing REF($1808:org.frostlang.frostc.IR.Value?)
// line 666
org$frostlang$frostc$IR$Value* $tmp3098 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp3099 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3098, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
// unreffing REF($1833:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp3100 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
// unreffing constructRef
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp3101 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
// unreffing inits
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3102 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3103 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3104 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3099;
block86:;
// line 669
frost$core$Bit $tmp3107 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp3109 = (frost$core$Int64) {669};
frost$core$String* $tmp3110 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3111, ((frost$core$Object*) param2));
frost$core$String* $tmp3112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3110, &$s3113);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3114, $tmp3109, $tmp3112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
// unreffing REF($1882:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// unreffing REF($1881:frost.core.String)
abort(); // unreachable
block116:;
goto block1;
block1:;
frost$core$Bit $tmp3115 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp3117 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3118, $tmp3117, &$s3119);
abort(); // unreachable
block118:;
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$MethodRef* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Int64 local4;
frost$core$Bit local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement* local7 = NULL;
frost$core$Bit local8;
frost$core$Bit local9;
org$frostlang$frostc$Pair* local10 = NULL;
org$frostlang$frostc$MethodRef* local11 = NULL;
frost$core$Bit local12;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$Type* local14 = NULL;
frost$collections$Array* local15 = NULL;
org$frostlang$frostc$IR$Value* local16 = NULL;
frost$core$Bit local17;
frost$core$Int64 local18;
frost$core$Bit local19;
frost$core$Bit local20;
frost$core$Int64 local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$IR$Statement$ID local23;
frost$core$Bit local24;
org$frostlang$frostc$IR$Statement$ID local25;
org$frostlang$frostc$IR$Value* local26 = NULL;
frost$core$Bit local27;
// line 679
org$frostlang$frostc$IR** $tmp3120 = &param0->ir;
org$frostlang$frostc$IR* $tmp3121 = *$tmp3120;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
org$frostlang$frostc$IR* $tmp3122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local0) = $tmp3121;
// line 681
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodRef* $tmp3123 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local1) = param3;
// line 682
org$frostlang$frostc$MethodRef* $tmp3124 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3125 = &$tmp3124->value;
org$frostlang$frostc$MethodDecl* $tmp3126 = *$tmp3125;
org$frostlang$frostc$MethodDecl$Kind* $tmp3127 = &$tmp3126->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3128 = *$tmp3127;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3129;
$tmp3129 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3129->value = $tmp3128;
frost$core$Int64 $tmp3130 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3131 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3130);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3132;
$tmp3132 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3132->value = $tmp3131;
ITable* $tmp3133 = ((frost$core$Equatable*) $tmp3129)->$class->itable;
while ($tmp3133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3133 = $tmp3133->next;
}
$fn3135 $tmp3134 = $tmp3133->methods[0];
frost$core$Bit $tmp3136 = $tmp3134(((frost$core$Equatable*) $tmp3129), ((frost$core$Equatable*) $tmp3132));
bool $tmp3137 = $tmp3136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3132)));
// unreffing REF($28:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3129)));
// unreffing REF($24:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3137) goto block1; else goto block2;
block1:;
// line 683
frost$core$Bit $tmp3138 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp3138;
// line 684
frost$core$Bit $tmp3139 = frost$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp3139;
// line 685
frost$core$Bit $tmp3140 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3141 = $tmp3140.value;
if ($tmp3141) goto block3; else goto block5;
block3:;
// line 686
frost$core$Bit $tmp3142 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3144 = (frost$core$Int64) {686};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3145, $tmp3144, &$s3146);
abort(); // unreachable
block6:;
frost$core$Int64* $tmp3147 = &param2->$rawValue;
frost$core$Int64 $tmp3148 = *$tmp3147;
frost$core$Int64 $tmp3149 = (frost$core$Int64) {5};
frost$core$Bit $tmp3150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3148, $tmp3149);
bool $tmp3151 = $tmp3150.value;
if ($tmp3151) goto block9; else goto block10;
block9:;
frost$core$Int64* $tmp3152 = (frost$core$Int64*) (param2->$data + 0);
frost$core$Int64 $tmp3153 = *$tmp3152;
*(&local4) = $tmp3153;
org$frostlang$frostc$Type** $tmp3154 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3155 = *$tmp3154;
// line 688
frost$core$Int64 $tmp3156 = *(&local4);
frost$core$Int64 $tmp3157 = (frost$core$Int64) {0};
frost$core$Bit $tmp3158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3156, $tmp3157);
bool $tmp3159 = $tmp3158.value;
if ($tmp3159) goto block11; else goto block12;
block11:;
frost$core$Bit $tmp3160 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3161 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3160);
*(&local5) = $tmp3161;
goto block13;
block12:;
*(&local5) = $tmp3158;
goto block13;
block13:;
frost$core$Bit $tmp3162 = *(&local5);
*(&local3) = $tmp3162;
// line 689
frost$core$Bit $tmp3163 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3163;
goto block8;
block10:;
frost$core$Int64 $tmp3164 = (frost$core$Int64) {7};
frost$core$Bit $tmp3165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3148, $tmp3164);
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Statement$ID* $tmp3167 = (org$frostlang$frostc$IR$Statement$ID*) (param2->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3168 = *$tmp3167;
*(&local6) = $tmp3168;
org$frostlang$frostc$Type** $tmp3169 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3170 = *$tmp3169;
// line 692
org$frostlang$frostc$IR$Statement$ID $tmp3171 = *(&local6);
org$frostlang$frostc$IR* $tmp3172 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp3173 = &$tmp3172->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3174 = *$tmp3173;
frost$collections$Array** $tmp3175 = &$tmp3174->ids;
frost$collections$Array* $tmp3176 = *$tmp3175;
org$frostlang$frostc$IR* $tmp3177 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp3178 = &$tmp3177->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3179 = *$tmp3178;
frost$collections$Array** $tmp3180 = &$tmp3179->ids;
frost$collections$Array* $tmp3181 = *$tmp3180;
ITable* $tmp3182 = ((frost$collections$CollectionView*) $tmp3181)->$class->itable;
while ($tmp3182->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3182 = $tmp3182->next;
}
$fn3184 $tmp3183 = $tmp3182->methods[0];
frost$core$Int64 $tmp3185 = $tmp3183(((frost$collections$CollectionView*) $tmp3181));
frost$core$Int64 $tmp3186 = (frost$core$Int64) {1};
int64_t $tmp3187 = $tmp3185.value;
int64_t $tmp3188 = $tmp3186.value;
int64_t $tmp3189 = $tmp3187 - $tmp3188;
frost$core$Int64 $tmp3190 = (frost$core$Int64) {$tmp3189};
frost$core$Object* $tmp3191 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3176, $tmp3190);
frost$core$Bit $tmp3192 = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit($tmp3171, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp3191)->value);
bool $tmp3193 = $tmp3192.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3191);
// unreffing REF($118:frost.collections.Array.T)
if ($tmp3193) goto block16; else goto block17;
block16:;
// line 693
org$frostlang$frostc$IR* $tmp3194 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp3195 = &$tmp3194->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3196 = *$tmp3195;
frost$collections$Array** $tmp3197 = &$tmp3196->statements;
frost$collections$Array* $tmp3198 = *$tmp3197;
org$frostlang$frostc$IR* $tmp3199 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp3200 = &$tmp3199->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3201 = *$tmp3200;
frost$collections$Array** $tmp3202 = &$tmp3201->statements;
frost$collections$Array* $tmp3203 = *$tmp3202;
ITable* $tmp3204 = ((frost$collections$CollectionView*) $tmp3203)->$class->itable;
while ($tmp3204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3204 = $tmp3204->next;
}
$fn3206 $tmp3205 = $tmp3204->methods[0];
frost$core$Int64 $tmp3207 = $tmp3205(((frost$collections$CollectionView*) $tmp3203));
frost$core$Int64 $tmp3208 = (frost$core$Int64) {1};
int64_t $tmp3209 = $tmp3207.value;
int64_t $tmp3210 = $tmp3208.value;
int64_t $tmp3211 = $tmp3209 - $tmp3210;
frost$core$Int64 $tmp3212 = (frost$core$Int64) {$tmp3211};
frost$core$Object* $tmp3213 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3198, $tmp3212);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp3213)));
org$frostlang$frostc$IR$Statement* $tmp3214 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local7) = ((org$frostlang$frostc$IR$Statement*) $tmp3213);
frost$core$Frost$unref$frost$core$Object$Q($tmp3213);
// unreffing REF($146:frost.collections.Array.T)
// line 694
org$frostlang$frostc$IR$Statement* $tmp3215 = *(&local7);
frost$core$Int64* $tmp3216 = &$tmp3215->$rawValue;
frost$core$Int64 $tmp3217 = *$tmp3216;
frost$core$Int64 $tmp3218 = (frost$core$Int64) {6};
frost$core$Bit $tmp3219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3217, $tmp3218);
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block19; else goto block18;
block19:;
// line 696
frost$core$Bit $tmp3221 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3221;
goto block18;
block18:;
org$frostlang$frostc$IR$Statement* $tmp3222 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
// unreffing last
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block17:;
goto block8;
block15:;
frost$core$Int64 $tmp3223 = (frost$core$Int64) {13};
frost$core$Bit $tmp3224 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3148, $tmp3223);
bool $tmp3225 = $tmp3224.value;
if ($tmp3225) goto block20; else goto block8;
block20:;
// line 702
frost$core$Bit $tmp3226 = frost$core$Bit$init$builtin_bit(true);
*(&local3) = $tmp3226;
// line 703
frost$core$Bit $tmp3227 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3227;
goto block8;
block8:;
goto block4;
block5:;
// line 1
// line 708
org$frostlang$frostc$MethodRef* $tmp3228 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3229 = &$tmp3228->value;
org$frostlang$frostc$MethodDecl* $tmp3230 = *$tmp3229;
frost$core$Weak** $tmp3231 = &$tmp3230->owner;
frost$core$Weak* $tmp3232 = *$tmp3231;
frost$core$Object* $tmp3233 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3232);
frost$core$Bit $tmp3234 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3233));
bool $tmp3235 = $tmp3234.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3233);
// unreffing REF($197:frost.core.Weak.T)
if ($tmp3235) goto block21; else goto block23;
block21:;
// line 709
frost$core$Bit $tmp3236 = frost$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp3236;
// line 710
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3237;
goto block22;
block23:;
// line 1
// line 713
frost$core$Bit $tmp3238 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3239 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3238);
*(&local3) = $tmp3239;
// line 714
frost$core$Bit $tmp3240 = *(&local3);
*(&local2) = $tmp3240;
goto block22;
block22:;
goto block4;
block4:;
// line 717
frost$core$Bit $tmp3241 = *(&local3);
bool $tmp3242 = $tmp3241.value;
if ($tmp3242) goto block26; else goto block27;
block26:;
frost$collections$Stack** $tmp3243 = &param0->currentMethod;
frost$collections$Stack* $tmp3244 = *$tmp3243;
frost$core$Int64 $tmp3245 = (frost$core$Int64) {0};
frost$core$Object* $tmp3246 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3244, $tmp3245);
org$frostlang$frostc$MethodDecl$Kind* $tmp3247 = &((org$frostlang$frostc$MethodDecl*) $tmp3246)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3248 = *$tmp3247;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3249;
$tmp3249 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3249->value = $tmp3248;
frost$core$Int64 $tmp3250 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3251 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3250);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3252;
$tmp3252 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3252->value = $tmp3251;
ITable* $tmp3253 = ((frost$core$Equatable*) $tmp3249)->$class->itable;
while ($tmp3253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3253 = $tmp3253->next;
}
$fn3255 $tmp3254 = $tmp3253->methods[1];
frost$core$Bit $tmp3256 = $tmp3254(((frost$core$Equatable*) $tmp3249), ((frost$core$Equatable*) $tmp3252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3252)));
// unreffing REF($239:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3249)));
// unreffing REF($235:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp3246);
// unreffing REF($231:frost.collections.Stack.T)
*(&local8) = $tmp3256;
goto block28;
block27:;
*(&local8) = $tmp3241;
goto block28;
block28:;
frost$core$Bit $tmp3257 = *(&local8);
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block24; else goto block25;
block24:;
// line 718
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3259);
// line 719
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// line 721
frost$core$Bit $tmp3262 = *(&local2);
frost$core$Bit $tmp3263 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3262);
bool $tmp3264 = $tmp3263.value;
if ($tmp3264) goto block29; else goto block30;
block29:;
// line 722
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3265);
// line 723
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
goto block2;
block2:;
// line 726
ITable* $tmp3268 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3268->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3268 = $tmp3268->next;
}
$fn3270 $tmp3269 = $tmp3268->methods[0];
frost$core$Int64 $tmp3271 = $tmp3269(((frost$collections$CollectionView*) param4));
org$frostlang$frostc$MethodRef* $tmp3272 = *(&local1);
frost$core$Int64 $tmp3273 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3272);
int64_t $tmp3274 = $tmp3271.value;
int64_t $tmp3275 = $tmp3273.value;
bool $tmp3276 = $tmp3274 != $tmp3275;
frost$core$Bit $tmp3277 = (frost$core$Bit) {$tmp3276};
bool $tmp3278 = $tmp3277.value;
if ($tmp3278) goto block31; else goto block32;
block31:;
// line 727
org$frostlang$frostc$MethodRef* $tmp3279 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3280 = &$tmp3279->value;
org$frostlang$frostc$MethodDecl* $tmp3281 = *$tmp3280;
frost$core$String* $tmp3282 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3281);
frost$core$String* $tmp3283 = frost$core$String$convert$R$frost$core$String($tmp3282);
frost$core$String* $tmp3284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3283, &$s3285);
org$frostlang$frostc$MethodRef* $tmp3286 = *(&local1);
frost$core$Int64 $tmp3287 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3286);
frost$core$Int64$wrapper* $tmp3288;
$tmp3288 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3288->value = $tmp3287;
frost$core$String* $tmp3289 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3284, ((frost$core$Object*) $tmp3288));
frost$core$String* $tmp3290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3289, &$s3291);
org$frostlang$frostc$MethodRef* $tmp3292 = *(&local1);
frost$core$Int64 $tmp3293 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3292);
frost$core$Int64 $tmp3294 = (frost$core$Int64) {1};
frost$core$Bit $tmp3295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3293, $tmp3294);
frost$core$Bit$wrapper* $tmp3296;
$tmp3296 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3296->value = $tmp3295;
ITable* $tmp3297 = ((frost$core$Formattable*) $tmp3296)->$class->itable;
while ($tmp3297->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3297 = $tmp3297->next;
}
$fn3299 $tmp3298 = $tmp3297->methods[0];
frost$core$String* $tmp3300 = $tmp3298(((frost$core$Formattable*) $tmp3296), &$s3301);
frost$core$String* $tmp3302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3303, $tmp3300);
frost$core$String* $tmp3304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3302, &$s3305);
ITable* $tmp3306 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3306->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3306 = $tmp3306->next;
}
$fn3308 $tmp3307 = $tmp3306->methods[0];
frost$core$Int64 $tmp3309 = $tmp3307(((frost$collections$CollectionView*) param4));
frost$core$Int64$wrapper* $tmp3310;
$tmp3310 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3310->value = $tmp3309;
frost$core$String* $tmp3311 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3304, ((frost$core$Object*) $tmp3310));
frost$core$String* $tmp3312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3311, &$s3313);
frost$core$String* $tmp3314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3290, $tmp3312);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
// unreffing REF($335:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
// unreffing REF($334:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
// unreffing REF($333:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
// unreffing REF($332:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
// unreffing REF($328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
// unreffing REF($327:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
// unreffing REF($326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3296)));
// unreffing REF($324:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
// unreffing REF($319:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
// unreffing REF($318:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
// unreffing REF($317:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
// unreffing REF($314:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
// unreffing REF($313:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
// unreffing REF($312:frost.core.String)
// line 729
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3316 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block32:;
// line 731
frost$core$Bit $tmp3317 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3318 = $tmp3317.value;
if ($tmp3318) goto block35; else goto block36;
block35:;
org$frostlang$frostc$MethodRef* $tmp3319 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3320 = &$tmp3319->value;
org$frostlang$frostc$MethodDecl* $tmp3321 = *$tmp3320;
org$frostlang$frostc$Annotations** $tmp3322 = &$tmp3321->annotations;
org$frostlang$frostc$Annotations* $tmp3323 = *$tmp3322;
frost$core$Bit $tmp3324 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3323);
*(&local9) = $tmp3324;
goto block37;
block36:;
*(&local9) = $tmp3317;
goto block37;
block37:;
frost$core$Bit $tmp3325 = *(&local9);
bool $tmp3326 = $tmp3325.value;
if ($tmp3326) goto block33; else goto block34;
block33:;
// line 732
frost$core$Bit $tmp3327 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3328 = $tmp3327.value;
if ($tmp3328) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp3329 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3330, $tmp3329, &$s3331);
abort(); // unreachable
block38:;
frost$core$Int64* $tmp3332 = &param2->$rawValue;
frost$core$Int64 $tmp3333 = *$tmp3332;
frost$core$Int64 $tmp3334 = (frost$core$Int64) {14};
frost$core$Bit $tmp3335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3333, $tmp3334);
bool $tmp3336 = $tmp3335.value;
if ($tmp3336) goto block41; else goto block42;
block41:;
goto block40;
block42:;
// line 737
org$frostlang$frostc$MethodRef* $tmp3337 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3338 = &$tmp3337->value;
org$frostlang$frostc$MethodDecl* $tmp3339 = *$tmp3338;
frost$core$String* $tmp3340 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3339);
frost$core$String* $tmp3341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3342, $tmp3340);
frost$core$String* $tmp3343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3341, &$s3344);
frost$core$String* $tmp3345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3343, &$s3346);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
// unreffing REF($434:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
// unreffing REF($433:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// unreffing REF($432:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
// unreffing REF($431:frost.core.String)
goto block40;
block40:;
goto block34;
block34:;
// line 742
org$frostlang$frostc$MethodRef* $tmp3347 = *(&local1);
org$frostlang$frostc$Pair* $tmp3348 = org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp3347, param4);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
org$frostlang$frostc$Pair* $tmp3349 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
*(&local10) = $tmp3348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
// unreffing REF($452:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
// line 743
org$frostlang$frostc$Pair* $tmp3350 = *(&local10);
frost$core$Object** $tmp3351 = &$tmp3350->first;
frost$core$Object* $tmp3352 = *$tmp3351;
bool $tmp3353 = ((frost$core$Bit$wrapper*) $tmp3352)->value.value;
if ($tmp3353) goto block43; else goto block44;
block43:;
// line 744
org$frostlang$frostc$Pair* $tmp3354 = *(&local10);
frost$core$Object** $tmp3355 = &$tmp3354->second;
frost$core$Object* $tmp3356 = *$tmp3355;
frost$core$Bit $tmp3357 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp3356) != NULL);
bool $tmp3358 = $tmp3357.value;
if ($tmp3358) goto block45; else goto block46;
block45:;
// line 745
org$frostlang$frostc$Pair* $tmp3359 = *(&local10);
frost$core$Object** $tmp3360 = &$tmp3359->second;
frost$core$Object* $tmp3361 = *$tmp3360;
org$frostlang$frostc$IR$Value* $tmp3362 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) $tmp3361), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
// unreffing REF($487:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Pair* $tmp3363 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3365 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp3362;
block46:;
// line 747
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp3366 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3368 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block44:;
// line 749
org$frostlang$frostc$MethodRef* $tmp3369 = *(&local1);
org$frostlang$frostc$MethodRef* $tmp3370 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp3369, param4);
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
org$frostlang$frostc$MethodRef* $tmp3371 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
*(&local11) = $tmp3370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
// unreffing REF($530:org.frostlang.frostc.MethodRef?)
// line 750
org$frostlang$frostc$MethodRef* $tmp3372 = *(&local11);
frost$core$Bit $tmp3373 = frost$core$Bit$init$builtin_bit($tmp3372 == NULL);
bool $tmp3374 = $tmp3373.value;
if ($tmp3374) goto block47; else goto block48;
block47:;
// line 751
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3375 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3376 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3378 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block48:;
// line 753
org$frostlang$frostc$MethodRef* $tmp3379 = *(&local11);
frost$core$Bit $tmp3380 = frost$core$Bit$init$builtin_bit($tmp3379 != NULL);
bool $tmp3381 = $tmp3380.value;
if ($tmp3381) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp3382 = (frost$core$Int64) {753};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3383, $tmp3382, &$s3384);
abort(); // unreachable
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3379));
org$frostlang$frostc$MethodRef* $tmp3385 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
*(&local1) = $tmp3379;
// line 754
// line 755
frost$core$Bit $tmp3386 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3387 = $tmp3386.value;
if ($tmp3387) goto block51; else goto block53;
block51:;
// line 756
frost$core$Bit $tmp3388 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3389 = $tmp3388.value;
if ($tmp3389) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp3390 = (frost$core$Int64) {756};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3391, $tmp3390, &$s3392);
abort(); // unreachable
block54:;
frost$core$Int64* $tmp3393 = &param2->$rawValue;
frost$core$Int64 $tmp3394 = *$tmp3393;
frost$core$Int64 $tmp3395 = (frost$core$Int64) {13};
frost$core$Bit $tmp3396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3394, $tmp3395);
bool $tmp3397 = $tmp3396.value;
if ($tmp3397) goto block57; else goto block58;
block57:;
// line 758
frost$core$Bit $tmp3398 = frost$core$Bit$init$builtin_bit(true);
*(&local12) = $tmp3398;
goto block56;
block58:;
// line 761
frost$core$Bit $tmp3399 = frost$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp3399;
goto block56;
block56:;
goto block52;
block53:;
// line 1
// line 766
frost$core$Bit $tmp3400 = frost$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp3400;
goto block52;
block52:;
// line 770
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
// line 771
org$frostlang$frostc$MethodRef* $tmp3401 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3402 = &$tmp3401->value;
org$frostlang$frostc$MethodDecl* $tmp3403 = *$tmp3402;
frost$core$Bit $tmp3404 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3403);
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block59; else goto block61;
block59:;
// line 772
org$frostlang$frostc$MethodRef* $tmp3406 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3407 = &$tmp3406->value;
org$frostlang$frostc$MethodDecl* $tmp3408 = *$tmp3407;
org$frostlang$frostc$Type* $tmp3409 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(param0, $tmp3408);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
org$frostlang$frostc$Type* $tmp3410 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
*(&local13) = $tmp3409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
// unreffing REF($635:org.frostlang.frostc.Type)
goto block60;
block61:;
// line 1
// line 775
org$frostlang$frostc$MethodRef* $tmp3411 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3412 = &$tmp3411->value;
org$frostlang$frostc$MethodDecl* $tmp3413 = *$tmp3412;
org$frostlang$frostc$MethodRef* $tmp3414 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3415 = &$tmp3414->value;
org$frostlang$frostc$MethodDecl* $tmp3416 = *$tmp3415;
frost$core$Weak** $tmp3417 = &$tmp3416->owner;
frost$core$Weak* $tmp3418 = *$tmp3417;
frost$core$Object* $tmp3419 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3418);
org$frostlang$frostc$Type** $tmp3420 = &((org$frostlang$frostc$ClassDecl*) $tmp3419)->type;
org$frostlang$frostc$Type* $tmp3421 = *$tmp3420;
frost$core$Bit $tmp3422 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3423 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp3413, $tmp3421, $tmp3422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
org$frostlang$frostc$Type* $tmp3424 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local13) = $tmp3423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
// unreffing REF($662:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp3419);
// unreffing REF($657:frost.core.Weak.T)
goto block60;
block60:;
// line 777
org$frostlang$frostc$Type* $tmp3425 = *(&local13);
frost$core$Bit $tmp3426 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3425);
bool $tmp3427 = $tmp3426.value;
if ($tmp3427) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp3428 = (frost$core$Int64) {777};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3429, $tmp3428);
abort(); // unreachable
block62:;
// line 778
org$frostlang$frostc$MethodRef* $tmp3430 = *(&local1);
org$frostlang$frostc$Type** $tmp3431 = &$tmp3430->effectiveType;
org$frostlang$frostc$Type* $tmp3432 = *$tmp3431;
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
org$frostlang$frostc$Type* $tmp3433 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local14) = $tmp3432;
// line 779
org$frostlang$frostc$Type* $tmp3434 = *(&local14);
frost$core$Bit $tmp3435 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3434);
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp3437 = (frost$core$Int64) {779};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3438, $tmp3437);
abort(); // unreachable
block64:;
// line 780
frost$collections$Array* $tmp3439 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp3440 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3440->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3440 = $tmp3440->next;
}
$fn3442 $tmp3441 = $tmp3440->methods[0];
frost$core$Int64 $tmp3443 = $tmp3441(((frost$collections$CollectionView*) param4));
frost$collections$Array$init$frost$core$Int64($tmp3439, $tmp3443);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
frost$collections$Array* $tmp3444 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
*(&local15) = $tmp3439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
// unreffing REF($704:frost.collections.Array<org.frostlang.frostc.IR.Value>)
// line 781
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 782
frost$core$Bit $tmp3445 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block66; else goto block68;
block66:;
// line 783
frost$core$Bit $tmp3447 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3448 = $tmp3447.value;
if ($tmp3448) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp3449 = (frost$core$Int64) {783};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3450, $tmp3449, &$s3451);
abort(); // unreachable
block69:;
frost$core$Int64* $tmp3452 = &param2->$rawValue;
frost$core$Int64 $tmp3453 = *$tmp3452;
frost$core$Int64 $tmp3454 = (frost$core$Int64) {14};
frost$core$Bit $tmp3455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3453, $tmp3454);
bool $tmp3456 = $tmp3455.value;
if ($tmp3456) goto block72; else goto block73;
block72:;
goto block71;
block73:;
// line 788
org$frostlang$frostc$MethodRef* $tmp3457 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3458 = &$tmp3457->value;
org$frostlang$frostc$MethodDecl* $tmp3459 = *$tmp3458;
frost$core$Weak** $tmp3460 = &$tmp3459->owner;
frost$core$Weak* $tmp3461 = *$tmp3460;
frost$core$Object* $tmp3462 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3461);
frost$core$String** $tmp3463 = &((org$frostlang$frostc$ClassDecl*) $tmp3462)->name;
frost$core$String* $tmp3464 = *$tmp3463;
frost$core$Bit $tmp3465 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3464, &$s3466);
bool $tmp3467 = $tmp3465.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3462);
// unreffing REF($750:frost.core.Weak.T)
if ($tmp3467) goto block74; else goto block76;
block74:;
// line 789
org$frostlang$frostc$Type* $tmp3468 = *(&local13);
frost$core$Int64 $tmp3469 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp3470 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3468, $tmp3469);
org$frostlang$frostc$IR$Value* $tmp3471 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
org$frostlang$frostc$IR$Value* $tmp3472 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
*(&local16) = $tmp3471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
// unreffing REF($764:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
// unreffing REF($763:org.frostlang.frostc.Type)
goto block75;
block76:;
// line 792
frost$core$Bit $tmp3473 = *(&local12);
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block77; else goto block79;
block77:;
// line 793
frost$core$Bit $tmp3475 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3476 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3475);
org$frostlang$frostc$MethodRef* $tmp3477 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3478 = &$tmp3477->value;
org$frostlang$frostc$MethodDecl* $tmp3479 = *$tmp3478;
frost$core$Weak** $tmp3480 = &$tmp3479->owner;
frost$core$Weak* $tmp3481 = *$tmp3480;
frost$core$Object* $tmp3482 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3481);
org$frostlang$frostc$Type** $tmp3483 = &((org$frostlang$frostc$ClassDecl*) $tmp3482)->type;
org$frostlang$frostc$Type* $tmp3484 = *$tmp3483;
org$frostlang$frostc$IR$Value* $tmp3485 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3476, $tmp3484);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
org$frostlang$frostc$IR$Value* $tmp3486 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
*(&local16) = $tmp3485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
// unreffing REF($795:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3482);
// unreffing REF($791:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
// unreffing REF($784:org.frostlang.frostc.IR.Value?)
goto block78;
block79:;
// line 1
// line 798
org$frostlang$frostc$MethodRef* $tmp3487 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3488 = &$tmp3487->value;
org$frostlang$frostc$MethodDecl* $tmp3489 = *$tmp3488;
frost$core$Weak** $tmp3490 = &$tmp3489->owner;
frost$core$Weak* $tmp3491 = *$tmp3490;
frost$core$Object* $tmp3492 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3491);
org$frostlang$frostc$Type** $tmp3493 = &((org$frostlang$frostc$ClassDecl*) $tmp3492)->type;
org$frostlang$frostc$Type* $tmp3494 = *$tmp3493;
org$frostlang$frostc$IR$Value* $tmp3495 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
org$frostlang$frostc$IR$Value* $tmp3496 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local16) = $tmp3495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
// unreffing REF($824:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3492);
// unreffing REF($820:frost.core.Weak.T)
goto block78;
block78:;
goto block75;
block75:;
// line 800
org$frostlang$frostc$IR$Value* $tmp3497 = *(&local16);
frost$core$Bit $tmp3498 = frost$core$Bit$init$builtin_bit($tmp3497 == NULL);
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block80; else goto block81;
block80:;
// line 801
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3500 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3501 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3502 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3503 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3504 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3504));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3505 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3507 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block81:;
// line 803
frost$collections$Array* $tmp3508 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp3509 = *(&local16);
frost$core$Bit $tmp3510 = frost$core$Bit$init$builtin_bit($tmp3509 != NULL);
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp3512 = (frost$core$Int64) {803};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3513, $tmp3512, &$s3514);
abort(); // unreachable
block82:;
frost$collections$Array$add$frost$collections$Array$T($tmp3508, ((frost$core$Object*) $tmp3509));
goto block71;
block71:;
goto block67;
block68:;
// line 807
org$frostlang$frostc$MethodRef* $tmp3515 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3516 = &$tmp3515->value;
org$frostlang$frostc$MethodDecl* $tmp3517 = *$tmp3516;
org$frostlang$frostc$Annotations** $tmp3518 = &$tmp3517->annotations;
org$frostlang$frostc$Annotations* $tmp3519 = *$tmp3518;
frost$core$Bit $tmp3520 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3519);
frost$core$Bit $tmp3521 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3520);
bool $tmp3522 = $tmp3521.value;
if ($tmp3522) goto block86; else goto block87;
block86:;
org$frostlang$frostc$MethodRef* $tmp3523 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3524 = &$tmp3523->value;
org$frostlang$frostc$MethodDecl* $tmp3525 = *$tmp3524;
frost$core$Bit $tmp3526 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp3525);
frost$core$Bit $tmp3527 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3526);
*(&local17) = $tmp3527;
goto block88;
block87:;
*(&local17) = $tmp3521;
goto block88;
block88:;
frost$core$Bit $tmp3528 = *(&local17);
bool $tmp3529 = $tmp3528.value;
if ($tmp3529) goto block84; else goto block89;
block84:;
// line 808
frost$core$Bit $tmp3530 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3531 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3530);
org$frostlang$frostc$MethodRef* $tmp3532 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3533 = &$tmp3532->value;
org$frostlang$frostc$MethodDecl* $tmp3534 = *$tmp3533;
frost$core$Weak** $tmp3535 = &$tmp3534->owner;
frost$core$Weak* $tmp3536 = *$tmp3535;
frost$core$Object* $tmp3537 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3536);
org$frostlang$frostc$Type** $tmp3538 = &((org$frostlang$frostc$ClassDecl*) $tmp3537)->type;
org$frostlang$frostc$Type* $tmp3539 = *$tmp3538;
org$frostlang$frostc$IR$Value* $tmp3540 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3531, $tmp3539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
org$frostlang$frostc$IR$Value* $tmp3541 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
*(&local16) = $tmp3540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
// unreffing REF($940:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3537);
// unreffing REF($936:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
// unreffing REF($929:org.frostlang.frostc.IR.Value?)
// line 810
org$frostlang$frostc$IR$Value* $tmp3542 = *(&local16);
frost$core$Bit $tmp3543 = frost$core$Bit$init$builtin_bit($tmp3542 == NULL);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block90; else goto block91;
block90:;
// line 811
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3545 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3546 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3547 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3548 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3549 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3550 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3551 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3551));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3552 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block91:;
// line 813
frost$collections$Array* $tmp3553 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp3554 = *(&local16);
frost$core$Bit $tmp3555 = frost$core$Bit$init$builtin_bit($tmp3554 != NULL);
bool $tmp3556 = $tmp3555.value;
if ($tmp3556) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp3557 = (frost$core$Int64) {813};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3558, $tmp3557, &$s3559);
abort(); // unreachable
block92:;
frost$collections$Array$add$frost$collections$Array$T($tmp3553, ((frost$core$Object*) $tmp3554));
goto block85;
block89:;
// line 1
// line 816
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3560 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block85;
block85:;
goto block67;
block67:;
// line 818
// line 819
org$frostlang$frostc$MethodRef* $tmp3561 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3562 = &$tmp3561->value;
org$frostlang$frostc$MethodDecl* $tmp3563 = *$tmp3562;
org$frostlang$frostc$Annotations** $tmp3564 = &$tmp3563->annotations;
org$frostlang$frostc$Annotations* $tmp3565 = *$tmp3564;
frost$core$Bit $tmp3566 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3565);
frost$core$Bit $tmp3567 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3566);
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block96; else goto block97;
block96:;
frost$core$Bit $tmp3569 = frost$core$Bit$init$builtin_bit(param2 != NULL);
*(&local20) = $tmp3569;
goto block98;
block97:;
*(&local20) = $tmp3567;
goto block98;
block98:;
frost$core$Bit $tmp3570 = *(&local20);
bool $tmp3571 = $tmp3570.value;
if ($tmp3571) goto block99; else goto block100;
block99:;
frost$core$Bit $tmp3572 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp3574 = (frost$core$Int64) {819};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3575, $tmp3574, &$s3576);
abort(); // unreachable
block102:;
$fn3578 $tmp3577 = ($fn3578) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3579 = $tmp3577(param2);
frost$core$Bit $tmp3580 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3579);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
// unreffing REF($1060:org.frostlang.frostc.Type)
*(&local19) = $tmp3580;
goto block101;
block100:;
*(&local19) = $tmp3570;
goto block101;
block101:;
frost$core$Bit $tmp3581 = *(&local19);
bool $tmp3582 = $tmp3581.value;
if ($tmp3582) goto block94; else goto block104;
block94:;
// line 820
frost$core$Int64 $tmp3583 = (frost$core$Int64) {0};
*(&local18) = $tmp3583;
goto block95;
block104:;
// line 1
// line 823
frost$core$Int64 $tmp3584 = (frost$core$Int64) {1};
*(&local18) = $tmp3584;
goto block95;
block95:;
// line 825
frost$core$Int64 $tmp3585 = (frost$core$Int64) {0};
ITable* $tmp3586 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3586->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3586 = $tmp3586->next;
}
$fn3588 $tmp3587 = $tmp3586->methods[0];
frost$core$Int64 $tmp3589 = $tmp3587(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp3590 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3591 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3585, $tmp3589, $tmp3590);
frost$core$Int64 $tmp3592 = $tmp3591.min;
*(&local21) = $tmp3592;
frost$core$Int64 $tmp3593 = $tmp3591.max;
frost$core$Bit $tmp3594 = $tmp3591.inclusive;
bool $tmp3595 = $tmp3594.value;
frost$core$Int64 $tmp3596 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3597 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3596);
if ($tmp3595) goto block108; else goto block109;
block108:;
int64_t $tmp3598 = $tmp3592.value;
int64_t $tmp3599 = $tmp3593.value;
bool $tmp3600 = $tmp3598 <= $tmp3599;
frost$core$Bit $tmp3601 = (frost$core$Bit) {$tmp3600};
bool $tmp3602 = $tmp3601.value;
if ($tmp3602) goto block105; else goto block106;
block109:;
int64_t $tmp3603 = $tmp3592.value;
int64_t $tmp3604 = $tmp3593.value;
bool $tmp3605 = $tmp3603 < $tmp3604;
frost$core$Bit $tmp3606 = (frost$core$Bit) {$tmp3605};
bool $tmp3607 = $tmp3606.value;
if ($tmp3607) goto block105; else goto block106;
block105:;
// line 826
frost$core$Int64 $tmp3608 = *(&local21);
ITable* $tmp3609 = param4->$class->itable;
while ($tmp3609->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3609 = $tmp3609->next;
}
$fn3611 $tmp3610 = $tmp3609->methods[0];
frost$core$Object* $tmp3612 = $tmp3610(param4, $tmp3608);
org$frostlang$frostc$Compiler$TypeContext* $tmp3613 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3614 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3615 = *(&local14);
frost$core$Int64 $tmp3616 = *(&local21);
org$frostlang$frostc$Type* $tmp3617 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3615, $tmp3616);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3613, $tmp3614, $tmp3617);
org$frostlang$frostc$IR$Value* $tmp3618 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp3612), $tmp3613);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
org$frostlang$frostc$IR$Value* $tmp3619 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
*(&local22) = $tmp3618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
// unreffing REF($1120:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
// unreffing REF($1118:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
// unreffing REF($1114:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp3612);
// unreffing REF($1112:frost.collections.ListView.T)
// line 828
org$frostlang$frostc$IR$Value* $tmp3620 = *(&local22);
frost$core$Bit $tmp3621 = frost$core$Bit$init$builtin_bit($tmp3620 == NULL);
bool $tmp3622 = $tmp3621.value;
if ($tmp3622) goto block110; else goto block111;
block110:;
// line 829
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3623 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
// unreffing a
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3624 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3625 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3626 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3627 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3628 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3629 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3630 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block111:;
// line 831
org$frostlang$frostc$IR$Value* $tmp3632 = *(&local22);
frost$core$Bit $tmp3633 = frost$core$Bit$init$builtin_bit($tmp3632 != NULL);
bool $tmp3634 = $tmp3633.value;
if ($tmp3634) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp3635 = (frost$core$Int64) {831};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3636, $tmp3635, &$s3637);
abort(); // unreachable
block114:;
$fn3639 $tmp3638 = ($fn3639) $tmp3632->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3640 = $tmp3638($tmp3632);
org$frostlang$frostc$Type* $tmp3641 = *(&local13);
frost$core$Int64 $tmp3642 = *(&local21);
frost$core$Int64 $tmp3643 = *(&local18);
int64_t $tmp3644 = $tmp3642.value;
int64_t $tmp3645 = $tmp3643.value;
int64_t $tmp3646 = $tmp3644 + $tmp3645;
frost$core$Int64 $tmp3647 = (frost$core$Int64) {$tmp3646};
org$frostlang$frostc$Type* $tmp3648 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3641, $tmp3647);
ITable* $tmp3649 = ((frost$core$Equatable*) $tmp3640)->$class->itable;
while ($tmp3649->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3649 = $tmp3649->next;
}
$fn3651 $tmp3650 = $tmp3649->methods[1];
frost$core$Bit $tmp3652 = $tmp3650(((frost$core$Equatable*) $tmp3640), ((frost$core$Equatable*) $tmp3648));
bool $tmp3653 = $tmp3652.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
// unreffing REF($1216:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
// unreffing REF($1206:org.frostlang.frostc.Type)
if ($tmp3653) goto block112; else goto block113;
block112:;
// line 832
org$frostlang$frostc$IR$Value* $tmp3654 = *(&local22);
org$frostlang$frostc$Type* $tmp3655 = *(&local13);
frost$core$Int64 $tmp3656 = *(&local21);
frost$core$Int64 $tmp3657 = *(&local18);
int64_t $tmp3658 = $tmp3656.value;
int64_t $tmp3659 = $tmp3657.value;
int64_t $tmp3660 = $tmp3658 + $tmp3659;
frost$core$Int64 $tmp3661 = (frost$core$Int64) {$tmp3660};
org$frostlang$frostc$Type* $tmp3662 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3655, $tmp3661);
org$frostlang$frostc$IR$Value* $tmp3663 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3654, $tmp3662);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
org$frostlang$frostc$IR$Value* $tmp3664 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
*(&local22) = $tmp3663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
// unreffing REF($1238:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
// unreffing REF($1237:org.frostlang.frostc.Type)
goto block113;
block113:;
// line 834
org$frostlang$frostc$IR$Value* $tmp3665 = *(&local22);
frost$core$Bit $tmp3666 = frost$core$Bit$init$builtin_bit($tmp3665 == NULL);
bool $tmp3667 = $tmp3666.value;
if ($tmp3667) goto block116; else goto block117;
block116:;
// line 835
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3668 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
// unreffing a
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3669 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3670 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3671 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3672 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3673 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3674 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block117:;
// line 837
frost$collections$Array* $tmp3677 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp3678 = *(&local22);
frost$core$Bit $tmp3679 = frost$core$Bit$init$builtin_bit($tmp3678 != NULL);
bool $tmp3680 = $tmp3679.value;
if ($tmp3680) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp3681 = (frost$core$Int64) {837};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3682, $tmp3681, &$s3683);
abort(); // unreachable
block118:;
frost$collections$Array$add$frost$collections$Array$T($tmp3677, ((frost$core$Object*) $tmp3678));
org$frostlang$frostc$IR$Value* $tmp3684 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
// unreffing a
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block107;
block107:;
frost$core$Int64 $tmp3685 = *(&local21);
int64_t $tmp3686 = $tmp3593.value;
int64_t $tmp3687 = $tmp3685.value;
int64_t $tmp3688 = $tmp3686 - $tmp3687;
frost$core$Int64 $tmp3689 = (frost$core$Int64) {$tmp3688};
frost$core$UInt64 $tmp3690 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3689);
if ($tmp3595) goto block121; else goto block122;
block121:;
uint64_t $tmp3691 = $tmp3690.value;
uint64_t $tmp3692 = $tmp3597.value;
bool $tmp3693 = $tmp3691 >= $tmp3692;
frost$core$Bit $tmp3694 = (frost$core$Bit) {$tmp3693};
bool $tmp3695 = $tmp3694.value;
if ($tmp3695) goto block120; else goto block106;
block122:;
uint64_t $tmp3696 = $tmp3690.value;
uint64_t $tmp3697 = $tmp3597.value;
bool $tmp3698 = $tmp3696 > $tmp3697;
frost$core$Bit $tmp3699 = (frost$core$Bit) {$tmp3698};
bool $tmp3700 = $tmp3699.value;
if ($tmp3700) goto block120; else goto block106;
block120:;
int64_t $tmp3701 = $tmp3685.value;
int64_t $tmp3702 = $tmp3596.value;
int64_t $tmp3703 = $tmp3701 + $tmp3702;
frost$core$Int64 $tmp3704 = (frost$core$Int64) {$tmp3703};
*(&local21) = $tmp3704;
goto block105;
block106:;
// line 839
// line 840
frost$core$Bit $tmp3705 = *(&local12);
frost$core$Bit $tmp3706 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3705);
bool $tmp3707 = $tmp3706.value;
if ($tmp3707) goto block125; else goto block126;
block125:;
org$frostlang$frostc$MethodRef* $tmp3708 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3709 = &$tmp3708->value;
org$frostlang$frostc$MethodDecl* $tmp3710 = *$tmp3709;
frost$core$Bit $tmp3711 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3710);
*(&local24) = $tmp3711;
goto block127;
block126:;
*(&local24) = $tmp3706;
goto block127;
block127:;
frost$core$Bit $tmp3712 = *(&local24);
bool $tmp3713 = $tmp3712.value;
if ($tmp3713) goto block123; else goto block128;
block123:;
// line 841
// line 842
org$frostlang$frostc$MethodRef* $tmp3714 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3715 = &$tmp3714->value;
org$frostlang$frostc$MethodDecl* $tmp3716 = *$tmp3715;
frost$core$Weak** $tmp3717 = &$tmp3716->owner;
frost$core$Weak* $tmp3718 = *$tmp3717;
frost$core$Object* $tmp3719 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3718);
org$frostlang$frostc$ClassDecl$Kind* $tmp3720 = &((org$frostlang$frostc$ClassDecl*) $tmp3719)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3721 = *$tmp3720;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3722;
$tmp3722 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3722->value = $tmp3721;
frost$core$Int64 $tmp3723 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3724 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3723);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3725;
$tmp3725 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3725->value = $tmp3724;
ITable* $tmp3726 = ((frost$core$Equatable*) $tmp3722)->$class->itable;
while ($tmp3726->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3726 = $tmp3726->next;
}
$fn3728 $tmp3727 = $tmp3726->methods[0];
frost$core$Bit $tmp3729 = $tmp3727(((frost$core$Equatable*) $tmp3722), ((frost$core$Equatable*) $tmp3725));
bool $tmp3730 = $tmp3729.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3725)));
// unreffing REF($1385:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3722)));
// unreffing REF($1381:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp3719);
// unreffing REF($1377:frost.core.Weak.T)
if ($tmp3730) goto block129; else goto block131;
block129:;
// line 843
org$frostlang$frostc$IR* $tmp3731 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp3732 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3733 = (frost$core$Int64) {12};
org$frostlang$frostc$IR$Value* $tmp3734 = *(&local16);
frost$core$Bit $tmp3735 = frost$core$Bit$init$builtin_bit($tmp3734 != NULL);
bool $tmp3736 = $tmp3735.value;
if ($tmp3736) goto block132; else goto block133;
block133:;
frost$core$Int64 $tmp3737 = (frost$core$Int64) {843};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3738, $tmp3737, &$s3739);
abort(); // unreachable
block132:;
org$frostlang$frostc$MethodRef* $tmp3740 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3741 = &$tmp3740->value;
org$frostlang$frostc$MethodDecl* $tmp3742 = *$tmp3741;
frost$core$Weak** $tmp3743 = &$tmp3742->owner;
frost$core$Weak* $tmp3744 = *$tmp3743;
frost$core$Object* $tmp3745 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3744);
org$frostlang$frostc$MethodRef* $tmp3746 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3747 = &$tmp3746->value;
org$frostlang$frostc$MethodDecl* $tmp3748 = *$tmp3747;
frost$core$Int64 $tmp3749 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3748);
org$frostlang$frostc$Type* $tmp3750 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp3751 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3750);
frost$core$Bit $tmp3752 = frost$core$Bit$init$builtin_bit($tmp3751 != NULL);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp3754 = (frost$core$Int64) {846};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3755, $tmp3754, &$s3756);
abort(); // unreachable
block134:;
frost$collections$ListView* $tmp3757 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp3751);
ITable* $tmp3758 = ((frost$collections$CollectionView*) $tmp3757)->$class->itable;
while ($tmp3758->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3758 = $tmp3758->next;
}
$fn3760 $tmp3759 = $tmp3758->methods[0];
frost$core$Int64 $tmp3761 = $tmp3759(((frost$collections$CollectionView*) $tmp3757));
int64_t $tmp3762 = $tmp3749.value;
int64_t $tmp3763 = $tmp3761.value;
int64_t $tmp3764 = $tmp3762 - $tmp3763;
frost$core$Int64 $tmp3765 = (frost$core$Int64) {$tmp3764};
org$frostlang$frostc$Type* $tmp3766 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type($tmp3732, $tmp3733, param1, $tmp3734, ((org$frostlang$frostc$ClassDecl*) $tmp3745), $tmp3765, $tmp3766);
$fn3768 $tmp3767 = ($fn3768) $tmp3731->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3769 = $tmp3767($tmp3731, $tmp3732);
*(&local25) = $tmp3769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
// unreffing REF($1434:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
// unreffing REF($1425:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
// unreffing REF($1424:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp3745);
// unreffing REF($1418:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
// unreffing REF($1401:org.frostlang.frostc.IR.Statement)
goto block130;
block131:;
// line 1
// line 850
org$frostlang$frostc$IR* $tmp3770 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp3771 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3772 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp3773 = *(&local16);
frost$core$Bit $tmp3774 = frost$core$Bit$init$builtin_bit($tmp3773 != NULL);
bool $tmp3775 = $tmp3774.value;
if ($tmp3775) goto block136; else goto block137;
block137:;
frost$core$Int64 $tmp3776 = (frost$core$Int64) {850};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3777, $tmp3776, &$s3778);
abort(); // unreachable
block136:;
org$frostlang$frostc$MethodRef* $tmp3779 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3780 = &$tmp3779->value;
org$frostlang$frostc$MethodDecl* $tmp3781 = *$tmp3780;
frost$core$Int64 $tmp3782 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3781);
org$frostlang$frostc$Type* $tmp3783 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type($tmp3771, $tmp3772, param1, $tmp3773, $tmp3782, $tmp3783);
$fn3785 $tmp3784 = ($fn3785) $tmp3770->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3786 = $tmp3784($tmp3770, $tmp3771);
*(&local25) = $tmp3786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
// unreffing REF($1466:org.frostlang.frostc.IR.Statement)
goto block130;
block130:;
// line 853
org$frostlang$frostc$IR* $tmp3787 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp3788 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3789 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp3790 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3791 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3792 = *(&local25);
org$frostlang$frostc$Type* $tmp3793 = *(&local13);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3790, $tmp3791, $tmp3792, $tmp3793);
frost$collections$Array* $tmp3794 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3795 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3794);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3788, $tmp3789, param1, $tmp3790, $tmp3795);
$fn3797 $tmp3796 = ($fn3797) $tmp3787->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3798 = $tmp3796($tmp3787, $tmp3788);
*(&local23) = $tmp3798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
// unreffing REF($1501:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
// unreffing REF($1494:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
// unreffing REF($1492:org.frostlang.frostc.IR.Statement)
goto block124;
block128:;
// line 1
// line 857
org$frostlang$frostc$IR* $tmp3799 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp3800 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3801 = (frost$core$Int64) {25};
org$frostlang$frostc$MethodRef* $tmp3802 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3803 = &$tmp3802->value;
org$frostlang$frostc$MethodDecl* $tmp3804 = *$tmp3803;
frost$collections$Array* $tmp3805 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3806 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3805);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3800, $tmp3801, param1, $tmp3804, $tmp3806);
$fn3808 $tmp3807 = ($fn3808) $tmp3799->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3809 = $tmp3807($tmp3799, $tmp3800);
*(&local23) = $tmp3809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
// unreffing REF($1527:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
// unreffing REF($1520:org.frostlang.frostc.IR.Statement)
goto block124;
block124:;
// line 860
org$frostlang$frostc$MethodRef* $tmp3810 = *(&local1);
org$frostlang$frostc$Type* $tmp3811 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp3810);
org$frostlang$frostc$Type* $tmp3812 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp3813 = ((frost$core$Equatable*) $tmp3811)->$class->itable;
while ($tmp3813->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3813 = $tmp3813->next;
}
$fn3815 $tmp3814 = $tmp3813->methods[1];
frost$core$Bit $tmp3816 = $tmp3814(((frost$core$Equatable*) $tmp3811), ((frost$core$Equatable*) $tmp3812));
bool $tmp3817 = $tmp3816.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
// unreffing REF($1545:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
// unreffing REF($1542:org.frostlang.frostc.Type)
if ($tmp3817) goto block138; else goto block139;
block138:;
// line 861
org$frostlang$frostc$IR$Value* $tmp3818 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3819 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3820 = *(&local23);
org$frostlang$frostc$Type* $tmp3821 = *(&local13);
org$frostlang$frostc$Type* $tmp3822 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3821);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3818, $tmp3819, $tmp3820, $tmp3822);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
org$frostlang$frostc$IR$Value* $tmp3823 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local26) = $tmp3818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
// unreffing REF($1562:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
// unreffing REF($1558:org.frostlang.frostc.IR.Value)
// line 862
org$frostlang$frostc$Type* $tmp3824 = *(&local13);
org$frostlang$frostc$Type* $tmp3825 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3824);
frost$core$Bit $tmp3826 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp3825);
bool $tmp3827 = $tmp3826.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
// unreffing REF($1580:org.frostlang.frostc.Type)
if ($tmp3827) goto block140; else goto block141;
block140:;
// line 863
frost$collections$Stack** $tmp3828 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3829 = *$tmp3828;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3830 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3831 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3832 = *(&local26);
frost$core$Bit $tmp3833 = frost$core$Bit$init$builtin_bit($tmp3832 != NULL);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block142; else goto block143;
block143:;
frost$core$Int64 $tmp3835 = (frost$core$Int64) {863};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3836, $tmp3835, &$s3837);
abort(); // unreachable
block142:;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3830, $tmp3831, $tmp3832);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3829, ((frost$core$Object*) $tmp3830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
// unreffing REF($1591:org.frostlang.frostc.Compiler.EnclosingContext)
goto block141;
block141:;
// line 865
org$frostlang$frostc$MethodRef* $tmp3838 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3839 = &$tmp3838->value;
org$frostlang$frostc$MethodDecl* $tmp3840 = *$tmp3839;
org$frostlang$frostc$MethodDecl$Kind* $tmp3841 = &$tmp3840->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3842 = *$tmp3841;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3843;
$tmp3843 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3843->value = $tmp3842;
frost$core$Int64 $tmp3844 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3845 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3844);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3846;
$tmp3846 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3846->value = $tmp3845;
ITable* $tmp3847 = ((frost$core$Equatable*) $tmp3843)->$class->itable;
while ($tmp3847->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3847 = $tmp3847->next;
}
$fn3849 $tmp3848 = $tmp3847->methods[1];
frost$core$Bit $tmp3850 = $tmp3848(((frost$core$Equatable*) $tmp3843), ((frost$core$Equatable*) $tmp3846));
bool $tmp3851 = $tmp3850.value;
if ($tmp3851) goto block146; else goto block147;
block146:;
org$frostlang$frostc$Type* $tmp3852 = *(&local14);
org$frostlang$frostc$Type* $tmp3853 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3852);
org$frostlang$frostc$Type* $tmp3854 = *(&local13);
org$frostlang$frostc$Type* $tmp3855 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3854);
ITable* $tmp3856 = ((frost$core$Equatable*) $tmp3853)->$class->itable;
while ($tmp3856->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3856 = $tmp3856->next;
}
$fn3858 $tmp3857 = $tmp3856->methods[1];
frost$core$Bit $tmp3859 = $tmp3857(((frost$core$Equatable*) $tmp3853), ((frost$core$Equatable*) $tmp3855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3855));
// unreffing REF($1629:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
// unreffing REF($1625:org.frostlang.frostc.Type)
*(&local27) = $tmp3859;
goto block148;
block147:;
*(&local27) = $tmp3850;
goto block148;
block148:;
frost$core$Bit $tmp3860 = *(&local27);
bool $tmp3861 = $tmp3860.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3846)));
// unreffing REF($1619:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3843)));
// unreffing REF($1615:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3861) goto block144; else goto block145;
block144:;
// line 867
org$frostlang$frostc$IR$Value* $tmp3862 = *(&local26);
org$frostlang$frostc$Type* $tmp3863 = *(&local14);
org$frostlang$frostc$Type* $tmp3864 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3863);
org$frostlang$frostc$IR$Value* $tmp3865 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3862, $tmp3864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
org$frostlang$frostc$IR$Value* $tmp3866 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
*(&local26) = $tmp3865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
// unreffing REF($1656:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
// unreffing REF($1655:org.frostlang.frostc.Type)
// line 868
org$frostlang$frostc$IR$Value* $tmp3867 = *(&local26);
frost$core$Bit $tmp3868 = frost$core$Bit$init$builtin_bit($tmp3867 == NULL);
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block149; else goto block150;
block149:;
// line 869
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3870 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3870));
// unreffing resultCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3871 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3872 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3873 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3874 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3875 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3876 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block150:;
goto block145;
block145:;
// line 872
org$frostlang$frostc$IR$Value* $tmp3879 = *(&local26);
org$frostlang$frostc$IR$Value* $tmp3880 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3879, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
org$frostlang$frostc$IR$Value* $tmp3881 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
*(&local26) = $tmp3880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
// unreffing REF($1727:org.frostlang.frostc.IR.Value?)
// line 873
org$frostlang$frostc$IR$Value* $tmp3882 = *(&local26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3882));
org$frostlang$frostc$IR$Value* $tmp3883 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3883));
// unreffing resultCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3884 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3885 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3885));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3886 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3887 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3888 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3889 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp3882;
block139:;
// line 875
org$frostlang$frostc$Compiler$TypeContext* $tmp3892 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3893 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3892, $tmp3893);
ITable* $tmp3894 = ((frost$core$Equatable*) param5)->$class->itable;
while ($tmp3894->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3894 = $tmp3894->next;
}
$fn3896 $tmp3895 = $tmp3894->methods[1];
frost$core$Bit $tmp3897 = $tmp3895(((frost$core$Equatable*) param5), ((frost$core$Equatable*) $tmp3892));
bool $tmp3898 = $tmp3897.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
// unreffing REF($1790:org.frostlang.frostc.Compiler.TypeContext)
if ($tmp3898) goto block151; else goto block152;
block151:;
// line 876
org$frostlang$frostc$MethodRef* $tmp3899 = *(&local1);
org$frostlang$frostc$MethodDecl** $tmp3900 = &$tmp3899->value;
org$frostlang$frostc$MethodDecl* $tmp3901 = *$tmp3900;
frost$core$String* $tmp3902 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3901);
frost$core$String* $tmp3903 = frost$core$String$convert$R$frost$core$String($tmp3902);
frost$core$String* $tmp3904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3903, &$s3905);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3904);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
// unreffing REF($1807:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
// unreffing REF($1806:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
// unreffing REF($1805:frost.core.String)
goto block152;
block152:;
// line 878
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3906 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
// unreffing finalTarget
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3907 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
// unreffing finalArgs
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3908 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
// unreffing effectiveType
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3909 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
// unreffing actualType
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3910 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
// unreffing inferred
*(&local11) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3911 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
// unreffing intrinsic
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 884
$fn3915 $tmp3914 = ($fn3915) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3916 = $tmp3914(param2);
org$frostlang$frostc$ClassDecl* $tmp3917 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3916);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3917));
org$frostlang$frostc$ClassDecl* $tmp3918 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
*(&local0) = $tmp3917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3917));
// unreffing REF($3:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3916));
// unreffing REF($2:org.frostlang.frostc.Type)
// line 885
org$frostlang$frostc$ClassDecl* $tmp3919 = *(&local0);
frost$core$Bit $tmp3920 = frost$core$Bit$init$builtin_bit($tmp3919 == NULL);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block1; else goto block2;
block1:;
// line 886
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 888
org$frostlang$frostc$ClassDecl* $tmp3923 = *(&local0);
frost$core$Bit $tmp3924 = frost$core$Bit$init$builtin_bit($tmp3923 != NULL);
bool $tmp3925 = $tmp3924.value;
if ($tmp3925) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3926 = (frost$core$Int64) {888};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3927, $tmp3926, &$s3928);
abort(); // unreachable
block3:;
org$frostlang$frostc$SymbolTable* $tmp3929 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp3923);
org$frostlang$frostc$Symbol* $tmp3930 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3929, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
org$frostlang$frostc$Symbol* $tmp3931 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
*(&local1) = $tmp3930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
// unreffing REF($43:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
// unreffing REF($42:org.frostlang.frostc.SymbolTable)
// line 889
org$frostlang$frostc$Symbol* $tmp3932 = *(&local1);
frost$core$Bit $tmp3933 = frost$core$Bit$init$builtin_bit($tmp3932 == NULL);
bool $tmp3934 = $tmp3933.value;
if ($tmp3934) goto block5; else goto block6;
block5:;
// line 890
org$frostlang$frostc$ClassDecl* $tmp3935 = *(&local0);
frost$core$Bit $tmp3936 = frost$core$Bit$init$builtin_bit($tmp3935 != NULL);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp3938 = (frost$core$Int64) {890};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3939, $tmp3938, &$s3940);
abort(); // unreachable
block7:;
frost$core$String** $tmp3941 = &$tmp3935->name;
frost$core$String* $tmp3942 = *$tmp3941;
frost$core$String* $tmp3943 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3944, $tmp3942);
frost$core$String* $tmp3945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3943, &$s3946);
frost$core$String* $tmp3947 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3945, param3);
frost$core$String* $tmp3948 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3947, &$s3949);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3948);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
// unreffing REF($78:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3945));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
// unreffing REF($75:frost.core.String)
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp3950 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3950));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3951 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3951));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 893
org$frostlang$frostc$Symbol* $tmp3952 = *(&local1);
frost$core$Bit $tmp3953 = frost$core$Bit$init$builtin_bit($tmp3952 != NULL);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp3955 = (frost$core$Int64) {893};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3956, $tmp3955, &$s3957);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value* $tmp3958 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3952);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
org$frostlang$frostc$IR$Value* $tmp3959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3959));
*(&local2) = $tmp3958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
// unreffing REF($117:org.frostlang.frostc.IR.Value?)
// line 894
org$frostlang$frostc$IR$Value* $tmp3960 = *(&local2);
frost$core$Bit $tmp3961 = frost$core$Bit$init$builtin_bit($tmp3960 != NULL);
bool $tmp3962 = $tmp3961.value;
if ($tmp3962) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp3963 = (frost$core$Int64) {894};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3964, $tmp3963, &$s3965);
abort(); // unreachable
block11:;
org$frostlang$frostc$IR$Value* $tmp3966 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3960, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
// unreffing REF($138:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp3967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
// unreffing ref
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp3968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3966;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$Int64 local5;
org$frostlang$frostc$Pair* local6 = NULL;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$Symbol* local10 = NULL;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$ClassDecl* local13 = NULL;
org$frostlang$frostc$Type* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
// line 900
frost$core$Int64* $tmp3970 = &param2->$rawValue;
frost$core$Int64 $tmp3971 = *$tmp3970;
frost$core$Int64 $tmp3972 = (frost$core$Int64) {21};
frost$core$Bit $tmp3973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3971, $tmp3972);
bool $tmp3974 = $tmp3973.value;
if ($tmp3974) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp3975 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp3976 = *$tmp3975;
frost$core$String** $tmp3977 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp3978 = *$tmp3977;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
frost$core$String* $tmp3979 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
*(&local0) = $tmp3978;
org$frostlang$frostc$FixedArray** $tmp3980 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3981 = *$tmp3980;
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
org$frostlang$frostc$FixedArray* $tmp3982 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
*(&local1) = $tmp3981;
// line 902
org$frostlang$frostc$Type* $tmp3983 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
org$frostlang$frostc$Type* $tmp3984 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
*(&local2) = $tmp3983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
// unreffing REF($28:org.frostlang.frostc.Type?)
// line 903
org$frostlang$frostc$Type* $tmp3985 = *(&local2);
frost$core$Bit $tmp3986 = frost$core$Bit$init$builtin_bit($tmp3985 != NULL);
bool $tmp3987 = $tmp3986.value;
if ($tmp3987) goto block3; else goto block4;
block3:;
// line 904
org$frostlang$frostc$Type* $tmp3988 = *(&local2);
frost$core$Bit $tmp3989 = frost$core$Bit$init$builtin_bit($tmp3988 != NULL);
bool $tmp3990 = $tmp3989.value;
if ($tmp3990) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3991 = (frost$core$Int64) {904};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3992, $tmp3991, &$s3993);
abort(); // unreachable
block5:;
frost$core$Bit $tmp3994 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3988);
frost$core$Bit $tmp3995 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3994);
bool $tmp3996 = $tmp3995.value;
if ($tmp3996) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp3997 = (frost$core$Int64) {904};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3998, $tmp3997);
abort(); // unreachable
block7:;
// line 905
org$frostlang$frostc$IR$Value* $tmp3999 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4000 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp4001 = *(&local2);
frost$core$Bit $tmp4002 = frost$core$Bit$init$builtin_bit($tmp4001 != NULL);
bool $tmp4003 = $tmp4002.value;
if ($tmp4003) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp4004 = (frost$core$Int64) {905};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4005, $tmp4004, &$s4006);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3999, $tmp4000, $tmp4001);
org$frostlang$frostc$IR$Value* $tmp4007 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3999, ((frost$collections$ListView*) param3), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
// unreffing REF($76:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3999));
// unreffing REF($63:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp4008 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4010 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4010));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp4007;
block4:;
// line 907
frost$core$Bit $tmp4011 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp4012 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, param2, $tmp4011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
org$frostlang$frostc$Type* $tmp4013 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local2) = $tmp4012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
// unreffing REF($103:org.frostlang.frostc.Type?)
// line 908
org$frostlang$frostc$Type* $tmp4014 = *(&local2);
frost$core$Bit $tmp4015 = frost$core$Bit$init$builtin_bit($tmp4014 != NULL);
bool $tmp4016 = $tmp4015.value;
if ($tmp4016) goto block11; else goto block12;
block11:;
// line 910
org$frostlang$frostc$Scanner** $tmp4017 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp4018 = *$tmp4017;
org$frostlang$frostc$Type* $tmp4019 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp4018, param2);
org$frostlang$frostc$Type* $tmp4020 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp4019);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
// unreffing REF($123:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
// unreffing REF($122:org.frostlang.frostc.Type)
// line 911
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp4021 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4022 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4023 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// line 914
frost$core$String* $tmp4024 = *(&local0);
frost$collections$Array* $tmp4025 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp4024, &$s4026);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
frost$collections$Array* $tmp4027 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
*(&local3) = $tmp4025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
// unreffing REF($151:frost.collections.Array<frost.core.String>)
// line 915
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 916
frost$collections$Array* $tmp4028 = *(&local3);
ITable* $tmp4029 = ((frost$collections$CollectionView*) $tmp4028)->$class->itable;
while ($tmp4029->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4029 = $tmp4029->next;
}
$fn4031 $tmp4030 = $tmp4029->methods[0];
frost$core$Int64 $tmp4032 = $tmp4030(((frost$collections$CollectionView*) $tmp4028));
frost$core$Int64 $tmp4033 = (frost$core$Int64) {1};
frost$core$Bit $tmp4034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4032, $tmp4033);
bool $tmp4035 = $tmp4034.value;
if ($tmp4035) goto block13; else goto block15;
block13:;
// line 917
org$frostlang$frostc$ASTNode* $tmp4036 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4037 = (frost$core$Int64) {23};
frost$core$String* $tmp4038 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4039 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4036, $tmp4037, param1, $tmp4038, $tmp4039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
org$frostlang$frostc$ASTNode* $tmp4040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local4) = $tmp4036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
// unreffing REF($174:org.frostlang.frostc.ASTNode)
goto block14;
block15:;
// line 1
// line 920
org$frostlang$frostc$ASTNode* $tmp4041 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4042 = (frost$core$Int64) {22};
frost$collections$Array* $tmp4043 = *(&local3);
frost$core$Int64 $tmp4044 = (frost$core$Int64) {0};
frost$core$Object* $tmp4045 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4043, $tmp4044);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4041, $tmp4042, param1, ((frost$core$String*) $tmp4045));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
org$frostlang$frostc$ASTNode* $tmp4046 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local4) = $tmp4041;
frost$core$Frost$unref$frost$core$Object$Q($tmp4045);
// unreffing REF($196:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
// unreffing REF($191:org.frostlang.frostc.ASTNode)
// line 921
frost$core$Int64 $tmp4047 = (frost$core$Int64) {1};
frost$collections$Array* $tmp4048 = *(&local3);
ITable* $tmp4049 = ((frost$collections$CollectionView*) $tmp4048)->$class->itable;
while ($tmp4049->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4049 = $tmp4049->next;
}
$fn4051 $tmp4050 = $tmp4049->methods[0];
frost$core$Int64 $tmp4052 = $tmp4050(((frost$collections$CollectionView*) $tmp4048));
frost$core$Int64 $tmp4053 = (frost$core$Int64) {1};
int64_t $tmp4054 = $tmp4052.value;
int64_t $tmp4055 = $tmp4053.value;
int64_t $tmp4056 = $tmp4054 - $tmp4055;
frost$core$Int64 $tmp4057 = (frost$core$Int64) {$tmp4056};
frost$core$Bit $tmp4058 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp4059 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp4047, $tmp4057, $tmp4058);
frost$core$Int64 $tmp4060 = $tmp4059.min;
*(&local5) = $tmp4060;
frost$core$Int64 $tmp4061 = $tmp4059.max;
frost$core$Bit $tmp4062 = $tmp4059.inclusive;
bool $tmp4063 = $tmp4062.value;
frost$core$Int64 $tmp4064 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp4065 = frost$core$Int64$convert$R$frost$core$UInt64($tmp4064);
if ($tmp4063) goto block19; else goto block20;
block19:;
int64_t $tmp4066 = $tmp4060.value;
int64_t $tmp4067 = $tmp4061.value;
bool $tmp4068 = $tmp4066 <= $tmp4067;
frost$core$Bit $tmp4069 = (frost$core$Bit) {$tmp4068};
bool $tmp4070 = $tmp4069.value;
if ($tmp4070) goto block16; else goto block17;
block20:;
int64_t $tmp4071 = $tmp4060.value;
int64_t $tmp4072 = $tmp4061.value;
bool $tmp4073 = $tmp4071 < $tmp4072;
frost$core$Bit $tmp4074 = (frost$core$Bit) {$tmp4073};
bool $tmp4075 = $tmp4074.value;
if ($tmp4075) goto block16; else goto block17;
block16:;
// line 922
org$frostlang$frostc$ASTNode* $tmp4076 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4077 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp4078 = *(&local4);
frost$collections$Array* $tmp4079 = *(&local3);
frost$core$Int64 $tmp4080 = *(&local5);
frost$core$Object* $tmp4081 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4079, $tmp4080);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4076, $tmp4077, param1, $tmp4078, ((frost$core$String*) $tmp4081));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
org$frostlang$frostc$ASTNode* $tmp4082 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
*(&local4) = $tmp4076;
frost$core$Frost$unref$frost$core$Object$Q($tmp4081);
// unreffing REF($251:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
// unreffing REF($245:org.frostlang.frostc.ASTNode)
goto block18;
block18:;
frost$core$Int64 $tmp4083 = *(&local5);
int64_t $tmp4084 = $tmp4061.value;
int64_t $tmp4085 = $tmp4083.value;
int64_t $tmp4086 = $tmp4084 - $tmp4085;
frost$core$Int64 $tmp4087 = (frost$core$Int64) {$tmp4086};
frost$core$UInt64 $tmp4088 = frost$core$Int64$convert$R$frost$core$UInt64($tmp4087);
if ($tmp4063) goto block22; else goto block23;
block22:;
uint64_t $tmp4089 = $tmp4088.value;
uint64_t $tmp4090 = $tmp4065.value;
bool $tmp4091 = $tmp4089 >= $tmp4090;
frost$core$Bit $tmp4092 = (frost$core$Bit) {$tmp4091};
bool $tmp4093 = $tmp4092.value;
if ($tmp4093) goto block21; else goto block17;
block23:;
uint64_t $tmp4094 = $tmp4088.value;
uint64_t $tmp4095 = $tmp4065.value;
bool $tmp4096 = $tmp4094 > $tmp4095;
frost$core$Bit $tmp4097 = (frost$core$Bit) {$tmp4096};
bool $tmp4098 = $tmp4097.value;
if ($tmp4098) goto block21; else goto block17;
block21:;
int64_t $tmp4099 = $tmp4083.value;
int64_t $tmp4100 = $tmp4064.value;
int64_t $tmp4101 = $tmp4099 + $tmp4100;
frost$core$Int64 $tmp4102 = (frost$core$Int64) {$tmp4101};
*(&local5) = $tmp4102;
goto block16;
block17:;
// line 924
org$frostlang$frostc$ASTNode* $tmp4103 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4104 = (frost$core$Int64) {17};
org$frostlang$frostc$ASTNode* $tmp4105 = *(&local4);
frost$collections$Array* $tmp4106 = *(&local3);
frost$collections$Array* $tmp4107 = *(&local3);
ITable* $tmp4108 = ((frost$collections$CollectionView*) $tmp4107)->$class->itable;
while ($tmp4108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4108 = $tmp4108->next;
}
$fn4110 $tmp4109 = $tmp4108->methods[0];
frost$core$Int64 $tmp4111 = $tmp4109(((frost$collections$CollectionView*) $tmp4107));
frost$core$Int64 $tmp4112 = (frost$core$Int64) {1};
int64_t $tmp4113 = $tmp4111.value;
int64_t $tmp4114 = $tmp4112.value;
int64_t $tmp4115 = $tmp4113 - $tmp4114;
frost$core$Int64 $tmp4116 = (frost$core$Int64) {$tmp4115};
frost$core$Object* $tmp4117 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4106, $tmp4116);
org$frostlang$frostc$FixedArray* $tmp4118 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4103, $tmp4104, param1, $tmp4105, ((frost$core$String*) $tmp4117), $tmp4118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
org$frostlang$frostc$ASTNode* $tmp4119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
*(&local4) = $tmp4103;
frost$core$Frost$unref$frost$core$Object$Q($tmp4117);
// unreffing REF($307:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
// unreffing REF($293:org.frostlang.frostc.ASTNode)
goto block14;
block14:;
// line 927
org$frostlang$frostc$ASTNode* $tmp4120 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp4121 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4120, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
// unreffing REF($326:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp4122 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4122));
// unreffing target
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
// unreffing components
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4124 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp4121;
block1:;
// line 930
org$frostlang$frostc$Pair* $tmp4127 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
org$frostlang$frostc$Pair* $tmp4128 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
*(&local6) = $tmp4127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
// unreffing REF($359:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, org.frostlang.frostc.ChoiceCase>?)
// line 931
org$frostlang$frostc$Pair* $tmp4129 = *(&local6);
frost$core$Bit $tmp4130 = frost$core$Bit$init$builtin_bit($tmp4129 != NULL);
bool $tmp4131 = $tmp4130.value;
if ($tmp4131) goto block24; else goto block25;
block24:;
// line 932
org$frostlang$frostc$Pair* $tmp4132 = *(&local6);
frost$core$Bit $tmp4133 = frost$core$Bit$init$builtin_bit($tmp4132 != NULL);
bool $tmp4134 = $tmp4133.value;
if ($tmp4134) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp4135 = (frost$core$Int64) {932};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4136, $tmp4135, &$s4137);
abort(); // unreachable
block26:;
frost$core$Object** $tmp4138 = &$tmp4132->first;
frost$core$Object* $tmp4139 = *$tmp4138;
org$frostlang$frostc$Pair* $tmp4140 = *(&local6);
frost$core$Bit $tmp4141 = frost$core$Bit$init$builtin_bit($tmp4140 != NULL);
bool $tmp4142 = $tmp4141.value;
if ($tmp4142) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp4143 = (frost$core$Int64) {932};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4144, $tmp4143, &$s4145);
abort(); // unreachable
block28:;
frost$core$Object** $tmp4146 = &$tmp4140->second;
frost$core$Object* $tmp4147 = *$tmp4146;
org$frostlang$frostc$IR$Value* $tmp4148 = org$frostlang$frostc$Compiler$compileChoiceCaseReference$org$frostlang$frostc$Position$org$frostlang$frostc$Type$org$frostlang$frostc$ChoiceCase$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$Type*) $tmp4139), ((org$frostlang$frostc$ChoiceCase*) $tmp4147), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4148));
// unreffing REF($401:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Pair* $tmp4149 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4149));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4148;
block25:;
// line 934
frost$core$Int64* $tmp4150 = &param2->$rawValue;
frost$core$Int64 $tmp4151 = *$tmp4150;
frost$core$Int64 $tmp4152 = (frost$core$Int64) {16};
frost$core$Bit $tmp4153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4151, $tmp4152);
bool $tmp4154 = $tmp4153.value;
if ($tmp4154) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Position* $tmp4155 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp4156 = *$tmp4155;
*(&local7) = $tmp4156;
org$frostlang$frostc$ASTNode** $tmp4157 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp4158 = *$tmp4157;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4158));
org$frostlang$frostc$ASTNode* $tmp4159 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
*(&local8) = $tmp4158;
frost$core$String** $tmp4160 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp4161 = *$tmp4160;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
frost$core$String* $tmp4162 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
*(&local9) = $tmp4161;
// line 936
org$frostlang$frostc$ASTNode* $tmp4163 = *(&local8);
frost$core$Int64* $tmp4164 = &$tmp4163->$rawValue;
frost$core$Int64 $tmp4165 = *$tmp4164;
frost$core$Int64 $tmp4166 = (frost$core$Int64) {42};
frost$core$Bit $tmp4167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4165, $tmp4166);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block33; else goto block32;
block33:;
// line 938
org$frostlang$frostc$SymbolTable** $tmp4169 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4170 = *$tmp4169;
org$frostlang$frostc$Symbol* $tmp4171 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4170, &$s4172);
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4171));
org$frostlang$frostc$Symbol* $tmp4173 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4173));
*(&local10) = $tmp4171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4171));
// unreffing REF($452:org.frostlang.frostc.Symbol?)
// line 939
org$frostlang$frostc$Symbol* $tmp4174 = *(&local10);
frost$core$Bit $tmp4175 = frost$core$Bit$init$builtin_bit($tmp4174 == NULL);
bool $tmp4176 = $tmp4175.value;
if ($tmp4176) goto block34; else goto block35;
block34:;
// line 940
org$frostlang$frostc$SymbolTable** $tmp4177 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4178 = *$tmp4177;
org$frostlang$frostc$Symbol* $tmp4179 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4178, &$s4180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4179));
org$frostlang$frostc$Symbol* $tmp4181 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
*(&local10) = $tmp4179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4179));
// unreffing REF($472:org.frostlang.frostc.Symbol?)
goto block35;
block35:;
// line 942
org$frostlang$frostc$Symbol* $tmp4182 = *(&local10);
frost$core$Bit $tmp4183 = frost$core$Bit$init$builtin_bit($tmp4182 == NULL);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block36; else goto block37;
block36:;
// line 943
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp4185 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4185));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4186 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4187 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4187));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4188 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4188));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 945
frost$collections$Array* $tmp4189 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4189);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$collections$Array* $tmp4190 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
*(&local11) = $tmp4189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
// unreffing REF($514:frost.collections.Array<org.frostlang.frostc.Type>)
// line 946
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 947
org$frostlang$frostc$Symbol* $tmp4191 = *(&local10);
frost$core$Bit $tmp4192 = frost$core$Bit$init$builtin_bit($tmp4191 != NULL);
bool $tmp4193 = $tmp4192.value;
if ($tmp4193) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp4194 = (frost$core$Int64) {947};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4195, $tmp4194, &$s4196);
abort(); // unreachable
block38:;
org$frostlang$frostc$Symbol$Kind* $tmp4197 = &$tmp4191->kind;
org$frostlang$frostc$Symbol$Kind $tmp4198 = *$tmp4197;
frost$core$Int64 $tmp4199 = $tmp4198.$rawValue;
frost$core$Int64 $tmp4200 = (frost$core$Int64) {9};
frost$core$Bit $tmp4201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4199, $tmp4200);
bool $tmp4202 = $tmp4201.value;
if ($tmp4202) goto block41; else goto block42;
block41:;
// line 949
org$frostlang$frostc$Symbol* $tmp4203 = *(&local10);
org$frostlang$frostc$Type** $tmp4204 = &((org$frostlang$frostc$Variable*) $tmp4203)->type;
org$frostlang$frostc$Type* $tmp4205 = *$tmp4204;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
org$frostlang$frostc$Type* $tmp4206 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
*(&local12) = $tmp4205;
goto block40;
block42:;
frost$core$Int64 $tmp4207 = (frost$core$Int64) {2};
frost$core$Bit $tmp4208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4199, $tmp4207);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block43; else goto block44;
block43:;
// line 952
org$frostlang$frostc$Symbol* $tmp4210 = *(&local10);
org$frostlang$frostc$Type** $tmp4211 = &((org$frostlang$frostc$FieldDecl*) $tmp4210)->type;
org$frostlang$frostc$Type* $tmp4212 = *$tmp4211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4212));
org$frostlang$frostc$Type* $tmp4213 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4213));
*(&local12) = $tmp4212;
goto block40;
block44:;
// line 955
frost$core$Bit $tmp4214 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp4216 = (frost$core$Int64) {955};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4217, $tmp4216);
abort(); // unreachable
block45:;
goto block40;
block40:;
// line 958
org$frostlang$frostc$Type* $tmp4218 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4219 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4218);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
org$frostlang$frostc$ClassDecl* $tmp4220 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local13) = $tmp4219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
// unreffing REF($584:org.frostlang.frostc.ClassDecl?)
// line 959
org$frostlang$frostc$ClassDecl* $tmp4221 = *(&local13);
frost$core$Bit $tmp4222 = frost$core$Bit$init$builtin_bit($tmp4221 == NULL);
bool $tmp4223 = $tmp4222.value;
if ($tmp4223) goto block47; else goto block48;
block47:;
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4224 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4225 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4225));
// unreffing selfType
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4226 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
// unreffing result
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4227 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4228 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4229 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4230 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block48:;
// line 962
org$frostlang$frostc$Type* $tmp4231 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4232 = *(&local13);
frost$core$Bit $tmp4233 = frost$core$Bit$init$builtin_bit($tmp4232 != NULL);
bool $tmp4234 = $tmp4233.value;
if ($tmp4234) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp4235 = (frost$core$Int64) {962};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4236, $tmp4235, &$s4237);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type** $tmp4238 = &$tmp4232->rawSuper;
org$frostlang$frostc$Type* $tmp4239 = *$tmp4238;
frost$core$Bit $tmp4240 = frost$core$Bit$init$builtin_bit($tmp4239 != NULL);
bool $tmp4241 = $tmp4240.value;
if ($tmp4241) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp4242 = (frost$core$Int64) {962};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4243, $tmp4242, &$s4244);
abort(); // unreachable
block51:;
org$frostlang$frostc$Type* $tmp4245 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp4231, $tmp4239);
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
org$frostlang$frostc$Type* $tmp4246 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4246));
*(&local14) = $tmp4245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
// unreffing REF($661:org.frostlang.frostc.Type)
// line 963
org$frostlang$frostc$Position $tmp4247 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp4248 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4249 = (frost$core$Int64) {13};
org$frostlang$frostc$Type* $tmp4250 = *(&local14);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4248, $tmp4249, $tmp4250);
frost$core$String* $tmp4251 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp4252 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4247, $tmp4248, $tmp4251, ((frost$collections$ListView*) param3), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
// unreffing REF($680:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
// unreffing REF($674:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp4253 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4253));
// unreffing supertype
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4254 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4254));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4255 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
// unreffing selfType
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4256 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
// unreffing result
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4257 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4257));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4258 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4258));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4259 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4260 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4252;
block32:;
frost$core$String* $tmp4261 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4262 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block30:;
// line 969
org$frostlang$frostc$Compiler$TypeContext* $tmp4263 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4264 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4263, $tmp4264);
org$frostlang$frostc$IR$Value* $tmp4265 = org$frostlang$frostc$Compiler$compileMethodExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp4263);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
org$frostlang$frostc$IR$Value* $tmp4266 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
*(&local15) = $tmp4265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
// unreffing REF($745:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
// unreffing REF($742:org.frostlang.frostc.Compiler.TypeContext)
// line 970
org$frostlang$frostc$IR$Value* $tmp4267 = *(&local15);
frost$core$Bit $tmp4268 = frost$core$Bit$init$builtin_bit($tmp4267 == NULL);
bool $tmp4269 = $tmp4268.value;
if ($tmp4269) goto block53; else goto block54;
block53:;
// line 971
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4270 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
// unreffing compiledM
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block54:;
// line 973
org$frostlang$frostc$IR$Value* $tmp4272 = *(&local15);
frost$core$Bit $tmp4273 = frost$core$Bit$init$builtin_bit($tmp4272 != NULL);
bool $tmp4274 = $tmp4273.value;
if ($tmp4274) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp4275 = (frost$core$Int64) {973};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4276, $tmp4275, &$s4277);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Value* $tmp4278 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4272, ((frost$collections$ListView*) param3), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
// unreffing REF($790:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp4279 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
// unreffing compiledM
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4280 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4278;

}
void org$frostlang$frostc$expression$Call$init(org$frostlang$frostc$expression$Call* param0) {

return;

}
void org$frostlang$frostc$expression$Call$cleanup(org$frostlang$frostc$expression$Call* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

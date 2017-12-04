#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$collections$Set panda$collections$Set;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;

typedef struct org$pandalanguage$pandac$HCodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
    panda$io$MemoryOutputStream* typeImportStream;
    panda$io$MemoryOutputStream* typesBuffer;
    panda$io$IndentedOutputStream* types;
    panda$io$MemoryOutputStream* bodyImportStream;
    panda$io$MemoryOutputStream* bodyBuffer;
    panda$io$IndentedOutputStream* body;
    panda$collections$Set* typeImports;
    panda$collections$Set* bodyImports;
    panda$collections$Set* imports;
    panda$io$MemoryOutputStream* importStream;
    panda$io$IndentedOutputStream* out;
    org$pandalanguage$pandac$LLVMCodeGenerator* llvmCodeGen;
} org$pandalanguage$pandac$HCodeGenerator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[14]; } org$pandalanguage$pandac$HCodeGenerator$class_type;
extern org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$HCodeGenerator org$pandalanguage$pandac$HCodeGenerator;
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Int64.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "panda/core/Bit.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$OutputStream(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$OutputStream* p_out);
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s);
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getIncludePath$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t);
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m);
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body);
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self);

#endif

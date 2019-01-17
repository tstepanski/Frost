#pragma once
#include "frost_c.h"
#include "ASTNode_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "org/frostlang/frostc/parser/Token/Kind_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/Variable/Kind_types.h"

org$frostlang$frostc$Position org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* self);
frost$core$String* org$frostlang$frostc$ASTNode$convert$R$frost$core$String(org$frostlang$frostc$ASTNode* self);
void org$frostlang$frostc$ASTNode$cleanup(org$frostlang$frostc$ASTNode* self);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, frost$core$String* p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$FixedArray* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$ASTNode* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$parser$Token$Kind p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$Bit p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, frost$core$String* p_f2, org$frostlang$frostc$FixedArray* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$ChoiceCase* p_f2, frost$core$Int64 p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$ClassDecl$Kind p_f3, frost$core$String* p_f4, org$frostlang$frostc$FixedArray* p_f5, org$frostlang$frostc$FixedArray* p_f6, org$frostlang$frostc$FixedArray* p_f7);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, frost$core$String* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, frost$core$String* p_f2, org$frostlang$frostc$FixedArray* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$FixedArray* p_f0);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$ASTNode* p_f2, org$frostlang$frostc$ASTNode* p_f3, org$frostlang$frostc$FixedArray* p_f4);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$UInt64 p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$FixedArray* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$MethodDecl$Kind p_f3, frost$core$String* p_f4, org$frostlang$frostc$FixedArray* p_f5, org$frostlang$frostc$FixedArray* p_f6, org$frostlang$frostc$ASTNode* p_f7, org$frostlang$frostc$FixedArray* p_f8);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$parser$Token$Kind p_f1, org$frostlang$frostc$FixedArray* p_f2, org$frostlang$frostc$ASTNode* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$ASTNode* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$parser$Token$Kind p_f1, org$frostlang$frostc$ASTNode* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1, frost$core$Bit p_f2, org$frostlang$frostc$ASTNode* p_f3, org$frostlang$frostc$ASTNode* p_f4);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$Real64 p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ASTNode* p_f1);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$ASTNode* p_f2, org$frostlang$frostc$FixedArray* p_f3);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$ASTNode* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$ASTNode* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$Variable$Kind p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$FixedArray* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1, org$frostlang$frostc$ASTNode* p_f2, org$frostlang$frostc$FixedArray* p_f3);


#pragma once
#include "frost_c.h"
#include "Try_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$statement$Try org$frostlang$frostc$statement$Try;

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$FixedArray* p_block, org$frostlang$frostc$ASTNode* p_error, org$frostlang$frostc$FixedArray* p_failBlock);
void org$frostlang$frostc$statement$Try$init(org$frostlang$frostc$statement$Try* self);
void org$frostlang$frostc$statement$Try$cleanup(org$frostlang$frostc$statement$Try* self);

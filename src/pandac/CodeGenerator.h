#pragma once

#include "Class.h"
#include "IRNode.h"
#include "Method.h"
#include "Variable.h"

#include <ostream>
#include <sstream>

class Compiler;

class CodeGenerator {
public:
    virtual void writeMethod(const Method& method, const IRNode& body, Compiler& compiler) = 0;
};
#pragma once

#include "Operator.h"
#include "ParserUtil.h"
#include "Position.h"
#include "Type.h"

#include <vector>

/**
 * A node in the IR (intermediate representation) of the code. IR is generated from the AST by the
 * Compiler class and then fed to the CodeGenerator.
 */
struct IRNode {
    enum class Kind {
        // a list of arguments to a method
        ARGUMENTS,
        // a binary operation
        BINARY,
        // a literal bit (true or false)
        BIT,
        // a list of statements
        BLOCK,
        // a method call
        CALL,
        // a typecast
        CAST,
        // a literal reference to a class
        CLASS_REFERENCE,
        // a constant declaration statement
        CONSTANT,
        // an object construction expression
        CONSTRUCT,
        // a single declaration within a var, def, constant, or property (e.g. 'var x := 1, y' has
        // two declarations, 'x := 1' and 'y')
        DECLARATION,
        // a def declaration statement
        DEF,
        // an invalid IR node
        ERROR,
        // reference to a field of an object
        FIELD_REFERENCE,
        // an if statement
        IF,
        // a literal integer
        INT,
        // a reference to a method, such as 'String.convert'
        METHOD_REFERENCE,
        // the name of a package
        PACKAGE_REFERENCE,
        // formal parameter of a method
        PARAMETER,
        // list of method parameters
        PARAMETERS,
        // a prefix expression (-x, !x, !!x)
        PREFIX,
        // a property declaration statement
        PROPERTY,
        // a return statement
        RETURN,
        // the 'self' keyword
        SELF,
        // represents a tuple target in a declaration statement, such as in 'var (x, y) := tuple'
        TUPLE_TARGET,
        // literal reference to a type name, such as 'String'
        TYPE_REFERENCE,
        // an ambiguous method reference which could refer to multiple methods
        UNRESOLVED_METHOD_REFERENCE,
        // an ambiguous method call, where the return type is needed to disambiguate it
        UNRESOLVED_CALL,
        // a reference to a var, def, constant, or property
        VARIABLE_REFERENCE,
        // a var declaration statement
        VAR,
        // a placeholder representing the absence of a node
        VOID
    };

    IRNode(const IRNode&) = delete;
    IRNode(IRNode&&) = default;
    IRNode& operator=(IRNode&& src) = default;

    IRNode()
    : fKind(Kind::ERROR) {}

    IRNode(Position position, Kind kind)
    : fPosition(position)
    , fKind(kind) {}

    IRNode(Position position, Kind kind, Type type)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {}

    IRNode(Position position, Kind kind, String text)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text)) {}


    IRNode(Position position, Kind kind, Type type, uint64_t value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fInt = value;
    }

    IRNode(Position position, Kind kind, Type type, uint64_t value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fInt = value;
    }

    IRNode(Position position, Kind kind, Type type, double value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fFloat = value;
    }

    IRNode(Position position, Kind kind, Type type, bool value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fBool = value;
    }

    IRNode(Position position, Kind kind, Type type, const void* value)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type)) {
        fValue.fPtr = value;
    }

    IRNode(Position position, Kind kind, Type type, const void* value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fPtr = value;
    }

    IRNode(Position position, Kind kind, void* ptr)
    : fPosition(position)
    , fKind(kind) {
        fValue.fPtr = ptr;
    }

    IRNode(Position position, Kind kind, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, String text, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text))
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, Type type, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {}

    IRNode(Position position, Kind kind, Type type, int value, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fInt = value;
    }

    IRNode(Position position, Kind kind, Type type, void* ptr, std::vector<IRNode> children)
    : fPosition(position)
    , fKind(kind)
    , fType(std::move(type))
    , fChildren(std::move(children)) {
        fValue.fPtr = ptr;
    }

    // copying IRNodes can be very expensive and is incredibly easy to do by accident, so we kill
    // the default copy constructor and make it an explicit method call
    IRNode copy() const {
        IRNode result(fPosition, fKind, fType);
        memcpy(&result.fValue, &fValue, sizeof(fValue));
        for (const auto& child : fChildren) {
            result.fChildren.push_back(child.copy());
        }
        return result;
    }

    String description() const {
        String result;
        bool b = false;
        bool i = false;
        bool o = false;
        bool p = false;
        switch (fKind) {
            case Kind::ARGUMENTS:                   result += "Arguments";                   break;
            case Kind::BINARY:                      result += "Binary"; o = 1;               break;
            case Kind::BIT:                         result += "Bit"; b = 1;                  break;
            case Kind::BLOCK:                       result += "Block";                       break;
            case Kind::CALL:                        result += "Call";                        break;
            case Kind::CAST:                        result += "Cast";                        break;
            case Kind::CLASS_REFERENCE:             result += "ClassReference";              break;
            case Kind::CONSTANT:                    result += "Constant";                    break;
            case Kind::CONSTRUCT:                   result += "Construct";                   break;
            case Kind::DECLARATION:                 result += "Declaration";                 break;
            case Kind::DEF:                         result += "Def";                         break;
            case Kind::ERROR:                       result += "<error>";                     break;
            case Kind::FIELD_REFERENCE:             result += "FieldReference";              break;
            case Kind::IF:                          result += "If";                          break;
            case Kind::INT:                         result += "Int"; i = 1;                  break;
            case Kind::METHOD_REFERENCE:            result += "MethodReference"; p = 1;      break;
            case Kind::PACKAGE_REFERENCE:           result += "PackageReference"; p = 1;     break;
            case Kind::PARAMETER:                   result += "Parameter";                   break;
            case Kind::PARAMETERS:                  result += "Parameters";                  break;
            case Kind::PREFIX:                      result += "Prefix"; o = 1;               break;
            case Kind::PROPERTY:                    result += "Property";                    break;
            case Kind::RETURN:                      result += "Return";                      break;
            case Kind::SELF:                        result += "Self";                        break;
            case Kind::TUPLE_TARGET:                result += "TupleTarget";                 break;
            case Kind::TYPE_REFERENCE:              result += "TypeReference"; p = 1;        break;
            case Kind::UNRESOLVED_METHOD_REFERENCE: result += "UnresolvedMethodReference";   break;
            case Kind::UNRESOLVED_CALL:             result += "UnresolvedCall";              break;
            case Kind::VAR:                         result += "Var";                         break;
            case Kind::VARIABLE_REFERENCE:          result += "VariableReference"; p = true; break;
            case Kind::VOID:                        result += "Void";                        break;
        }
        if (fType.fCategory != Type::Category::VOID) {
            result += ":" + fType.fName;
        }
        result += "(";
        const char* separator = "";
        if (b) {
            result += separator;
            result += (fValue.fBool ? "true" : "false");
            separator = ", ";
        }
        if (i) {
            result += separator;
            result += std::to_string(fValue.fInt);
            separator = ", ";
        }
        if (o) {
            result += separator;
            result += String("\"") + operator_text((Operator) fValue.fInt) + '"';
            separator = ", ";
        }
        if (p) {
            result += separator;
            char buffer[32];
            snprintf(buffer, sizeof(buffer), "%p", fValue.fPtr);
            result += buffer;
            separator = ", ";
        }
        if (fText.size()) {
            result += separator;
            result += '"' + fText + '"';
            separator = ", ";
        }
        if (fChildren.size()) {
            result += separator;
            result += "{ ";
            separator = "";
            for (const auto& c : fChildren) {
                result += separator;
                result += c.description();
                separator = ", ";
            }
            result += " }";
        }
        result += ")";
        return result;
    }

    Position fPosition;

    Kind fKind;

    // interpretation of this string depends upon the kind of node it is
    String fText;

    Type fType;
    
    // used only by certain kinds of nodes
    union {
        uint64_t fInt;
        double fFloat;
        bool fBool;
        const void* fPtr;
    } fValue;
    
    std::vector<IRNode> fChildren;
};
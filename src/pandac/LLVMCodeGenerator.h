#pragma once

#include "CodeGenerator.h"
#include "Variable.h"

#include <ostream>
#include <sstream>
#include <unordered_set>

class LLVMCodeGenerator : public CodeGenerator {
public:
    LLVMCodeGenerator(std::ostream* out);

    void start(Compiler* compiler) override;

    void writeClass(Class& cl) override;

    void writeMethodDeclaration(Method& method) override;

    void writeMethod(Method& method, const IRNode& body) override;

    void addGlobalField(Field* f) override;

    void finish() override {
        fOut << fTypeDeclarations.str();
        fOut << fStrings.str();
        fOut << fShims.str();
        fOut << fMethodDeclarations.str();
        fOut << fMethods.str();
    }

    enum class OpClass {
        SIGNED,
        UNSIGNED,
        FLOAT
    };

private:
    struct ClassConstant {
        ClassConstant() {}
        
        ClassConstant(String name, String type)
        : fName(std::move(name))
        , fType(std::move(type)) {}

        String fName;

        String fType;
    };

    struct LoopDescriptor {
        LoopDescriptor(String label, String breakLabel, String continueLabel)
        : fLabel(label)
        , fBreakLabel(breakLabel)
        , fContinueLabel(continueLabel) {}

        String fLabel;
        String fBreakLabel;
        String fContinueLabel;
    };

    String callingConvention(const Method& m) {
        if (m.fMethodKind == Method::Kind::INIT) {
            return "fastcc ";
        }
        if (m.fAnnotations.isFinal() && !m.fAnnotations.isExternal()) {
            return "fastcc ";
        }
        return "";
    }

    /**
     * Returns true if this is an external method returning a struct.
     *
     * Returning structs from C functions into LLVM code is tricky. I tried it the naive and obvious
     * way, and found it didn't work. Some cursory research indicated that C functions that return
     * structs are at least sometimes compiled to accept a special pointer ("sret") as an extra
     * parameter, and the caller is expected to know to alloca space for the return value and pass
     * in a pointer to it.
     *
     * Since online sources were complaining about how poorly documented this is, there were
     * indications that there may be multiple struct return strategies depending on the nature of
     * the struct, people were suggesting looking at the assembly code generated by Clang to figure
     * out how one was supposed to call a given function, and this all varies from platform to
     * platform, we avoid the whole mess by making it explicit. External functions which wish to
     * return structs explicitly receive a pointer to the result structure as their first parameter.
     */
    bool needsStructIndirection(const Method& m) {
        bool result =  m.fAnnotations.isExternal() && m.fReturnType.isClass() &&
                fCompiler->getClass(m.fReturnType)->isValue(fCompiler);
        // if a method requires struct indirection, it will have a different signature than native
        // methods; this means it doesn't play nice with overriding. We can fix this down the road
        // with shims, but for right now just assert that a method requiring struct indirection is
        // not an override and cannot be overridden
        ASSERT(!result || (!m.fAnnotations.isOverride() && (m.fAnnotations.isFinal() ||
                m.fAnnotations.isClass())));
        return result;
    }

    void writeWrapperType(const Type& type);

    void writeNullableType(const Type& type);

    size_t fieldSize(const Type& type);

    size_t sizeOf(const Type& type);

    String getITable(Class& cl);

    ClassConstant& getClassConstant(Class& cl);

    String getWrapperITable(Class& cl);

    ClassConstant& getWrapperClassConstant(Class& cl);

    /**
     * For the given Value class method, creates a shim method which receives a wrapped value,
     * unwraps it, and forwards it to the actual method implementation (which expects an unwrapped
     * 'self').
     */
    String createWrapperShim(Method& m, std::ostream& out);

    String llvmTypeName(const Type& type);

    String llvmType(const Type& type);

    String llvmWrapperTypeName(const Type& type);

    String llvmWrapperType(const Type& type);

    String llvmNullableType(const Type& type);

    String llvmType(const Method& m);

    String llvmWrapperType(Method& m);

    String selfType(const Method& m);

    String nextVar();

    String nextLabel();

    void createBlock(const String& label, std::ostream& out);

    String getVariableReference(const Variable& var, std::ostream& out);

    String getAndReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getOrReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getIdentityReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getNIdentityReference(const IRNode& left, const IRNode& right, std::ostream& out);

    String getBinaryReference(OpClass cl, const String leftRef, Operator op, const String rightRef,
            std::ostream& out);

    String getBinaryReference(const IRNode& left, Operator op, const IRNode& right,
            std::ostream& out);

    String getNullReference(const IRNode& n, std::ostream& out);

    String getIsNonNullReference(const IRNode& test, std::ostream& out);

    String getIsNullReference(const IRNode& test, std::ostream& out);

    String getPrefixReference(const IRNode& expr, std::ostream& out);

    String getVirtualMethodReference(const String& target, Method& m, std::ostream& out);

    String getInterfaceMethodReference(const String& target, Method& m, std::ostream& out);

    String getMethodReference(const String& target, Method& m, bool isSuper,
            std::ostream& out);

    String getPointerCallReference(const IRNode& call, std::ostream& out);

    String getCallReference(const IRNode& call, std::ostream& out);

    String wrapValue(const String& value, const Type& srcType, const Type& dstType,
            std::ostream& out);

    String unwrapValue(const String& value, const Type& srcType, const Type& dstType,
            std::ostream& out);

    String toNullableValue(const String& value, const Type& srcType, const Type& dstType,
            std::ostream& out);

    String toNonNullableValue(const String& value, const Type& srcType, const Type& dstType,
            std::ostream& out);

    String getCastReference(const String& value, const Type& src, const Type& target,
            std::ostream& out);

    String getCastReference(const IRNode& call, std::ostream& out);

    String getConstructReference(const IRNode& construct, std::ostream& out);

    String getSelfReference(const IRNode& self, std::ostream& out);

    String getSuperReference(const IRNode& super, std::ostream& out);

    String getFieldReference(const IRNode& self, std::ostream& out);

    String getStringReference(const String& s, std::ostream& out);

    String getReference(const IRNode& stmt, std::ostream& out);

    String getTypedReference(const IRNode& stmt, std::ostream& out);

    void writePointerCall(const IRNode& stmt, std::ostream& out);

    void writeCall(const IRNode& stmt, const String& target, std::ostream& out);

    void writeIf(const IRNode& s, std::ostream& out);

    void writeWhile(const IRNode& w, std::ostream& out);

    void writeDo(const IRNode& d, std::ostream& out);

    void writeLoop(const IRNode& l, std::ostream& out);

    void writeRangeFor(const IRNode& f, std::ostream& out);

    void writeVarTarget(const IRNode& var, const IRNode* value, std::ostream& out);

    void writeVar(const IRNode& var, std::ostream& out);

    String getLValue(const IRNode& lvalue, std::ostream& out);

    void writeAndEq(const String& lvalue, const IRNode& right, std::ostream& out);

    void writeOrEq(const String& lvalue, const IRNode& right, std::ostream& out);

    void writeAssignment(const IRNode& a, std::ostream& out);

    void writeReturn(const IRNode& r, std::ostream& out);

    void writeBreak(const IRNode& b, std::ostream& out);

    void writeContinue(const IRNode& c, std::ostream& out);

    void writeAssert(const IRNode& a, std::ostream& out);

    void writeStatement(const IRNode& s, std::ostream& out);

    void writeBlock(const IRNode& block, std::ostream& out);

    void getMethodTableEntry(Method& m, String* outName, String* outType);

    void createMethodShim(const Method& raw, const Type& effective, std::ostream& out,
            String* outName, String* outType);

    String methodName(const Method& name);

    String fieldName(const Field& field);

    String varName(const Variable& var);

    String defaultValue(const Type& type);

    const LoopDescriptor& findLoop(String name);

    int fTmpVars = 1;

    int fLabels = 0;

    Class* fCurrentClass;

    Method* fCurrentMethod;

    std::stringstream fMethodHeader;

    std::unordered_set<String> fWrittenWrappers;

    std::unordered_set<String> fWrittenNullables;

    std::unordered_set<String> fDeclaredClassInitializers;

    std::stringstream fTypeDeclarations;

    std::stringstream fStrings;

    std::stringstream fShims;

    std::stringstream fMethodDeclarations;

    std::stringstream fMethods;

    std::stringstream fGlobalInits;

    // maps method to (name, type)
    std::unordered_map<const Method*, std::pair<String, String>> fMethodShims;

    std::ostream& fOut;

    String fCurrentBlock;

    Compiler* fCompiler;

    std::unordered_map<String, ClassConstant> fClassConstants;

    std::unordered_map<String, size_t> fSizes;

    std::unordered_map<uint64_t, String> fReusedValues;

    std::unordered_map<const Variable*, String> fVariableNames;

    std::unordered_map<String, String> fParameterNames;

    std::vector<LoopDescriptor> fLoops;

    std::vector<const Field*> fFieldInitializationOrder;

    std::unordered_set<const Method*> fDeclaredMethods;

    std::unordered_set<const Class*> fInitializedClasses;

    friend class AutoLoopDescriptor;
};

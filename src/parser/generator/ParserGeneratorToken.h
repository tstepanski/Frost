#pragma once

#include "ParserUtil.h"
#include "Position.h"

namespace ParserGenerator {

struct Token {
    enum Kind {
        END_OF_FILE,
        WHITESPACE,
        COLONCOLON,
        COLON,
        DOT,
        COMMA,
        EQ,
        SEMICOLON,
        LT,
        GT,
        NOT,
        CARET,
        QUESTION,
        AT,
        CHARSET,
        LBRACE,
        RBRACE,
        SINGLELITERAL,
        DOUBLELITERAL,
        IDENTIFIER,
        INVALID_TOKEN
    };

    Token() {
    }

    Token(Position position, Kind kind, String text)
    : fPosition(position)
    , fKind(kind)
    , fText(std::move(text)) {}

    Position fPosition;
    Kind fKind;
    String fText;
};

}
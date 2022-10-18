#ifndef DESIGNPATTERNS_CONTEXT_H
#define DESIGNPATTERNS_CONTEXT_H

#include <iostream>
#include <stdexcept>
#include <string>
#include "string_tokenizer.h"

/**
 * 为解释器进行语法解析提供了必要的信息
 */
class Context {
public:
    explicit Context(std::string text) {
        tokenizer_ = new StringTokenizer(text);
        NextToken();
    }

    std::string NextToken() {
        if (tokenizer_->HasMoreTokens()) {
            currentToken_ = tokenizer_->NextToken();
        } else {
            currentToken_ = "";
        }
        return currentToken_;
    }

    std::string CurrentToken() {
        return currentToken_;
    }

    void SkipToken(const std::string &token) {
        if (token != currentToken_) {
            throw std::runtime_error("Warning: " + token + " is expected, but " + currentToken_ + " is found.");
        }
        NextToken();
    }

    int CurrentNumber() {
        int number = std::stoi(currentToken_);
        return number;
    }

private:
    StringTokenizer *tokenizer_;
    std::string currentToken_;
};

#endif //DESIGNPATTERNS_CONTEXT_H

#ifndef DESIGNPATTERNS_STRING_DISPLAY_IMPL_H
#define DESIGNPATTERNS_STRING_DISPLAY_IMPL_H

#include <iostream>
#include <string>
#include "display_impl.h"

/**
 * ConcreteImplementor：该角色负责实现Implementor角色中定义的接口（API）
 */
class StringDisplayImpl : public DisplayImpl {
public:
    explicit StringDisplayImpl(std::string str) {
        str_ = str;
        width_ = str.size();
    }

    void RawOpen() override {
        PrintLine();
    }

    void RawPrint() override {
        std::cout << "|" << str_ << "|" << std::endl;
    }

    void RawClose() override {
        PrintLine();
    }

    void PrintLine() const {
        std::cout << "+";
        for (int i = 0; i < width_; i++) {
            std::cout << "-";
        }
        std::cout << "+" << std::endl;
    }

private:
    std::string str_;
    int width_;
};

#endif //DESIGNPATTERNS_STRING_DISPLAY_IMPL_H

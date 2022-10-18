#ifndef DESIGNPATTERNS_STRING_DISPLAY_H
#define DESIGNPATTERNS_STRING_DISPLAY_H

#include <string>
#include "display.h"

/**
 * ConcreteComponent:实现Component角色所定义的接口（API）
 */
class StringDisplay : public Display {
public:
    explicit StringDisplay(std::string str) {
        str_ = str;
    }

    int GetColumns() override {
        return str_.size();
    }

    int GetRows() override {
        return 1;
    }

    std::string GetRowText(int row) override {
        if (row == 0) {
            return str_;
        }
        return "";
    }

private:
    std::string str_;
};

#endif //DESIGNPATTERNS_STRING_DISPLAY_H

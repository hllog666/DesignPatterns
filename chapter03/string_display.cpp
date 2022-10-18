#include <iostream>
#include "string_display.h"

StringDisplay::StringDisplay(std::string str) {
    str_ = str;
    width_ = str_.size();
}

void StringDisplay::Open() {
    PrintLine();
}

void StringDisplay::Print() {
    std::cout << "|" << str_ << "|" << std::endl;
}

void StringDisplay::Close() {
    PrintLine();
}

void StringDisplay::PrintLine() const {
    std::cout << "+";
    for (int i = 0; i < width_; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}
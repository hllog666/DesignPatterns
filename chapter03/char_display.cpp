#include <iostream>
#include "char_display.h"

CharDisplay::CharDisplay(char ch) {
    ch_ = ch;
}

void CharDisplay::Open() {
    std::cout << "<<";
}

void CharDisplay::Print() {
    std::cout << ch_;
}

void CharDisplay::Close() {
    std::cout << ">>" << std::endl;
}
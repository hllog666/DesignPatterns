#include <iostream>
#include "underline_pen.h"

UnderlinePen::UnderlinePen(char ulChar) {
    ulChar_ = ulChar;
}

UnderlinePen::UnderlinePen(const UnderlinePen &underlinePen) {
    ulChar_ = underlinePen.ulChar_;
}

void UnderlinePen::Use(std::string s) {
    int length = s.size();
    std::cout << "\"" << s << "\"" << std::endl;
    std::cout << " ";
    for (int i = 0; i < length; i++) {
        std::cout << ulChar_;
    }
    std::cout << std::endl;
}

Product *UnderlinePen::CreateClone() {
    return new UnderlinePen(*this);
}
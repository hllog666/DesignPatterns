#include <iostream>
#include "banner.h"

Banner::Banner(std::string str) {
    str_ = str;
}

void Banner::ShowWithParen() {
    std::cout << "(" << str_ << ")" << std::endl;
}

void Banner::ShowWithAster() {
    std::cout << "*" << str_ << "*" << std::endl;
}
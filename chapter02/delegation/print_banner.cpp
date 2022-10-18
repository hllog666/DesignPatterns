#include "print_banner.h"

PrintBanner::PrintBanner(std::string str) {
    banner_ = new Banner(str);
}

PrintBanner::~PrintBanner() {
    delete banner_;
}

void PrintBanner::PrintWeak() {
    banner_->ShowWithParen();
}

void PrintBanner::PrintStrong() {
    banner_->ShowWithAster();
}
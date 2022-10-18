#include "print_banner.h"

PrintBanner::PrintBanner(std::string str) : Banner(str) {

}

void PrintBanner::PrintWeak() {
    ShowWithParen();
}

void PrintBanner::PrintStrong() {
    ShowWithAster();
}
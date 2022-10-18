#include <iostream>
#include <string>

int main() {
    std::string str[] = {"ha", "das", "dja", "dah"};
    std::cout << sizeof(str) / sizeof(std::string);
    return 0;
}
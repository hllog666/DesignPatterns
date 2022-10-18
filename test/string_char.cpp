#include <iostream>
#include <string>

int main() {
    std::string str(1, 'c');
    std::cout << (str == "c") << std::endl;
    return 0;
}
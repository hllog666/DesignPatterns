#include <iostream>
#include "singleton.h"

int main() {
    std::cout << "Start." << std::endl;
    Singleton *obj1 = Singleton::GetInstance();
    Singleton *obj2 = Singleton::GetInstance();
    if (obj1 == obj2) {
        std::cout << "obj1 == obj2" << std::endl;
    } else {
        std::cout << "obj1 != obj2" << std::endl;
    }
    std::cout << "End." << std::endl;
    return 0;
}
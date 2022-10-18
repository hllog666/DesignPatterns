#ifndef DESIGNPATTERNS_TROUBLE_H
#define DESIGNPATTERNS_TROUBLE_H

#include <string>

class Trouble {
public:
    explicit Trouble(int number) : number_(number) {}

    int GetNumber() {
        return number_;
    }

    std::string ToString() {
        return "[Trouble " + std::to_string(number_) + "]";
    }

private:
    int number_;
};

#endif //DESIGNPATTERNS_TROUBLE_H

#ifndef DESIGNPATTERNS_BANNER_H
#define DESIGNPATTERNS_BANNER_H

#include <string>

class Banner {
public:
    explicit Banner(std::string str);

    void ShowWithParen();

    void ShowWithAster();

private:
    std::string str_;
};


#endif //DESIGNPATTERNS_BANNER_H

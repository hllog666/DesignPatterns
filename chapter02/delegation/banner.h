#ifndef DESIGNPATTERNS_BANNER_H
#define DESIGNPATTERNS_BANNER_H

#include <string>

/**
 * Adaptee（被适配）：持有既定方法的角色，如果Adaptee的方法和Target相同，就不需要适配器了
 */
class Banner {
public:
    explicit Banner(std::string str);

    void ShowWithParen();

    void ShowWithAster();

private:
    std::string str_;
};


#endif //DESIGNPATTERNS_BANNER_H

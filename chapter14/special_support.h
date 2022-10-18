#ifndef DESIGNPATTERNS_SPECIAL_SUPPORT_H
#define DESIGNPATTERNS_SPECIAL_SUPPORT_H

#include "support.h"

/**
 * ConcreteHandler：处理请求的具体角色
 */
class SpecialSupport : public Support {
public:
    explicit SpecialSupport(std::string name, int number) : Support(name), number_(number) {}

protected:
    bool Resolve(Trouble *trouble) override {
        if (trouble->GetNumber() == number_) {
            return true;
        }
        return false;
    }

private:
    int number_;
};

#endif //DESIGNPATTERNS_SPECIAL_SUPPORT_H

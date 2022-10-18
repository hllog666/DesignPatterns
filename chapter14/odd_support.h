#ifndef DESIGNPATTERNS_ODD_SUPPORT_H
#define DESIGNPATTERNS_ODD_SUPPORT_H

#include "support.h"

/**
 * ConcreteHandler：处理请求的具体角色
 */
class OddSupport : public Support {
public:
    explicit OddSupport(std::string name) : Support(name) {}

protected:
    bool Resolve(Trouble *trouble) override {
        if (trouble->GetNumber() % 2 == 1) {
            return true;
        }
        return false;
    }
};

#endif //DESIGNPATTERNS_ODD_SUPPORT_H

#ifndef DESIGNPATTERNS_NO_SUPPORT_H
#define DESIGNPATTERNS_NO_SUPPORT_H

#include "support.h"

/**
 * ConcreteHandler：处理请求的具体角色
 */
class NoSupport : public Support {
public:
    explicit NoSupport(std::string name) : Support(name) {}

protected:
    bool Resolve(Trouble *trouble) override {
        return false;
    }
};

#endif //DESIGNPATTERNS_NO_SUPPORT_H

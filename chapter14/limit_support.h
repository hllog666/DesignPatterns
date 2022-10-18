#ifndef DESIGNPATTERNS_LIMIT_SUPPORT_H
#define DESIGNPATTERNS_LIMIT_SUPPORT_H

#include "support.h"

/**
 * ConcreteHandler：处理请求的具体角色
 */
class LimitSupport : public Support {
public:
    explicit LimitSupport(std::string name, int limit) : Support(name), limit_(limit) {}

protected:
    bool Resolve(Trouble *trouble) override {
        if (trouble->GetNumber() < limit_) {
            return true;
        }
        return false;
    }

private:
    int limit_;
};

#endif //DESIGNPATTERNS_LIMIT_SUPPORT_H

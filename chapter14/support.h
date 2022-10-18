#ifndef DESIGNPATTERNS_SUPPORT_H
#define DESIGNPATTERNS_SUPPORT_H

#include <string>
#include <iostream>
#include "trouble.h"

/**
 * Handler:定义了处理请求的接口（API）。
 * Handler角色知道下一个Handler是谁，如果自己无法处理请求，它会将请求传给下一个Handler
 */
class Support {
public:
    explicit Support(std::string name) : name_(name) {}

    Support *SetNext(Support *next) {
        next_ = next;
        return next;
    }

    void SupportService(Trouble *trouble) {
        if (Resolve(trouble)) {
            Done(trouble);
        } else if (next_ != nullptr) {
            next_->SupportService(trouble);
        } else {
            Fail(trouble);
        }
    }

    std::string ToString() {
        return "[" + name_ + "]";
    }

protected:
    virtual bool Resolve(Trouble *trouble) = 0;

    void Done(Trouble *trouble) {
        std::cout << trouble->ToString() << " is resolved by " << this->ToString() << "." << std::endl;
    }

    void Fail(Trouble *trouble) {
        std::cout << trouble->ToString() << " cannot be resolved." << std::endl;
    }

private:
    std::string name_;
    Support *next_;
};

#endif //DESIGNPATTERNS_SUPPORT_H

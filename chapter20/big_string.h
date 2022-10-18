#ifndef DESIGNPATTERNS_BIG_STRING_H
#define DESIGNPATTERNS_BIG_STRING_H

#include <vector>
#include "big_char.h"
#include "big_char_factory.h"

/**
 * Client：使用FlyweightFactory角色来生成Flyweight角色
 */
class BigString {
public:
    explicit BigString(std::string str) {
        BigCharFactory *factory = BigCharFactory::GetInstance();
        for (int i = 0; i < str.size(); i++) {
            bigChars_.push_back(factory->GetBigChar(str[i]));
        }
    }

    void Print() {
        for (int i = 0; i < bigChars_.size(); i++) {
            bigChars_[i]->Print();
        }
    }

private:
    std::vector<BigChar *> bigChars_;
};

#endif //DESIGNPATTERNS_BIG_STRING_H

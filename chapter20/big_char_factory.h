#ifndef DESIGNPATTERNS_BIG_CHAR_FACTORY_H
#define DESIGNPATTERNS_BIG_CHAR_FACTORY_H

#include <map>
#include <string>
#include "big_char.h"

/**
 * FlyweightFactory：生成Flyweight角色的工厂。
 * 在工厂中生成Flyweight角色可以实现共享实例
 */
class BigCharFactory {
public:
    static BigCharFactory *GetInstance() {
        if (singleton_ == nullptr) {
            singleton_ = new BigCharFactory();
        }
        return singleton_;
    }

    BigChar *GetBigChar(char charName) {
        BigChar *bc = pool_[std::string(1, charName)];
        if (bc == nullptr) {
            bc = new BigChar(charName);
            pool_.insert(std::make_pair(std::string(1, charName), bc));
        }
        return bc;
    }

private:
    BigCharFactory() = default;

    static BigCharFactory *singleton_;

private:
    std::map<std::string, BigChar *> pool_;
};

BigCharFactory *BigCharFactory::singleton_ = nullptr;

#endif //DESIGNPATTERNS_BIG_CHAR_FACTORY_H

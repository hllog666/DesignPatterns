#ifndef DESIGNPATTERNS_MEMENTO_H
#define DESIGNPATTERNS_MEMENTO_H

#include <vector>
#include <string>

/**
 * Memento：会将Originator角色的内部信息整合到一起。
 * 在Memento角色中虽然保存了Originator角色的信息，但他不会向外部公开这些信息。
 * Memento角色提供的接口：
 * wide interface：所有用于获取恢复对象状态信息的方法的集合。只有Originator角色能使用
 * narrow interface：只能获取Memento角色有限的内部信息，可以有效的防止信息泄漏，供Caretaker角色使用
 */
class Memento {
public:
    explicit Memento(int money) : money_(money) {}

    int GetMoney() const {
        return money_;
    }

    void AddFruit(std::string fruit) {
        fruits_.push_back(fruit);
    }

    std::vector<std::string> GetFruits() {
        return fruits_;
    }

private:
    int money_;
    std::vector<std::string> fruits_;
};

#endif //DESIGNPATTERNS_MEMENTO_H

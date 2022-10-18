#ifndef DESIGNPATTERNS_GAMER_H
#define DESIGNPATTERNS_GAMER_H

#include <vector>
#include <string>
#include <iostream>
#include "memento.h"

/**
 * Originator:会在保存自己的最新状态时生成Memento角色。
 * 当把以前保存的Memento角色传递给Originator角色时，他会将自己恢复至生成该Memento角色时的状态
 */
class Gamer {
public:
    explicit Gamer(int money) : money_(money) {}

    int GetMoney() const {
        return money_;
    }

    void Bet() {
        int dice = rand() % 6 + 1;
        if (dice == 1) {
            money_ += 100;
            std::cout << "所持金钱增加了。" << std::endl;
        } else if (dice == 2) {
            money_ /= 2;
            std::cout << "所持金钱减半了。" << std::endl;
        } else if (dice == 6) {
            std::string f = GetFruit();
            std::cout << "获得了水果(" << f << ")。" << std::endl;
        } else {
            std::cout << "什么都没发生。" << std::endl;
        }
    }

    Memento *CreateMemento() {
        Memento *m = new Memento(money_);
        for (auto it = fruits_.begin(); it != fruits_.end(); it++) {
            std::string f = *it;
            if (f.rfind("好吃的", 0) == 0) {
                m->AddFruit(f);
            }
        }
        return m;
    }

    void RestoreMemento(Memento *memento) {
        money_ = memento->GetMoney();
        fruits_ = memento->GetFruits();
    }

    std::string ToString() {
        return "[money = " + std::to_string(money_) + ", fruits = " + ToString(fruits_) + "]";
    }

    std::string GetFruit() {
        std::string prefix = "";
        if ((rand() % 6 + 1) % 2 == 0) {
            prefix = "好吃的";
        }
        return prefix + fruitsName[rand() % fruitsName->size()];
    }

private:
    std::string ToString(std::vector<std::string> fruits) {
        std::string str;
        for (auto it = fruits.begin(); it != fruits.end(); it++) {
            str += *it + "\t";
        }
        return str;
    }

private:
    int money_;
    std::vector<std::string> fruits_;
    static std::string fruitsName[4];
};

std::string Gamer::fruitsName[4] = {
        "苹果", "葡萄", "香蕉", "橘子"
};

#endif //DESIGNPATTERNS_GAMER_H

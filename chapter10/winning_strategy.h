#ifndef DESIGNPATTERNS_WINNING_STRATEGY_H
#define DESIGNPATTERNS_WINNING_STRATEGY_H

#include <ctime>
#include "strategy.h"

/**
 * ConcreteStrategy：负责实现Strategy角色的接口（API），即负责实现具体的策略
 */
class WinningStrategy : public Strategy {
public:
    WinningStrategy() {
        srand((unsigned int) time(nullptr));
    }

    Hand *NextHand() override {
        if (!won_) {
            preHand_ = Hand::GetHand(rand() % 3);
        }
        return preHand_;
    }

    void Study(bool win) override {
        won_ = win;
    }

private:
    bool won_ = false;
    Hand *preHand_;
};

#endif //DESIGNPATTERNS_WINNING_STRATEGY_H

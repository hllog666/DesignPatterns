#ifndef DESIGNPATTERNS_PROB_STRATEGY_H
#define DESIGNPATTERNS_PROB_STRATEGY_H

#include <ctime>
#include "strategy.h"

/**
 * ConcreteStrategy：负责实现Strategy角色的接口（API），即负责实现具体的策略
 */
class ProbStrategy : public Strategy {
public:
    ProbStrategy() {
        srand((unsigned int) time(nullptr));
    }

    Hand *NextHand() override {
        std::cout << "currentHandValue_ = " << currentHandValue_ << std::endl;
        std::cout << "preHandValue_ = " << preHandValue_ << std::endl;
        int bet = rand() % GetSum(currentHandValue_);
        int handValue = 0;
        if (bet < history_[currentHandValue_][0]) {
            handValue = 0;
        } else if (bet < history_[currentHandValue_][0] + history_[currentHandValue_][1]) {
            handValue = 1;
        } else {
            handValue = 2;
        }
        preHandValue_ = currentHandValue_;
        currentHandValue_ = handValue;
        return Hand::GetHand(handValue);
    }

    void Study(bool win) override {
        if (win) {
            history_[preHandValue_][currentHandValue_]++;
        } else {
            history_[preHandValue_][(currentHandValue_ + 1) % 3]++;
            history_[preHandValue_][(currentHandValue_ + 2) % 3]++;
        }
    }

private:
    int GetSum(int hv) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += history_[hv][i];
        }
        return sum;
    }

private:
    int preHandValue_ = 0;
    int currentHandValue_ = 0;
    int history_[3][3] = {
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}
    };
};

#endif //DESIGNPATTERNS_PROB_STRATEGY_H

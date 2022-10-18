#ifndef DESIGNPATTERNS_PLAYER_H
#define DESIGNPATTERNS_PLAYER_H

#include <string>
#include "strategy.h"

/**
 * Context：负责使用Strategy角色。
 * Context角色保存ConcreteStrategy角色的实例，
 * 并使用ConcreteStrategy角色去实现需求
 */
class Player {
public:
    explicit Player(std::string name, Strategy *strategy) {
        name_ = name;
        strategy_ = strategy;
        winCount_ = 0;
        loseCount_ = 0;
        gameCount_ = 0;
    }

    Hand *NextHand() {
        return strategy_->NextHand();
    }

    void Win() {
        strategy_->Study(true);
        winCount_++;
        gameCount_++;
    }

    void Lose() {
        strategy_->Study(false);
        loseCount_++;
        gameCount_++;
    }

    void Even() {
        gameCount_++;
    }

    std::string ToString() {
        return std::string("[") + name_ + std::string(":") + std::to_string(gameCount_) +
               std::string(" games, ") + std::to_string(winCount_) + std::string(" win, ") +
               std::to_string(loseCount_) + std::string(" lose") + std::string("]");
    }

private:
    std::string name_;
    Strategy *strategy_;
    int winCount_;
    int loseCount_;
    int gameCount_;
};

#endif //DESIGNPATTERNS_PLAYER_H

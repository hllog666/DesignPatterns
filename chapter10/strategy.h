#ifndef DESIGNPATTERNS_STRATEGY_H
#define DESIGNPATTERNS_STRATEGY_H

#include "hand.h"

/**
 * Strategy：负责决定实现策略所必需的接口（API）
 */
class Strategy {
public:
    virtual Hand *NextHand() = 0;

    virtual void Study(bool win) = 0;
};

#endif //DESIGNPATTERNS_STRATEGY_H

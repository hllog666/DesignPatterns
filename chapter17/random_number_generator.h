#ifndef DESIGNPATTERNS_RANDOM_NUMBER_GENERATOR_H
#define DESIGNPATTERNS_RANDOM_NUMBER_GENERATOR_H

#include "number_generator.h"

/**
 * ConcreteSubject：具体的被观察对象。当自身状态发生变化后，他会通知所有已经注册的Observer角色
 */
class RandomNumberGenerator : public NumberGenerator {
public:
    int GetNumber() override {
        return number_;
    }

    void Execute() override {
        for (int i = 0; i < 20; i++) {
            number_ = rand() % 50;
            NotifyObservers();
        }
    }

private:
    int number_;
};

#endif //DESIGNPATTERNS_RANDOM_NUMBER_GENERATOR_H

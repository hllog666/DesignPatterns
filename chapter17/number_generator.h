#ifndef DESIGNPATTERNS_NUMBER_GENERATOR_H
#define DESIGNPATTERNS_NUMBER_GENERATOR_H

#include <vector>
#include <algorithm>
#include "observer.h"

/**
 * Subject:观察对象。Subject定义了注册观察者和删除观察者的方法，他还声明了获取当前状态的方法
 */
class NumberGenerator {
public:
    void AddObserver(Observer *observer) {
        observers_.push_back(observer);
    }

    void DeleteObserver(Observer *observer) {
        observers_.erase(std::find(observers_.begin(), observers_.end(), observer));
    }

    void NotifyObservers() {
        for (auto it = observers_.begin(); it != observers_.end(); it++) {
            (*it)->Update(this);
        }
    }

    virtual int GetNumber() = 0;

    virtual void Execute() = 0;

private:
    std::vector<Observer *> observers_;
};

#endif //DESIGNPATTERNS_NUMBER_GENERATOR_H

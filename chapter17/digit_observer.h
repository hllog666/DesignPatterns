#ifndef DESIGNPATTERNS_DIGIT_OBSERVER_H
#define DESIGNPATTERNS_DIGIT_OBSERVER_H

#include <iostream>
#include "observer.h"

/**
 * ConcreteObserver：具体的Observer。dang他的Updata方法被调用后，会去索要观察的对象的最新状态
 */
class DigitObserver : public Observer {
public:
    void Update(NumberGenerator *generator) override {
        std::cout << "DigitObserver:" << generator->GetNumber() << std::endl;
    }
};

#endif //DESIGNPATTERNS_DIGIT_OBSERVER_H

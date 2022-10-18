#ifndef DESIGNPATTERNS_GRAPH_OBSERVER_H
#define DESIGNPATTERNS_GRAPH_OBSERVER_H

#include <iostream>
#include "observer.h"

/**
 * ConcreteObserver：具体的Observer。dang他的Update方法被调用后，会去索要观察的对象的最新状态
 */
class GraphObserver : public Observer {
public:
    void Update(NumberGenerator *generator) override {
        std::cout << "GraphObserver:";
        int count = generator->GetNumber();
        for (int i = 0; i < count; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
};

#endif //DESIGNPATTERNS_GRAPH_OBSERVER_H

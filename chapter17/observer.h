#ifndef DESIGNPATTERNS_OBSERVER_H
#define DESIGNPATTERNS_OBSERVER_H

// #include "number_generator.h"

class NumberGenerator;

/**
 * Observer：负责接收来自Subject角色的状态变化的通知
 */
class Observer {
public:
    virtual void Update(NumberGenerator *generator) = 0;
};

#endif //DESIGNPATTERNS_OBSERVER_H

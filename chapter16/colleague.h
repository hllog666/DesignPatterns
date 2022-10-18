#ifndef DESIGNPATTERNS_COLLEAGUE_H
#define DESIGNPATTERNS_COLLEAGUE_H

#include "mediator.h"

class Colleague {
public:
    virtual void SetMediator(Mediator *mediator) = 0;

    virtual void SetColleagueEnabled(bool enabled) = 0;
};

#endif //DESIGNPATTERNS_COLLEAGUE_H

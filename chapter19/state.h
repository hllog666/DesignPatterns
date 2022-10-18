#ifndef DESIGNPATTERNS_STATE_H
#define DESIGNPATTERNS_STATE_H

#include "context.h"

class State {
public:
    virtual void DoClock(Context *context, int hour) = 0;

    virtual void DoUse(Context *context) = 0;

    virtual void DoAlarm(Context *context) = 0;

    virtual void DoPhone(Context *context) = 0;
};

#endif //DESIGNPATTERNS_STATE_H

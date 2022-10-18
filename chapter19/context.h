#ifndef DESIGNPATTERNS_CONTEXT_H
#define DESIGNPATTERNS_CONTEXT_H

#include <string>
// #include "state.h"

class State;

class Context {
public:
    virtual void SetClock(int hour) = 0;

    virtual void ChangeState(State *state) = 0;

    virtual void CallSecurityCenter(std::string msg) = 0;

    virtual void RecordLog(std::string msg) = 0;
};

#endif //DESIGNPATTERNS_CONTEXT_H

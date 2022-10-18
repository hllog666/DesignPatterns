#ifndef DESIGNPATTERNS_MEDIATOR_H
#define DESIGNPATTERNS_MEDIATOR_H

class Mediator {
public:
    virtual void CreateColleagues() = 0;

    virtual void ColleagueChanged() = 0
};

#endif //DESIGNPATTERNS_MEDIATOR_H

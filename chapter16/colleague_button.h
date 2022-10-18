#ifndef DESIGNPATTERNS_COLLEAGUE_BUTTON_H
#define DESIGNPATTERNS_COLLEAGUE_BUTTON_H

#include <string>
#include "colleague.h"

class ColleagueButton : public Colleague {
public:
    explicit ColleagueButton(std::string caption) : Colleague(caption) {}

    void SetMediator(Mediator *mediator) override {
        mediator_ = mediator;
    }

    void SetColleagueEnabled(bool enabled) override {
        SetEnabled(enabled);
    }

private:
    Mediator *mediator_;
};

#endif //DESIGNPATTERNS_COLLEAGUE_BUTTON_H

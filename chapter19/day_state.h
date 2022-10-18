#ifndef DESIGNPATTERNS_DAY_STATE_H
#define DESIGNPATTERNS_DAY_STATE_H

#include <string>
#include "state.h"

class NightState;

class DayState : public State {
public:
    static State *GetInstance() {
        return singleton_;
    }

    void DoClock(Context *context, int hour) override {
        if (hour < 9 || hour >= 17) {
            context->ChangeState(NightState::GetInstance());
        }
    }

    void DoUse(Context *context) override {
        context->RecordLog("使用金库（白天）");
    }

    void DoAlarm(Context *context) override {
        context->CallSecurityCenter("按下警铃（白天）");
    }

    void DoPhone(Context *context) override {
        context->CallSecurityCenter("正常通话（白天）");
    }

    std::string ToString() {
        return "[白天]";
    }

private:
    DayState() = default;

    static DayState *singleton_ = new DayState();
};

#endif //DESIGNPATTERNS_DAY_STATE_H

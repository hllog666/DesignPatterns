#ifndef DESIGNPATTERNS_NIGHT_STATE_H
#define DESIGNPATTERNS_NIGHT_STATE_H

#include "state.h"
#include "day_state.h"

class NightState : public State {
public:
    static State *GetInstance() {
        return singleton_;
    }

    void DoClock(Context *context, int hour) override {
        if (hour >= 9 && hour <= 17) {
            context->ChangeState(DayState::GetInstance());
        }
    }

    void DoUse(Context *context) override {
        context->CallSecurityCenter("紧急：晚上使用金库！");
    }

    void DoAlarm(Context *context) override {
        context->CallSecurityCenter("按下警铃（晚上）");
    }

    void DoPhone(Context *context) override {
        context->CallSecurityCenter("晚上的通话录音");
    }

    std::string ToString() {
        return "[晚上]";
    }

private:
    NightState() = default;

    static NightState *singleton = new NightState();
};

#endif //DESIGNPATTERNS_NIGHT_STATE_H

#ifndef DESIGNPATTERNS_DRAW_COMMAND_H
#define DESIGNPATTERNS_DRAW_COMMAND_H

#include "command.h"

class DrawCommand : public Command {
public:
    DrawCommand(Drawable *drawable, Point position) {
        drawable_ = drawable;
        position_ = position;
    }

    void Execute() override {
        drawable_->Draw(position_->x, position_->y);
    }

protected:
    Drawable *drawable_;
private:
    Point *position_;
};

#endif //DESIGNPATTERNS_DRAW_COMMAND_H

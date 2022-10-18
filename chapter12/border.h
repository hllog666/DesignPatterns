#ifndef DESIGNPATTERNS_BORDER_H
#define DESIGNPATTERNS_BORDER_H

#include "display.h"

/**
 * Decorator:具有与Component角色相同的接口（API）。
 * 在Decorator角色内部保存了被装饰的对象Decorator角色
 */
class Border : public Display {
protected:
    explicit Border(Display *display) {
        display_ = display;
    }

protected:
    Display *display_;
};

#endif //DESIGNPATTERNS_BORDER_H

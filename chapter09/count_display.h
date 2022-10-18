#ifndef DESIGNPATTERNS_COUNT_DISPLAY_H
#define DESIGNPATTERNS_COUNT_DISPLAY_H

#include "display.h"

/**
 * RefineAbstraction：在Abstraction角色的基础上增加了新功能的角色
 */
class CountDisplay : public Display {
public:
    explicit CountDisplay(DisplayImpl *impl) : Display(impl) {}

    void MultiDisplay(int times) {
        Open();
        for (int i = 0; i < times; i++) {
            Print();
        }
        Close();
    }
};

#endif //DESIGNPATTERNS_COUNT_DISPLAY_H

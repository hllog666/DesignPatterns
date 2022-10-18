#ifndef DESIGNPATTERNS_CHAR_DISPLAY_H
#define DESIGNPATTERNS_CHAR_DISPLAY_H

#include "abstract_display.h"

/**
 * ConcreteClass:负责实现AbstractClass角色中定义的抽象方法
 */
class CharDisplay : public AbstractDisplay {
public:
    explicit CharDisplay(char ch);

    void Open() override;

    void Print() override;

    void Close() override;

private:
    char ch_;
};


#endif //DESIGNPATTERNS_CHAR_DISPLAY_H

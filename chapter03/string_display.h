#ifndef DESIGNPATTERNS_STRING_DISPLAY_H
#define DESIGNPATTERNS_STRING_DISPLAY_H

#include <string>
#include "abstract_display.h"

/**
 * ConcreteClass:负责实现AbstractClass角色中定义的抽象方法
 */
class StringDisplay : public AbstractDisplay {
public:
    explicit StringDisplay(std::string str);

    void Open() override;

    void Print() override;

    void Close() override;

private:
    void PrintLine() const;

private:
    std::string str_;
    int width_;
};


#endif //DESIGNPATTERNS_STRING_DISPLAY_H

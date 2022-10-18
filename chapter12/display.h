#ifndef DESIGNPATTERNS_DISPLAY_H
#define DESIGNPATTERNS_DISPLAY_H

#include <string>
#include <iostream>

/**
 * Component:增加功能时的核心角色。定义接口（API）
 */
class Display {
public:
    virtual int GetColumns() = 0;

    virtual int GetRows() = 0;

    virtual std::string GetRowText(int row) = 0;

    virtual void Show() final {
        for (int i = 0; i < GetRows(); i++) {
            std::cout << GetRowText(i) << std::endl;
        }
    }
};

#endif //DESIGNPATTERNS_DISPLAY_H

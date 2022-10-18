#ifndef DESIGNPATTERNS_DISPLAY_H
#define DESIGNPATTERNS_DISPLAY_H

#include "display_impl.h"

/**
 * Abstraction:该角色位于类的功能层次结构的最上层。
 * 它使用Implementor角色的方法定义了基本的功能。
 * 该角色中保存了Implementor角色的实例
 */
class Display {
public:
    explicit Display(DisplayImpl *impl) : impl_(impl) {}

    void Open() {
        impl_->RawOpen();
    }

    void Print() {
        impl_->RawPrint();
    }

    void Close() {
        impl_->RawClose();
    }

    void DisplaySomething() {
        Open();
        Print();
        Close();
    }

private:
    DisplayImpl *impl_;
};

#endif //DESIGNPATTERNS_DISPLAY_H

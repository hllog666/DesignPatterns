#ifndef DESIGNPATTERNS_ABSTRACT_DISPLAY_H
#define DESIGNPATTERNS_ABSTRACT_DISPLAY_H

/**
 * AbstractClass:负责实现模板方法和声明在模板方法中所使用到的抽象方法
 */
class AbstractDisplay {
public:
    virtual void Open() = 0;

    virtual void Print() = 0;

    virtual void Close() = 0;

    virtual void Display() final {
        Open();
        for (int i = 0; i < 5; ++i) {
            Print();
        }
        Close();
    }
};

#endif //DESIGNPATTERNS_ABSTRACT_DISPLAY_H

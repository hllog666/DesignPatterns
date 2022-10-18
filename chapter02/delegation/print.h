#ifndef DESIGNPATTERNS_PRINT_H
#define DESIGNPATTERNS_PRINT_H

/**
 * Target:负责定义所需的方法
 */
class Print {
public:
    virtual void PrintWeak() = 0;

    virtual void PrintStrong() = 0;
};

#endif //DESIGNPATTERNS_PRINT_H

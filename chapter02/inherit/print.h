#ifndef DESIGNPATTERNS_PRINT_H
#define DESIGNPATTERNS_PRINT_H

class Print {
public:
    virtual void PrintWeak() = 0;

    virtual void PrintStrong() = 0;
};

#endif //DESIGNPATTERNS_PRINT_H
